#include <dlfcn.h>
#include <nvml.h>
#include <stdlib.h>
#include <stdio.h>

#include "dupci_monitor.h"

#define dugCheck(result_t, success, format, getString, operation) \
    do {                                                          \
        result_t status = (operation);                            \
        if (status != success) {                                  \
            printf("NVML ERROR: %s (%d): %s\n", __FILE__, __LINE__, getString(status));                            \
        }                                                         \
    } while (0)

#define dugNvmlCheck(operation) dugCheck(nvmlReturn_t, NVML_SUCCESS, "%s", nvmlErrorString, operation)
// #define dugNvmlCheck(operation) operation

struct dugPCIMonitorContext {
    void *handle;
    nvmlReturn_t (*duNvmlInit_v2)(void);
    const char* (*duNvmlErrorString)(nvmlReturn_t);
    nvmlReturn_t (*duNvmlDeviceGetHandleByIndex_v2)(unsigned int, nvmlDevice_t*);
    nvmlReturn_t (*duNvmlDeviceGetPcieThroughput)(nvmlDevice_t, nvmlPcieUtilCounter_t, unsigned int*);
    nvmlReturn_t (*duNvmlDeviceGetName)(nvmlDevice_t, char*, unsigned int);
};

// returns bytes/s tx and rx over previous 20ms
static void pci_throughput_sample(struct dugPCIMonitorContext *ctx, int device, unsigned long* tx_bytes, unsigned long* rx_bytes) { 
    nvmlDevice_t dev_handle, dev_handle2;

    int *h_a;
    int *d_a;
    int N = 1000000000;

    h_a = (int*)malloc(N*sizeof(int));
    cudaMalloc(&d_a, N*sizeof(int));

    cudaMemcpy(d_a, h_a, N*sizeof(int), cudaMemcpyHostToDevice);
    cudaMemcpy(h_a, d_a, N*sizeof(int), cudaMemcpyDeviceToHost);

    // nvmlDeviceGetHandleByIndex_v2(device, &dev_handle);
    (*(ctx->duNvmlDeviceGetHandleByIndex_v2))(device, &dev_handle);

    char name[32];
    nvmlDeviceGetName(dev_handle, name, 32);
    printf("    (LD) Device name: %s\n", name);
    (*(ctx->duNvmlDeviceGetName))(dev_handle, name, 32);
    printf("(DLOPEN) Device name: %s\n\n", name);

    unsigned int tx, rx; // throughput in KB/s
    dugNvmlCheck(nvmlDeviceGetPcieThroughput(dev_handle, NVML_PCIE_UTIL_TX_BYTES, &tx));
    dugNvmlCheck(nvmlDeviceGetPcieThroughput(dev_handle, NVML_PCIE_UTIL_RX_BYTES, &rx));

    unsigned int tx_kb, rx_kb;
    dugNvmlCheck((*(ctx->duNvmlDeviceGetPcieThroughput))(dev_handle, NVML_PCIE_UTIL_TX_BYTES, &tx_kb));
    dugNvmlCheck((*(ctx->duNvmlDeviceGetPcieThroughput))(dev_handle, NVML_PCIE_UTIL_RX_BYTES, &rx_kb));

    printf("    (LD) PCIe TX throughput: %d KB/s\n", tx);
    printf("    (LD) PCIe RX throughput: %d KB/s\n", rx);

    printf("(DLOPEN) PCIe TX throughput: %d KB/s\n", tx_kb);
    printf("(DLOPEN) PCIe RX throughput: %d KB/s\n", rx_kb);

    *tx_bytes = tx_kb * 1024;
    *rx_bytes = rx_kb * 1024;
}

// estimates of total tx/rx pcie throughput by extrapolating with the actual elapsed time
void pci_throughput_estimate(struct dugPCIMonitorContext *ctx, int device, unsigned long *tx_bytes, unsigned long *rx_bytes, unsigned long time_us) {
	unsigned long tx_bytes_sample, rx_bytes_sample;
	
	pci_throughput_sample(ctx, device, &tx_bytes_sample, &rx_bytes_sample);

	*tx_bytes = (unsigned long)(tx_bytes_sample * ((float)time_us / 1000000.0));
	*rx_bytes = (unsigned long)(rx_bytes_sample * ((float)time_us / 1000000.0));
}

static void* getDLSymbol(void *handle, char *symbol) { 
    void *sym;
    char *error;
    int success = 0;
    sym = dlsym(handle, symbol);
    if ((error = dlerror()) != NULL)  {
        printf("%s\n", error);
    }
    return sym;
}

struct dugPCIMonitorContext* dugPCIMonitorContextInit() { 
    struct dugPCIMonitorContext *ctx = (struct dugPCIMonitorContext*)malloc(sizeof(struct dugPCIMonitorContext));

    if(!ctx)
        return NULL;

    ctx->handle = dlopen("libnvidia-ml.so", RTLD_LAZY);

    if (!ctx->handle) {
        printf("%s\n", dlerror());
        return NULL;
    } else { 
        if((*(void**) (&(ctx->duNvmlDeviceGetHandleByIndex_v2)) = getDLSymbol(ctx->handle, "nvmlDeviceGetHandleByIndex_v2")) == NULL) { 
            dlclose(ctx->handle);
            return NULL;
        }
        if((*(void**) (&(ctx->duNvmlDeviceGetPcieThroughput)) = getDLSymbol(ctx->handle, "nvmlDeviceGetPcieThroughput")) == NULL) {             
            dlclose(ctx->handle);
            return NULL;
        }
        if((*(void**) (&(ctx->duNvmlInit_v2)) = getDLSymbol(ctx->handle, "nvmlInit_v2")) == NULL) {             
            dlclose(ctx->handle);
            return NULL;
        }
        if((*(void**) (&(ctx->duNvmlDeviceGetName)) = getDLSymbol(ctx->handle, "nvmlDeviceGetName")) == NULL) {             
            dlclose(ctx->handle);
            return NULL;
        }
    }
    // initialise NVML
    (*(ctx->duNvmlInit_v2))();
    return ctx;
}

void dugPCIMonitorContextFini(struct dugPCIMonitorContext* ctx) { 
    if(!ctx)
        return;
    
    if(ctx->handle)
        dlclose(ctx->handle);
    
    free(ctx);
}

int main() {
    printf("Acquiring ctx\n");
    unsigned long tx_bytes, rx_bytes;

    struct dugPCIMonitorContext* ctx = dugPCIMonitorContextInit();

    if(!ctx) { 
        printf("Couldn't load PCIMonitorContext\n");
    } else {
        printf("Loaded PCIMonitorContext\n");
        pci_throughput_sample(ctx, 0, &tx_bytes, &rx_bytes);
        printf("  (MAIN) TX throughput: %ld B/s\n", tx_bytes);
        printf("  (MAIN) RX throughput: %ld B/s\n", rx_bytes);
    }
    dugPCIMonitorContextFini(ctx);

    return 0;
}
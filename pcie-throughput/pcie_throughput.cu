#include <stdio.h>
#include <cuda.h>
// #include <nvml.h>

int main() { 

    nvmlInit();

    nvmlDevice_t device;
    nvmlDeviceGetHandleByIndex(0, &device);

    char name[32];
    nvmlDeviceGetName(device, name, 32);
    printf("Device name: %s\n\n", name);


    unsigned int tx, rx; // throughput in KB/s
    nvmlDeviceGetPcieThroughput(0, NVML_PCIE_UTIL_TX_BYTES, &tx);
    nvmlDeviceGetPcieThroughput(0, NVML_PCIE_UTIL_RX_BYTES, &rx);

    printf("PCIe TX throughput: %d KB/s\n", tx);
    printf("PCIe RX throughput: %d KB/s\n", rx);

    printf("\n");

    printf("PCIe TX throughput: %f GB/s\n", float(tx) / (1024.0 * 1024.0));
    printf("PCIe RX throughput: %f GB/s\n", float(rx) / (1024.0 * 1024.0));


    return 0;
}
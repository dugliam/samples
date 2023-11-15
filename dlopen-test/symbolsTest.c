#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int haveDLSymbol(void *handle, char *symbol) { 
    void *sym;
    char *error;
    int success = 0;
    sym = dlsym(handle, symbol);
    if ((error = dlerror()) != NULL)  {
        printf("%s\n", error);
        success = 0;
    } else {
        success = 1;
    }
    return success;
}

int nvml_available() { 
    void* handle;
    char* error;
    int hasNVML = 0;
    // char* requiredSymbols[] = {"sin", "cos", "exp", "log"};
    char* requiredSymbols[] = {"sin", "cos", "exp", "log", "foo"};
    int nrSymbols = sizeof(requiredSymbols) / sizeof(requiredSymbols[0]);

    handle = dlopen("libm.so", RTLD_LAZY);
    if (!handle) {
        printf("%s\n", dlerror());
        hasNVML = 0;
    } else { 
        hasNVML = 1;
        for(int i = 0; i < nrSymbols; i++) {
            if(!haveDLSymbol(handle, requiredSymbols[i])) {
                hasNVML = 0;
                break;
            }
        }
        dlerror();    /* Clear any existing error */
        dlclose(handle);
    }

    return hasNVML;
}

int main() {
    if(nvml_available()) { 
        printf("AVAILABLE\n");
    } else {
        printf("NOT AVAILABLE\n");
    }
}
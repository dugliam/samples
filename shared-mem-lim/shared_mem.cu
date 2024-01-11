#include <iostream>


#define CHECK_CUDA_ERROR(val) check((val), #val, __FILE__, __LINE__)
void check(cudaError_t err, char const* const func, char const* const file,
           int const line)
{
    if (err != cudaSuccess)
    {
        std::cerr << "CUDA Runtime Error at: " << file << ":" << line
                  << std::endl;
        std::cerr << cudaGetErrorString(err) << " " << func << std::endl;
        std::exit(EXIT_FAILURE);
    }
}

__global__ void kernel() { 
    extern __shared__ int temp[];
    
    // int idx = blockIdx.x * blockDim.x + threadIdx.x;

    return;
}

#define CHECK_LAST_CUDA_ERROR() checkLast(__FILE__, __LINE__)
void checkLast(char const* const file, int const line)
{
    cudaError_t const err{cudaGetLastError()};
    if (err != cudaSuccess)
    {
        std::cerr << "CUDA Runtime Error at: " << file << ":" << line
                  << std::endl;
        std::cerr << cudaGetErrorString(err) << std::endl;
        std::exit(EXIT_FAILURE);
    }
}

int main() { 
    
    cudaDeviceProp prop;
    cudaGetDeviceProperties(&prop, 0); 

    // amount of shared memory on the CUDA device
    size_t shared_mem = prop.sharedMemPerMultiprocessor;

    printf("Device name: %s\n", prop.name);
    printf("Amount of shared mem: %lu kB\n", shared_mem);
    printf("Max optin shared mem: %lu kB\n", prop.sharedMemPerBlockOptin);

    // iterate 16 B at a time starting from 1 kB less than the max amount of shared memory
    for(int shared_req = shared_mem - 1024; shared_req < shared_mem; shared_req += 16) {

        printf("Shared mem requested: %lu kB\n", shared_req);

        // increase the amount of shared memory in the kernel to what we request
        CHECK_CUDA_ERROR(cudaFuncSetAttribute(kernel, cudaFuncAttributeMaxDynamicSharedMemorySize, shared_req));

        // run the kernel with the requested amount of shared memory
        kernel<<<1, 1, shared_req>>>();

        CHECK_LAST_CUDA_ERROR();
    } 

    printf("Amount of shared mem: %lu kB\n", shared_mem);
    return 0;
}

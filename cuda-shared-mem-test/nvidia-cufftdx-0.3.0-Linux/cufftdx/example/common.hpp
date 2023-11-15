#ifndef CUFFTDX_EXAMPLE_COMMON_HPP_
#define CUFFTDX_EXAMPLE_COMMON_HPP_

#include <cuda_runtime_api.h>

#ifndef CUDA_CHECK_AND_EXIT
#    define CUDA_CHECK_AND_EXIT(error)                                                                      \
        {                                                                                                   \
            auto status = static_cast<cudaError_t>(error);                                                  \
            if (status != cudaSuccess) {                                                                    \
                std::cout << cudaGetErrorString(status) << " " << __FILE__ << ":" << __LINE__ << std::endl; \
                std::exit(status);                                                                          \
            }                                                                                               \
        }
#endif // CUDA_CHECK_AND_EXIT

namespace example {
    inline unsigned int get_cuda_device_arch() {
        int device;
        CUDA_CHECK_AND_EXIT(cudaGetDevice(&device));

        cudaDeviceProp props;
        CUDA_CHECK_AND_EXIT(cudaGetDeviceProperties(&props, device));

        return static_cast<unsigned>(props.major) * 100 + static_cast<unsigned>(props.minor) * 10;
    }

    template<template<unsigned int> class Functor>
    inline int sm_runner() {
        // Get CUDA device compute capability
        const auto cuda_device_arch = get_cuda_device_arch();

        switch (cuda_device_arch) {
            // All SM supported by cuFFTDx
            case 600: Functor<600>()(); return 0;
            case 610: Functor<610>()(); return 0;
            case 620: Functor<620>()(); return 0;
            case 700: Functor<700>()(); return 0;
            case 750: Functor<750>()(); return 0;
            case 800: Functor<800>()(); return 0;
            default: {
                if (cuda_device_arch > 800) {
                    Functor<800>()();
                    return 0;
                } else {
                    return 1;
                }
            }
        }
        return 1;
    }
} // namespace example

#endif // CUFFTDX_EXAMPLE_COMMON_HPP_

// Copyright (c) 2020, NVIDIA CORPORATION.  All rights reserved.
//
// NVIDIA CORPORATION and its licensors retain all intellectual property
// and proprietary rights in and to this software, related documentation
// and any modifications thereto.  Any use, reproduction, disclosure or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA CORPORATION is strictly prohibited.

#ifndef CUFFTDX_DETAIL_SYSTEM_CHECKS_HPP
#define CUFFTDX_DETAIL_SYSTEM_CHECKS_HPP

#ifdef __CUDACC_RTC__

// NVRTC compilation checks
static_assert(__CUDACC_VER_MAJOR__ >= 11 && __CUDACC_VER_MINOR__ >= 0,
              "cuFFTDx requires CUDA Runtime 11.0 or newer to work with NVRTC");

#else
#    include <cuda.h>

// NVCC compilation

static_assert(CUDART_VERSION >= 10010, "cuFFTDx requires CUDA Runtime 10.1 Update 2 or newer");
static_assert(CUDA_VERSION >= 10010, "cuFFTDx requires CUDA Toolkit 10.1 Update 2 or newer");

// Test for GCC < 5
#    ifdef __GNUC__
#        if (__GNUC__ < 5)
#            error cuFFTDx requires GCC in version 5 or newer
#        endif
#    endif // __GNUC__

// No support for Visual Studio
#    ifdef _MSC_VER
#        error cuFFTDx doesnt support compilation with MSVC
#    endif // _MSC_VER
#endif // __CUDACC_RTC__

#endif // CUFFTDX_DETAIL_SYSTEM_CHECKS_HPP

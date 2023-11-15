// Copyright (c) 2019, NVIDIA CORPORATION.  All rights reserved.
//
// NVIDIA CORPORATION and its licensors retain all intellectual property
// and proprietary rights in and to this software, related documentation
// and any modifications thereto.  Any use, reproduction, disclosure or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA CORPORATION is strictly prohibited.

#ifndef CUFFTDX_DATABASE_DETAIL_THREAD_FFT_HPP
#define CUFFTDX_DATABASE_DETAIL_THREAD_FFT_HPP

#include "../../operators.hpp"

namespace cufftdx {
    namespace database {
        namespace detail {
            template<unsigned int Size, class ValueType /* Complex */, fft_direction Direction>
            __device__ void thread_fft(ValueType*);
        } // namespace detail
    }     // namespace database
} // namespace cufftdx

#endif // CUFFTDX_DATABASE_DETAIL_THREAD_FFT_HPP

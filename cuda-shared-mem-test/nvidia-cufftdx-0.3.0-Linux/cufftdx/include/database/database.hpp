// Copyright (c) 2019, NVIDIA CORPORATION.  All rights reserved.
//
// NVIDIA CORPORATION and its licensors retain all intellectual property
// and proprietary rights in and to this software, related documentation
// and any modifications thereto.  Any use, reproduction, disclosure or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA CORPORATION is strictly prohibited.

#ifndef CUFFTDX_DATABASE_DATABASE_HPP
#define CUFFTDX_DATABASE_DATABASE_HPP

#include "detail/thread_fft.hpp"
#include "detail/block_fft.hpp"

namespace cufftdx {
    namespace database {
        namespace detail {
            #include "lut_fp16.hpp.inc"
            #include "lut_fp32.hpp.inc"
            #include "lut_fp64.hpp.inc"

            #include "database_fp16_fwd.hpp.inc"
            #include "database_fp16_inv.hpp.inc"
            #include "database_fp32_fwd.hpp.inc"
            #include "database_fp32_inv.hpp.inc"
            #include "database_fp64_fwd.hpp.inc"
            #include "database_fp64_inv.hpp.inc"

            #include "definitions_fp16_fwd.hpp.inc"
            #include "definitions_fp16_inv.hpp.inc"
            #include "definitions_fp32_fwd.hpp.inc"
            #include "definitions_fp32_inv.hpp.inc"
            #include "definitions_fp64_fwd.hpp.inc"
            #include "definitions_fp64_inv.hpp.inc"
        } // namespace detail
    }     // namespace database
} // namespace cufftdx

#endif // CUFFTDX_DATABASE_DATABASE_HPP

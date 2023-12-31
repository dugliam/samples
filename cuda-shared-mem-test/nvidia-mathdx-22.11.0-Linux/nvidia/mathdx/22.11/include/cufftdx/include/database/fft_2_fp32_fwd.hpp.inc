//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_2_FP32_FWD_PTX_HPP
#define CUFFTDX_FFT_2_FP32_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<16, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<13>;
.reg .b64 rd<2>;
add.f32 %1, %5, %7;
add.f32 %0, %4, %6;
sub.f32 %3, %5, %7;
sub.f32 %2, %4, %6;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y): "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y));
};


#endif


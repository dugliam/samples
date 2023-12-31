//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_3_FP32_INV_PTX_HPP
#define CUFFTDX_FFT_3_FP32_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<319, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<29>;
.reg .b64 rd<2>;
add.f32 f13, %8, %11;
add.f32 f14, %10, %12;
mul.f32 f15, f13, 0f3F000000;
sub.f32 f16, %6, f15;
sub.f32 f17, %10, %12;
mul.f32 f18, f17, 0fBF5DB3D7;
mul.f32 f19, f14, 0f3F000000;
sub.f32 f20, %7, f19;
sub.f32 f21, %8, %11;
mul.f32 f22, f21, 0fBF5DB3D7;
add.f32 %1, %7, f14;
add.f32 %0, %6, f13;
sub.f32 %3, f20, f22;
add.f32 %2, f18, f16;
add.f32 %5, f22, f20;
sub.f32 %4, f16, f18;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y): "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y));
};


#endif


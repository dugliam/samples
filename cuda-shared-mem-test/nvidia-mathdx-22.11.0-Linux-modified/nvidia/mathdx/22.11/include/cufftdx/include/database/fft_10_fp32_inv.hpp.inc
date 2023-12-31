//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_10_FP32_INV_PTX_HPP
#define CUFFTDX_FFT_10_FP32_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<392, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<165>;
.reg .b64 rd<2>;
add.f32 f41, %25, %41;
add.f32 f42, %20, f41;
add.f32 f43, %30, %36;
add.f32 f44, f43, f42;
add.f32 f45, %27, %43;
add.f32 f46, %21, f45;
add.f32 f47, %32, %37;
add.f32 f48, f47, f46;
fma.rn.f32 f49, f41, 0f3E9E377A, %20;
mul.f32 f50, f43, 0f3F4F1BBD;
sub.f32 f51, f49, f50;
sub.f32 f52, %27, %43;
mul.f32 f53, f52, 0f3F737871;
sub.f32 f54, %32, %37;
fma.rn.f32 f55, f54, 0f3F167918, f53;
sub.f32 f56, f51, f55;
add.f32 f57, f55, f51;
mul.f32 f58, f41, 0f3F4F1BBD;
sub.f32 f59, %20, f58;
fma.rn.f32 f60, f43, 0f3E9E377A, f59;
mul.f32 f61, f52, 0f3F167918;
mul.f32 f62, f54, 0f3F737871;
sub.f32 f63, f61, f62;
sub.f32 f64, f60, f63;
add.f32 f65, f63, f60;
fma.rn.f32 f66, f45, 0f3E9E377A, %21;
mul.f32 f67, f47, 0f3F4F1BBD;
sub.f32 f68, f66, f67;
sub.f32 f69, %25, %41;
mul.f32 f70, f69, 0f3F737871;
sub.f32 f71, %30, %36;
fma.rn.f32 f72, f71, 0f3F167918, f70;
add.f32 f73, f72, f68;
sub.f32 f74, f68, f72;
mul.f32 f75, f45, 0f3F4F1BBD;
sub.f32 f76, %21, f75;
fma.rn.f32 f77, f47, 0f3E9E377A, f76;
mul.f32 f78, f69, 0f3F167918;
mul.f32 f79, f71, 0f3F737871;
sub.f32 f80, f78, f79;
add.f32 f81, f80, f77;
sub.f32 f82, f77, f80;
add.f32 f83, %28, %44;
add.f32 f84, %22, f83;
add.f32 f85, %33, %38;
add.f32 f86, f85, f84;
add.f32 f87, %29, %45;
add.f32 f88, %24, f87;
add.f32 f89, %35, %40;
add.f32 f90, f89, f88;
fma.rn.f32 f91, f83, 0f3E9E377A, %22;
mul.f32 f92, f85, 0f3F4F1BBD;
sub.f32 f93, f91, f92;
sub.f32 f94, %29, %45;
mul.f32 f95, f94, 0f3F737871;
sub.f32 f96, %35, %40;
fma.rn.f32 f97, f96, 0f3F167918, f95;
sub.f32 f98, f93, f97;
add.f32 f99, f97, f93;
mul.f32 f100, f83, 0f3F4F1BBD;
sub.f32 f101, %22, f100;
fma.rn.f32 f102, f85, 0f3E9E377A, f101;
mul.f32 f103, f94, 0f3F167918;
mul.f32 f104, f96, 0f3F737871;
sub.f32 f105, f103, f104;
sub.f32 f106, f102, f105;
add.f32 f107, f105, f102;
fma.rn.f32 f108, f87, 0f3E9E377A, %24;
mul.f32 f109, f89, 0f3F4F1BBD;
sub.f32 f110, f108, f109;
sub.f32 f111, %28, %44;
mul.f32 f112, f111, 0f3F737871;
sub.f32 f113, %33, %38;
fma.rn.f32 f114, f113, 0f3F167918, f112;
add.f32 f115, f114, f110;
sub.f32 f116, f110, f114;
mul.f32 f117, f87, 0f3F4F1BBD;
sub.f32 f118, %24, f117;
fma.rn.f32 f119, f89, 0f3E9E377A, f118;
mul.f32 f120, f111, 0f3F167918;
mul.f32 f121, f113, 0f3F737871;
sub.f32 f122, f120, f121;
add.f32 f123, f122, f119;
sub.f32 f124, f119, f122;
mul.f32 f125, f98, 0f3F4F1BBD;
mul.f32 f126, f115, 0f3F167918;
sub.f32 f127, f125, f126;
mul.f32 f128, f115, 0f3F4F1BBD;
fma.rn.f32 f129, f98, 0f3F167918, f128;
mul.f32 f130, f106, 0f3E9E377A;
mul.f32 f131, f123, 0f3F737871;
sub.f32 f132, f130, f131;
mul.f32 f133, f123, 0f3E9E377A;
fma.rn.f32 f134, f106, 0f3F737871, f133;
mul.f32 f135, f107, 0fBE9E377A;
mul.f32 f136, f124, 0f3F737871;
sub.f32 f137, f135, f136;
mul.f32 f138, f124, 0fBE9E377A;
fma.rn.f32 f139, f107, 0f3F737871, f138;
mul.f32 f140, f99, 0fBF4F1BBD;
mul.f32 f141, f116, 0f3F167918;
sub.f32 f142, f140, f141;
mul.f32 f143, f116, 0fBF4F1BBD;
fma.rn.f32 f144, f99, 0f3F167918, f143;
add.f32 %1, f48, f90;
add.f32 %0, f44, f86;
add.f32 %3, f73, f129;
add.f32 %2, f56, f127;
add.f32 %5, f81, f134;
add.f32 %4, f64, f132;
add.f32 %7, f82, f139;
add.f32 %6, f65, f137;
add.f32 %9, f74, f144;
add.f32 %8, f57, f142;
sub.f32 %11, f48, f90;
sub.f32 %10, f44, f86;
sub.f32 %13, f73, f129;
sub.f32 %12, f56, f127;
sub.f32 %15, f81, f134;
sub.f32 %14, f64, f132;
sub.f32 %17, f82, f139;
sub.f32 %16, f65, f137;
sub.f32 %19, f74, f144;
sub.f32 %18, f57, f142;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y), "=f"(rmem[7].x), "=f"(rmem[7].y), "=f"(rmem[8].x), "=f"(rmem[8].y), "=f"(rmem[9].x), "=f"(rmem[9].y): "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y), "f"(rmem[7].x), "f"(rmem[7].y), "f"(rmem[7].y), "f"(rmem[8].x), "f"(rmem[8].y), "f"(rmem[8].y), "f"(rmem[9].x), "f"(rmem[9].y));
};


#endif


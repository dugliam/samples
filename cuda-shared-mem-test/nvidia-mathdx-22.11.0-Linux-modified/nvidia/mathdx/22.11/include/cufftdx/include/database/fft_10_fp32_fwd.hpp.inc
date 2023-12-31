//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_10_FP32_FWD_PTX_HPP
#define CUFFTDX_FFT_10_FP32_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<190, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<169>;
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
mul.f32 f55, f54, 0fBF167918;
sub.f32 f56, f55, f53;
sub.f32 f57, f51, f56;
add.f32 f58, f56, f51;
mul.f32 f59, f41, 0f3F4F1BBD;
sub.f32 f60, %20, f59;
fma.rn.f32 f61, f43, 0f3E9E377A, f60;
mul.f32 f62, f52, 0f3F167918;
mul.f32 f63, f54, 0f3F737871;
sub.f32 f64, f63, f62;
sub.f32 f65, f61, f64;
add.f32 f66, f64, f61;
fma.rn.f32 f67, f45, 0f3E9E377A, %21;
mul.f32 f68, f47, 0f3F4F1BBD;
sub.f32 f69, f67, f68;
sub.f32 f70, %25, %41;
mul.f32 f71, f70, 0f3F737871;
sub.f32 f72, %30, %36;
mul.f32 f73, f72, 0fBF167918;
sub.f32 f74, f73, f71;
add.f32 f75, f74, f69;
sub.f32 f76, f69, f74;
mul.f32 f77, f45, 0f3F4F1BBD;
sub.f32 f78, %21, f77;
fma.rn.f32 f79, f47, 0f3E9E377A, f78;
mul.f32 f80, f70, 0f3F167918;
mul.f32 f81, f72, 0f3F737871;
sub.f32 f82, f81, f80;
add.f32 f83, f82, f79;
sub.f32 f84, f79, f82;
add.f32 f85, %28, %44;
add.f32 f86, %22, f85;
add.f32 f87, %33, %38;
add.f32 f88, f87, f86;
add.f32 f89, %29, %45;
add.f32 f90, %24, f89;
add.f32 f91, %35, %40;
add.f32 f92, f91, f90;
fma.rn.f32 f93, f85, 0f3E9E377A, %22;
mul.f32 f94, f87, 0f3F4F1BBD;
sub.f32 f95, f93, f94;
sub.f32 f96, %29, %45;
mul.f32 f97, f96, 0f3F737871;
sub.f32 f98, %35, %40;
mul.f32 f99, f98, 0fBF167918;
sub.f32 f100, f99, f97;
sub.f32 f101, f95, f100;
add.f32 f102, f100, f95;
mul.f32 f103, f85, 0f3F4F1BBD;
sub.f32 f104, %22, f103;
fma.rn.f32 f105, f87, 0f3E9E377A, f104;
mul.f32 f106, f96, 0f3F167918;
mul.f32 f107, f98, 0f3F737871;
sub.f32 f108, f107, f106;
sub.f32 f109, f105, f108;
add.f32 f110, f108, f105;
fma.rn.f32 f111, f89, 0f3E9E377A, %24;
mul.f32 f112, f91, 0f3F4F1BBD;
sub.f32 f113, f111, f112;
sub.f32 f114, %28, %44;
mul.f32 f115, f114, 0f3F737871;
sub.f32 f116, %33, %38;
mul.f32 f117, f116, 0fBF167918;
sub.f32 f118, f117, f115;
add.f32 f119, f118, f113;
sub.f32 f120, f113, f118;
mul.f32 f121, f89, 0f3F4F1BBD;
sub.f32 f122, %24, f121;
fma.rn.f32 f123, f91, 0f3E9E377A, f122;
mul.f32 f124, f114, 0f3F167918;
mul.f32 f125, f116, 0f3F737871;
sub.f32 f126, f125, f124;
add.f32 f127, f126, f123;
sub.f32 f128, f123, f126;
mul.f32 f129, f101, 0f3F4F1BBD;
mul.f32 f130, f119, 0fBF167918;
sub.f32 f131, f129, f130;
mul.f32 f132, f119, 0f3F4F1BBD;
fma.rn.f32 f133, f101, 0fBF167918, f132;
mul.f32 f134, f109, 0f3E9E377A;
mul.f32 f135, f127, 0fBF737871;
sub.f32 f136, f134, f135;
mul.f32 f137, f127, 0f3E9E377A;
fma.rn.f32 f138, f109, 0fBF737871, f137;
mul.f32 f139, f110, 0fBE9E377A;
mul.f32 f140, f128, 0fBF737871;
sub.f32 f141, f139, f140;
mul.f32 f142, f128, 0fBE9E377A;
fma.rn.f32 f143, f110, 0fBF737871, f142;
mul.f32 f144, f102, 0fBF4F1BBD;
mul.f32 f145, f120, 0fBF167918;
sub.f32 f146, f144, f145;
mul.f32 f147, f120, 0fBF4F1BBD;
fma.rn.f32 f148, f102, 0fBF167918, f147;
add.f32 %1, f48, f92;
add.f32 %0, f44, f88;
add.f32 %3, f75, f133;
add.f32 %2, f57, f131;
add.f32 %5, f83, f138;
add.f32 %4, f65, f136;
add.f32 %7, f84, f143;
add.f32 %6, f66, f141;
add.f32 %9, f76, f148;
add.f32 %8, f58, f146;
sub.f32 %11, f48, f92;
sub.f32 %10, f44, f88;
sub.f32 %13, f75, f133;
sub.f32 %12, f57, f131;
sub.f32 %15, f83, f138;
sub.f32 %14, f65, f136;
sub.f32 %17, f84, f143;
sub.f32 %16, f66, f141;
sub.f32 %19, f76, f148;
sub.f32 %18, f58, f146;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y), "=f"(rmem[7].x), "=f"(rmem[7].y), "=f"(rmem[8].x), "=f"(rmem[8].y), "=f"(rmem[9].x), "=f"(rmem[9].y): "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y), "f"(rmem[7].x), "f"(rmem[7].y), "f"(rmem[7].y), "f"(rmem[8].x), "f"(rmem[8].y), "f"(rmem[8].y), "f"(rmem[9].x), "f"(rmem[9].y));
};


#endif


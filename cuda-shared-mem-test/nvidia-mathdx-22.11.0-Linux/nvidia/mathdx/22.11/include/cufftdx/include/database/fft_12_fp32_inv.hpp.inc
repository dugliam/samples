//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_12_FP32_INV_PTX_HPP
#define CUFFTDX_FFT_12_FP32_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<399, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<201>;
.reg .b64 rd<2>;
add.f32 f49, %34, %45;
add.f32 f50, %24, f49;
add.f32 f51, %36, %47;
add.f32 f52, %25, f51;
mul.f32 f53, f49, 0f3F000000;
sub.f32 f54, %24, f53;
sub.f32 f55, %36, %47;
mul.f32 f56, f55, 0fBF5DB3D7;
add.f32 f57, f56, f54;
sub.f32 f58, f54, f56;
mul.f32 f59, f51, 0f3F000000;
sub.f32 f60, %25, f59;
sub.f32 f61, %34, %45;
mul.f32 f62, f61, 0fBF5DB3D7;
sub.f32 f63, f60, f62;
add.f32 f64, f62, f60;
add.f32 f65, %40, %50;
add.f32 f66, %29, f65;
add.f32 f67, %41, %52;
add.f32 f68, %31, f67;
mul.f32 f69, f65, 0f3F000000;
sub.f32 f70, %29, f69;
sub.f32 f71, %41, %52;
mul.f32 f72, f71, 0fBF5DB3D7;
add.f32 f73, f72, f70;
sub.f32 f74, f70, f72;
mul.f32 f75, f67, 0f3F000000;
sub.f32 f76, %31, f75;
sub.f32 f77, %40, %50;
mul.f32 f78, f77, 0fBF5DB3D7;
sub.f32 f79, f76, f78;
add.f32 f80, f78, f76;
mul.f32 f81, f73, 0f3F000000;
mul.f32 f82, f79, 0f3F5DB3D7;
sub.f32 f83, f81, f82;
mul.f32 f84, f79, 0f3F000000;
fma.rn.f32 f85, f73, 0f3F5DB3D7, f84;
mul.f32 f86, f74, 0fBF000000;
mul.f32 f87, f80, 0f3F5DB3D7;
sub.f32 f88, f86, f87;
mul.f32 f89, f80, 0fBF000000;
fma.rn.f32 f90, f74, 0f3F5DB3D7, f89;
add.f32 f91, f50, f66;
add.f32 f92, f52, f68;
sub.f32 f93, f50, f66;
sub.f32 f94, f52, f68;
add.f32 f95, f57, f83;
add.f32 f96, f63, f85;
sub.f32 f97, f57, f83;
sub.f32 f98, f63, f85;
add.f32 f99, f58, f88;
add.f32 f100, f64, f90;
sub.f32 f101, f58, f88;
sub.f32 f102, f64, f90;
add.f32 f103, %37, %48;
add.f32 f104, %26, f103;
add.f32 f105, %39, %49;
add.f32 f106, %28, f105;
mul.f32 f107, f103, 0f3F000000;
sub.f32 f108, %26, f107;
sub.f32 f109, %39, %49;
mul.f32 f110, f109, 0fBF5DB3D7;
add.f32 f111, f110, f108;
sub.f32 f112, f108, f110;
mul.f32 f113, f105, 0f3F000000;
sub.f32 f114, %28, f113;
sub.f32 f115, %37, %48;
mul.f32 f116, f115, 0fBF5DB3D7;
sub.f32 f117, f114, f116;
add.f32 f118, f116, f114;
add.f32 f119, %42, %53;
add.f32 f120, %32, f119;
add.f32 f121, %44, %54;
add.f32 f122, %33, f121;
mul.f32 f123, f119, 0f3F000000;
sub.f32 f124, %32, f123;
sub.f32 f125, %44, %54;
mul.f32 f126, f125, 0fBF5DB3D7;
add.f32 f127, f126, f124;
sub.f32 f128, f124, f126;
mul.f32 f129, f121, 0f3F000000;
sub.f32 f130, %33, f129;
sub.f32 f131, %42, %53;
mul.f32 f132, f131, 0fBF5DB3D7;
sub.f32 f133, f130, f132;
add.f32 f134, f132, f130;
mul.f32 f135, f127, 0f3F000000;
mul.f32 f136, f133, 0f3F5DB3D7;
sub.f32 f137, f135, f136;
mul.f32 f138, f133, 0f3F000000;
fma.rn.f32 f139, f127, 0f3F5DB3D7, f138;
mul.f32 f140, f128, 0fBF000000;
mul.f32 f141, f134, 0f3F5DB3D7;
sub.f32 f142, f140, f141;
mul.f32 f143, f134, 0fBF000000;
fma.rn.f32 f144, f128, 0f3F5DB3D7, f143;
add.f32 f145, f104, f120;
add.f32 f146, f106, f122;
sub.f32 f147, f104, f120;
sub.f32 f148, f106, f122;
add.f32 f149, f111, f137;
add.f32 f150, f117, f139;
sub.f32 f151, f111, f137;
sub.f32 f152, f117, f139;
add.f32 f153, f112, f142;
add.f32 f154, f118, f144;
sub.f32 f155, f112, f142;
sub.f32 f156, f118, f144;
mul.f32 f157, f149, 0f3F5DB3D7;
mul.f32 f158, f150, 0f3F000000;
sub.f32 f159, f157, f158;
mul.f32 f160, f150, 0f3F5DB3D7;
fma.rn.f32 f161, f149, 0f3F000000, f160;
mul.f32 f162, f153, 0f3F000000;
mul.f32 f163, f154, 0f3F5DB3D7;
sub.f32 f164, f162, f163;
mul.f32 f165, f154, 0f3F000000;
fma.rn.f32 f166, f153, 0f3F5DB3D7, f165;
mul.f32 f167, f151, 0fBF000000;
mul.f32 f168, f152, 0f3F5DB3D7;
sub.f32 f169, f167, f168;
mul.f32 f170, f152, 0fBF000000;
fma.rn.f32 f171, f151, 0f3F5DB3D7, f170;
mul.f32 f172, f155, 0fBF5DB3D7;
mul.f32 f173, f156, 0f3F000000;
sub.f32 f174, f172, f173;
mul.f32 f175, f156, 0fBF5DB3D7;
fma.rn.f32 f176, f155, 0f3F000000, f175;
add.f32 %1, f92, f146;
add.f32 %0, f91, f145;
add.f32 %3, f96, f161;
add.f32 %2, f95, f159;
add.f32 %5, f100, f166;
add.f32 %4, f99, f164;
add.f32 %7, f94, f147;
sub.f32 %6, f93, f148;
add.f32 %9, f98, f171;
add.f32 %8, f97, f169;
add.f32 %11, f102, f176;
add.f32 %10, f101, f174;
sub.f32 %13, f92, f146;
sub.f32 %12, f91, f145;
sub.f32 %15, f96, f161;
sub.f32 %14, f95, f159;
sub.f32 %17, f100, f166;
sub.f32 %16, f99, f164;
sub.f32 %19, f94, f147;
add.f32 %18, f93, f148;
sub.f32 %21, f98, f171;
sub.f32 %20, f97, f169;
sub.f32 %23, f102, f176;
sub.f32 %22, f101, f174;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y), "=f"(rmem[7].x), "=f"(rmem[7].y), "=f"(rmem[8].x), "=f"(rmem[8].y), "=f"(rmem[9].x), "=f"(rmem[9].y), "=f"(rmem[10].x), "=f"(rmem[10].y), "=f"(rmem[11].x), "=f"(rmem[11].y): "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y), "f"(rmem[7].x), "f"(rmem[7].y), "f"(rmem[7].y), "f"(rmem[8].x), "f"(rmem[8].y), "f"(rmem[8].y), "f"(rmem[9].x), "f"(rmem[9].y), "f"(rmem[10].x), "f"(rmem[10].y), "f"(rmem[10].y), "f"(rmem[11].x), "f"(rmem[11].y));
};


#endif


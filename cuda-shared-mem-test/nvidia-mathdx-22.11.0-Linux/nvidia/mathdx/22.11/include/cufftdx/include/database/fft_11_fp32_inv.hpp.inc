//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_11_FP32_INV_PTX_HPP
#define CUFFTDX_FFT_11_FP32_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<380, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<195>;
.reg .b64 rd<2>;
add.f32 f45, %24, %48;
add.f32 f46, %26, %49;
sub.f32 f47, %24, %48;
sub.f32 f48, %26, %49;
add.f32 f49, %27, %46;
add.f32 f50, %29, %47;
sub.f32 f51, %27, %46;
sub.f32 f52, %29, %47;
add.f32 f53, %30, %43;
add.f32 f54, %31, %45;
sub.f32 f55, %30, %43;
sub.f32 f56, %31, %45;
add.f32 f57, %32, %40;
add.f32 f58, %34, %42;
sub.f32 f59, %32, %40;
sub.f32 f60, %34, %42;
add.f32 f61, %35, %38;
add.f32 f62, %37, %39;
sub.f32 f63, %35, %38;
sub.f32 f64, %37, %39;
add.f32 f65, %22, f45;
add.f32 f66, %23, f46;
add.f32 f67, f65, f49;
add.f32 f68, f66, f50;
add.f32 f69, f67, f53;
add.f32 f70, f68, f54;
add.f32 f71, f69, f57;
add.f32 f72, f70, f58;
fma.rn.f32 f73, f45, 0f3F575C64, %22;
fma.rn.f32 f74, f48, 0f3F0A6770, 0f00000000;
fma.rn.f32 f75, f46, 0f3F575C64, %23;
fma.rn.f32 f76, f47, 0f3F0A6770, 0f00000000;
fma.rn.f32 f77, f49, 0f3ED4B147, f73;
fma.rn.f32 f78, f52, 0f3F68DDA4, f74;
fma.rn.f32 f79, f50, 0f3ED4B147, f75;
fma.rn.f32 f80, f51, 0f3F68DDA4, f76;
fma.rn.f32 f81, f53, 0fBE11BAFB, f77;
fma.rn.f32 f82, f56, 0f3F7D64F0, f78;
fma.rn.f32 f83, f54, 0fBE11BAFB, f79;
fma.rn.f32 f84, f55, 0f3F7D64F0, f80;
fma.rn.f32 f85, f57, 0fBF27A4F4, f81;
fma.rn.f32 f86, f60, 0f3F4178CE, f82;
fma.rn.f32 f87, f58, 0fBF27A4F4, f83;
fma.rn.f32 f88, f59, 0f3F4178CE, f84;
fma.rn.f32 f89, f61, 0fBF75A155, f85;
fma.rn.f32 f90, f64, 0f3E903F40, f86;
fma.rn.f32 f91, f62, 0fBF75A155, f87;
fma.rn.f32 f92, f63, 0f3E903F40, f88;
fma.rn.f32 f93, f45, 0f3ED4B147, %22;
fma.rn.f32 f94, f48, 0f3F68DDA4, 0f00000000;
fma.rn.f32 f95, f46, 0f3ED4B147, %23;
fma.rn.f32 f96, f47, 0f3F68DDA4, 0f00000000;
fma.rn.f32 f97, f49, 0fBF27A4F4, f93;
fma.rn.f32 f98, f52, 0f3F4178CE, f94;
fma.rn.f32 f99, f50, 0fBF27A4F4, f95;
fma.rn.f32 f100, f51, 0f3F4178CE, f96;
fma.rn.f32 f101, f53, 0fBF75A155, f97;
fma.rn.f32 f102, f56, 0fBE903F40, f98;
fma.rn.f32 f103, f54, 0fBF75A155, f99;
fma.rn.f32 f104, f55, 0fBE903F40, f100;
fma.rn.f32 f105, f57, 0fBE11BAFB, f101;
fma.rn.f32 f106, f60, 0fBF7D64F0, f102;
fma.rn.f32 f107, f58, 0fBE11BAFB, f103;
fma.rn.f32 f108, f59, 0fBF7D64F0, f104;
fma.rn.f32 f109, f61, 0f3F575C64, f105;
fma.rn.f32 f110, f64, 0fBF0A6770, f106;
fma.rn.f32 f111, f62, 0f3F575C64, f107;
fma.rn.f32 f112, f63, 0fBF0A6770, f108;
fma.rn.f32 f113, f45, 0fBE11BAFB, %22;
fma.rn.f32 f114, f48, 0f3F7D64F0, 0f00000000;
fma.rn.f32 f115, f46, 0fBE11BAFB, %23;
fma.rn.f32 f116, f47, 0f3F7D64F0, 0f00000000;
fma.rn.f32 f117, f49, 0fBF75A155, f113;
fma.rn.f32 f118, f52, 0fBE903F40, f114;
fma.rn.f32 f119, f50, 0fBF75A155, f115;
fma.rn.f32 f120, f51, 0fBE903F40, f116;
fma.rn.f32 f121, f53, 0f3ED4B147, f117;
fma.rn.f32 f122, f56, 0fBF68DDA4, f118;
fma.rn.f32 f123, f54, 0f3ED4B147, f119;
fma.rn.f32 f124, f55, 0fBF68DDA4, f120;
fma.rn.f32 f125, f57, 0f3F575C64, f121;
fma.rn.f32 f126, f60, 0f3F0A6770, f122;
fma.rn.f32 f127, f58, 0f3F575C64, f123;
fma.rn.f32 f128, f59, 0f3F0A6770, f124;
fma.rn.f32 f129, f61, 0fBF27A4F4, f125;
fma.rn.f32 f130, f64, 0f3F4178CE, f126;
fma.rn.f32 f131, f62, 0fBF27A4F4, f127;
fma.rn.f32 f132, f63, 0f3F4178CE, f128;
fma.rn.f32 f133, f45, 0fBF27A4F4, %22;
fma.rn.f32 f134, f48, 0f3F4178CE, 0f00000000;
fma.rn.f32 f135, f46, 0fBF27A4F4, %23;
fma.rn.f32 f136, f47, 0f3F4178CE, 0f00000000;
fma.rn.f32 f137, f49, 0fBE11BAFB, f133;
fma.rn.f32 f138, f52, 0fBF7D64F0, f134;
fma.rn.f32 f139, f50, 0fBE11BAFB, f135;
fma.rn.f32 f140, f51, 0fBF7D64F0, f136;
fma.rn.f32 f141, f53, 0f3F575C64, f137;
fma.rn.f32 f142, f56, 0f3F0A6770, f138;
fma.rn.f32 f143, f54, 0f3F575C64, f139;
fma.rn.f32 f144, f55, 0f3F0A6770, f140;
fma.rn.f32 f145, f57, 0fBF75A155, f141;
fma.rn.f32 f146, f60, 0f3E903F40, f142;
fma.rn.f32 f147, f58, 0fBF75A155, f143;
fma.rn.f32 f148, f59, 0f3E903F40, f144;
fma.rn.f32 f149, f61, 0f3ED4B147, f145;
fma.rn.f32 f150, f64, 0fBF68DDA4, f146;
fma.rn.f32 f151, f62, 0f3ED4B147, f147;
fma.rn.f32 f152, f63, 0fBF68DDA4, f148;
fma.rn.f32 f153, f45, 0fBF75A155, %22;
fma.rn.f32 f154, f48, 0f3E903F40, 0f00000000;
fma.rn.f32 f155, f46, 0fBF75A155, %23;
fma.rn.f32 f156, f47, 0f3E903F40, 0f00000000;
fma.rn.f32 f157, f49, 0f3F575C64, f153;
fma.rn.f32 f158, f52, 0fBF0A6770, f154;
fma.rn.f32 f159, f50, 0f3F575C64, f155;
fma.rn.f32 f160, f51, 0fBF0A6770, f156;
fma.rn.f32 f161, f53, 0fBF27A4F4, f157;
fma.rn.f32 f162, f56, 0f3F4178CE, f158;
fma.rn.f32 f163, f54, 0fBF27A4F4, f159;
fma.rn.f32 f164, f55, 0f3F4178CE, f160;
fma.rn.f32 f165, f57, 0f3ED4B147, f161;
fma.rn.f32 f166, f60, 0fBF68DDA4, f162;
fma.rn.f32 f167, f58, 0f3ED4B147, f163;
fma.rn.f32 f168, f59, 0fBF68DDA4, f164;
fma.rn.f32 f169, f61, 0fBE11BAFB, f165;
fma.rn.f32 f170, f64, 0f3F7D64F0, f166;
fma.rn.f32 f171, f62, 0fBE11BAFB, f167;
fma.rn.f32 f172, f63, 0f3F7D64F0, f168;
add.f32 %1, f72, f62;
add.f32 %0, f71, f61;
add.f32 %3, f91, f92;
sub.f32 %2, f89, f90;
add.f32 %5, f111, f112;
sub.f32 %4, f109, f110;
add.f32 %7, f131, f132;
sub.f32 %6, f129, f130;
add.f32 %9, f151, f152;
sub.f32 %8, f149, f150;
add.f32 %11, f171, f172;
sub.f32 %10, f169, f170;
sub.f32 %13, f171, f172;
add.f32 %12, f169, f170;
sub.f32 %15, f151, f152;
add.f32 %14, f149, f150;
sub.f32 %17, f131, f132;
add.f32 %16, f129, f130;
sub.f32 %19, f111, f112;
add.f32 %18, f109, f110;
sub.f32 %21, f91, f92;
add.f32 %20, f89, f90;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y), "=f"(rmem[7].x), "=f"(rmem[7].y), "=f"(rmem[8].x), "=f"(rmem[8].y), "=f"(rmem[9].x), "=f"(rmem[9].y), "=f"(rmem[10].x), "=f"(rmem[10].y): "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y), "f"(rmem[7].x), "f"(rmem[7].y), "f"(rmem[7].y), "f"(rmem[8].x), "f"(rmem[8].y), "f"(rmem[8].y), "f"(rmem[9].x), "f"(rmem[9].y), "f"(rmem[10].x), "f"(rmem[10].y));
};


#endif


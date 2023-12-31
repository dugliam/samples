//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_14_FP32_INV_PTX_HPP
#define CUFFTDX_FFT_14_FP32_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<203, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<283>;
.reg .b64 rd<2>;
add.f32 f57, %33, %60;
add.f32 f58, %28, f57;
add.f32 f59, %38, %54;
add.f32 f60, f59, f58;
add.f32 f61, %44, %49;
add.f32 f62, f61, f60;
add.f32 f63, %35, %61;
add.f32 f64, %29, f63;
add.f32 f65, %40, %56;
add.f32 f66, f65, f64;
add.f32 f67, %45, %51;
add.f32 f68, f67, f66;
fma.rn.f32 f69, f57, 0f3F1F9D07, %28;
mul.f32 f70, f59, 0f3E63DC87;
sub.f32 f71, f69, f70;
mul.f32 f72, f61, 0f3F66A5E5;
sub.f32 f73, f71, f72;
sub.f32 f74, %35, %61;
mul.f32 f75, f74, 0f3F48261C;
sub.f32 f76, %40, %56;
fma.rn.f32 f77, f76, 0f3F7994E0, f75;
sub.f32 f78, %45, %51;
fma.rn.f32 f79, f78, 0f3EDE2602, f77;
sub.f32 f80, f73, f79;
add.f32 f81, f79, f73;
mul.f32 f82, f57, 0f3E63DC87;
sub.f32 f83, %28, f82;
mul.f32 f84, f59, 0f3F66A5E5;
sub.f32 f85, f83, f84;
fma.rn.f32 f86, f61, 0f3F1F9D07, f85;
mul.f32 f87, f74, 0f3F7994E0;
mul.f32 f88, f76, 0f3EDE2602;
sub.f32 f89, f87, f88;
mul.f32 f90, f78, 0f3F48261C;
sub.f32 f91, f89, f90;
sub.f32 f92, f86, f91;
add.f32 f93, f91, f86;
mul.f32 f94, f57, 0f3F66A5E5;
sub.f32 f95, %28, f94;
fma.rn.f32 f96, f59, 0f3F1F9D07, f95;
mul.f32 f97, f61, 0f3E63DC87;
sub.f32 f98, f96, f97;
mul.f32 f99, f74, 0f3EDE2602;
mul.f32 f100, f76, 0f3F48261C;
sub.f32 f101, f99, f100;
fma.rn.f32 f102, f78, 0f3F7994E0, f101;
sub.f32 f103, f98, f102;
add.f32 f104, f102, f98;
fma.rn.f32 f105, f63, 0f3F1F9D07, %29;
mul.f32 f106, f65, 0f3E63DC87;
sub.f32 f107, f105, f106;
mul.f32 f108, f67, 0f3F66A5E5;
sub.f32 f109, f107, f108;
sub.f32 f110, %33, %60;
mul.f32 f111, f110, 0f3F48261C;
sub.f32 f112, %38, %54;
fma.rn.f32 f113, f112, 0f3F7994E0, f111;
sub.f32 f114, %44, %49;
fma.rn.f32 f115, f114, 0f3EDE2602, f113;
add.f32 f116, f115, f109;
sub.f32 f117, f109, f115;
mul.f32 f118, f63, 0f3E63DC87;
sub.f32 f119, %29, f118;
mul.f32 f120, f65, 0f3F66A5E5;
sub.f32 f121, f119, f120;
fma.rn.f32 f122, f67, 0f3F1F9D07, f121;
mul.f32 f123, f110, 0f3F7994E0;
mul.f32 f124, f112, 0f3EDE2602;
sub.f32 f125, f123, f124;
mul.f32 f126, f114, 0f3F48261C;
sub.f32 f127, f125, f126;
add.f32 f128, f127, f122;
sub.f32 f129, f122, f127;
mul.f32 f130, f63, 0f3F66A5E5;
sub.f32 f131, %29, f130;
fma.rn.f32 f132, f65, 0f3F1F9D07, f131;
mul.f32 f133, f67, 0f3E63DC87;
sub.f32 f134, f132, f133;
mul.f32 f135, f110, 0f3EDE2602;
mul.f32 f136, f112, 0f3F48261C;
sub.f32 f137, f135, f136;
fma.rn.f32 f138, f114, 0f3F7994E0, f137;
add.f32 f139, f138, f134;
sub.f32 f140, f134, f138;
add.f32 f141, %36, %62;
add.f32 f142, %30, f141;
add.f32 f143, %41, %57;
add.f32 f144, f143, f142;
add.f32 f145, %46, %52;
add.f32 f146, f145, f144;
add.f32 f147, %37, %63;
add.f32 f148, %32, f147;
add.f32 f149, %43, %59;
add.f32 f150, f149, f148;
add.f32 f151, %48, %53;
add.f32 f152, f151, f150;
fma.rn.f32 f153, f141, 0f3F1F9D07, %30;
mul.f32 f154, f143, 0f3E63DC87;
sub.f32 f155, f153, f154;
mul.f32 f156, f145, 0f3F66A5E5;
sub.f32 f157, f155, f156;
sub.f32 f158, %37, %63;
mul.f32 f159, f158, 0f3F48261C;
sub.f32 f160, %43, %59;
fma.rn.f32 f161, f160, 0f3F7994E0, f159;
sub.f32 f162, %48, %53;
fma.rn.f32 f163, f162, 0f3EDE2602, f161;
sub.f32 f164, f157, f163;
add.f32 f165, f163, f157;
mul.f32 f166, f141, 0f3E63DC87;
sub.f32 f167, %30, f166;
mul.f32 f168, f143, 0f3F66A5E5;
sub.f32 f169, f167, f168;
fma.rn.f32 f170, f145, 0f3F1F9D07, f169;
mul.f32 f171, f158, 0f3F7994E0;
mul.f32 f172, f160, 0f3EDE2602;
sub.f32 f173, f171, f172;
mul.f32 f174, f162, 0f3F48261C;
sub.f32 f175, f173, f174;
sub.f32 f176, f170, f175;
add.f32 f177, f175, f170;
mul.f32 f178, f141, 0f3F66A5E5;
sub.f32 f179, %30, f178;
fma.rn.f32 f180, f143, 0f3F1F9D07, f179;
mul.f32 f181, f145, 0f3E63DC87;
sub.f32 f182, f180, f181;
mul.f32 f183, f158, 0f3EDE2602;
mul.f32 f184, f160, 0f3F48261C;
sub.f32 f185, f183, f184;
fma.rn.f32 f186, f162, 0f3F7994E0, f185;
sub.f32 f187, f182, f186;
add.f32 f188, f186, f182;
fma.rn.f32 f189, f147, 0f3F1F9D07, %32;
mul.f32 f190, f149, 0f3E63DC87;
sub.f32 f191, f189, f190;
mul.f32 f192, f151, 0f3F66A5E5;
sub.f32 f193, f191, f192;
sub.f32 f194, %36, %62;
mul.f32 f195, f194, 0f3F48261C;
sub.f32 f196, %41, %57;
fma.rn.f32 f197, f196, 0f3F7994E0, f195;
sub.f32 f198, %46, %52;
fma.rn.f32 f199, f198, 0f3EDE2602, f197;
add.f32 f200, f199, f193;
sub.f32 f201, f193, f199;
mul.f32 f202, f147, 0f3E63DC87;
sub.f32 f203, %32, f202;
mul.f32 f204, f149, 0f3F66A5E5;
sub.f32 f205, f203, f204;
fma.rn.f32 f206, f151, 0f3F1F9D07, f205;
mul.f32 f207, f194, 0f3F7994E0;
mul.f32 f208, f196, 0f3EDE2602;
sub.f32 f209, f207, f208;
mul.f32 f210, f198, 0f3F48261C;
sub.f32 f211, f209, f210;
add.f32 f212, f211, f206;
sub.f32 f213, f206, f211;
mul.f32 f214, f147, 0f3F66A5E5;
sub.f32 f215, %32, f214;
fma.rn.f32 f216, f149, 0f3F1F9D07, f215;
mul.f32 f217, f151, 0f3E63DC87;
sub.f32 f218, f216, f217;
mul.f32 f219, f194, 0f3EDE2602;
mul.f32 f220, f196, 0f3F48261C;
sub.f32 f221, f219, f220;
fma.rn.f32 f222, f198, 0f3F7994E0, f221;
add.f32 f223, f222, f218;
sub.f32 f224, f218, f222;
mul.f32 f225, f164, 0f3F66A5E5;
mul.f32 f226, f200, 0f3EDE2602;
sub.f32 f227, f225, f226;
mul.f32 f228, f200, 0f3F66A5E5;
fma.rn.f32 f229, f164, 0f3EDE2602, f228;
mul.f32 f230, f176, 0f3F1F9D07;
mul.f32 f231, f212, 0f3F48261C;
sub.f32 f232, f230, f231;
mul.f32 f233, f212, 0f3F1F9D07;
fma.rn.f32 f234, f176, 0f3F48261C, f233;
mul.f32 f235, f187, 0f3E63DC87;
mul.f32 f236, f223, 0f3F7994E0;
sub.f32 f237, f235, f236;
mul.f32 f238, f223, 0f3E63DC87;
fma.rn.f32 f239, f187, 0f3F7994E0, f238;
mul.f32 f240, f188, 0fBE63DC87;
mul.f32 f241, f224, 0f3F7994E0;
sub.f32 f242, f240, f241;
mul.f32 f243, f224, 0fBE63DC87;
fma.rn.f32 f244, f188, 0f3F7994E0, f243;
mul.f32 f245, f177, 0fBF1F9D07;
mul.f32 f246, f213, 0f3F48261C;
sub.f32 f247, f245, f246;
mul.f32 f248, f213, 0fBF1F9D07;
fma.rn.f32 f249, f177, 0f3F48261C, f248;
mul.f32 f250, f165, 0fBF66A5E5;
mul.f32 f251, f201, 0f3EDE2602;
sub.f32 f252, f250, f251;
mul.f32 f253, f201, 0fBF66A5E5;
fma.rn.f32 f254, f165, 0f3EDE2602, f253;
add.f32 %1, f68, f152;
add.f32 %0, f62, f146;
add.f32 %3, f116, f229;
add.f32 %2, f80, f227;
add.f32 %5, f128, f234;
add.f32 %4, f92, f232;
add.f32 %7, f139, f239;
add.f32 %6, f103, f237;
add.f32 %9, f140, f244;
add.f32 %8, f104, f242;
add.f32 %11, f129, f249;
add.f32 %10, f93, f247;
add.f32 %13, f117, f254;
add.f32 %12, f81, f252;
sub.f32 %15, f68, f152;
sub.f32 %14, f62, f146;
sub.f32 %17, f116, f229;
sub.f32 %16, f80, f227;
sub.f32 %19, f128, f234;
sub.f32 %18, f92, f232;
sub.f32 %21, f139, f239;
sub.f32 %20, f103, f237;
sub.f32 %23, f140, f244;
sub.f32 %22, f104, f242;
sub.f32 %25, f129, f249;
sub.f32 %24, f93, f247;
sub.f32 %27, f117, f254;
sub.f32 %26, f81, f252;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y), "=f"(rmem[7].x), "=f"(rmem[7].y), "=f"(rmem[8].x), "=f"(rmem[8].y), "=f"(rmem[9].x), "=f"(rmem[9].y), "=f"(rmem[10].x), "=f"(rmem[10].y), "=f"(rmem[11].x), "=f"(rmem[11].y), "=f"(rmem[12].x), "=f"(rmem[12].y), "=f"(rmem[13].x), "=f"(rmem[13].y): "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y), "f"(rmem[7].x), "f"(rmem[7].y), "f"(rmem[7].y), "f"(rmem[8].x), "f"(rmem[8].y), "f"(rmem[8].y), "f"(rmem[9].x), "f"(rmem[9].y), "f"(rmem[10].x), "f"(rmem[10].y), "f"(rmem[10].y), "f"(rmem[11].x), "f"(rmem[11].y), "f"(rmem[11].y), "f"(rmem[12].x), "f"(rmem[12].y), "f"(rmem[13].x), "f"(rmem[13].y));
};


#endif


//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_13_FP32_FWD_PTX_HPP
#define CUFFTDX_FFT_13_FP32_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<0, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<257>;
.reg .b64 rd<2>;
add.f32 f53, %28, %58;
add.f32 f54, %30, %59;
sub.f32 f55, %28, %58;
sub.f32 f56, %30, %59;
add.f32 f57, %31, %55;
add.f32 f58, %33, %57;
sub.f32 f59, %31, %55;
sub.f32 f60, %33, %57;
add.f32 f61, %34, %52;
add.f32 f62, %35, %54;
sub.f32 f63, %34, %52;
sub.f32 f64, %35, %54;
add.f32 f65, %36, %50;
add.f32 f66, %38, %51;
sub.f32 f67, %36, %50;
sub.f32 f68, %38, %51;
add.f32 f69, %39, %47;
add.f32 f70, %41, %49;
sub.f32 f71, %39, %47;
sub.f32 f72, %41, %49;
add.f32 f73, %42, %44;
add.f32 f74, %43, %46;
sub.f32 f75, %42, %44;
sub.f32 f76, %43, %46;
add.f32 f77, %26, f53;
add.f32 f78, %27, f54;
add.f32 f79, f77, f57;
add.f32 f80, f78, f58;
add.f32 f81, f79, f61;
add.f32 f82, f80, f62;
add.f32 f83, f81, f65;
add.f32 f84, f82, f66;
add.f32 f85, f83, f69;
add.f32 f86, f84, f70;
fma.rn.f32 f87, f53, 0f3F62AD3F, %26;
fma.rn.f32 f88, f56, 0fBEEDF032, 0f00000000;
fma.rn.f32 f89, f54, 0f3F62AD3F, %27;
fma.rn.f32 f90, f55, 0fBEEDF032, 0f00000000;
fma.rn.f32 f91, f57, 0f3F116CB1, f87;
fma.rn.f32 f92, f60, 0fBF52AF12, f88;
fma.rn.f32 f93, f58, 0f3F116CB1, f89;
fma.rn.f32 f94, f59, 0fBF52AF12, f90;
fma.rn.f32 f95, f61, 0f3DF6DBEF, f91;
fma.rn.f32 f96, f64, 0fBF7E222B, f92;
fma.rn.f32 f97, f62, 0f3DF6DBEF, f93;
fma.rn.f32 f98, f63, 0fBF7E222B, f94;
fma.rn.f32 f99, f65, 0fBEB58EC6, f95;
fma.rn.f32 f100, f68, 0fBF6F5D39, f96;
fma.rn.f32 f101, f66, 0fBEB58EC6, f97;
fma.rn.f32 f102, f67, 0fBF6F5D39, f98;
fma.rn.f32 f103, f69, 0fBF3F9E67, f99;
fma.rn.f32 f104, f72, 0fBF29C268, f100;
fma.rn.f32 f105, f70, 0fBF3F9E67, f101;
fma.rn.f32 f106, f71, 0fBF29C268, f102;
fma.rn.f32 f107, f73, 0fBF788FA5, f103;
fma.rn.f32 f108, f76, 0fBE750F2A, f104;
fma.rn.f32 f109, f74, 0fBF788FA5, f105;
fma.rn.f32 f110, f75, 0fBE750F2A, f106;
fma.rn.f32 f111, f53, 0f3F116CB1, %26;
fma.rn.f32 f112, f56, 0fBF52AF12, 0f00000000;
fma.rn.f32 f113, f54, 0f3F116CB1, %27;
fma.rn.f32 f114, f55, 0fBF52AF12, 0f00000000;
fma.rn.f32 f115, f57, 0fBEB58EC6, f111;
fma.rn.f32 f116, f60, 0fBF6F5D39, f112;
fma.rn.f32 f117, f58, 0fBEB58EC6, f113;
fma.rn.f32 f118, f59, 0fBF6F5D39, f114;
fma.rn.f32 f119, f61, 0fBF788FA5, f115;
fma.rn.f32 f120, f64, 0fBE750F2A, f116;
fma.rn.f32 f121, f62, 0fBF788FA5, f117;
fma.rn.f32 f122, f63, 0fBE750F2A, f118;
fma.rn.f32 f123, f65, 0fBF3F9E67, f119;
fma.rn.f32 f124, f68, 0f3F29C268, f120;
fma.rn.f32 f125, f66, 0fBF3F9E67, f121;
fma.rn.f32 f126, f67, 0f3F29C268, f122;
fma.rn.f32 f127, f69, 0f3DF6DBEF, f123;
fma.rn.f32 f128, f72, 0f3F7E222B, f124;
fma.rn.f32 f129, f70, 0f3DF6DBEF, f125;
fma.rn.f32 f130, f71, 0f3F7E222B, f126;
fma.rn.f32 f131, f73, 0f3F62AD3F, f127;
fma.rn.f32 f132, f76, 0f3EEDF032, f128;
fma.rn.f32 f133, f74, 0f3F62AD3F, f129;
fma.rn.f32 f134, f75, 0f3EEDF032, f130;
fma.rn.f32 f135, f53, 0f3DF6DBEF, %26;
fma.rn.f32 f136, f56, 0fBF7E222B, 0f00000000;
fma.rn.f32 f137, f54, 0f3DF6DBEF, %27;
fma.rn.f32 f138, f55, 0fBF7E222B, 0f00000000;
fma.rn.f32 f139, f57, 0fBF788FA5, f135;
fma.rn.f32 f140, f60, 0fBE750F2A, f136;
fma.rn.f32 f141, f58, 0fBF788FA5, f137;
fma.rn.f32 f142, f59, 0fBE750F2A, f138;
fma.rn.f32 f143, f61, 0fBEB58EC6, f139;
fma.rn.f32 f144, f64, 0f3F6F5D39, f140;
fma.rn.f32 f145, f62, 0fBEB58EC6, f141;
fma.rn.f32 f146, f63, 0f3F6F5D39, f142;
fma.rn.f32 f147, f65, 0f3F62AD3F, f143;
fma.rn.f32 f148, f68, 0f3EEDF032, f144;
fma.rn.f32 f149, f66, 0f3F62AD3F, f145;
fma.rn.f32 f150, f67, 0f3EEDF032, f146;
fma.rn.f32 f151, f69, 0f3F116CB1, f147;
fma.rn.f32 f152, f72, 0fBF52AF12, f148;
fma.rn.f32 f153, f70, 0f3F116CB1, f149;
fma.rn.f32 f154, f71, 0fBF52AF12, f150;
fma.rn.f32 f155, f73, 0fBF3F9E67, f151;
fma.rn.f32 f156, f76, 0fBF29C268, f152;
fma.rn.f32 f157, f74, 0fBF3F9E67, f153;
fma.rn.f32 f158, f75, 0fBF29C268, f154;
fma.rn.f32 f159, f53, 0fBEB58EC6, %26;
fma.rn.f32 f160, f56, 0fBF6F5D39, 0f00000000;
fma.rn.f32 f161, f54, 0fBEB58EC6, %27;
fma.rn.f32 f162, f55, 0fBF6F5D39, 0f00000000;
fma.rn.f32 f163, f57, 0fBF3F9E67, f159;
fma.rn.f32 f164, f60, 0f3F29C268, f160;
fma.rn.f32 f165, f58, 0fBF3F9E67, f161;
fma.rn.f32 f166, f59, 0f3F29C268, f162;
fma.rn.f32 f167, f61, 0f3F62AD3F, f163;
fma.rn.f32 f168, f64, 0f3EEDF032, f164;
fma.rn.f32 f169, f62, 0f3F62AD3F, f165;
fma.rn.f32 f170, f63, 0f3EEDF032, f166;
fma.rn.f32 f171, f65, 0f3DF6DBEF, f167;
fma.rn.f32 f172, f68, 0fBF7E222B, f168;
fma.rn.f32 f173, f66, 0f3DF6DBEF, f169;
fma.rn.f32 f174, f67, 0fBF7E222B, f170;
fma.rn.f32 f175, f69, 0fBF788FA5, f171;
fma.rn.f32 f176, f72, 0f3E750F2A, f172;
fma.rn.f32 f177, f70, 0fBF788FA5, f173;
fma.rn.f32 f178, f71, 0f3E750F2A, f174;
fma.rn.f32 f179, f73, 0f3F116CB1, f175;
fma.rn.f32 f180, f76, 0f3F52AF12, f176;
fma.rn.f32 f181, f74, 0f3F116CB1, f177;
fma.rn.f32 f182, f75, 0f3F52AF12, f178;
fma.rn.f32 f183, f53, 0fBF3F9E67, %26;
fma.rn.f32 f184, f56, 0fBF29C268, 0f00000000;
fma.rn.f32 f185, f54, 0fBF3F9E67, %27;
fma.rn.f32 f186, f55, 0fBF29C268, 0f00000000;
fma.rn.f32 f187, f57, 0f3DF6DBEF, f183;
fma.rn.f32 f188, f60, 0f3F7E222B, f184;
fma.rn.f32 f189, f58, 0f3DF6DBEF, f185;
fma.rn.f32 f190, f59, 0f3F7E222B, f186;
fma.rn.f32 f191, f61, 0f3F116CB1, f187;
fma.rn.f32 f192, f64, 0fBF52AF12, f188;
fma.rn.f32 f193, f62, 0f3F116CB1, f189;
fma.rn.f32 f194, f63, 0fBF52AF12, f190;
fma.rn.f32 f195, f65, 0fBF788FA5, f191;
fma.rn.f32 f196, f68, 0f3E750F2A, f192;
fma.rn.f32 f197, f66, 0fBF788FA5, f193;
fma.rn.f32 f198, f67, 0f3E750F2A, f194;
fma.rn.f32 f199, f69, 0f3F62AD3F, f195;
fma.rn.f32 f200, f72, 0f3EEDF032, f196;
fma.rn.f32 f201, f70, 0f3F62AD3F, f197;
fma.rn.f32 f202, f71, 0f3EEDF032, f198;
fma.rn.f32 f203, f73, 0fBEB58EC6, f199;
fma.rn.f32 f204, f76, 0fBF6F5D39, f200;
fma.rn.f32 f205, f74, 0fBEB58EC6, f201;
fma.rn.f32 f206, f75, 0fBF6F5D39, f202;
fma.rn.f32 f207, f53, 0fBF788FA5, %26;
fma.rn.f32 f208, f56, 0fBE750F2A, 0f00000000;
fma.rn.f32 f209, f54, 0fBF788FA5, %27;
fma.rn.f32 f210, f55, 0fBE750F2A, 0f00000000;
fma.rn.f32 f211, f57, 0f3F62AD3F, f207;
fma.rn.f32 f212, f60, 0f3EEDF032, f208;
fma.rn.f32 f213, f58, 0f3F62AD3F, f209;
fma.rn.f32 f214, f59, 0f3EEDF032, f210;
fma.rn.f32 f215, f61, 0fBF3F9E67, f211;
fma.rn.f32 f216, f64, 0fBF29C268, f212;
fma.rn.f32 f217, f62, 0fBF3F9E67, f213;
fma.rn.f32 f218, f63, 0fBF29C268, f214;
fma.rn.f32 f219, f65, 0f3F116CB1, f215;
fma.rn.f32 f220, f68, 0f3F52AF12, f216;
fma.rn.f32 f221, f66, 0f3F116CB1, f217;
fma.rn.f32 f222, f67, 0f3F52AF12, f218;
fma.rn.f32 f223, f69, 0fBEB58EC6, f219;
fma.rn.f32 f224, f72, 0fBF6F5D39, f220;
fma.rn.f32 f225, f70, 0fBEB58EC6, f221;
fma.rn.f32 f226, f71, 0fBF6F5D39, f222;
fma.rn.f32 f227, f73, 0f3DF6DBEF, f223;
fma.rn.f32 f228, f76, 0f3F7E222B, f224;
fma.rn.f32 f229, f74, 0f3DF6DBEF, f225;
fma.rn.f32 f230, f75, 0f3F7E222B, f226;
add.f32 %1, f86, f74;
add.f32 %0, f85, f73;
add.f32 %3, f109, f110;
sub.f32 %2, f107, f108;
add.f32 %5, f133, f134;
sub.f32 %4, f131, f132;
add.f32 %7, f157, f158;
sub.f32 %6, f155, f156;
add.f32 %9, f181, f182;
sub.f32 %8, f179, f180;
add.f32 %11, f205, f206;
sub.f32 %10, f203, f204;
add.f32 %13, f229, f230;
sub.f32 %12, f227, f228;
sub.f32 %15, f229, f230;
add.f32 %14, f227, f228;
sub.f32 %17, f205, f206;
add.f32 %16, f203, f204;
sub.f32 %19, f181, f182;
add.f32 %18, f179, f180;
sub.f32 %21, f157, f158;
add.f32 %20, f155, f156;
sub.f32 %23, f133, f134;
add.f32 %22, f131, f132;
sub.f32 %25, f109, f110;
add.f32 %24, f107, f108;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y), "=f"(rmem[7].x), "=f"(rmem[7].y), "=f"(rmem[8].x), "=f"(rmem[8].y), "=f"(rmem[9].x), "=f"(rmem[9].y), "=f"(rmem[10].x), "=f"(rmem[10].y), "=f"(rmem[11].x), "=f"(rmem[11].y), "=f"(rmem[12].x), "=f"(rmem[12].y): "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y), "f"(rmem[7].x), "f"(rmem[7].y), "f"(rmem[7].y), "f"(rmem[8].x), "f"(rmem[8].y), "f"(rmem[8].y), "f"(rmem[9].x), "f"(rmem[9].y), "f"(rmem[10].x), "f"(rmem[10].y), "f"(rmem[10].y), "f"(rmem[11].x), "f"(rmem[11].y), "f"(rmem[11].y), "f"(rmem[12].x), "f"(rmem[12].y));
};


#endif


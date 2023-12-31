//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_49_FP32_FWD_PTX_HPP
#define CUFFTDX_FFT_49_FP32_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<172, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<292>;
.reg .b32 r<15>;
.reg .b64 rd<7>;
mov.u32 r1, %tid.y;
mov.u32 r2, %14;
mad.lo.s32 r3, r1, 392, r2;
add.f32 f29, %18, %32;
add.f32 f30, %16, f29;
add.f32 f31, %21, %29;
add.f32 f32, f31, f30;
add.f32 f33, %24, %26;
add.f32 f34, %20, %33;
add.f32 f35, %17, f34;
add.f32 f36, %23, %31;
add.f32 f37, f36, f35;
add.f32 f38, %25, %28;
fma.rn.f32 f39, f29, 0f3F1F9D07, %16;
mul.f32 f40, f31, 0f3E63DC87;
sub.f32 f41, f39, f40;
mul.f32 f42, f33, 0f3F66A5E5;
sub.f32 f43, f41, f42;
sub.f32 f44, %20, %33;
mul.f32 f45, f44, 0f3F48261C;
sub.f32 f46, %23, %31;
mul.f32 f47, f46, 0fBF7994E0;
sub.f32 f48, f47, f45;
sub.f32 f49, %25, %28;
mul.f32 f50, f49, 0f3EDE2602;
sub.f32 f51, f48, f50;
sub.f32 f52, f43, f51;
add.f32 f53, f51, f43;
mul.f32 f54, f29, 0f3E63DC87;
sub.f32 f55, %16, f54;
mul.f32 f56, f31, 0f3F66A5E5;
sub.f32 f57, f55, f56;
fma.rn.f32 f58, f33, 0f3F1F9D07, f57;
mul.f32 f59, f44, 0f3F7994E0;
mul.f32 f60, f46, 0f3EDE2602;
sub.f32 f61, f60, f59;
fma.rn.f32 f62, f49, 0f3F48261C, f61;
sub.f32 f63, f58, f62;
add.f32 f64, f62, f58;
mul.f32 f65, f29, 0f3F66A5E5;
sub.f32 f66, %16, f65;
fma.rn.f32 f67, f31, 0f3F1F9D07, f66;
mul.f32 f68, f33, 0f3E63DC87;
sub.f32 f69, f67, f68;
mul.f32 f70, f44, 0f3EDE2602;
mul.f32 f71, f46, 0f3F48261C;
sub.f32 f72, f71, f70;
mul.f32 f73, f49, 0f3F7994E0;
sub.f32 f74, f72, f73;
sub.f32 f75, f69, f74;
add.f32 f76, f74, f69;
fma.rn.f32 f77, f34, 0f3F1F9D07, %17;
mul.f32 f78, f36, 0f3E63DC87;
sub.f32 f79, f77, f78;
mul.f32 f80, f38, 0f3F66A5E5;
sub.f32 f81, f79, f80;
sub.f32 f82, %18, %32;
mul.f32 f83, f82, 0f3F48261C;
sub.f32 f84, %21, %29;
mul.f32 f85, f84, 0fBF7994E0;
sub.f32 f86, f85, f83;
sub.f32 f87, %24, %26;
mul.f32 f88, f87, 0f3EDE2602;
sub.f32 f89, f86, f88;
add.f32 f90, f89, f81;
sub.f32 f91, f81, f89;
mul.f32 f92, f34, 0f3E63DC87;
sub.f32 f93, %17, f92;
mul.f32 f94, f36, 0f3F66A5E5;
sub.f32 f95, f93, f94;
fma.rn.f32 f96, f38, 0f3F1F9D07, f95;
mul.f32 f97, f82, 0f3F7994E0;
mul.f32 f98, f84, 0f3EDE2602;
sub.f32 f99, f98, f97;
fma.rn.f32 f100, f87, 0f3F48261C, f99;
add.f32 f101, f100, f96;
sub.f32 f102, f96, f100;
mul.f32 f103, f34, 0f3F66A5E5;
sub.f32 f104, %17, f103;
fma.rn.f32 f105, f36, 0f3F1F9D07, f104;
mul.f32 f106, f38, 0f3E63DC87;
sub.f32 f107, f105, f106;
mul.f32 f108, f82, 0f3EDE2602;
mul.f32 f109, f84, 0f3F48261C;
sub.f32 f110, f109, f108;
mul.f32 f111, f87, 0f3F7994E0;
sub.f32 f112, f110, f111;
add.f32 f113, f112, f107;
sub.f32 f114, f107, f112;
mov.u32 r4, %tid.x;
mul.wide.u32 rd2, r4, 613566757;
shr.u64 rd3, rd2, 32;
cvt.u32.u64 r5, rd3;
sub.s32 r6, r4, r5;
shr.u32 r7, r6, 1;
add.s32 r8, r7, r5;
shr.u32 r9, r8, 2;
mul.lo.s32 r10, r9, 7;
sub.s32 r11, r4, r10;
mad.lo.s32 r12, r9, 392, r3;
mul.wide.u32 rd4, r11, 8;
mov.u64 rd5, %15;
add.s64 rd6, rd5, rd4;
ld.global.v2.f32 {f115, f116}, [rd6];
mul.f32 f119, f115, f52;
mul.f32 f120, f116, f90;
mul.f32 f121, f115, f90;
mul.f32 f122, f115, f115;
mul.f32 f123, f116, f116;
sub.f32 f124, f122, f123;
mul.f32 f125, f116, f115;
fma.rn.f32 f126, f116, f115, f125;
mul.f32 f127, f124, f63;
mul.f32 f128, f126, f101;
mul.f32 f129, f124, f101;
mul.f32 f130, f115, f124;
mul.f32 f131, f116, f126;
sub.f32 f132, f130, f131;
mul.f32 f133, f115, f126;
fma.rn.f32 f134, f116, f124, f133;
mul.f32 f135, f132, f75;
mul.f32 f136, f134, f113;
mul.f32 f137, f132, f113;
mul.f32 f138, f115, f132;
mul.f32 f139, f116, f134;
sub.f32 f140, f138, f139;
mul.f32 f141, f115, f134;
fma.rn.f32 f142, f116, f132, f141;
mul.f32 f143, f140, f76;
mul.f32 f144, f142, f114;
mul.f32 f145, f140, f114;
mul.f32 f146, f115, f140;
mul.f32 f147, f116, f142;
sub.f32 f148, f146, f147;
mul.f32 f149, f115, f142;
fma.rn.f32 f150, f116, f140, f149;
mul.f32 f151, f148, f64;
mul.f32 f152, f150, f102;
mul.f32 f153, f148, f102;
mul.f32 f154, f115, f148;
mul.f32 f155, f116, f150;
sub.f32 f156, f154, f155;
mul.f32 f157, f115, f150;
fma.rn.f32 f158, f116, f148, f157;
mul.f32 f159, f156, f53;
mul.f32 f160, f158, f91;
mul.f32 f161, f156, f91;
barrier.sync 0;
mad.lo.s32 r13, r11, 56, r12;
add.f32 f162, f38, f37;
add.f32 f163, f33, f32;
st.shared.v2.f32 [r13], {f163, f162};
fma.rn.f32 f164, f116, f52, f121;
sub.f32 f165, f119, f120;
st.shared.v2.f32 [r13+8], {f165, f164};
fma.rn.f32 f166, f126, f63, f129;
sub.f32 f167, f127, f128;
st.shared.v2.f32 [r13+16], {f167, f166};
sub.f32 f168, f135, f136;
fma.rn.f32 f169, f134, f75, f137;
st.shared.v2.f32 [r13+24], {f168, f169};
fma.rn.f32 f170, f142, f76, f145;
sub.f32 f171, f143, f144;
st.shared.v2.f32 [r13+32], {f171, f170};
fma.rn.f32 f172, f150, f64, f153;
sub.f32 f173, f151, f152;
st.shared.v2.f32 [r13+40], {f173, f172};
fma.rn.f32 f174, f158, f53, f161;
sub.f32 f175, f159, f160;
st.shared.v2.f32 [r13+48], {f175, f174};
barrier.sync 0;
mad.lo.s32 r14, r11, -48, r13;
ld.shared.v2.f32 {f176, f177}, [r14];
ld.shared.v2.f32 {f180, f181}, [r14+56];
ld.shared.v2.f32 {f184, f185}, [r14+112];
ld.shared.v2.f32 {f188, f189}, [r14+168];
ld.shared.v2.f32 {f192, f193}, [r14+224];
ld.shared.v2.f32 {f196, f197}, [r14+280];
ld.shared.v2.f32 {f200, f201}, [r14+336];
add.f32 f204, f180, f200;
add.f32 f205, f176, f204;
add.f32 f206, f184, f196;
add.f32 f207, f206, f205;
add.f32 f208, f188, f192;
add.f32 f209, f181, f201;
add.f32 f210, f177, f209;
add.f32 f211, f185, f197;
add.f32 f212, f211, f210;
add.f32 f213, f189, f193;
fma.rn.f32 f214, f204, 0f3F1F9D07, f176;
mul.f32 f215, f206, 0f3E63DC87;
sub.f32 f216, f214, f215;
mul.f32 f217, f208, 0f3F66A5E5;
sub.f32 f218, f216, f217;
sub.f32 f219, f181, f201;
mul.f32 f220, f219, 0f3F48261C;
sub.f32 f221, f185, f197;
mul.f32 f222, f221, 0fBF7994E0;
sub.f32 f223, f222, f220;
sub.f32 f224, f189, f193;
mul.f32 f225, f224, 0f3EDE2602;
sub.f32 f226, f223, f225;
mul.f32 f227, f204, 0f3E63DC87;
sub.f32 f228, f176, f227;
mul.f32 f229, f206, 0f3F66A5E5;
sub.f32 f230, f228, f229;
fma.rn.f32 f231, f208, 0f3F1F9D07, f230;
mul.f32 f232, f219, 0f3F7994E0;
mul.f32 f233, f221, 0f3EDE2602;
sub.f32 f234, f233, f232;
fma.rn.f32 f235, f224, 0f3F48261C, f234;
mul.f32 f236, f204, 0f3F66A5E5;
sub.f32 f237, f176, f236;
fma.rn.f32 f238, f206, 0f3F1F9D07, f237;
mul.f32 f239, f208, 0f3E63DC87;
sub.f32 f240, f238, f239;
mul.f32 f241, f219, 0f3EDE2602;
mul.f32 f242, f221, 0f3F48261C;
sub.f32 f243, f242, f241;
mul.f32 f244, f224, 0f3F7994E0;
sub.f32 f245, f243, f244;
fma.rn.f32 f246, f209, 0f3F1F9D07, f177;
mul.f32 f247, f211, 0f3E63DC87;
sub.f32 f248, f246, f247;
mul.f32 f249, f213, 0f3F66A5E5;
sub.f32 f250, f248, f249;
sub.f32 f251, f180, f200;
mul.f32 f252, f251, 0f3F48261C;
sub.f32 f253, f184, f196;
mul.f32 f254, f253, 0fBF7994E0;
sub.f32 f255, f254, f252;
sub.f32 f256, f188, f192;
mul.f32 f257, f256, 0f3EDE2602;
sub.f32 f258, f255, f257;
mul.f32 f259, f209, 0f3E63DC87;
sub.f32 f260, f177, f259;
mul.f32 f261, f211, 0f3F66A5E5;
sub.f32 f262, f260, f261;
fma.rn.f32 f263, f213, 0f3F1F9D07, f262;
mul.f32 f264, f251, 0f3F7994E0;
mul.f32 f265, f253, 0f3EDE2602;
sub.f32 f266, f265, f264;
fma.rn.f32 f267, f256, 0f3F48261C, f266;
mul.f32 f268, f209, 0f3F66A5E5;
sub.f32 f269, f177, f268;
fma.rn.f32 f270, f211, 0f3F1F9D07, f269;
mul.f32 f271, f213, 0f3E63DC87;
sub.f32 f272, f270, f271;
mul.f32 f273, f251, 0f3EDE2602;
mul.f32 f274, f253, 0f3F48261C;
sub.f32 f275, f274, f273;
mul.f32 f276, f256, 0f3F7994E0;
sub.f32 f277, f275, f276;
add.f32 %1, f213, f212;
add.f32 %0, f208, f207;
add.f32 %3, f258, f250;
sub.f32 %2, f218, f226;
add.f32 %5, f267, f263;
sub.f32 %4, f231, f235;
add.f32 %7, f277, f272;
sub.f32 %6, f240, f245;
sub.f32 %9, f272, f277;
add.f32 %8, f245, f240;
sub.f32 %11, f263, f267;
add.f32 %10, f235, f231;
sub.f32 %13, f250, f258;
add.f32 %12, f226, f218;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y): "r"(smem), "l"(lut_sp_7_49), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<173, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<278>;
.reg .b32 r<15>;
.reg .b64 rd<7>;
mov.u32 r1, %tid.y;
mov.u32 r2, %14;
mad.lo.s32 r3, r1, 196, r2;
add.f32 f29, %18, %32;
add.f32 f30, %16, f29;
add.f32 f31, %21, %29;
add.f32 f32, f31, f30;
add.f32 f33, %24, %26;
add.f32 f34, f33, f32;
add.f32 f35, %20, %33;
add.f32 f36, %17, f35;
add.f32 f37, %23, %31;
add.f32 f38, f37, f36;
add.f32 f39, %25, %28;
add.f32 f40, f39, f38;
fma.rn.f32 f41, f29, 0f3F1F9D07, %16;
mul.f32 f42, f31, 0f3E63DC87;
sub.f32 f43, f41, f42;
mul.f32 f44, f33, 0f3F66A5E5;
sub.f32 f45, f43, f44;
sub.f32 f46, %20, %33;
mul.f32 f47, f46, 0f3F48261C;
sub.f32 f48, %23, %31;
mul.f32 f49, f48, 0fBF7994E0;
sub.f32 f50, f49, f47;
sub.f32 f51, %25, %28;
mul.f32 f52, f51, 0f3EDE2602;
sub.f32 f53, f50, f52;
sub.f32 f54, f45, f53;
add.f32 f55, f53, f45;
mul.f32 f56, f29, 0f3E63DC87;
sub.f32 f57, %16, f56;
mul.f32 f58, f31, 0f3F66A5E5;
sub.f32 f59, f57, f58;
fma.rn.f32 f60, f33, 0f3F1F9D07, f59;
mul.f32 f61, f46, 0f3F7994E0;
mul.f32 f62, f48, 0f3EDE2602;
sub.f32 f63, f62, f61;
fma.rn.f32 f64, f51, 0f3F48261C, f63;
sub.f32 f65, f60, f64;
add.f32 f66, f64, f60;
mul.f32 f67, f29, 0f3F66A5E5;
sub.f32 f68, %16, f67;
fma.rn.f32 f69, f31, 0f3F1F9D07, f68;
mul.f32 f70, f33, 0f3E63DC87;
sub.f32 f71, f69, f70;
mul.f32 f72, f46, 0f3EDE2602;
mul.f32 f73, f48, 0f3F48261C;
sub.f32 f74, f73, f72;
mul.f32 f75, f51, 0f3F7994E0;
sub.f32 f76, f74, f75;
sub.f32 f77, f71, f76;
add.f32 f78, f76, f71;
fma.rn.f32 f79, f35, 0f3F1F9D07, %17;
mul.f32 f80, f37, 0f3E63DC87;
sub.f32 f81, f79, f80;
mul.f32 f82, f39, 0f3F66A5E5;
sub.f32 f83, f81, f82;
sub.f32 f84, %18, %32;
mul.f32 f85, f84, 0f3F48261C;
sub.f32 f86, %21, %29;
mul.f32 f87, f86, 0fBF7994E0;
sub.f32 f88, f87, f85;
sub.f32 f89, %24, %26;
mul.f32 f90, f89, 0f3EDE2602;
sub.f32 f91, f88, f90;
add.f32 f92, f91, f83;
sub.f32 f93, f83, f91;
mul.f32 f94, f35, 0f3E63DC87;
sub.f32 f95, %17, f94;
mul.f32 f96, f37, 0f3F66A5E5;
sub.f32 f97, f95, f96;
fma.rn.f32 f98, f39, 0f3F1F9D07, f97;
mul.f32 f99, f84, 0f3F7994E0;
mul.f32 f100, f86, 0f3EDE2602;
sub.f32 f101, f100, f99;
fma.rn.f32 f102, f89, 0f3F48261C, f101;
add.f32 f103, f102, f98;
sub.f32 f104, f98, f102;
mul.f32 f105, f35, 0f3F66A5E5;
sub.f32 f106, %17, f105;
fma.rn.f32 f107, f37, 0f3F1F9D07, f106;
mul.f32 f108, f39, 0f3E63DC87;
sub.f32 f109, f107, f108;
mul.f32 f110, f84, 0f3EDE2602;
mul.f32 f111, f86, 0f3F48261C;
sub.f32 f112, f111, f110;
mul.f32 f113, f89, 0f3F7994E0;
sub.f32 f114, f112, f113;
add.f32 f115, f114, f109;
sub.f32 f116, f109, f114;
mov.u32 r4, %tid.x;
mul.wide.u32 rd2, r4, 613566757;
shr.u64 rd3, rd2, 32;
cvt.u32.u64 r5, rd3;
sub.s32 r6, r4, r5;
shr.u32 r7, r6, 1;
add.s32 r8, r7, r5;
shr.u32 r9, r8, 2;
mul.lo.s32 r10, r9, 7;
sub.s32 r11, r4, r10;
mul.wide.u32 rd4, r11, 8;
mov.u64 rd5, %15;
add.s64 rd6, rd5, rd4;
ld.global.v2.f32 {f117, f118}, [rd6];
mul.f32 f121, f117, f54;
mul.f32 f122, f118, f92;
sub.f32 f123, f121, f122;
mul.f32 f124, f117, f92;
fma.rn.f32 f125, f118, f54, f124;
mul.f32 f126, f117, f117;
mul.f32 f127, f118, f118;
sub.f32 f128, f126, f127;
mul.f32 f129, f118, f117;
fma.rn.f32 f130, f118, f117, f129;
mul.f32 f131, f128, f65;
mul.f32 f132, f130, f103;
sub.f32 f133, f131, f132;
mul.f32 f134, f128, f103;
fma.rn.f32 f135, f130, f65, f134;
mul.f32 f136, f117, f128;
mul.f32 f137, f118, f130;
sub.f32 f138, f136, f137;
mul.f32 f139, f117, f130;
fma.rn.f32 f140, f118, f128, f139;
mul.f32 f141, f138, f77;
mul.f32 f142, f140, f115;
sub.f32 f143, f141, f142;
mul.f32 f144, f138, f115;
fma.rn.f32 f145, f140, f77, f144;
mul.f32 f146, f117, f138;
mul.f32 f147, f118, f140;
sub.f32 f148, f146, f147;
mul.f32 f149, f117, f140;
fma.rn.f32 f150, f118, f138, f149;
mul.f32 f151, f148, f78;
mul.f32 f152, f150, f116;
sub.f32 f153, f151, f152;
mul.f32 f154, f148, f116;
fma.rn.f32 f155, f150, f78, f154;
mul.f32 f156, f117, f148;
mul.f32 f157, f118, f150;
sub.f32 f158, f156, f157;
mul.f32 f159, f117, f150;
fma.rn.f32 f160, f118, f148, f159;
mul.f32 f161, f158, f66;
mul.f32 f162, f160, f104;
sub.f32 f163, f161, f162;
mul.f32 f164, f158, f104;
fma.rn.f32 f165, f160, f66, f164;
mul.f32 f166, f117, f158;
mul.f32 f167, f118, f160;
sub.f32 f168, f166, f167;
mul.f32 f169, f117, f160;
fma.rn.f32 f170, f118, f158, f169;
mul.f32 f171, f168, f55;
mul.f32 f172, f170, f93;
sub.f32 f173, f171, f172;
mul.f32 f174, f168, f93;
fma.rn.f32 f175, f170, f55, f174;
mad.lo.s32 r12, r9, 196, r3;
barrier.sync 0;
mad.lo.s32 r13, r11, 28, r12;
st.shared.f32 [r13], f34;
st.shared.f32 [r13+4], f123;
st.shared.f32 [r13+8], f133;
st.shared.f32 [r13+12], f143;
st.shared.f32 [r13+16], f153;
st.shared.f32 [r13+20], f163;
st.shared.f32 [r13+24], f173;
barrier.sync 0;
mad.lo.s32 r14, r11, -24, r13;
ld.shared.f32 f176, [r14];
ld.shared.f32 f177, [r14+28];
ld.shared.f32 f178, [r14+56];
ld.shared.f32 f179, [r14+84];
ld.shared.f32 f180, [r14+112];
ld.shared.f32 f181, [r14+140];
ld.shared.f32 f182, [r14+168];
barrier.sync 0;
st.shared.f32 [r13], f40;
st.shared.f32 [r13+4], f125;
st.shared.f32 [r13+8], f135;
st.shared.f32 [r13+12], f145;
st.shared.f32 [r13+16], f155;
st.shared.f32 [r13+20], f165;
st.shared.f32 [r13+24], f175;
barrier.sync 0;
ld.shared.f32 f183, [r14];
ld.shared.f32 f184, [r14+28];
ld.shared.f32 f185, [r14+56];
ld.shared.f32 f186, [r14+84];
ld.shared.f32 f187, [r14+112];
ld.shared.f32 f188, [r14+140];
ld.shared.f32 f189, [r14+168];
add.f32 f190, f177, f182;
add.f32 f191, f176, f190;
add.f32 f192, f178, f181;
add.f32 f193, f192, f191;
add.f32 f194, f179, f180;
add.f32 f195, f184, f189;
add.f32 f196, f183, f195;
add.f32 f197, f185, f188;
add.f32 f198, f197, f196;
add.f32 f199, f186, f187;
fma.rn.f32 f200, f190, 0f3F1F9D07, f176;
mul.f32 f201, f192, 0f3E63DC87;
sub.f32 f202, f200, f201;
mul.f32 f203, f194, 0f3F66A5E5;
sub.f32 f204, f202, f203;
sub.f32 f205, f184, f189;
mul.f32 f206, f205, 0f3F48261C;
sub.f32 f207, f185, f188;
mul.f32 f208, f207, 0fBF7994E0;
sub.f32 f209, f208, f206;
sub.f32 f210, f186, f187;
mul.f32 f211, f210, 0f3EDE2602;
sub.f32 f212, f209, f211;
mul.f32 f213, f190, 0f3E63DC87;
sub.f32 f214, f176, f213;
mul.f32 f215, f192, 0f3F66A5E5;
sub.f32 f216, f214, f215;
fma.rn.f32 f217, f194, 0f3F1F9D07, f216;
mul.f32 f218, f205, 0f3F7994E0;
mul.f32 f219, f207, 0f3EDE2602;
sub.f32 f220, f219, f218;
fma.rn.f32 f221, f210, 0f3F48261C, f220;
mul.f32 f222, f190, 0f3F66A5E5;
sub.f32 f223, f176, f222;
fma.rn.f32 f224, f192, 0f3F1F9D07, f223;
mul.f32 f225, f194, 0f3E63DC87;
sub.f32 f226, f224, f225;
mul.f32 f227, f205, 0f3EDE2602;
mul.f32 f228, f207, 0f3F48261C;
sub.f32 f229, f228, f227;
mul.f32 f230, f210, 0f3F7994E0;
sub.f32 f231, f229, f230;
fma.rn.f32 f232, f195, 0f3F1F9D07, f183;
mul.f32 f233, f197, 0f3E63DC87;
sub.f32 f234, f232, f233;
mul.f32 f235, f199, 0f3F66A5E5;
sub.f32 f236, f234, f235;
sub.f32 f237, f177, f182;
mul.f32 f238, f237, 0f3F48261C;
sub.f32 f239, f178, f181;
mul.f32 f240, f239, 0fBF7994E0;
sub.f32 f241, f240, f238;
sub.f32 f242, f179, f180;
mul.f32 f243, f242, 0f3EDE2602;
sub.f32 f244, f241, f243;
mul.f32 f245, f195, 0f3E63DC87;
sub.f32 f246, f183, f245;
mul.f32 f247, f197, 0f3F66A5E5;
sub.f32 f248, f246, f247;
fma.rn.f32 f249, f199, 0f3F1F9D07, f248;
mul.f32 f250, f237, 0f3F7994E0;
mul.f32 f251, f239, 0f3EDE2602;
sub.f32 f252, f251, f250;
fma.rn.f32 f253, f242, 0f3F48261C, f252;
mul.f32 f254, f195, 0f3F66A5E5;
sub.f32 f255, f183, f254;
fma.rn.f32 f256, f197, 0f3F1F9D07, f255;
mul.f32 f257, f199, 0f3E63DC87;
sub.f32 f258, f256, f257;
mul.f32 f259, f237, 0f3EDE2602;
mul.f32 f260, f239, 0f3F48261C;
sub.f32 f261, f260, f259;
mul.f32 f262, f242, 0f3F7994E0;
sub.f32 f263, f261, f262;
add.f32 %0, f194, f193;
add.f32 %1, f199, f198;
add.f32 %3, f244, f236;
sub.f32 %2, f204, f212;
sub.f32 %4, f217, f221;
add.f32 %5, f253, f249;
sub.f32 %6, f226, f231;
add.f32 %7, f263, f258;
add.f32 %8, f231, f226;
sub.f32 %9, f258, f263;
add.f32 %10, f221, f217;
sub.f32 %11, f249, f253;
sub.f32 %13, f236, f244;
add.f32 %12, f212, f204;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y): "r"(smem), "l"(lut_sp_7_49), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y));
};


#endif


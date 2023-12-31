//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_2401_FP32_FWD_PTX_HPP
#define CUFFTDX_FFT_2401_FP32_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<176, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<642>;
.reg .b32 r<27>;
.reg .b64 rd<17>;
mov.u32 r1, %tid.y;
mov.u32 r2, %14;
mad.lo.s32 r3, r1, 19208, r2;
add.f32 f29, %20, %34;
add.f32 f30, %18, f29;
add.f32 f31, %23, %31;
add.f32 f32, f31, f30;
add.f32 f33, %26, %28;
add.f32 f34, %22, %35;
add.f32 f35, %19, f34;
add.f32 f36, %25, %33;
add.f32 f37, f36, f35;
add.f32 f38, %27, %30;
fma.rn.f32 f39, f29, 0f3F1F9D07, %18;
mul.f32 f40, f31, 0f3E63DC87;
sub.f32 f41, f39, f40;
mul.f32 f42, f33, 0f3F66A5E5;
sub.f32 f43, f41, f42;
sub.f32 f44, %22, %35;
mul.f32 f45, f44, 0f3F48261C;
sub.f32 f46, %25, %33;
mul.f32 f47, f46, 0fBF7994E0;
sub.f32 f48, f47, f45;
sub.f32 f49, %27, %30;
mul.f32 f50, f49, 0f3EDE2602;
sub.f32 f51, f48, f50;
sub.f32 f52, f43, f51;
add.f32 f53, f51, f43;
mul.f32 f54, f29, 0f3E63DC87;
sub.f32 f55, %18, f54;
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
sub.f32 f66, %18, f65;
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
fma.rn.f32 f77, f34, 0f3F1F9D07, %19;
mul.f32 f78, f36, 0f3E63DC87;
sub.f32 f79, f77, f78;
mul.f32 f80, f38, 0f3F66A5E5;
sub.f32 f81, f79, f80;
sub.f32 f82, %20, %34;
mul.f32 f83, f82, 0f3F48261C;
sub.f32 f84, %23, %31;
mul.f32 f85, f84, 0fBF7994E0;
sub.f32 f86, f85, f83;
sub.f32 f87, %26, %28;
mul.f32 f88, f87, 0f3EDE2602;
sub.f32 f89, f86, f88;
add.f32 f90, f89, f81;
sub.f32 f91, f81, f89;
mul.f32 f92, f34, 0f3E63DC87;
sub.f32 f93, %19, f92;
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
sub.f32 f104, %19, f103;
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
mul.wide.u32 rd2, r4, -1089394037;
shr.u64 rd3, rd2, 40;
cvt.u32.u64 r5, rd3;
mul.lo.s32 r6, r5, 343;
sub.s32 r7, r4, r6;
mad.lo.s32 r8, r5, 19208, r3;
mul.wide.u32 rd4, r7, 8;
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
mad.lo.s32 r9, r7, 56, r8;
add.f32 f162, f38, f37;
add.f32 f163, f33, f32;
st.shared.v2.f32 [r9], {f163, f162};
fma.rn.f32 f164, f116, f52, f121;
sub.f32 f165, f119, f120;
st.shared.v2.f32 [r9+8], {f165, f164};
fma.rn.f32 f166, f126, f63, f129;
sub.f32 f167, f127, f128;
st.shared.v2.f32 [r9+16], {f167, f166};
sub.f32 f168, f135, f136;
fma.rn.f32 f169, f134, f75, f137;
st.shared.v2.f32 [r9+24], {f168, f169};
fma.rn.f32 f170, f142, f76, f145;
sub.f32 f171, f143, f144;
st.shared.v2.f32 [r9+32], {f171, f170};
fma.rn.f32 f172, f150, f64, f153;
sub.f32 f173, f151, f152;
st.shared.v2.f32 [r9+40], {f173, f172};
fma.rn.f32 f174, f158, f53, f161;
sub.f32 f175, f159, f160;
st.shared.v2.f32 [r9+48], {f175, f174};
barrier.sync 0;
mad.lo.s32 r10, r7, -48, r9;
ld.shared.v2.f32 {f176, f177}, [r10];
ld.shared.v2.f32 {f180, f181}, [r10+2744];
ld.shared.v2.f32 {f184, f185}, [r10+5488];
ld.shared.v2.f32 {f188, f189}, [r10+8232];
ld.shared.v2.f32 {f192, f193}, [r10+10976];
ld.shared.v2.f32 {f196, f197}, [r10+13720];
ld.shared.v2.f32 {f200, f201}, [r10+16464];
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
sub.f32 f227, f218, f226;
add.f32 f228, f226, f218;
mul.f32 f229, f204, 0f3E63DC87;
sub.f32 f230, f176, f229;
mul.f32 f231, f206, 0f3F66A5E5;
sub.f32 f232, f230, f231;
fma.rn.f32 f233, f208, 0f3F1F9D07, f232;
mul.f32 f234, f219, 0f3F7994E0;
mul.f32 f235, f221, 0f3EDE2602;
sub.f32 f236, f235, f234;
fma.rn.f32 f237, f224, 0f3F48261C, f236;
sub.f32 f238, f233, f237;
add.f32 f239, f237, f233;
mul.f32 f240, f204, 0f3F66A5E5;
sub.f32 f241, f176, f240;
fma.rn.f32 f242, f206, 0f3F1F9D07, f241;
mul.f32 f243, f208, 0f3E63DC87;
sub.f32 f244, f242, f243;
mul.f32 f245, f219, 0f3EDE2602;
mul.f32 f246, f221, 0f3F48261C;
sub.f32 f247, f246, f245;
mul.f32 f248, f224, 0f3F7994E0;
sub.f32 f249, f247, f248;
sub.f32 f250, f244, f249;
add.f32 f251, f249, f244;
fma.rn.f32 f252, f209, 0f3F1F9D07, f177;
mul.f32 f253, f211, 0f3E63DC87;
sub.f32 f254, f252, f253;
mul.f32 f255, f213, 0f3F66A5E5;
sub.f32 f256, f254, f255;
sub.f32 f257, f180, f200;
mul.f32 f258, f257, 0f3F48261C;
sub.f32 f259, f184, f196;
mul.f32 f260, f259, 0fBF7994E0;
sub.f32 f261, f260, f258;
sub.f32 f262, f188, f192;
mul.f32 f263, f262, 0f3EDE2602;
sub.f32 f264, f261, f263;
add.f32 f265, f264, f256;
sub.f32 f266, f256, f264;
mul.f32 f267, f209, 0f3E63DC87;
sub.f32 f268, f177, f267;
mul.f32 f269, f211, 0f3F66A5E5;
sub.f32 f270, f268, f269;
fma.rn.f32 f271, f213, 0f3F1F9D07, f270;
mul.f32 f272, f257, 0f3F7994E0;
mul.f32 f273, f259, 0f3EDE2602;
sub.f32 f274, f273, f272;
fma.rn.f32 f275, f262, 0f3F48261C, f274;
add.f32 f276, f275, f271;
sub.f32 f277, f271, f275;
mul.f32 f278, f209, 0f3F66A5E5;
sub.f32 f279, f177, f278;
fma.rn.f32 f280, f211, 0f3F1F9D07, f279;
mul.f32 f281, f213, 0f3E63DC87;
sub.f32 f282, f280, f281;
mul.f32 f283, f257, 0f3EDE2602;
mul.f32 f284, f259, 0f3F48261C;
sub.f32 f285, f284, f283;
mul.f32 f286, f262, 0f3F7994E0;
sub.f32 f287, f285, f286;
add.f32 f288, f287, f282;
sub.f32 f289, f282, f287;
mul.wide.u32 rd7, r7, 613566757;
shr.u64 rd8, rd7, 32;
cvt.u32.u64 r11, rd8;
sub.s32 r12, r7, r11;
shr.u32 r13, r12, 1;
add.s32 r14, r13, r11;
shr.u32 r15, r14, 2;
mul.lo.s32 r16, r15, 7;
sub.s32 r17, r7, r16;
mul.wide.u32 rd9, r15, 8;
mov.u64 rd10, %16;
add.s64 rd11, rd10, rd9;
ld.global.v2.f32 {f290, f291}, [rd11];
mul.f32 f294, f290, f227;
mul.f32 f295, f291, f265;
mul.f32 f296, f290, f265;
mul.f32 f297, f290, f290;
mul.f32 f298, f291, f291;
sub.f32 f299, f297, f298;
mul.f32 f300, f291, f290;
fma.rn.f32 f301, f291, f290, f300;
mul.f32 f302, f299, f238;
mul.f32 f303, f301, f276;
mul.f32 f304, f299, f276;
mul.f32 f305, f290, f299;
mul.f32 f306, f291, f301;
sub.f32 f307, f305, f306;
mul.f32 f308, f290, f301;
fma.rn.f32 f309, f291, f299, f308;
mul.f32 f310, f307, f250;
mul.f32 f311, f309, f288;
mul.f32 f312, f307, f288;
mul.f32 f313, f290, f307;
mul.f32 f314, f291, f309;
sub.f32 f315, f313, f314;
mul.f32 f316, f290, f309;
fma.rn.f32 f317, f291, f307, f316;
mul.f32 f318, f315, f251;
mul.f32 f319, f317, f289;
mul.f32 f320, f315, f289;
mul.f32 f321, f290, f315;
mul.f32 f322, f291, f317;
sub.f32 f323, f321, f322;
mul.f32 f324, f290, f317;
fma.rn.f32 f325, f291, f315, f324;
mul.f32 f326, f323, f239;
mul.f32 f327, f325, f277;
mul.f32 f328, f323, f277;
mul.f32 f329, f290, f323;
mul.f32 f330, f291, f325;
sub.f32 f331, f329, f330;
mul.f32 f332, f290, f325;
fma.rn.f32 f333, f291, f323, f332;
mul.f32 f334, f331, f228;
mul.f32 f335, f333, f266;
mul.f32 f336, f331, f266;
shl.b32 r18, r17, 3;
add.s32 r19, r8, r18;
barrier.sync 0;
mad.lo.s32 r20, r15, 392, r19;
add.f32 f337, f213, f212;
add.f32 f338, f208, f207;
st.shared.v2.f32 [r20], {f338, f337};
fma.rn.f32 f339, f291, f227, f296;
sub.f32 f340, f294, f295;
st.shared.v2.f32 [r20+56], {f340, f339};
fma.rn.f32 f341, f301, f238, f304;
sub.f32 f342, f302, f303;
st.shared.v2.f32 [r20+112], {f342, f341};
fma.rn.f32 f343, f309, f250, f312;
sub.f32 f344, f310, f311;
st.shared.v2.f32 [r20+168], {f344, f343};
sub.f32 f345, f318, f319;
fma.rn.f32 f346, f317, f251, f320;
st.shared.v2.f32 [r20+224], {f345, f346};
fma.rn.f32 f347, f325, f239, f328;
sub.f32 f348, f326, f327;
st.shared.v2.f32 [r20+280], {f348, f347};
fma.rn.f32 f349, f333, f228, f336;
sub.f32 f350, f334, f335;
st.shared.v2.f32 [r20+336], {f350, f349};
barrier.sync 0;
ld.shared.v2.f32 {f351, f352}, [r10];
ld.shared.v2.f32 {f355, f356}, [r10+2744];
ld.shared.v2.f32 {f359, f360}, [r10+5488];
ld.shared.v2.f32 {f363, f364}, [r10+8232];
ld.shared.v2.f32 {f367, f368}, [r10+10976];
ld.shared.v2.f32 {f371, f372}, [r10+13720];
ld.shared.v2.f32 {f375, f376}, [r10+16464];
add.f32 f379, f355, f375;
add.f32 f380, f351, f379;
add.f32 f381, f359, f371;
add.f32 f382, f381, f380;
add.f32 f383, f363, f367;
add.f32 f384, f356, f376;
add.f32 f385, f352, f384;
add.f32 f386, f360, f372;
add.f32 f387, f386, f385;
add.f32 f388, f364, f368;
fma.rn.f32 f389, f379, 0f3F1F9D07, f351;
mul.f32 f390, f381, 0f3E63DC87;
sub.f32 f391, f389, f390;
mul.f32 f392, f383, 0f3F66A5E5;
sub.f32 f393, f391, f392;
sub.f32 f394, f356, f376;
mul.f32 f395, f394, 0f3F48261C;
sub.f32 f396, f360, f372;
mul.f32 f397, f396, 0fBF7994E0;
sub.f32 f398, f397, f395;
sub.f32 f399, f364, f368;
mul.f32 f400, f399, 0f3EDE2602;
sub.f32 f401, f398, f400;
sub.f32 f402, f393, f401;
add.f32 f403, f401, f393;
mul.f32 f404, f379, 0f3E63DC87;
sub.f32 f405, f351, f404;
mul.f32 f406, f381, 0f3F66A5E5;
sub.f32 f407, f405, f406;
fma.rn.f32 f408, f383, 0f3F1F9D07, f407;
mul.f32 f409, f394, 0f3F7994E0;
mul.f32 f410, f396, 0f3EDE2602;
sub.f32 f411, f410, f409;
fma.rn.f32 f412, f399, 0f3F48261C, f411;
sub.f32 f413, f408, f412;
add.f32 f414, f412, f408;
mul.f32 f415, f379, 0f3F66A5E5;
sub.f32 f416, f351, f415;
fma.rn.f32 f417, f381, 0f3F1F9D07, f416;
mul.f32 f418, f383, 0f3E63DC87;
sub.f32 f419, f417, f418;
mul.f32 f420, f394, 0f3EDE2602;
mul.f32 f421, f396, 0f3F48261C;
sub.f32 f422, f421, f420;
mul.f32 f423, f399, 0f3F7994E0;
sub.f32 f424, f422, f423;
sub.f32 f425, f419, f424;
add.f32 f426, f424, f419;
fma.rn.f32 f427, f384, 0f3F1F9D07, f352;
mul.f32 f428, f386, 0f3E63DC87;
sub.f32 f429, f427, f428;
mul.f32 f430, f388, 0f3F66A5E5;
sub.f32 f431, f429, f430;
sub.f32 f432, f355, f375;
mul.f32 f433, f432, 0f3F48261C;
sub.f32 f434, f359, f371;
mul.f32 f435, f434, 0fBF7994E0;
sub.f32 f436, f435, f433;
sub.f32 f437, f363, f367;
mul.f32 f438, f437, 0f3EDE2602;
sub.f32 f439, f436, f438;
add.f32 f440, f439, f431;
sub.f32 f441, f431, f439;
mul.f32 f442, f384, 0f3E63DC87;
sub.f32 f443, f352, f442;
mul.f32 f444, f386, 0f3F66A5E5;
sub.f32 f445, f443, f444;
fma.rn.f32 f446, f388, 0f3F1F9D07, f445;
mul.f32 f447, f432, 0f3F7994E0;
mul.f32 f448, f434, 0f3EDE2602;
sub.f32 f449, f448, f447;
fma.rn.f32 f450, f437, 0f3F48261C, f449;
add.f32 f451, f450, f446;
sub.f32 f452, f446, f450;
mul.f32 f453, f384, 0f3F66A5E5;
sub.f32 f454, f352, f453;
fma.rn.f32 f455, f386, 0f3F1F9D07, f454;
mul.f32 f456, f388, 0f3E63DC87;
sub.f32 f457, f455, f456;
mul.f32 f458, f432, 0f3EDE2602;
mul.f32 f459, f434, 0f3F48261C;
sub.f32 f460, f459, f458;
mul.f32 f461, f437, 0f3F7994E0;
sub.f32 f462, f460, f461;
add.f32 f463, f462, f457;
sub.f32 f464, f457, f462;
mul.wide.u32 rd12, r7, 1402438301;
shr.u64 rd13, rd12, 36;
cvt.u32.u64 r21, rd13;
mul.lo.s32 r22, r21, 49;
sub.s32 r23, r7, r22;
mul.wide.u32 rd14, r21, 8;
mov.u64 rd15, %17;
add.s64 rd16, rd15, rd14;
ld.global.v2.f32 {f465, f466}, [rd16];
mul.f32 f469, f465, f402;
mul.f32 f470, f466, f440;
mul.f32 f471, f465, f440;
mul.f32 f472, f465, f465;
mul.f32 f473, f466, f466;
sub.f32 f474, f472, f473;
mul.f32 f475, f466, f465;
fma.rn.f32 f476, f466, f465, f475;
mul.f32 f477, f474, f413;
mul.f32 f478, f476, f451;
mul.f32 f479, f474, f451;
mul.f32 f480, f465, f474;
mul.f32 f481, f466, f476;
sub.f32 f482, f480, f481;
mul.f32 f483, f465, f476;
fma.rn.f32 f484, f466, f474, f483;
mul.f32 f485, f482, f425;
mul.f32 f486, f484, f463;
mul.f32 f487, f482, f463;
mul.f32 f488, f465, f482;
mul.f32 f489, f466, f484;
sub.f32 f490, f488, f489;
mul.f32 f491, f465, f484;
fma.rn.f32 f492, f466, f482, f491;
mul.f32 f493, f490, f426;
mul.f32 f494, f492, f464;
mul.f32 f495, f490, f464;
mul.f32 f496, f465, f490;
mul.f32 f497, f466, f492;
sub.f32 f498, f496, f497;
mul.f32 f499, f465, f492;
fma.rn.f32 f500, f466, f490, f499;
mul.f32 f501, f498, f414;
mul.f32 f502, f500, f452;
mul.f32 f503, f498, f452;
mul.f32 f504, f465, f498;
mul.f32 f505, f466, f500;
sub.f32 f506, f504, f505;
mul.f32 f507, f465, f500;
fma.rn.f32 f508, f466, f498, f507;
mul.f32 f509, f506, f403;
mul.f32 f510, f508, f441;
mul.f32 f511, f506, f441;
shl.b32 r24, r23, 3;
add.s32 r25, r8, r24;
barrier.sync 0;
mad.lo.s32 r26, r21, 2744, r25;
add.f32 f512, f388, f387;
add.f32 f513, f383, f382;
st.shared.v2.f32 [r26], {f513, f512};
fma.rn.f32 f514, f466, f402, f471;
sub.f32 f515, f469, f470;
st.shared.v2.f32 [r26+392], {f515, f514};
fma.rn.f32 f516, f476, f413, f479;
sub.f32 f517, f477, f478;
st.shared.v2.f32 [r26+784], {f517, f516};
fma.rn.f32 f518, f484, f425, f487;
sub.f32 f519, f485, f486;
st.shared.v2.f32 [r26+1176], {f519, f518};
fma.rn.f32 f520, f492, f426, f495;
sub.f32 f521, f493, f494;
st.shared.v2.f32 [r26+1568], {f521, f520};
sub.f32 f522, f501, f502;
fma.rn.f32 f523, f500, f414, f503;
st.shared.v2.f32 [r26+1960], {f522, f523};
fma.rn.f32 f524, f508, f403, f511;
sub.f32 f525, f509, f510;
st.shared.v2.f32 [r26+2352], {f525, f524};
barrier.sync 0;
ld.shared.v2.f32 {f526, f527}, [r10];
ld.shared.v2.f32 {f530, f531}, [r10+2744];
ld.shared.v2.f32 {f534, f535}, [r10+5488];
ld.shared.v2.f32 {f538, f539}, [r10+8232];
ld.shared.v2.f32 {f542, f543}, [r10+10976];
ld.shared.v2.f32 {f546, f547}, [r10+13720];
ld.shared.v2.f32 {f550, f551}, [r10+16464];
add.f32 f554, f530, f550;
add.f32 f555, f526, f554;
add.f32 f556, f534, f546;
add.f32 f557, f556, f555;
add.f32 f558, f538, f542;
add.f32 f559, f531, f551;
add.f32 f560, f527, f559;
add.f32 f561, f535, f547;
add.f32 f562, f561, f560;
add.f32 f563, f539, f543;
fma.rn.f32 f564, f554, 0f3F1F9D07, f526;
mul.f32 f565, f556, 0f3E63DC87;
sub.f32 f566, f564, f565;
mul.f32 f567, f558, 0f3F66A5E5;
sub.f32 f568, f566, f567;
sub.f32 f569, f531, f551;
mul.f32 f570, f569, 0f3F48261C;
sub.f32 f571, f535, f547;
mul.f32 f572, f571, 0fBF7994E0;
sub.f32 f573, f572, f570;
sub.f32 f574, f539, f543;
mul.f32 f575, f574, 0f3EDE2602;
sub.f32 f576, f573, f575;
mul.f32 f577, f554, 0f3E63DC87;
sub.f32 f578, f526, f577;
mul.f32 f579, f556, 0f3F66A5E5;
sub.f32 f580, f578, f579;
fma.rn.f32 f581, f558, 0f3F1F9D07, f580;
mul.f32 f582, f569, 0f3F7994E0;
mul.f32 f583, f571, 0f3EDE2602;
sub.f32 f584, f583, f582;
fma.rn.f32 f585, f574, 0f3F48261C, f584;
mul.f32 f586, f554, 0f3F66A5E5;
sub.f32 f587, f526, f586;
fma.rn.f32 f588, f556, 0f3F1F9D07, f587;
mul.f32 f589, f558, 0f3E63DC87;
sub.f32 f590, f588, f589;
mul.f32 f591, f569, 0f3EDE2602;
mul.f32 f592, f571, 0f3F48261C;
sub.f32 f593, f592, f591;
mul.f32 f594, f574, 0f3F7994E0;
sub.f32 f595, f593, f594;
fma.rn.f32 f596, f559, 0f3F1F9D07, f527;
mul.f32 f597, f561, 0f3E63DC87;
sub.f32 f598, f596, f597;
mul.f32 f599, f563, 0f3F66A5E5;
sub.f32 f600, f598, f599;
sub.f32 f601, f530, f550;
mul.f32 f602, f601, 0f3F48261C;
sub.f32 f603, f534, f546;
mul.f32 f604, f603, 0fBF7994E0;
sub.f32 f605, f604, f602;
sub.f32 f606, f538, f542;
mul.f32 f607, f606, 0f3EDE2602;
sub.f32 f608, f605, f607;
mul.f32 f609, f559, 0f3E63DC87;
sub.f32 f610, f527, f609;
mul.f32 f611, f561, 0f3F66A5E5;
sub.f32 f612, f610, f611;
fma.rn.f32 f613, f563, 0f3F1F9D07, f612;
mul.f32 f614, f601, 0f3F7994E0;
mul.f32 f615, f603, 0f3EDE2602;
sub.f32 f616, f615, f614;
fma.rn.f32 f617, f606, 0f3F48261C, f616;
mul.f32 f618, f559, 0f3F66A5E5;
sub.f32 f619, f527, f618;
fma.rn.f32 f620, f561, 0f3F1F9D07, f619;
mul.f32 f621, f563, 0f3E63DC87;
sub.f32 f622, f620, f621;
mul.f32 f623, f601, 0f3EDE2602;
mul.f32 f624, f603, 0f3F48261C;
sub.f32 f625, f624, f623;
mul.f32 f626, f606, 0f3F7994E0;
sub.f32 f627, f625, f626;
add.f32 %1, f563, f562;
add.f32 %0, f558, f557;
add.f32 %3, f608, f600;
sub.f32 %2, f568, f576;
add.f32 %5, f617, f613;
sub.f32 %4, f581, f585;
add.f32 %7, f627, f622;
sub.f32 %6, f590, f595;
sub.f32 %9, f622, f627;
add.f32 %8, f595, f590;
sub.f32 %11, f613, f617;
add.f32 %10, f585, f581;
sub.f32 %13, f600, f608;
add.f32 %12, f576, f568;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y): "r"(smem), "l"(lut_sp_7_2401), "l"(lut_sp_7_343), "l"(lut_sp_7_49), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<177, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<600>;
.reg .b32 r<27>;
.reg .b64 rd<17>;
mov.u32 r1, %tid.y;
mov.u32 r2, %14;
mad.lo.s32 r3, r1, 9604, r2;
add.f32 f29, %20, %34;
add.f32 f30, %18, f29;
add.f32 f31, %23, %31;
add.f32 f32, f31, f30;
add.f32 f33, %26, %28;
add.f32 f34, f33, f32;
add.f32 f35, %22, %35;
add.f32 f36, %19, f35;
add.f32 f37, %25, %33;
add.f32 f38, f37, f36;
add.f32 f39, %27, %30;
add.f32 f40, f39, f38;
fma.rn.f32 f41, f29, 0f3F1F9D07, %18;
mul.f32 f42, f31, 0f3E63DC87;
sub.f32 f43, f41, f42;
mul.f32 f44, f33, 0f3F66A5E5;
sub.f32 f45, f43, f44;
sub.f32 f46, %22, %35;
mul.f32 f47, f46, 0f3F48261C;
sub.f32 f48, %25, %33;
mul.f32 f49, f48, 0fBF7994E0;
sub.f32 f50, f49, f47;
sub.f32 f51, %27, %30;
mul.f32 f52, f51, 0f3EDE2602;
sub.f32 f53, f50, f52;
sub.f32 f54, f45, f53;
add.f32 f55, f53, f45;
mul.f32 f56, f29, 0f3E63DC87;
sub.f32 f57, %18, f56;
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
sub.f32 f68, %18, f67;
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
fma.rn.f32 f79, f35, 0f3F1F9D07, %19;
mul.f32 f80, f37, 0f3E63DC87;
sub.f32 f81, f79, f80;
mul.f32 f82, f39, 0f3F66A5E5;
sub.f32 f83, f81, f82;
sub.f32 f84, %20, %34;
mul.f32 f85, f84, 0f3F48261C;
sub.f32 f86, %23, %31;
mul.f32 f87, f86, 0fBF7994E0;
sub.f32 f88, f87, f85;
sub.f32 f89, %26, %28;
mul.f32 f90, f89, 0f3EDE2602;
sub.f32 f91, f88, f90;
add.f32 f92, f91, f83;
sub.f32 f93, f83, f91;
mul.f32 f94, f35, 0f3E63DC87;
sub.f32 f95, %19, f94;
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
sub.f32 f106, %19, f105;
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
mul.wide.u32 rd2, r4, -1089394037;
shr.u64 rd3, rd2, 40;
cvt.u32.u64 r5, rd3;
mul.lo.s32 r6, r5, 343;
sub.s32 r7, r4, r6;
mul.wide.u32 rd4, r7, 8;
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
mad.lo.s32 r8, r5, 9604, r3;
barrier.sync 0;
mad.lo.s32 r9, r7, 28, r8;
st.shared.f32 [r9], f34;
st.shared.f32 [r9+4], f123;
st.shared.f32 [r9+8], f133;
st.shared.f32 [r9+12], f143;
st.shared.f32 [r9+16], f153;
st.shared.f32 [r9+20], f163;
st.shared.f32 [r9+24], f173;
barrier.sync 0;
mad.lo.s32 r10, r7, -24, r9;
ld.shared.f32 f176, [r10];
ld.shared.f32 f177, [r10+1372];
ld.shared.f32 f178, [r10+2744];
ld.shared.f32 f179, [r10+4116];
ld.shared.f32 f180, [r10+5488];
ld.shared.f32 f181, [r10+6860];
ld.shared.f32 f182, [r10+8232];
barrier.sync 0;
st.shared.f32 [r9], f40;
st.shared.f32 [r9+4], f125;
st.shared.f32 [r9+8], f135;
st.shared.f32 [r9+12], f145;
st.shared.f32 [r9+16], f155;
st.shared.f32 [r9+20], f165;
st.shared.f32 [r9+24], f175;
barrier.sync 0;
ld.shared.f32 f183, [r10];
ld.shared.f32 f184, [r10+1372];
ld.shared.f32 f185, [r10+2744];
ld.shared.f32 f186, [r10+4116];
ld.shared.f32 f187, [r10+5488];
ld.shared.f32 f188, [r10+6860];
ld.shared.f32 f189, [r10+8232];
add.f32 f190, f177, f182;
add.f32 f191, f176, f190;
add.f32 f192, f178, f181;
add.f32 f193, f192, f191;
add.f32 f194, f179, f180;
add.f32 f195, f194, f193;
add.f32 f196, f184, f189;
add.f32 f197, f183, f196;
add.f32 f198, f185, f188;
add.f32 f199, f198, f197;
add.f32 f200, f186, f187;
add.f32 f201, f200, f199;
fma.rn.f32 f202, f190, 0f3F1F9D07, f176;
mul.f32 f203, f192, 0f3E63DC87;
sub.f32 f204, f202, f203;
mul.f32 f205, f194, 0f3F66A5E5;
sub.f32 f206, f204, f205;
sub.f32 f207, f184, f189;
mul.f32 f208, f207, 0f3F48261C;
sub.f32 f209, f185, f188;
mul.f32 f210, f209, 0fBF7994E0;
sub.f32 f211, f210, f208;
sub.f32 f212, f186, f187;
mul.f32 f213, f212, 0f3EDE2602;
sub.f32 f214, f211, f213;
sub.f32 f215, f206, f214;
add.f32 f216, f214, f206;
mul.f32 f217, f190, 0f3E63DC87;
sub.f32 f218, f176, f217;
mul.f32 f219, f192, 0f3F66A5E5;
sub.f32 f220, f218, f219;
fma.rn.f32 f221, f194, 0f3F1F9D07, f220;
mul.f32 f222, f207, 0f3F7994E0;
mul.f32 f223, f209, 0f3EDE2602;
sub.f32 f224, f223, f222;
fma.rn.f32 f225, f212, 0f3F48261C, f224;
sub.f32 f226, f221, f225;
add.f32 f227, f225, f221;
mul.f32 f228, f190, 0f3F66A5E5;
sub.f32 f229, f176, f228;
fma.rn.f32 f230, f192, 0f3F1F9D07, f229;
mul.f32 f231, f194, 0f3E63DC87;
sub.f32 f232, f230, f231;
mul.f32 f233, f207, 0f3EDE2602;
mul.f32 f234, f209, 0f3F48261C;
sub.f32 f235, f234, f233;
mul.f32 f236, f212, 0f3F7994E0;
sub.f32 f237, f235, f236;
sub.f32 f238, f232, f237;
add.f32 f239, f237, f232;
fma.rn.f32 f240, f196, 0f3F1F9D07, f183;
mul.f32 f241, f198, 0f3E63DC87;
sub.f32 f242, f240, f241;
mul.f32 f243, f200, 0f3F66A5E5;
sub.f32 f244, f242, f243;
sub.f32 f245, f177, f182;
mul.f32 f246, f245, 0f3F48261C;
sub.f32 f247, f178, f181;
mul.f32 f248, f247, 0fBF7994E0;
sub.f32 f249, f248, f246;
sub.f32 f250, f179, f180;
mul.f32 f251, f250, 0f3EDE2602;
sub.f32 f252, f249, f251;
add.f32 f253, f252, f244;
sub.f32 f254, f244, f252;
mul.f32 f255, f196, 0f3E63DC87;
sub.f32 f256, f183, f255;
mul.f32 f257, f198, 0f3F66A5E5;
sub.f32 f258, f256, f257;
fma.rn.f32 f259, f200, 0f3F1F9D07, f258;
mul.f32 f260, f245, 0f3F7994E0;
mul.f32 f261, f247, 0f3EDE2602;
sub.f32 f262, f261, f260;
fma.rn.f32 f263, f250, 0f3F48261C, f262;
add.f32 f264, f263, f259;
sub.f32 f265, f259, f263;
mul.f32 f266, f196, 0f3F66A5E5;
sub.f32 f267, f183, f266;
fma.rn.f32 f268, f198, 0f3F1F9D07, f267;
mul.f32 f269, f200, 0f3E63DC87;
sub.f32 f270, f268, f269;
mul.f32 f271, f245, 0f3EDE2602;
mul.f32 f272, f247, 0f3F48261C;
sub.f32 f273, f272, f271;
mul.f32 f274, f250, 0f3F7994E0;
sub.f32 f275, f273, f274;
add.f32 f276, f275, f270;
sub.f32 f277, f270, f275;
mul.wide.u32 rd7, r7, 613566757;
shr.u64 rd8, rd7, 32;
cvt.u32.u64 r11, rd8;
sub.s32 r12, r7, r11;
shr.u32 r13, r12, 1;
add.s32 r14, r13, r11;
shr.u32 r15, r14, 2;
mul.lo.s32 r16, r15, 7;
sub.s32 r17, r7, r16;
mul.wide.u32 rd9, r15, 8;
mov.u64 rd10, %16;
add.s64 rd11, rd10, rd9;
ld.global.v2.f32 {f278, f279}, [rd11];
mul.f32 f282, f278, f215;
mul.f32 f283, f279, f253;
sub.f32 f284, f282, f283;
mul.f32 f285, f278, f253;
fma.rn.f32 f286, f279, f215, f285;
mul.f32 f287, f278, f278;
mul.f32 f288, f279, f279;
sub.f32 f289, f287, f288;
mul.f32 f290, f279, f278;
fma.rn.f32 f291, f279, f278, f290;
mul.f32 f292, f289, f226;
mul.f32 f293, f291, f264;
sub.f32 f294, f292, f293;
mul.f32 f295, f289, f264;
fma.rn.f32 f296, f291, f226, f295;
mul.f32 f297, f278, f289;
mul.f32 f298, f279, f291;
sub.f32 f299, f297, f298;
mul.f32 f300, f278, f291;
fma.rn.f32 f301, f279, f289, f300;
mul.f32 f302, f299, f238;
mul.f32 f303, f301, f276;
sub.f32 f304, f302, f303;
mul.f32 f305, f299, f276;
fma.rn.f32 f306, f301, f238, f305;
mul.f32 f307, f278, f299;
mul.f32 f308, f279, f301;
sub.f32 f309, f307, f308;
mul.f32 f310, f278, f301;
fma.rn.f32 f311, f279, f299, f310;
mul.f32 f312, f309, f239;
mul.f32 f313, f311, f277;
sub.f32 f314, f312, f313;
mul.f32 f315, f309, f277;
fma.rn.f32 f316, f311, f239, f315;
mul.f32 f317, f278, f309;
mul.f32 f318, f279, f311;
sub.f32 f319, f317, f318;
mul.f32 f320, f278, f311;
fma.rn.f32 f321, f279, f309, f320;
mul.f32 f322, f319, f227;
mul.f32 f323, f321, f265;
sub.f32 f324, f322, f323;
mul.f32 f325, f319, f265;
fma.rn.f32 f326, f321, f227, f325;
mul.f32 f327, f278, f319;
mul.f32 f328, f279, f321;
sub.f32 f329, f327, f328;
mul.f32 f330, f278, f321;
fma.rn.f32 f331, f279, f319, f330;
mul.f32 f332, f329, f216;
mul.f32 f333, f331, f254;
sub.f32 f334, f332, f333;
mul.f32 f335, f329, f254;
fma.rn.f32 f336, f331, f216, f335;
shl.b32 r18, r17, 2;
add.s32 r19, r8, r18;
barrier.sync 0;
mad.lo.s32 r20, r15, 196, r19;
st.shared.f32 [r20], f195;
st.shared.f32 [r20+28], f284;
st.shared.f32 [r20+56], f294;
st.shared.f32 [r20+84], f304;
st.shared.f32 [r20+112], f314;
st.shared.f32 [r20+140], f324;
st.shared.f32 [r20+168], f334;
barrier.sync 0;
ld.shared.f32 f337, [r10];
ld.shared.f32 f338, [r10+1372];
ld.shared.f32 f339, [r10+2744];
ld.shared.f32 f340, [r10+4116];
ld.shared.f32 f341, [r10+5488];
ld.shared.f32 f342, [r10+6860];
ld.shared.f32 f343, [r10+8232];
barrier.sync 0;
st.shared.f32 [r20], f201;
st.shared.f32 [r20+28], f286;
st.shared.f32 [r20+56], f296;
st.shared.f32 [r20+84], f306;
st.shared.f32 [r20+112], f316;
st.shared.f32 [r20+140], f326;
st.shared.f32 [r20+168], f336;
barrier.sync 0;
ld.shared.f32 f344, [r10];
ld.shared.f32 f345, [r10+1372];
ld.shared.f32 f346, [r10+2744];
ld.shared.f32 f347, [r10+4116];
ld.shared.f32 f348, [r10+5488];
ld.shared.f32 f349, [r10+6860];
ld.shared.f32 f350, [r10+8232];
add.f32 f351, f338, f343;
add.f32 f352, f337, f351;
add.f32 f353, f339, f342;
add.f32 f354, f353, f352;
add.f32 f355, f340, f341;
add.f32 f356, f355, f354;
add.f32 f357, f345, f350;
add.f32 f358, f344, f357;
add.f32 f359, f346, f349;
add.f32 f360, f359, f358;
add.f32 f361, f347, f348;
add.f32 f362, f361, f360;
fma.rn.f32 f363, f351, 0f3F1F9D07, f337;
mul.f32 f364, f353, 0f3E63DC87;
sub.f32 f365, f363, f364;
mul.f32 f366, f355, 0f3F66A5E5;
sub.f32 f367, f365, f366;
sub.f32 f368, f345, f350;
mul.f32 f369, f368, 0f3F48261C;
sub.f32 f370, f346, f349;
mul.f32 f371, f370, 0fBF7994E0;
sub.f32 f372, f371, f369;
sub.f32 f373, f347, f348;
mul.f32 f374, f373, 0f3EDE2602;
sub.f32 f375, f372, f374;
sub.f32 f376, f367, f375;
add.f32 f377, f375, f367;
mul.f32 f378, f351, 0f3E63DC87;
sub.f32 f379, f337, f378;
mul.f32 f380, f353, 0f3F66A5E5;
sub.f32 f381, f379, f380;
fma.rn.f32 f382, f355, 0f3F1F9D07, f381;
mul.f32 f383, f368, 0f3F7994E0;
mul.f32 f384, f370, 0f3EDE2602;
sub.f32 f385, f384, f383;
fma.rn.f32 f386, f373, 0f3F48261C, f385;
sub.f32 f387, f382, f386;
add.f32 f388, f386, f382;
mul.f32 f389, f351, 0f3F66A5E5;
sub.f32 f390, f337, f389;
fma.rn.f32 f391, f353, 0f3F1F9D07, f390;
mul.f32 f392, f355, 0f3E63DC87;
sub.f32 f393, f391, f392;
mul.f32 f394, f368, 0f3EDE2602;
mul.f32 f395, f370, 0f3F48261C;
sub.f32 f396, f395, f394;
mul.f32 f397, f373, 0f3F7994E0;
sub.f32 f398, f396, f397;
sub.f32 f399, f393, f398;
add.f32 f400, f398, f393;
fma.rn.f32 f401, f357, 0f3F1F9D07, f344;
mul.f32 f402, f359, 0f3E63DC87;
sub.f32 f403, f401, f402;
mul.f32 f404, f361, 0f3F66A5E5;
sub.f32 f405, f403, f404;
sub.f32 f406, f338, f343;
mul.f32 f407, f406, 0f3F48261C;
sub.f32 f408, f339, f342;
mul.f32 f409, f408, 0fBF7994E0;
sub.f32 f410, f409, f407;
sub.f32 f411, f340, f341;
mul.f32 f412, f411, 0f3EDE2602;
sub.f32 f413, f410, f412;
add.f32 f414, f413, f405;
sub.f32 f415, f405, f413;
mul.f32 f416, f357, 0f3E63DC87;
sub.f32 f417, f344, f416;
mul.f32 f418, f359, 0f3F66A5E5;
sub.f32 f419, f417, f418;
fma.rn.f32 f420, f361, 0f3F1F9D07, f419;
mul.f32 f421, f406, 0f3F7994E0;
mul.f32 f422, f408, 0f3EDE2602;
sub.f32 f423, f422, f421;
fma.rn.f32 f424, f411, 0f3F48261C, f423;
add.f32 f425, f424, f420;
sub.f32 f426, f420, f424;
mul.f32 f427, f357, 0f3F66A5E5;
sub.f32 f428, f344, f427;
fma.rn.f32 f429, f359, 0f3F1F9D07, f428;
mul.f32 f430, f361, 0f3E63DC87;
sub.f32 f431, f429, f430;
mul.f32 f432, f406, 0f3EDE2602;
mul.f32 f433, f408, 0f3F48261C;
sub.f32 f434, f433, f432;
mul.f32 f435, f411, 0f3F7994E0;
sub.f32 f436, f434, f435;
add.f32 f437, f436, f431;
sub.f32 f438, f431, f436;
mul.wide.u32 rd12, r7, 1402438301;
shr.u64 rd13, rd12, 36;
cvt.u32.u64 r21, rd13;
mul.lo.s32 r22, r21, 49;
sub.s32 r23, r7, r22;
mul.wide.u32 rd14, r21, 8;
mov.u64 rd15, %17;
add.s64 rd16, rd15, rd14;
ld.global.v2.f32 {f439, f440}, [rd16];
mul.f32 f443, f439, f376;
mul.f32 f444, f440, f414;
sub.f32 f445, f443, f444;
mul.f32 f446, f439, f414;
fma.rn.f32 f447, f440, f376, f446;
mul.f32 f448, f439, f439;
mul.f32 f449, f440, f440;
sub.f32 f450, f448, f449;
mul.f32 f451, f440, f439;
fma.rn.f32 f452, f440, f439, f451;
mul.f32 f453, f450, f387;
mul.f32 f454, f452, f425;
sub.f32 f455, f453, f454;
mul.f32 f456, f450, f425;
fma.rn.f32 f457, f452, f387, f456;
mul.f32 f458, f439, f450;
mul.f32 f459, f440, f452;
sub.f32 f460, f458, f459;
mul.f32 f461, f439, f452;
fma.rn.f32 f462, f440, f450, f461;
mul.f32 f463, f460, f399;
mul.f32 f464, f462, f437;
sub.f32 f465, f463, f464;
mul.f32 f466, f460, f437;
fma.rn.f32 f467, f462, f399, f466;
mul.f32 f468, f439, f460;
mul.f32 f469, f440, f462;
sub.f32 f470, f468, f469;
mul.f32 f471, f439, f462;
fma.rn.f32 f472, f440, f460, f471;
mul.f32 f473, f470, f400;
mul.f32 f474, f472, f438;
sub.f32 f475, f473, f474;
mul.f32 f476, f470, f438;
fma.rn.f32 f477, f472, f400, f476;
mul.f32 f478, f439, f470;
mul.f32 f479, f440, f472;
sub.f32 f480, f478, f479;
mul.f32 f481, f439, f472;
fma.rn.f32 f482, f440, f470, f481;
mul.f32 f483, f480, f388;
mul.f32 f484, f482, f426;
sub.f32 f485, f483, f484;
mul.f32 f486, f480, f426;
fma.rn.f32 f487, f482, f388, f486;
mul.f32 f488, f439, f480;
mul.f32 f489, f440, f482;
sub.f32 f490, f488, f489;
mul.f32 f491, f439, f482;
fma.rn.f32 f492, f440, f480, f491;
mul.f32 f493, f490, f377;
mul.f32 f494, f492, f415;
sub.f32 f495, f493, f494;
mul.f32 f496, f490, f415;
fma.rn.f32 f497, f492, f377, f496;
shl.b32 r24, r23, 2;
add.s32 r25, r8, r24;
barrier.sync 0;
mad.lo.s32 r26, r21, 1372, r25;
st.shared.f32 [r26], f356;
st.shared.f32 [r26+196], f445;
st.shared.f32 [r26+392], f455;
st.shared.f32 [r26+588], f465;
st.shared.f32 [r26+784], f475;
st.shared.f32 [r26+980], f485;
st.shared.f32 [r26+1176], f495;
barrier.sync 0;
ld.shared.f32 f498, [r10];
ld.shared.f32 f499, [r10+1372];
ld.shared.f32 f500, [r10+2744];
ld.shared.f32 f501, [r10+4116];
ld.shared.f32 f502, [r10+5488];
ld.shared.f32 f503, [r10+6860];
ld.shared.f32 f504, [r10+8232];
barrier.sync 0;
st.shared.f32 [r26], f362;
st.shared.f32 [r26+196], f447;
st.shared.f32 [r26+392], f457;
st.shared.f32 [r26+588], f467;
st.shared.f32 [r26+784], f477;
st.shared.f32 [r26+980], f487;
st.shared.f32 [r26+1176], f497;
barrier.sync 0;
ld.shared.f32 f505, [r10];
ld.shared.f32 f506, [r10+1372];
ld.shared.f32 f507, [r10+2744];
ld.shared.f32 f508, [r10+4116];
ld.shared.f32 f509, [r10+5488];
ld.shared.f32 f510, [r10+6860];
ld.shared.f32 f511, [r10+8232];
add.f32 f512, f499, f504;
add.f32 f513, f498, f512;
add.f32 f514, f500, f503;
add.f32 f515, f514, f513;
add.f32 f516, f501, f502;
add.f32 f517, f506, f511;
add.f32 f518, f505, f517;
add.f32 f519, f507, f510;
add.f32 f520, f519, f518;
add.f32 f521, f508, f509;
fma.rn.f32 f522, f512, 0f3F1F9D07, f498;
mul.f32 f523, f514, 0f3E63DC87;
sub.f32 f524, f522, f523;
mul.f32 f525, f516, 0f3F66A5E5;
sub.f32 f526, f524, f525;
sub.f32 f527, f506, f511;
mul.f32 f528, f527, 0f3F48261C;
sub.f32 f529, f507, f510;
mul.f32 f530, f529, 0fBF7994E0;
sub.f32 f531, f530, f528;
sub.f32 f532, f508, f509;
mul.f32 f533, f532, 0f3EDE2602;
sub.f32 f534, f531, f533;
mul.f32 f535, f512, 0f3E63DC87;
sub.f32 f536, f498, f535;
mul.f32 f537, f514, 0f3F66A5E5;
sub.f32 f538, f536, f537;
fma.rn.f32 f539, f516, 0f3F1F9D07, f538;
mul.f32 f540, f527, 0f3F7994E0;
mul.f32 f541, f529, 0f3EDE2602;
sub.f32 f542, f541, f540;
fma.rn.f32 f543, f532, 0f3F48261C, f542;
mul.f32 f544, f512, 0f3F66A5E5;
sub.f32 f545, f498, f544;
fma.rn.f32 f546, f514, 0f3F1F9D07, f545;
mul.f32 f547, f516, 0f3E63DC87;
sub.f32 f548, f546, f547;
mul.f32 f549, f527, 0f3EDE2602;
mul.f32 f550, f529, 0f3F48261C;
sub.f32 f551, f550, f549;
mul.f32 f552, f532, 0f3F7994E0;
sub.f32 f553, f551, f552;
fma.rn.f32 f554, f517, 0f3F1F9D07, f505;
mul.f32 f555, f519, 0f3E63DC87;
sub.f32 f556, f554, f555;
mul.f32 f557, f521, 0f3F66A5E5;
sub.f32 f558, f556, f557;
sub.f32 f559, f499, f504;
mul.f32 f560, f559, 0f3F48261C;
sub.f32 f561, f500, f503;
mul.f32 f562, f561, 0fBF7994E0;
sub.f32 f563, f562, f560;
sub.f32 f564, f501, f502;
mul.f32 f565, f564, 0f3EDE2602;
sub.f32 f566, f563, f565;
mul.f32 f567, f517, 0f3E63DC87;
sub.f32 f568, f505, f567;
mul.f32 f569, f519, 0f3F66A5E5;
sub.f32 f570, f568, f569;
fma.rn.f32 f571, f521, 0f3F1F9D07, f570;
mul.f32 f572, f559, 0f3F7994E0;
mul.f32 f573, f561, 0f3EDE2602;
sub.f32 f574, f573, f572;
fma.rn.f32 f575, f564, 0f3F48261C, f574;
mul.f32 f576, f517, 0f3F66A5E5;
sub.f32 f577, f505, f576;
fma.rn.f32 f578, f519, 0f3F1F9D07, f577;
mul.f32 f579, f521, 0f3E63DC87;
sub.f32 f580, f578, f579;
mul.f32 f581, f559, 0f3EDE2602;
mul.f32 f582, f561, 0f3F48261C;
sub.f32 f583, f582, f581;
mul.f32 f584, f564, 0f3F7994E0;
sub.f32 f585, f583, f584;
add.f32 %0, f516, f515;
add.f32 %1, f521, f520;
add.f32 %3, f566, f558;
sub.f32 %2, f526, f534;
sub.f32 %4, f539, f543;
add.f32 %5, f575, f571;
sub.f32 %6, f548, f553;
add.f32 %7, f585, f580;
add.f32 %8, f553, f548;
sub.f32 %9, f580, f585;
add.f32 %10, f543, f539;
sub.f32 %11, f571, f575;
sub.f32 %13, f558, f566;
add.f32 %12, f534, f526;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y): "r"(smem), "l"(lut_sp_7_2401), "l"(lut_sp_7_343), "l"(lut_sp_7_49), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y));
};


#endif


//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_1296_FP32_FWD_PTX_HPP
#define CUFFTDX_FFT_1296_FP32_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<188, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<460>;
.reg .b32 r<24>;
.reg .b64 rd<17>;
mov.u32 r1, %tid.y;
mov.u32 r2, %12;
mad.lo.s32 r3, r1, 10368, r2;
add.f32 f25, %21, %26;
add.f32 f26, %16, f25;
add.f32 f27, %23, %28;
add.f32 f28, %17, f27;
mul.f32 f29, f25, 0f3F000000;
sub.f32 f30, %16, f29;
sub.f32 f31, %23, %28;
mul.f32 f32, f31, 0f3F5DB3D7;
add.f32 f33, f32, f30;
sub.f32 f34, f30, f32;
mul.f32 f35, f27, 0f3F000000;
sub.f32 f36, %17, f35;
sub.f32 f37, %21, %26;
mul.f32 f38, f37, 0f3F5DB3D7;
sub.f32 f39, f36, f38;
add.f32 f40, f38, f36;
add.f32 f41, %24, %29;
add.f32 f42, %18, f41;
add.f32 f43, %25, %30;
add.f32 f44, %20, f43;
mul.f32 f45, f41, 0f3F000000;
sub.f32 f46, %18, f45;
sub.f32 f47, %25, %30;
mul.f32 f48, f47, 0f3F5DB3D7;
add.f32 f49, f48, f46;
sub.f32 f50, f46, f48;
mul.f32 f51, f43, 0f3F000000;
sub.f32 f52, %20, f51;
sub.f32 f53, %24, %29;
mul.f32 f54, f53, 0f3F5DB3D7;
sub.f32 f55, f52, f54;
add.f32 f56, f54, f52;
mul.f32 f57, f49, 0f3F000000;
mul.f32 f58, f55, 0fBF5DB3D7;
sub.f32 f59, f57, f58;
mul.f32 f60, f55, 0f3F000000;
fma.rn.f32 f61, f49, 0fBF5DB3D7, f60;
mul.f32 f62, f50, 0fBF000000;
mul.f32 f63, f56, 0fBF5DB3D7;
sub.f32 f64, f62, f63;
mul.f32 f65, f56, 0fBF000000;
fma.rn.f32 f66, f50, 0fBF5DB3D7, f65;
sub.f32 f67, f26, f42;
sub.f32 f68, f28, f44;
add.f32 f69, f33, f59;
add.f32 f70, f39, f61;
sub.f32 f71, f33, f59;
sub.f32 f72, f39, f61;
add.f32 f73, f34, f64;
add.f32 f74, f40, f66;
sub.f32 f75, f34, f64;
sub.f32 f76, f40, f66;
mov.u32 r4, %tid.x;
shr.u32 r5, r4, 3;
mul.wide.u32 rd2, r5, 159072863;
shr.u64 rd3, rd2, 32;
cvt.u32.u64 r6, rd3;
mul.lo.s32 r7, r6, 216;
sub.s32 r8, r4, r7;
mad.lo.s32 r9, r6, 10368, r3;
mul.wide.u32 rd4, r8, 8;
mov.u64 rd5, %13;
add.s64 rd6, rd5, rd4;
ld.global.v2.f32 {f77, f78}, [rd6];
mul.f32 f81, f77, f69;
mul.f32 f82, f78, f70;
mul.f32 f83, f77, f70;
mul.f32 f84, f77, f77;
mul.f32 f85, f78, f78;
sub.f32 f86, f84, f85;
mul.f32 f87, f78, f77;
fma.rn.f32 f88, f78, f77, f87;
mul.f32 f89, f86, f73;
mul.f32 f90, f88, f74;
mul.f32 f91, f86, f74;
mul.f32 f92, f77, f86;
mul.f32 f93, f78, f88;
sub.f32 f94, f92, f93;
mul.f32 f95, f77, f88;
fma.rn.f32 f96, f78, f86, f95;
mul.f32 f97, f94, f67;
mul.f32 f98, f96, f68;
mul.f32 f99, f94, f68;
mul.f32 f100, f77, f94;
mul.f32 f101, f78, f96;
sub.f32 f102, f100, f101;
mul.f32 f103, f77, f96;
fma.rn.f32 f104, f78, f94, f103;
mul.f32 f105, f102, f71;
mul.f32 f106, f104, f72;
mul.f32 f107, f102, f72;
mul.f32 f108, f77, f102;
mul.f32 f109, f78, f104;
sub.f32 f110, f108, f109;
mul.f32 f111, f77, f104;
fma.rn.f32 f112, f78, f102, f111;
mul.f32 f113, f110, f75;
mul.f32 f114, f112, f76;
mul.f32 f115, f110, f76;
barrier.sync 0;
mad.lo.s32 r10, r8, 48, r9;
add.f32 f116, f28, f44;
add.f32 f117, f26, f42;
st.shared.v2.f32 [r10], {f117, f116};
fma.rn.f32 f118, f78, f69, f83;
sub.f32 f119, f81, f82;
st.shared.v2.f32 [r10+8], {f119, f118};
fma.rn.f32 f120, f88, f73, f91;
sub.f32 f121, f89, f90;
st.shared.v2.f32 [r10+16], {f121, f120};
fma.rn.f32 f122, f96, f67, f99;
sub.f32 f123, f97, f98;
st.shared.v2.f32 [r10+24], {f123, f122};
fma.rn.f32 f124, f104, f71, f107;
sub.f32 f125, f105, f106;
st.shared.v2.f32 [r10+32], {f125, f124};
fma.rn.f32 f126, f112, f75, f115;
sub.f32 f127, f113, f114;
st.shared.v2.f32 [r10+40], {f127, f126};
barrier.sync 0;
mad.lo.s32 r11, r8, -40, r10;
ld.shared.v2.f32 {f128, f129}, [r11];
ld.shared.v2.f32 {f132, f133}, [r11+1728];
ld.shared.v2.f32 {f136, f137}, [r11+3456];
ld.shared.v2.f32 {f140, f141}, [r11+5184];
ld.shared.v2.f32 {f144, f145}, [r11+6912];
ld.shared.v2.f32 {f148, f149}, [r11+8640];
add.f32 f152, f136, f144;
add.f32 f153, f128, f152;
add.f32 f154, f137, f145;
add.f32 f155, f129, f154;
mul.f32 f156, f152, 0f3F000000;
sub.f32 f157, f128, f156;
sub.f32 f158, f137, f145;
mul.f32 f159, f158, 0f3F5DB3D7;
add.f32 f160, f159, f157;
sub.f32 f161, f157, f159;
mul.f32 f162, f154, 0f3F000000;
sub.f32 f163, f129, f162;
sub.f32 f164, f136, f144;
mul.f32 f165, f164, 0f3F5DB3D7;
sub.f32 f166, f163, f165;
add.f32 f167, f165, f163;
add.f32 f168, f140, f148;
add.f32 f169, f132, f168;
add.f32 f170, f141, f149;
add.f32 f171, f133, f170;
mul.f32 f172, f168, 0f3F000000;
sub.f32 f173, f132, f172;
sub.f32 f174, f141, f149;
mul.f32 f175, f174, 0f3F5DB3D7;
add.f32 f176, f175, f173;
sub.f32 f177, f173, f175;
mul.f32 f178, f170, 0f3F000000;
sub.f32 f179, f133, f178;
sub.f32 f180, f140, f148;
mul.f32 f181, f180, 0f3F5DB3D7;
sub.f32 f182, f179, f181;
add.f32 f183, f181, f179;
mul.f32 f184, f176, 0f3F000000;
mul.f32 f185, f182, 0fBF5DB3D7;
sub.f32 f186, f184, f185;
mul.f32 f187, f182, 0f3F000000;
fma.rn.f32 f188, f176, 0fBF5DB3D7, f187;
mul.f32 f189, f177, 0fBF000000;
mul.f32 f190, f183, 0fBF5DB3D7;
sub.f32 f191, f189, f190;
mul.f32 f192, f183, 0fBF000000;
fma.rn.f32 f193, f177, 0fBF5DB3D7, f192;
sub.f32 f194, f153, f169;
sub.f32 f195, f155, f171;
add.f32 f196, f160, f186;
add.f32 f197, f166, f188;
sub.f32 f198, f160, f186;
sub.f32 f199, f166, f188;
add.f32 f200, f161, f191;
add.f32 f201, f167, f193;
sub.f32 f202, f161, f191;
sub.f32 f203, f167, f193;
mul.wide.u32 rd7, r8, -1431655765;
shr.u64 rd8, rd7, 34;
cvt.u32.u64 r12, rd8;
mul.lo.s32 r13, r12, 6;
sub.s32 r14, r8, r13;
mul.wide.u32 rd9, r12, 8;
mov.u64 rd10, %14;
add.s64 rd11, rd10, rd9;
ld.global.v2.f32 {f204, f205}, [rd11];
mul.f32 f208, f204, f196;
mul.f32 f209, f205, f197;
mul.f32 f210, f204, f197;
mul.f32 f211, f204, f204;
mul.f32 f212, f205, f205;
sub.f32 f213, f211, f212;
mul.f32 f214, f205, f204;
fma.rn.f32 f215, f205, f204, f214;
mul.f32 f216, f213, f200;
mul.f32 f217, f215, f201;
mul.f32 f218, f213, f201;
mul.f32 f219, f204, f213;
mul.f32 f220, f205, f215;
sub.f32 f221, f219, f220;
mul.f32 f222, f204, f215;
fma.rn.f32 f223, f205, f213, f222;
mul.f32 f224, f221, f194;
mul.f32 f225, f223, f195;
mul.f32 f226, f221, f195;
mul.f32 f227, f204, f221;
mul.f32 f228, f205, f223;
sub.f32 f229, f227, f228;
mul.f32 f230, f204, f223;
fma.rn.f32 f231, f205, f221, f230;
mul.f32 f232, f229, f198;
mul.f32 f233, f231, f199;
mul.f32 f234, f229, f199;
mul.f32 f235, f204, f229;
mul.f32 f236, f205, f231;
sub.f32 f237, f235, f236;
mul.f32 f238, f204, f231;
fma.rn.f32 f239, f205, f229, f238;
mul.f32 f240, f237, f202;
mul.f32 f241, f239, f203;
mul.f32 f242, f237, f203;
shl.b32 r15, r14, 3;
add.s32 r16, r9, r15;
barrier.sync 0;
mad.lo.s32 r17, r12, 288, r16;
add.f32 f243, f155, f171;
add.f32 f244, f153, f169;
st.shared.v2.f32 [r17], {f244, f243};
fma.rn.f32 f245, f205, f196, f210;
sub.f32 f246, f208, f209;
st.shared.v2.f32 [r17+48], {f246, f245};
fma.rn.f32 f247, f215, f200, f218;
sub.f32 f248, f216, f217;
st.shared.v2.f32 [r17+96], {f248, f247};
fma.rn.f32 f249, f223, f194, f226;
sub.f32 f250, f224, f225;
st.shared.v2.f32 [r17+144], {f250, f249};
fma.rn.f32 f251, f231, f198, f234;
sub.f32 f252, f232, f233;
st.shared.v2.f32 [r17+192], {f252, f251};
sub.f32 f253, f240, f241;
fma.rn.f32 f254, f239, f202, f242;
st.shared.v2.f32 [r17+240], {f253, f254};
barrier.sync 0;
ld.shared.v2.f32 {f255, f256}, [r11];
ld.shared.v2.f32 {f259, f260}, [r11+1728];
ld.shared.v2.f32 {f263, f264}, [r11+3456];
ld.shared.v2.f32 {f267, f268}, [r11+5184];
ld.shared.v2.f32 {f271, f272}, [r11+6912];
ld.shared.v2.f32 {f275, f276}, [r11+8640];
add.f32 f279, f263, f271;
add.f32 f280, f255, f279;
add.f32 f281, f264, f272;
add.f32 f282, f256, f281;
mul.f32 f283, f279, 0f3F000000;
sub.f32 f284, f255, f283;
sub.f32 f285, f264, f272;
mul.f32 f286, f285, 0f3F5DB3D7;
add.f32 f287, f286, f284;
sub.f32 f288, f284, f286;
mul.f32 f289, f281, 0f3F000000;
sub.f32 f290, f256, f289;
sub.f32 f291, f263, f271;
mul.f32 f292, f291, 0f3F5DB3D7;
sub.f32 f293, f290, f292;
add.f32 f294, f292, f290;
add.f32 f295, f267, f275;
add.f32 f296, f259, f295;
add.f32 f297, f268, f276;
add.f32 f298, f260, f297;
mul.f32 f299, f295, 0f3F000000;
sub.f32 f300, f259, f299;
sub.f32 f301, f268, f276;
mul.f32 f302, f301, 0f3F5DB3D7;
add.f32 f303, f302, f300;
sub.f32 f304, f300, f302;
mul.f32 f305, f297, 0f3F000000;
sub.f32 f306, f260, f305;
sub.f32 f307, f267, f275;
mul.f32 f308, f307, 0f3F5DB3D7;
sub.f32 f309, f306, f308;
add.f32 f310, f308, f306;
mul.f32 f311, f303, 0f3F000000;
mul.f32 f312, f309, 0fBF5DB3D7;
sub.f32 f313, f311, f312;
mul.f32 f314, f309, 0f3F000000;
fma.rn.f32 f315, f303, 0fBF5DB3D7, f314;
mul.f32 f316, f304, 0fBF000000;
mul.f32 f317, f310, 0fBF5DB3D7;
sub.f32 f318, f316, f317;
mul.f32 f319, f310, 0fBF000000;
fma.rn.f32 f320, f304, 0fBF5DB3D7, f319;
sub.f32 f321, f280, f296;
sub.f32 f322, f282, f298;
add.f32 f323, f287, f313;
add.f32 f324, f293, f315;
sub.f32 f325, f287, f313;
sub.f32 f326, f293, f315;
add.f32 f327, f288, f318;
add.f32 f328, f294, f320;
sub.f32 f329, f288, f318;
sub.f32 f330, f294, f320;
mul.wide.u32 rd12, r8, 954437177;
shr.u64 rd13, rd12, 35;
cvt.u32.u64 r18, rd13;
mul.lo.s32 r19, r18, 36;
sub.s32 r20, r8, r19;
mul.wide.u32 rd14, r18, 8;
mov.u64 rd15, %15;
add.s64 rd16, rd15, rd14;
ld.global.v2.f32 {f331, f332}, [rd16];
mul.f32 f335, f331, f323;
mul.f32 f336, f332, f324;
mul.f32 f337, f331, f324;
mul.f32 f338, f331, f331;
mul.f32 f339, f332, f332;
sub.f32 f340, f338, f339;
mul.f32 f341, f332, f331;
fma.rn.f32 f342, f332, f331, f341;
mul.f32 f343, f340, f327;
mul.f32 f344, f342, f328;
mul.f32 f345, f340, f328;
mul.f32 f346, f331, f340;
mul.f32 f347, f332, f342;
sub.f32 f348, f346, f347;
mul.f32 f349, f331, f342;
fma.rn.f32 f350, f332, f340, f349;
mul.f32 f351, f348, f321;
mul.f32 f352, f350, f322;
mul.f32 f353, f348, f322;
mul.f32 f354, f331, f348;
mul.f32 f355, f332, f350;
sub.f32 f356, f354, f355;
mul.f32 f357, f331, f350;
fma.rn.f32 f358, f332, f348, f357;
mul.f32 f359, f356, f325;
mul.f32 f360, f358, f326;
mul.f32 f361, f356, f326;
mul.f32 f362, f331, f356;
mul.f32 f363, f332, f358;
sub.f32 f364, f362, f363;
mul.f32 f365, f331, f358;
fma.rn.f32 f366, f332, f356, f365;
mul.f32 f367, f364, f329;
mul.f32 f368, f366, f330;
mul.f32 f369, f364, f330;
shl.b32 r21, r20, 3;
add.s32 r22, r9, r21;
barrier.sync 0;
mad.lo.s32 r23, r18, 1728, r22;
add.f32 f370, f282, f298;
add.f32 f371, f280, f296;
st.shared.v2.f32 [r23], {f371, f370};
fma.rn.f32 f372, f332, f323, f337;
sub.f32 f373, f335, f336;
st.shared.v2.f32 [r23+288], {f373, f372};
fma.rn.f32 f374, f342, f327, f345;
sub.f32 f375, f343, f344;
st.shared.v2.f32 [r23+576], {f375, f374};
fma.rn.f32 f376, f350, f321, f353;
sub.f32 f377, f351, f352;
st.shared.v2.f32 [r23+864], {f377, f376};
fma.rn.f32 f378, f358, f325, f361;
sub.f32 f379, f359, f360;
st.shared.v2.f32 [r23+1152], {f379, f378};
sub.f32 f380, f367, f368;
fma.rn.f32 f381, f366, f329, f369;
st.shared.v2.f32 [r23+1440], {f380, f381};
barrier.sync 0;
ld.shared.v2.f32 {f382, f383}, [r11];
ld.shared.v2.f32 {f386, f387}, [r11+1728];
ld.shared.v2.f32 {f390, f391}, [r11+3456];
ld.shared.v2.f32 {f394, f395}, [r11+5184];
ld.shared.v2.f32 {f398, f399}, [r11+6912];
ld.shared.v2.f32 {f402, f403}, [r11+8640];
add.f32 f406, f390, f398;
add.f32 f407, f382, f406;
add.f32 f408, f391, f399;
add.f32 f409, f383, f408;
mul.f32 f410, f406, 0f3F000000;
sub.f32 f411, f382, f410;
sub.f32 f412, f391, f399;
mul.f32 f413, f412, 0f3F5DB3D7;
add.f32 f414, f413, f411;
sub.f32 f415, f411, f413;
mul.f32 f416, f408, 0f3F000000;
sub.f32 f417, f383, f416;
sub.f32 f418, f390, f398;
mul.f32 f419, f418, 0f3F5DB3D7;
sub.f32 f420, f417, f419;
add.f32 f421, f419, f417;
add.f32 f422, f394, f402;
add.f32 f423, f386, f422;
add.f32 f424, f395, f403;
add.f32 f425, f387, f424;
mul.f32 f426, f422, 0f3F000000;
sub.f32 f427, f386, f426;
sub.f32 f428, f395, f403;
mul.f32 f429, f428, 0f3F5DB3D7;
add.f32 f430, f429, f427;
sub.f32 f431, f427, f429;
mul.f32 f432, f424, 0f3F000000;
sub.f32 f433, f387, f432;
sub.f32 f434, f394, f402;
mul.f32 f435, f434, 0f3F5DB3D7;
sub.f32 f436, f433, f435;
add.f32 f437, f435, f433;
mul.f32 f438, f430, 0f3F000000;
mul.f32 f439, f436, 0fBF5DB3D7;
sub.f32 f440, f438, f439;
mul.f32 f441, f436, 0f3F000000;
fma.rn.f32 f442, f430, 0fBF5DB3D7, f441;
mul.f32 f443, f431, 0fBF000000;
mul.f32 f444, f437, 0fBF5DB3D7;
sub.f32 f445, f443, f444;
mul.f32 f446, f437, 0fBF000000;
fma.rn.f32 f447, f431, 0fBF5DB3D7, f446;
add.f32 %1, f409, f425;
add.f32 %0, f407, f423;
add.f32 %3, f420, f442;
add.f32 %2, f414, f440;
add.f32 %5, f421, f447;
add.f32 %4, f415, f445;
sub.f32 %7, f409, f425;
sub.f32 %6, f407, f423;
sub.f32 %9, f420, f442;
sub.f32 %8, f414, f440;
sub.f32 %11, f421, f447;
sub.f32 %10, f415, f445;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y): "r"(smem), "l"(lut_sp_6_1296), "l"(lut_sp_6_216), "l"(lut_sp_6_36), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<189, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<424>;
.reg .b32 r<24>;
.reg .b64 rd<17>;
mov.u32 r1, %tid.y;
mov.u32 r2, %12;
mad.lo.s32 r3, r1, 5184, r2;
add.f32 f25, %21, %26;
add.f32 f26, %16, f25;
add.f32 f27, %23, %28;
add.f32 f28, %17, f27;
mul.f32 f29, f25, 0f3F000000;
sub.f32 f30, %16, f29;
sub.f32 f31, %23, %28;
mul.f32 f32, f31, 0f3F5DB3D7;
add.f32 f33, f32, f30;
sub.f32 f34, f30, f32;
mul.f32 f35, f27, 0f3F000000;
sub.f32 f36, %17, f35;
sub.f32 f37, %21, %26;
mul.f32 f38, f37, 0f3F5DB3D7;
sub.f32 f39, f36, f38;
add.f32 f40, f38, f36;
add.f32 f41, %24, %29;
add.f32 f42, %18, f41;
add.f32 f43, %25, %30;
add.f32 f44, %20, f43;
mul.f32 f45, f41, 0f3F000000;
sub.f32 f46, %18, f45;
sub.f32 f47, %25, %30;
mul.f32 f48, f47, 0f3F5DB3D7;
add.f32 f49, f48, f46;
sub.f32 f50, f46, f48;
mul.f32 f51, f43, 0f3F000000;
sub.f32 f52, %20, f51;
sub.f32 f53, %24, %29;
mul.f32 f54, f53, 0f3F5DB3D7;
sub.f32 f55, f52, f54;
add.f32 f56, f54, f52;
mul.f32 f57, f49, 0f3F000000;
mul.f32 f58, f55, 0fBF5DB3D7;
sub.f32 f59, f57, f58;
mul.f32 f60, f55, 0f3F000000;
fma.rn.f32 f61, f49, 0fBF5DB3D7, f60;
mul.f32 f62, f50, 0fBF000000;
mul.f32 f63, f56, 0fBF5DB3D7;
sub.f32 f64, f62, f63;
mul.f32 f65, f56, 0fBF000000;
fma.rn.f32 f66, f50, 0fBF5DB3D7, f65;
add.f32 f67, f26, f42;
add.f32 f68, f28, f44;
sub.f32 f69, f26, f42;
sub.f32 f70, f28, f44;
add.f32 f71, f33, f59;
add.f32 f72, f39, f61;
sub.f32 f73, f33, f59;
sub.f32 f74, f39, f61;
add.f32 f75, f34, f64;
add.f32 f76, f40, f66;
sub.f32 f77, f34, f64;
sub.f32 f78, f40, f66;
mov.u32 r4, %tid.x;
shr.u32 r5, r4, 3;
mul.wide.u32 rd2, r5, 159072863;
shr.u64 rd3, rd2, 32;
cvt.u32.u64 r6, rd3;
mul.lo.s32 r7, r6, 216;
sub.s32 r8, r4, r7;
mul.wide.u32 rd4, r8, 8;
mov.u64 rd5, %13;
add.s64 rd6, rd5, rd4;
ld.global.v2.f32 {f79, f80}, [rd6];
mul.f32 f83, f79, f71;
mul.f32 f84, f80, f72;
sub.f32 f85, f83, f84;
mul.f32 f86, f79, f72;
fma.rn.f32 f87, f80, f71, f86;
mul.f32 f88, f79, f79;
mul.f32 f89, f80, f80;
sub.f32 f90, f88, f89;
mul.f32 f91, f80, f79;
fma.rn.f32 f92, f80, f79, f91;
mul.f32 f93, f90, f75;
mul.f32 f94, f92, f76;
sub.f32 f95, f93, f94;
mul.f32 f96, f90, f76;
fma.rn.f32 f97, f92, f75, f96;
mul.f32 f98, f79, f90;
mul.f32 f99, f80, f92;
sub.f32 f100, f98, f99;
mul.f32 f101, f79, f92;
fma.rn.f32 f102, f80, f90, f101;
mul.f32 f103, f100, f69;
mul.f32 f104, f102, f70;
sub.f32 f105, f103, f104;
mul.f32 f106, f100, f70;
fma.rn.f32 f107, f102, f69, f106;
mul.f32 f108, f79, f100;
mul.f32 f109, f80, f102;
sub.f32 f110, f108, f109;
mul.f32 f111, f79, f102;
fma.rn.f32 f112, f80, f100, f111;
mul.f32 f113, f110, f73;
mul.f32 f114, f112, f74;
sub.f32 f115, f113, f114;
mul.f32 f116, f110, f74;
fma.rn.f32 f117, f112, f73, f116;
mul.f32 f118, f79, f110;
mul.f32 f119, f80, f112;
sub.f32 f120, f118, f119;
mul.f32 f121, f79, f112;
fma.rn.f32 f122, f80, f110, f121;
mul.f32 f123, f120, f77;
mul.f32 f124, f122, f78;
sub.f32 f125, f123, f124;
mul.f32 f126, f120, f78;
fma.rn.f32 f127, f122, f77, f126;
mad.lo.s32 r9, r6, 5184, r3;
barrier.sync 0;
mad.lo.s32 r10, r8, 24, r9;
st.shared.v2.f32 [r10], {f67, f85};
st.shared.v2.f32 [r10+8], {f95, f105};
st.shared.v2.f32 [r10+16], {f115, f125};
barrier.sync 0;
mad.lo.s32 r11, r8, -20, r10;
ld.shared.f32 f128, [r11];
ld.shared.f32 f129, [r11+864];
ld.shared.f32 f130, [r11+1728];
ld.shared.f32 f131, [r11+2592];
ld.shared.f32 f132, [r11+3456];
ld.shared.f32 f133, [r11+4320];
barrier.sync 0;
st.shared.v2.f32 [r10], {f68, f87};
st.shared.v2.f32 [r10+8], {f97, f107};
st.shared.v2.f32 [r10+16], {f117, f127};
barrier.sync 0;
ld.shared.f32 f134, [r11];
ld.shared.f32 f135, [r11+864];
ld.shared.f32 f136, [r11+1728];
ld.shared.f32 f137, [r11+2592];
ld.shared.f32 f138, [r11+3456];
ld.shared.f32 f139, [r11+4320];
add.f32 f140, f130, f132;
add.f32 f141, f128, f140;
add.f32 f142, f136, f138;
add.f32 f143, f134, f142;
mul.f32 f144, f140, 0f3F000000;
sub.f32 f145, f128, f144;
sub.f32 f146, f136, f138;
mul.f32 f147, f146, 0f3F5DB3D7;
add.f32 f148, f147, f145;
sub.f32 f149, f145, f147;
mul.f32 f150, f142, 0f3F000000;
sub.f32 f151, f134, f150;
sub.f32 f152, f130, f132;
mul.f32 f153, f152, 0f3F5DB3D7;
sub.f32 f154, f151, f153;
add.f32 f155, f153, f151;
add.f32 f156, f131, f133;
add.f32 f157, f129, f156;
add.f32 f158, f137, f139;
add.f32 f159, f135, f158;
mul.f32 f160, f156, 0f3F000000;
sub.f32 f161, f129, f160;
sub.f32 f162, f137, f139;
mul.f32 f163, f162, 0f3F5DB3D7;
add.f32 f164, f163, f161;
sub.f32 f165, f161, f163;
mul.f32 f166, f158, 0f3F000000;
sub.f32 f167, f135, f166;
sub.f32 f168, f131, f133;
mul.f32 f169, f168, 0f3F5DB3D7;
sub.f32 f170, f167, f169;
add.f32 f171, f169, f167;
mul.f32 f172, f164, 0f3F000000;
mul.f32 f173, f170, 0fBF5DB3D7;
sub.f32 f174, f172, f173;
mul.f32 f175, f170, 0f3F000000;
fma.rn.f32 f176, f164, 0fBF5DB3D7, f175;
mul.f32 f177, f165, 0fBF000000;
mul.f32 f178, f171, 0fBF5DB3D7;
sub.f32 f179, f177, f178;
mul.f32 f180, f171, 0fBF000000;
fma.rn.f32 f181, f165, 0fBF5DB3D7, f180;
add.f32 f182, f141, f157;
add.f32 f183, f143, f159;
sub.f32 f184, f141, f157;
sub.f32 f185, f143, f159;
add.f32 f186, f148, f174;
add.f32 f187, f154, f176;
sub.f32 f188, f148, f174;
sub.f32 f189, f154, f176;
add.f32 f190, f149, f179;
add.f32 f191, f155, f181;
sub.f32 f192, f149, f179;
sub.f32 f193, f155, f181;
mul.wide.u32 rd7, r8, -1431655765;
shr.u64 rd8, rd7, 34;
cvt.u32.u64 r12, rd8;
mul.lo.s32 r13, r12, 6;
sub.s32 r14, r8, r13;
mul.wide.u32 rd9, r12, 8;
mov.u64 rd10, %14;
add.s64 rd11, rd10, rd9;
ld.global.v2.f32 {f194, f195}, [rd11];
mul.f32 f198, f194, f186;
mul.f32 f199, f195, f187;
sub.f32 f200, f198, f199;
mul.f32 f201, f194, f187;
fma.rn.f32 f202, f195, f186, f201;
mul.f32 f203, f194, f194;
mul.f32 f204, f195, f195;
sub.f32 f205, f203, f204;
mul.f32 f206, f195, f194;
fma.rn.f32 f207, f195, f194, f206;
mul.f32 f208, f205, f190;
mul.f32 f209, f207, f191;
sub.f32 f210, f208, f209;
mul.f32 f211, f205, f191;
fma.rn.f32 f212, f207, f190, f211;
mul.f32 f213, f194, f205;
mul.f32 f214, f195, f207;
sub.f32 f215, f213, f214;
mul.f32 f216, f194, f207;
fma.rn.f32 f217, f195, f205, f216;
mul.f32 f218, f215, f184;
mul.f32 f219, f217, f185;
sub.f32 f220, f218, f219;
mul.f32 f221, f215, f185;
fma.rn.f32 f222, f217, f184, f221;
mul.f32 f223, f194, f215;
mul.f32 f224, f195, f217;
sub.f32 f225, f223, f224;
mul.f32 f226, f194, f217;
fma.rn.f32 f227, f195, f215, f226;
mul.f32 f228, f225, f188;
mul.f32 f229, f227, f189;
sub.f32 f230, f228, f229;
mul.f32 f231, f225, f189;
fma.rn.f32 f232, f227, f188, f231;
mul.f32 f233, f194, f225;
mul.f32 f234, f195, f227;
sub.f32 f235, f233, f234;
mul.f32 f236, f194, f227;
fma.rn.f32 f237, f195, f225, f236;
mul.f32 f238, f235, f192;
mul.f32 f239, f237, f193;
sub.f32 f240, f238, f239;
mul.f32 f241, f235, f193;
fma.rn.f32 f242, f237, f192, f241;
shl.b32 r15, r14, 2;
add.s32 r16, r9, r15;
barrier.sync 0;
mad.lo.s32 r17, r12, 144, r16;
st.shared.f32 [r17], f182;
st.shared.f32 [r17+24], f200;
st.shared.f32 [r17+48], f210;
st.shared.f32 [r17+72], f220;
st.shared.f32 [r17+96], f230;
st.shared.f32 [r17+120], f240;
barrier.sync 0;
ld.shared.f32 f243, [r11];
ld.shared.f32 f244, [r11+864];
ld.shared.f32 f245, [r11+1728];
ld.shared.f32 f246, [r11+2592];
ld.shared.f32 f247, [r11+3456];
ld.shared.f32 f248, [r11+4320];
barrier.sync 0;
st.shared.f32 [r17], f183;
st.shared.f32 [r17+24], f202;
st.shared.f32 [r17+48], f212;
st.shared.f32 [r17+72], f222;
st.shared.f32 [r17+96], f232;
st.shared.f32 [r17+120], f242;
barrier.sync 0;
ld.shared.f32 f249, [r11];
ld.shared.f32 f250, [r11+864];
ld.shared.f32 f251, [r11+1728];
ld.shared.f32 f252, [r11+2592];
ld.shared.f32 f253, [r11+3456];
ld.shared.f32 f254, [r11+4320];
add.f32 f255, f245, f247;
add.f32 f256, f243, f255;
add.f32 f257, f251, f253;
add.f32 f258, f249, f257;
mul.f32 f259, f255, 0f3F000000;
sub.f32 f260, f243, f259;
sub.f32 f261, f251, f253;
mul.f32 f262, f261, 0f3F5DB3D7;
add.f32 f263, f262, f260;
sub.f32 f264, f260, f262;
mul.f32 f265, f257, 0f3F000000;
sub.f32 f266, f249, f265;
sub.f32 f267, f245, f247;
mul.f32 f268, f267, 0f3F5DB3D7;
sub.f32 f269, f266, f268;
add.f32 f270, f268, f266;
add.f32 f271, f246, f248;
add.f32 f272, f244, f271;
add.f32 f273, f252, f254;
add.f32 f274, f250, f273;
mul.f32 f275, f271, 0f3F000000;
sub.f32 f276, f244, f275;
sub.f32 f277, f252, f254;
mul.f32 f278, f277, 0f3F5DB3D7;
add.f32 f279, f278, f276;
sub.f32 f280, f276, f278;
mul.f32 f281, f273, 0f3F000000;
sub.f32 f282, f250, f281;
sub.f32 f283, f246, f248;
mul.f32 f284, f283, 0f3F5DB3D7;
sub.f32 f285, f282, f284;
add.f32 f286, f284, f282;
mul.f32 f287, f279, 0f3F000000;
mul.f32 f288, f285, 0fBF5DB3D7;
sub.f32 f289, f287, f288;
mul.f32 f290, f285, 0f3F000000;
fma.rn.f32 f291, f279, 0fBF5DB3D7, f290;
mul.f32 f292, f280, 0fBF000000;
mul.f32 f293, f286, 0fBF5DB3D7;
sub.f32 f294, f292, f293;
mul.f32 f295, f286, 0fBF000000;
fma.rn.f32 f296, f280, 0fBF5DB3D7, f295;
add.f32 f297, f256, f272;
add.f32 f298, f258, f274;
sub.f32 f299, f256, f272;
sub.f32 f300, f258, f274;
add.f32 f301, f263, f289;
add.f32 f302, f269, f291;
sub.f32 f303, f263, f289;
sub.f32 f304, f269, f291;
add.f32 f305, f264, f294;
add.f32 f306, f270, f296;
sub.f32 f307, f264, f294;
sub.f32 f308, f270, f296;
mul.wide.u32 rd12, r8, 954437177;
shr.u64 rd13, rd12, 35;
cvt.u32.u64 r18, rd13;
mul.lo.s32 r19, r18, 36;
sub.s32 r20, r8, r19;
mul.wide.u32 rd14, r18, 8;
mov.u64 rd15, %15;
add.s64 rd16, rd15, rd14;
ld.global.v2.f32 {f309, f310}, [rd16];
mul.f32 f313, f309, f301;
mul.f32 f314, f310, f302;
sub.f32 f315, f313, f314;
mul.f32 f316, f309, f302;
fma.rn.f32 f317, f310, f301, f316;
mul.f32 f318, f309, f309;
mul.f32 f319, f310, f310;
sub.f32 f320, f318, f319;
mul.f32 f321, f310, f309;
fma.rn.f32 f322, f310, f309, f321;
mul.f32 f323, f320, f305;
mul.f32 f324, f322, f306;
sub.f32 f325, f323, f324;
mul.f32 f326, f320, f306;
fma.rn.f32 f327, f322, f305, f326;
mul.f32 f328, f309, f320;
mul.f32 f329, f310, f322;
sub.f32 f330, f328, f329;
mul.f32 f331, f309, f322;
fma.rn.f32 f332, f310, f320, f331;
mul.f32 f333, f330, f299;
mul.f32 f334, f332, f300;
sub.f32 f335, f333, f334;
mul.f32 f336, f330, f300;
fma.rn.f32 f337, f332, f299, f336;
mul.f32 f338, f309, f330;
mul.f32 f339, f310, f332;
sub.f32 f340, f338, f339;
mul.f32 f341, f309, f332;
fma.rn.f32 f342, f310, f330, f341;
mul.f32 f343, f340, f303;
mul.f32 f344, f342, f304;
sub.f32 f345, f343, f344;
mul.f32 f346, f340, f304;
fma.rn.f32 f347, f342, f303, f346;
mul.f32 f348, f309, f340;
mul.f32 f349, f310, f342;
sub.f32 f350, f348, f349;
mul.f32 f351, f309, f342;
fma.rn.f32 f352, f310, f340, f351;
mul.f32 f353, f350, f307;
mul.f32 f354, f352, f308;
sub.f32 f355, f353, f354;
mul.f32 f356, f350, f308;
fma.rn.f32 f357, f352, f307, f356;
shl.b32 r21, r20, 2;
add.s32 r22, r9, r21;
barrier.sync 0;
mad.lo.s32 r23, r18, 864, r22;
st.shared.f32 [r23], f297;
st.shared.f32 [r23+144], f315;
st.shared.f32 [r23+288], f325;
st.shared.f32 [r23+432], f335;
st.shared.f32 [r23+576], f345;
st.shared.f32 [r23+720], f355;
barrier.sync 0;
ld.shared.f32 f358, [r11];
ld.shared.f32 f359, [r11+864];
ld.shared.f32 f360, [r11+1728];
ld.shared.f32 f361, [r11+2592];
ld.shared.f32 f362, [r11+3456];
ld.shared.f32 f363, [r11+4320];
barrier.sync 0;
st.shared.f32 [r23], f298;
st.shared.f32 [r23+144], f317;
st.shared.f32 [r23+288], f327;
st.shared.f32 [r23+432], f337;
st.shared.f32 [r23+576], f347;
st.shared.f32 [r23+720], f357;
barrier.sync 0;
ld.shared.f32 f364, [r11];
ld.shared.f32 f365, [r11+864];
ld.shared.f32 f366, [r11+1728];
ld.shared.f32 f367, [r11+2592];
ld.shared.f32 f368, [r11+3456];
ld.shared.f32 f369, [r11+4320];
add.f32 f370, f360, f362;
add.f32 f371, f358, f370;
add.f32 f372, f366, f368;
add.f32 f373, f364, f372;
mul.f32 f374, f370, 0f3F000000;
sub.f32 f375, f358, f374;
sub.f32 f376, f366, f368;
mul.f32 f377, f376, 0f3F5DB3D7;
add.f32 f378, f377, f375;
sub.f32 f379, f375, f377;
mul.f32 f380, f372, 0f3F000000;
sub.f32 f381, f364, f380;
sub.f32 f382, f360, f362;
mul.f32 f383, f382, 0f3F5DB3D7;
sub.f32 f384, f381, f383;
add.f32 f385, f383, f381;
add.f32 f386, f361, f363;
add.f32 f387, f359, f386;
add.f32 f388, f367, f369;
add.f32 f389, f365, f388;
mul.f32 f390, f386, 0f3F000000;
sub.f32 f391, f359, f390;
sub.f32 f392, f367, f369;
mul.f32 f393, f392, 0f3F5DB3D7;
add.f32 f394, f393, f391;
sub.f32 f395, f391, f393;
mul.f32 f396, f388, 0f3F000000;
sub.f32 f397, f365, f396;
sub.f32 f398, f361, f363;
mul.f32 f399, f398, 0f3F5DB3D7;
sub.f32 f400, f397, f399;
add.f32 f401, f399, f397;
mul.f32 f402, f394, 0f3F000000;
mul.f32 f403, f400, 0fBF5DB3D7;
sub.f32 f404, f402, f403;
mul.f32 f405, f400, 0f3F000000;
fma.rn.f32 f406, f394, 0fBF5DB3D7, f405;
mul.f32 f407, f395, 0fBF000000;
mul.f32 f408, f401, 0fBF5DB3D7;
sub.f32 f409, f407, f408;
mul.f32 f410, f401, 0fBF000000;
fma.rn.f32 f411, f395, 0fBF5DB3D7, f410;
add.f32 %0, f371, f387;
add.f32 %1, f373, f389;
add.f32 %3, f384, f406;
add.f32 %2, f378, f404;
add.f32 %5, f385, f411;
add.f32 %4, f379, f409;
sub.f32 %6, f371, f387;
sub.f32 %7, f373, f389;
sub.f32 %9, f384, f406;
sub.f32 %8, f378, f404;
sub.f32 %11, f385, f411;
sub.f32 %10, f379, f409;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y): "r"(smem), "l"(lut_sp_6_1296), "l"(lut_sp_6_216), "l"(lut_sp_6_36), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y));
};


#endif


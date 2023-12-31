//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_100_FP64_INV_PTX_HPP
#define CUFFTDX_FFT_100_FP64_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<738, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .b32 r<11>;
.reg .f64 fd<397>;
.reg .b64 rd<7>;
mov.u32 r1, %tid.y;
mov.u32 r2, %20;
mad.lo.s32 r3, r1, 800, r2;
add.f64 fd41, %27, %43;
add.f64 fd42, %22, fd41;
add.f64 fd43, %32, %38;
add.f64 fd44, fd43, fd42;
add.f64 fd45, %29, %45;
add.f64 fd46, %23, fd45;
add.f64 fd47, %34, %39;
add.f64 fd48, fd47, fd46;
fma.rn.f64 fd49, fd41, 0d3FD3C6EF372FE950, %22;
mul.f64 fd50, fd43, 0d3FE9E3779B97F4A8;
sub.f64 fd51, fd49, fd50;
sub.f64 fd52, %29, %45;
mul.f64 fd53, fd52, 0d3FEE6F0E134454FF;
sub.f64 fd54, %34, %39;
fma.rn.f64 fd55, fd54, 0d3FE2CF2304755A5E, fd53;
sub.f64 fd56, fd51, fd55;
add.f64 fd57, fd55, fd51;
mul.f64 fd58, fd41, 0d3FE9E3779B97F4A8;
sub.f64 fd59, %22, fd58;
fma.rn.f64 fd60, fd43, 0d3FD3C6EF372FE950, fd59;
mul.f64 fd61, fd52, 0d3FE2CF2304755A5E;
mul.f64 fd62, fd54, 0d3FEE6F0E134454FF;
sub.f64 fd63, fd61, fd62;
sub.f64 fd64, fd60, fd63;
add.f64 fd65, fd63, fd60;
fma.rn.f64 fd66, fd45, 0d3FD3C6EF372FE950, %23;
mul.f64 fd67, fd47, 0d3FE9E3779B97F4A8;
sub.f64 fd68, fd66, fd67;
sub.f64 fd69, %27, %43;
mul.f64 fd70, fd69, 0d3FEE6F0E134454FF;
sub.f64 fd71, %32, %38;
fma.rn.f64 fd72, fd71, 0d3FE2CF2304755A5E, fd70;
add.f64 fd73, fd72, fd68;
sub.f64 fd74, fd68, fd72;
mul.f64 fd75, fd45, 0d3FE9E3779B97F4A8;
sub.f64 fd76, %23, fd75;
fma.rn.f64 fd77, fd47, 0d3FD3C6EF372FE950, fd76;
mul.f64 fd78, fd69, 0d3FE2CF2304755A5E;
mul.f64 fd79, fd71, 0d3FEE6F0E134454FF;
sub.f64 fd80, fd78, fd79;
add.f64 fd81, fd80, fd77;
sub.f64 fd82, fd77, fd80;
add.f64 fd83, %30, %46;
add.f64 fd84, %24, fd83;
add.f64 fd85, %35, %40;
add.f64 fd86, fd85, fd84;
add.f64 fd87, %31, %47;
add.f64 fd88, %26, fd87;
add.f64 fd89, %37, %42;
add.f64 fd90, fd89, fd88;
fma.rn.f64 fd91, fd83, 0d3FD3C6EF372FE950, %24;
mul.f64 fd92, fd85, 0d3FE9E3779B97F4A8;
sub.f64 fd93, fd91, fd92;
sub.f64 fd94, %31, %47;
mul.f64 fd95, fd94, 0d3FEE6F0E134454FF;
sub.f64 fd96, %37, %42;
fma.rn.f64 fd97, fd96, 0d3FE2CF2304755A5E, fd95;
sub.f64 fd98, fd93, fd97;
add.f64 fd99, fd97, fd93;
mul.f64 fd100, fd83, 0d3FE9E3779B97F4A8;
sub.f64 fd101, %24, fd100;
fma.rn.f64 fd102, fd85, 0d3FD3C6EF372FE950, fd101;
mul.f64 fd103, fd94, 0d3FE2CF2304755A5E;
mul.f64 fd104, fd96, 0d3FEE6F0E134454FF;
sub.f64 fd105, fd103, fd104;
sub.f64 fd106, fd102, fd105;
add.f64 fd107, fd105, fd102;
fma.rn.f64 fd108, fd87, 0d3FD3C6EF372FE950, %26;
mul.f64 fd109, fd89, 0d3FE9E3779B97F4A8;
sub.f64 fd110, fd108, fd109;
sub.f64 fd111, %30, %46;
mul.f64 fd112, fd111, 0d3FEE6F0E134454FF;
sub.f64 fd113, %35, %40;
fma.rn.f64 fd114, fd113, 0d3FE2CF2304755A5E, fd112;
add.f64 fd115, fd114, fd110;
sub.f64 fd116, fd110, fd114;
mul.f64 fd117, fd87, 0d3FE9E3779B97F4A8;
sub.f64 fd118, %26, fd117;
fma.rn.f64 fd119, fd89, 0d3FD3C6EF372FE950, fd118;
mul.f64 fd120, fd111, 0d3FE2CF2304755A5E;
mul.f64 fd121, fd113, 0d3FEE6F0E134454FF;
sub.f64 fd122, fd120, fd121;
add.f64 fd123, fd122, fd119;
sub.f64 fd124, fd119, fd122;
mul.f64 fd125, fd98, 0d3FE9E3779B97F4A8;
mul.f64 fd126, fd115, 0d3FE2CF2304755A5E;
sub.f64 fd127, fd125, fd126;
mul.f64 fd128, fd115, 0d3FE9E3779B97F4A8;
fma.rn.f64 fd129, fd98, 0d3FE2CF2304755A5E, fd128;
mul.f64 fd130, fd106, 0d3FD3C6EF372FE950;
mul.f64 fd131, fd123, 0d3FEE6F0E134454FF;
sub.f64 fd132, fd130, fd131;
mul.f64 fd133, fd123, 0d3FD3C6EF372FE950;
fma.rn.f64 fd134, fd106, 0d3FEE6F0E134454FF, fd133;
mul.f64 fd135, fd107, 0dBFD3C6EF372FE950;
mul.f64 fd136, fd124, 0d3FEE6F0E134454FF;
sub.f64 fd137, fd135, fd136;
mul.f64 fd138, fd124, 0dBFD3C6EF372FE950;
fma.rn.f64 fd139, fd107, 0d3FEE6F0E134454FF, fd138;
mul.f64 fd140, fd99, 0dBFE9E3779B97F4A8;
mul.f64 fd141, fd116, 0d3FE2CF2304755A5E;
sub.f64 fd142, fd140, fd141;
mul.f64 fd143, fd116, 0dBFE9E3779B97F4A8;
fma.rn.f64 fd144, fd99, 0d3FE2CF2304755A5E, fd143;
add.f64 fd145, fd44, fd86;
add.f64 fd146, fd48, fd90;
sub.f64 fd147, fd44, fd86;
sub.f64 fd148, fd48, fd90;
add.f64 fd149, fd56, fd127;
add.f64 fd150, fd73, fd129;
sub.f64 fd151, fd56, fd127;
sub.f64 fd152, fd73, fd129;
add.f64 fd153, fd64, fd132;
add.f64 fd154, fd81, fd134;
sub.f64 fd155, fd64, fd132;
sub.f64 fd156, fd81, fd134;
add.f64 fd157, fd65, fd137;
add.f64 fd158, fd82, fd139;
sub.f64 fd159, fd65, fd137;
sub.f64 fd160, fd82, fd139;
add.f64 fd161, fd57, fd142;
add.f64 fd162, fd74, fd144;
sub.f64 fd163, fd57, fd142;
sub.f64 fd164, fd74, fd144;
mov.u32 r4, %tid.x;
mul.wide.u32 rd2, r4, -858993459;
shr.u64 rd3, rd2, 35;
cvt.u32.u64 r5, rd3;
mul.lo.s32 r6, r5, 10;
sub.s32 r7, r4, r6;
mul.wide.u32 rd4, r7, 16;
mov.u64 rd5, %21;
add.s64 rd6, rd5, rd4;
ld.global.v2.f64 {fd165, fd166}, [rd6];
mul.f64 fd169, fd150, fd166;
fma.rn.f64 fd170, fd165, fd149, fd169;
mul.f64 fd171, fd149, fd166;
mul.f64 fd172, fd165, fd150;
sub.f64 fd173, fd172, fd171;
mul.f64 fd174, fd165, fd165;
mul.f64 fd175, fd166, fd166;
sub.f64 fd176, fd174, fd175;
mul.f64 fd177, fd166, fd165;
fma.rn.f64 fd178, fd166, fd165, fd177;
mul.f64 fd179, fd154, fd178;
fma.rn.f64 fd180, fd176, fd153, fd179;
mul.f64 fd181, fd153, fd178;
mul.f64 fd182, fd176, fd154;
sub.f64 fd183, fd182, fd181;
mul.f64 fd184, fd165, fd176;
mul.f64 fd185, fd166, fd178;
sub.f64 fd186, fd184, fd185;
mul.f64 fd187, fd165, fd178;
fma.rn.f64 fd188, fd166, fd176, fd187;
mul.f64 fd189, fd158, fd188;
fma.rn.f64 fd190, fd186, fd157, fd189;
mul.f64 fd191, fd157, fd188;
mul.f64 fd192, fd186, fd158;
sub.f64 fd193, fd192, fd191;
mul.f64 fd194, fd165, fd186;
mul.f64 fd195, fd166, fd188;
sub.f64 fd196, fd194, fd195;
mul.f64 fd197, fd165, fd188;
fma.rn.f64 fd198, fd166, fd186, fd197;
mul.f64 fd199, fd162, fd198;
fma.rn.f64 fd200, fd196, fd161, fd199;
mul.f64 fd201, fd161, fd198;
mul.f64 fd202, fd196, fd162;
sub.f64 fd203, fd202, fd201;
mul.f64 fd204, fd165, fd196;
mul.f64 fd205, fd166, fd198;
sub.f64 fd206, fd204, fd205;
mul.f64 fd207, fd165, fd198;
fma.rn.f64 fd208, fd166, fd196, fd207;
mul.f64 fd209, fd148, fd208;
fma.rn.f64 fd210, fd206, fd147, fd209;
mul.f64 fd211, fd147, fd208;
mul.f64 fd212, fd206, fd148;
sub.f64 fd213, fd212, fd211;
ld.global.v2.f64 {fd214, fd215}, [rd6+160];
mul.f64 fd218, fd152, fd215;
fma.rn.f64 fd219, fd214, fd151, fd218;
mul.f64 fd220, fd151, fd215;
mul.f64 fd221, fd214, fd152;
sub.f64 fd222, fd221, fd220;
mul.f64 fd223, fd165, fd214;
mul.f64 fd224, fd166, fd215;
sub.f64 fd225, fd223, fd224;
mul.f64 fd226, fd165, fd215;
fma.rn.f64 fd227, fd166, fd214, fd226;
mul.f64 fd228, fd156, fd227;
fma.rn.f64 fd229, fd225, fd155, fd228;
mul.f64 fd230, fd155, fd227;
mul.f64 fd231, fd225, fd156;
sub.f64 fd232, fd231, fd230;
mul.f64 fd233, fd165, fd225;
mul.f64 fd234, fd166, fd227;
sub.f64 fd235, fd233, fd234;
mul.f64 fd236, fd165, fd227;
fma.rn.f64 fd237, fd166, fd225, fd236;
mul.f64 fd238, fd160, fd237;
fma.rn.f64 fd239, fd235, fd159, fd238;
mul.f64 fd240, fd159, fd237;
mul.f64 fd241, fd235, fd160;
sub.f64 fd242, fd241, fd240;
mul.f64 fd243, fd165, fd235;
mul.f64 fd244, fd166, fd237;
sub.f64 fd245, fd243, fd244;
mul.f64 fd246, fd165, fd237;
fma.rn.f64 fd247, fd166, fd235, fd246;
mul.f64 fd248, fd164, fd247;
fma.rn.f64 fd249, fd245, fd163, fd248;
mul.f64 fd250, fd163, fd247;
mul.f64 fd251, fd245, fd164;
sub.f64 fd252, fd251, fd250;
mad.lo.s32 r8, r5, 800, r3;
barrier.sync 0;
mad.lo.s32 r9, r7, 80, r8;
st.shared.v2.f64 [r9], {fd145, fd170};
st.shared.v2.f64 [r9+16], {fd180, fd190};
st.shared.v2.f64 [r9+32], {fd200, fd210};
st.shared.v2.f64 [r9+48], {fd219, fd229};
st.shared.v2.f64 [r9+64], {fd239, fd249};
barrier.sync 0;
mad.lo.s32 r10, r7, -72, r9;
ld.shared.f64 fd253, [r10];
ld.shared.f64 fd254, [r10+80];
ld.shared.f64 fd255, [r10+160];
ld.shared.f64 fd256, [r10+240];
ld.shared.f64 fd257, [r10+320];
ld.shared.f64 fd258, [r10+400];
ld.shared.f64 fd259, [r10+480];
ld.shared.f64 fd260, [r10+560];
ld.shared.f64 fd261, [r10+640];
ld.shared.f64 fd262, [r10+720];
barrier.sync 0;
st.shared.v2.f64 [r9], {fd146, fd173};
st.shared.v2.f64 [r9+16], {fd183, fd193};
st.shared.v2.f64 [r9+32], {fd203, fd213};
st.shared.v2.f64 [r9+48], {fd222, fd232};
st.shared.v2.f64 [r9+64], {fd242, fd252};
barrier.sync 0;
ld.shared.f64 fd263, [r10];
ld.shared.f64 fd264, [r10+80];
ld.shared.f64 fd265, [r10+160];
ld.shared.f64 fd266, [r10+240];
ld.shared.f64 fd267, [r10+320];
ld.shared.f64 fd268, [r10+400];
ld.shared.f64 fd269, [r10+480];
ld.shared.f64 fd270, [r10+560];
ld.shared.f64 fd271, [r10+640];
ld.shared.f64 fd272, [r10+720];
add.f64 fd273, fd255, fd261;
add.f64 fd274, fd253, fd273;
add.f64 fd275, fd257, fd259;
add.f64 fd276, fd275, fd274;
add.f64 fd277, fd265, fd271;
add.f64 fd278, fd263, fd277;
add.f64 fd279, fd267, fd269;
add.f64 fd280, fd279, fd278;
fma.rn.f64 fd281, fd273, 0d3FD3C6EF372FE950, fd253;
mul.f64 fd282, fd275, 0d3FE9E3779B97F4A8;
sub.f64 fd283, fd281, fd282;
sub.f64 fd284, fd265, fd271;
mul.f64 fd285, fd284, 0d3FEE6F0E134454FF;
sub.f64 fd286, fd267, fd269;
fma.rn.f64 fd287, fd286, 0d3FE2CF2304755A5E, fd285;
sub.f64 fd288, fd283, fd287;
add.f64 fd289, fd287, fd283;
mul.f64 fd290, fd273, 0d3FE9E3779B97F4A8;
sub.f64 fd291, fd253, fd290;
fma.rn.f64 fd292, fd275, 0d3FD3C6EF372FE950, fd291;
mul.f64 fd293, fd284, 0d3FE2CF2304755A5E;
mul.f64 fd294, fd286, 0d3FEE6F0E134454FF;
sub.f64 fd295, fd293, fd294;
sub.f64 fd296, fd292, fd295;
add.f64 fd297, fd295, fd292;
fma.rn.f64 fd298, fd277, 0d3FD3C6EF372FE950, fd263;
mul.f64 fd299, fd279, 0d3FE9E3779B97F4A8;
sub.f64 fd300, fd298, fd299;
sub.f64 fd301, fd255, fd261;
mul.f64 fd302, fd301, 0d3FEE6F0E134454FF;
sub.f64 fd303, fd257, fd259;
fma.rn.f64 fd304, fd303, 0d3FE2CF2304755A5E, fd302;
add.f64 fd305, fd304, fd300;
sub.f64 fd306, fd300, fd304;
mul.f64 fd307, fd277, 0d3FE9E3779B97F4A8;
sub.f64 fd308, fd263, fd307;
fma.rn.f64 fd309, fd279, 0d3FD3C6EF372FE950, fd308;
mul.f64 fd310, fd301, 0d3FE2CF2304755A5E;
mul.f64 fd311, fd303, 0d3FEE6F0E134454FF;
sub.f64 fd312, fd310, fd311;
add.f64 fd313, fd312, fd309;
sub.f64 fd314, fd309, fd312;
add.f64 fd315, fd256, fd262;
add.f64 fd316, fd254, fd315;
add.f64 fd317, fd258, fd260;
add.f64 fd318, fd317, fd316;
add.f64 fd319, fd266, fd272;
add.f64 fd320, fd264, fd319;
add.f64 fd321, fd268, fd270;
add.f64 fd322, fd321, fd320;
fma.rn.f64 fd323, fd315, 0d3FD3C6EF372FE950, fd254;
mul.f64 fd324, fd317, 0d3FE9E3779B97F4A8;
sub.f64 fd325, fd323, fd324;
sub.f64 fd326, fd266, fd272;
mul.f64 fd327, fd326, 0d3FEE6F0E134454FF;
sub.f64 fd328, fd268, fd270;
fma.rn.f64 fd329, fd328, 0d3FE2CF2304755A5E, fd327;
sub.f64 fd330, fd325, fd329;
add.f64 fd331, fd329, fd325;
mul.f64 fd332, fd315, 0d3FE9E3779B97F4A8;
sub.f64 fd333, fd254, fd332;
fma.rn.f64 fd334, fd317, 0d3FD3C6EF372FE950, fd333;
mul.f64 fd335, fd326, 0d3FE2CF2304755A5E;
mul.f64 fd336, fd328, 0d3FEE6F0E134454FF;
sub.f64 fd337, fd335, fd336;
sub.f64 fd338, fd334, fd337;
add.f64 fd339, fd337, fd334;
fma.rn.f64 fd340, fd319, 0d3FD3C6EF372FE950, fd264;
mul.f64 fd341, fd321, 0d3FE9E3779B97F4A8;
sub.f64 fd342, fd340, fd341;
sub.f64 fd343, fd256, fd262;
mul.f64 fd344, fd343, 0d3FEE6F0E134454FF;
sub.f64 fd345, fd258, fd260;
fma.rn.f64 fd346, fd345, 0d3FE2CF2304755A5E, fd344;
add.f64 fd347, fd346, fd342;
sub.f64 fd348, fd342, fd346;
mul.f64 fd349, fd319, 0d3FE9E3779B97F4A8;
sub.f64 fd350, fd264, fd349;
fma.rn.f64 fd351, fd321, 0d3FD3C6EF372FE950, fd350;
mul.f64 fd352, fd343, 0d3FE2CF2304755A5E;
mul.f64 fd353, fd345, 0d3FEE6F0E134454FF;
sub.f64 fd354, fd352, fd353;
add.f64 fd355, fd354, fd351;
sub.f64 fd356, fd351, fd354;
mul.f64 fd357, fd330, 0d3FE9E3779B97F4A8;
mul.f64 fd358, fd347, 0d3FE2CF2304755A5E;
sub.f64 fd359, fd357, fd358;
mul.f64 fd360, fd347, 0d3FE9E3779B97F4A8;
fma.rn.f64 fd361, fd330, 0d3FE2CF2304755A5E, fd360;
mul.f64 fd362, fd338, 0d3FD3C6EF372FE950;
mul.f64 fd363, fd355, 0d3FEE6F0E134454FF;
sub.f64 fd364, fd362, fd363;
mul.f64 fd365, fd355, 0d3FD3C6EF372FE950;
fma.rn.f64 fd366, fd338, 0d3FEE6F0E134454FF, fd365;
mul.f64 fd367, fd339, 0dBFD3C6EF372FE950;
mul.f64 fd368, fd356, 0d3FEE6F0E134454FF;
sub.f64 fd369, fd367, fd368;
mul.f64 fd370, fd356, 0dBFD3C6EF372FE950;
fma.rn.f64 fd371, fd339, 0d3FEE6F0E134454FF, fd370;
mul.f64 fd372, fd331, 0dBFE9E3779B97F4A8;
mul.f64 fd373, fd348, 0d3FE2CF2304755A5E;
sub.f64 fd374, fd372, fd373;
mul.f64 fd375, fd348, 0dBFE9E3779B97F4A8;
fma.rn.f64 fd376, fd331, 0d3FE2CF2304755A5E, fd375;
add.f64 %0, fd276, fd318;
add.f64 %1, fd280, fd322;
add.f64 %3, fd305, fd361;
add.f64 %2, fd288, fd359;
add.f64 %5, fd313, fd366;
add.f64 %4, fd296, fd364;
add.f64 %7, fd314, fd371;
add.f64 %6, fd297, fd369;
add.f64 %9, fd306, fd376;
add.f64 %8, fd289, fd374;
sub.f64 %10, fd276, fd318;
sub.f64 %11, fd280, fd322;
sub.f64 %13, fd305, fd361;
sub.f64 %12, fd288, fd359;
sub.f64 %15, fd313, fd366;
sub.f64 %14, fd296, fd364;
sub.f64 %17, fd314, fd371;
sub.f64 %16, fd297, fd369;
sub.f64 %19, fd306, fd376;
sub.f64 %18, fd289, fd374;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y): "r"(smem), "l"(lut_dp_10_100), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<737, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .b32 r<11>;
.reg .f64 fd<417>;
.reg .b64 rd<7>;
mov.u32 r1, %tid.y;
mov.u32 r2, %20;
mad.lo.s32 r3, r1, 1600, r2;
add.f64 fd41, %27, %43;
add.f64 fd42, %22, fd41;
add.f64 fd43, %32, %38;
add.f64 fd44, fd43, fd42;
add.f64 fd45, %29, %45;
add.f64 fd46, %23, fd45;
add.f64 fd47, %34, %39;
add.f64 fd48, fd47, fd46;
fma.rn.f64 fd49, fd41, 0d3FD3C6EF372FE950, %22;
mul.f64 fd50, fd43, 0d3FE9E3779B97F4A8;
sub.f64 fd51, fd49, fd50;
sub.f64 fd52, %29, %45;
mul.f64 fd53, fd52, 0d3FEE6F0E134454FF;
sub.f64 fd54, %34, %39;
fma.rn.f64 fd55, fd54, 0d3FE2CF2304755A5E, fd53;
sub.f64 fd56, fd51, fd55;
add.f64 fd57, fd55, fd51;
mul.f64 fd58, fd41, 0d3FE9E3779B97F4A8;
sub.f64 fd59, %22, fd58;
fma.rn.f64 fd60, fd43, 0d3FD3C6EF372FE950, fd59;
mul.f64 fd61, fd52, 0d3FE2CF2304755A5E;
mul.f64 fd62, fd54, 0d3FEE6F0E134454FF;
sub.f64 fd63, fd61, fd62;
sub.f64 fd64, fd60, fd63;
add.f64 fd65, fd63, fd60;
fma.rn.f64 fd66, fd45, 0d3FD3C6EF372FE950, %23;
mul.f64 fd67, fd47, 0d3FE9E3779B97F4A8;
sub.f64 fd68, fd66, fd67;
sub.f64 fd69, %27, %43;
mul.f64 fd70, fd69, 0d3FEE6F0E134454FF;
sub.f64 fd71, %32, %38;
fma.rn.f64 fd72, fd71, 0d3FE2CF2304755A5E, fd70;
add.f64 fd73, fd72, fd68;
sub.f64 fd74, fd68, fd72;
mul.f64 fd75, fd45, 0d3FE9E3779B97F4A8;
sub.f64 fd76, %23, fd75;
fma.rn.f64 fd77, fd47, 0d3FD3C6EF372FE950, fd76;
mul.f64 fd78, fd69, 0d3FE2CF2304755A5E;
mul.f64 fd79, fd71, 0d3FEE6F0E134454FF;
sub.f64 fd80, fd78, fd79;
add.f64 fd81, fd80, fd77;
sub.f64 fd82, fd77, fd80;
add.f64 fd83, %30, %46;
add.f64 fd84, %24, fd83;
add.f64 fd85, %35, %40;
add.f64 fd86, fd85, fd84;
add.f64 fd87, %31, %47;
add.f64 fd88, %26, fd87;
add.f64 fd89, %37, %42;
add.f64 fd90, fd89, fd88;
fma.rn.f64 fd91, fd83, 0d3FD3C6EF372FE950, %24;
mul.f64 fd92, fd85, 0d3FE9E3779B97F4A8;
sub.f64 fd93, fd91, fd92;
sub.f64 fd94, %31, %47;
mul.f64 fd95, fd94, 0d3FEE6F0E134454FF;
sub.f64 fd96, %37, %42;
fma.rn.f64 fd97, fd96, 0d3FE2CF2304755A5E, fd95;
sub.f64 fd98, fd93, fd97;
add.f64 fd99, fd97, fd93;
mul.f64 fd100, fd83, 0d3FE9E3779B97F4A8;
sub.f64 fd101, %24, fd100;
fma.rn.f64 fd102, fd85, 0d3FD3C6EF372FE950, fd101;
mul.f64 fd103, fd94, 0d3FE2CF2304755A5E;
mul.f64 fd104, fd96, 0d3FEE6F0E134454FF;
sub.f64 fd105, fd103, fd104;
sub.f64 fd106, fd102, fd105;
add.f64 fd107, fd105, fd102;
fma.rn.f64 fd108, fd87, 0d3FD3C6EF372FE950, %26;
mul.f64 fd109, fd89, 0d3FE9E3779B97F4A8;
sub.f64 fd110, fd108, fd109;
sub.f64 fd111, %30, %46;
mul.f64 fd112, fd111, 0d3FEE6F0E134454FF;
sub.f64 fd113, %35, %40;
fma.rn.f64 fd114, fd113, 0d3FE2CF2304755A5E, fd112;
add.f64 fd115, fd114, fd110;
sub.f64 fd116, fd110, fd114;
mul.f64 fd117, fd87, 0d3FE9E3779B97F4A8;
sub.f64 fd118, %26, fd117;
fma.rn.f64 fd119, fd89, 0d3FD3C6EF372FE950, fd118;
mul.f64 fd120, fd111, 0d3FE2CF2304755A5E;
mul.f64 fd121, fd113, 0d3FEE6F0E134454FF;
sub.f64 fd122, fd120, fd121;
add.f64 fd123, fd122, fd119;
sub.f64 fd124, fd119, fd122;
mul.f64 fd125, fd98, 0d3FE9E3779B97F4A8;
mul.f64 fd126, fd115, 0d3FE2CF2304755A5E;
sub.f64 fd127, fd125, fd126;
mul.f64 fd128, fd115, 0d3FE9E3779B97F4A8;
fma.rn.f64 fd129, fd98, 0d3FE2CF2304755A5E, fd128;
mul.f64 fd130, fd106, 0d3FD3C6EF372FE950;
mul.f64 fd131, fd123, 0d3FEE6F0E134454FF;
sub.f64 fd132, fd130, fd131;
mul.f64 fd133, fd123, 0d3FD3C6EF372FE950;
fma.rn.f64 fd134, fd106, 0d3FEE6F0E134454FF, fd133;
mul.f64 fd135, fd107, 0dBFD3C6EF372FE950;
mul.f64 fd136, fd124, 0d3FEE6F0E134454FF;
sub.f64 fd137, fd135, fd136;
mul.f64 fd138, fd124, 0dBFD3C6EF372FE950;
fma.rn.f64 fd139, fd107, 0d3FEE6F0E134454FF, fd138;
mul.f64 fd140, fd99, 0dBFE9E3779B97F4A8;
mul.f64 fd141, fd116, 0d3FE2CF2304755A5E;
sub.f64 fd142, fd140, fd141;
mul.f64 fd143, fd116, 0dBFE9E3779B97F4A8;
fma.rn.f64 fd144, fd99, 0d3FE2CF2304755A5E, fd143;
sub.f64 fd145, fd44, fd86;
sub.f64 fd146, fd48, fd90;
add.f64 fd147, fd56, fd127;
add.f64 fd148, fd73, fd129;
sub.f64 fd149, fd56, fd127;
sub.f64 fd150, fd73, fd129;
add.f64 fd151, fd64, fd132;
add.f64 fd152, fd81, fd134;
sub.f64 fd153, fd64, fd132;
sub.f64 fd154, fd81, fd134;
add.f64 fd155, fd65, fd137;
add.f64 fd156, fd82, fd139;
sub.f64 fd157, fd65, fd137;
sub.f64 fd158, fd82, fd139;
add.f64 fd159, fd57, fd142;
add.f64 fd160, fd74, fd144;
sub.f64 fd161, fd57, fd142;
sub.f64 fd162, fd74, fd144;
mov.u32 r4, %tid.x;
mul.wide.u32 rd2, r4, -858993459;
shr.u64 rd3, rd2, 35;
cvt.u32.u64 r5, rd3;
mul.lo.s32 r6, r5, 10;
sub.s32 r7, r4, r6;
mad.lo.s32 r8, r5, 1600, r3;
mul.wide.u32 rd4, r7, 16;
mov.u64 rd5, %21;
add.s64 rd6, rd5, rd4;
ld.global.v2.f64 {fd163, fd164}, [rd6];
mul.f64 fd167, fd148, fd164;
mul.f64 fd168, fd147, fd164;
mul.f64 fd169, fd163, fd148;
mul.f64 fd170, fd163, fd163;
mul.f64 fd171, fd164, fd164;
sub.f64 fd172, fd170, fd171;
mul.f64 fd173, fd164, fd163;
fma.rn.f64 fd174, fd164, fd163, fd173;
mul.f64 fd175, fd152, fd174;
mul.f64 fd176, fd151, fd174;
mul.f64 fd177, fd172, fd152;
mul.f64 fd178, fd163, fd172;
mul.f64 fd179, fd164, fd174;
sub.f64 fd180, fd178, fd179;
mul.f64 fd181, fd163, fd174;
fma.rn.f64 fd182, fd164, fd172, fd181;
mul.f64 fd183, fd156, fd182;
mul.f64 fd184, fd155, fd182;
mul.f64 fd185, fd180, fd156;
mul.f64 fd186, fd163, fd180;
mul.f64 fd187, fd164, fd182;
sub.f64 fd188, fd186, fd187;
mul.f64 fd189, fd163, fd182;
fma.rn.f64 fd190, fd164, fd180, fd189;
mul.f64 fd191, fd160, fd190;
mul.f64 fd192, fd159, fd190;
mul.f64 fd193, fd188, fd160;
mul.f64 fd194, fd163, fd188;
mul.f64 fd195, fd164, fd190;
sub.f64 fd196, fd194, fd195;
mul.f64 fd197, fd163, fd190;
fma.rn.f64 fd198, fd164, fd188, fd197;
mul.f64 fd199, fd146, fd198;
mul.f64 fd200, fd145, fd198;
mul.f64 fd201, fd196, fd146;
ld.global.v2.f64 {fd202, fd203}, [rd6+160];
mul.f64 fd206, fd150, fd203;
mul.f64 fd207, fd149, fd203;
mul.f64 fd208, fd202, fd150;
mul.f64 fd209, fd163, fd202;
mul.f64 fd210, fd164, fd203;
sub.f64 fd211, fd209, fd210;
mul.f64 fd212, fd163, fd203;
fma.rn.f64 fd213, fd164, fd202, fd212;
mul.f64 fd214, fd154, fd213;
mul.f64 fd215, fd153, fd213;
mul.f64 fd216, fd211, fd154;
mul.f64 fd217, fd163, fd211;
mul.f64 fd218, fd164, fd213;
sub.f64 fd219, fd217, fd218;
mul.f64 fd220, fd163, fd213;
fma.rn.f64 fd221, fd164, fd211, fd220;
mul.f64 fd222, fd158, fd221;
mul.f64 fd223, fd157, fd221;
mul.f64 fd224, fd219, fd158;
mul.f64 fd225, fd163, fd219;
mul.f64 fd226, fd164, fd221;
sub.f64 fd227, fd225, fd226;
mul.f64 fd228, fd163, fd221;
fma.rn.f64 fd229, fd164, fd219, fd228;
mul.f64 fd230, fd162, fd229;
mul.f64 fd231, fd161, fd229;
mul.f64 fd232, fd227, fd162;
barrier.sync 0;
mad.lo.s32 r9, r7, 160, r8;
add.f64 fd233, fd48, fd90;
add.f64 fd234, fd44, fd86;
st.shared.v2.f64 [r9], {fd234, fd233};
fma.rn.f64 fd235, fd163, fd147, fd167;
sub.f64 fd236, fd169, fd168;
st.shared.v2.f64 [r9+16], {fd235, fd236};
fma.rn.f64 fd237, fd172, fd151, fd175;
sub.f64 fd238, fd177, fd176;
st.shared.v2.f64 [r9+32], {fd237, fd238};
fma.rn.f64 fd239, fd180, fd155, fd183;
sub.f64 fd240, fd185, fd184;
st.shared.v2.f64 [r9+48], {fd239, fd240};
sub.f64 fd241, fd193, fd192;
fma.rn.f64 fd242, fd188, fd159, fd191;
st.shared.v2.f64 [r9+64], {fd242, fd241};
fma.rn.f64 fd243, fd196, fd145, fd199;
sub.f64 fd244, fd201, fd200;
st.shared.v2.f64 [r9+80], {fd243, fd244};
fma.rn.f64 fd245, fd202, fd149, fd206;
sub.f64 fd246, fd208, fd207;
st.shared.v2.f64 [r9+96], {fd245, fd246};
fma.rn.f64 fd247, fd211, fd153, fd214;
sub.f64 fd248, fd216, fd215;
st.shared.v2.f64 [r9+112], {fd247, fd248};
fma.rn.f64 fd249, fd219, fd157, fd222;
sub.f64 fd250, fd224, fd223;
st.shared.v2.f64 [r9+128], {fd249, fd250};
sub.f64 fd251, fd232, fd231;
fma.rn.f64 fd252, fd227, fd161, fd230;
st.shared.v2.f64 [r9+144], {fd252, fd251};
barrier.sync 0;
mad.lo.s32 r10, r7, -144, r9;
ld.shared.v2.f64 {fd253, fd254}, [r10];
ld.shared.v2.f64 {fd257, fd258}, [r10+160];
ld.shared.v2.f64 {fd261, fd262}, [r10+320];
ld.shared.v2.f64 {fd265, fd266}, [r10+480];
ld.shared.v2.f64 {fd269, fd270}, [r10+640];
ld.shared.v2.f64 {fd273, fd274}, [r10+800];
ld.shared.v2.f64 {fd277, fd278}, [r10+960];
ld.shared.v2.f64 {fd281, fd282}, [r10+1120];
ld.shared.v2.f64 {fd285, fd286}, [r10+1280];
ld.shared.v2.f64 {fd289, fd290}, [r10+1440];
add.f64 fd293, fd261, fd285;
add.f64 fd294, fd253, fd293;
add.f64 fd295, fd269, fd277;
add.f64 fd296, fd295, fd294;
add.f64 fd297, fd262, fd286;
add.f64 fd298, fd254, fd297;
add.f64 fd299, fd270, fd278;
add.f64 fd300, fd299, fd298;
fma.rn.f64 fd301, fd293, 0d3FD3C6EF372FE950, fd253;
mul.f64 fd302, fd295, 0d3FE9E3779B97F4A8;
sub.f64 fd303, fd301, fd302;
sub.f64 fd304, fd262, fd286;
mul.f64 fd305, fd304, 0d3FEE6F0E134454FF;
sub.f64 fd306, fd270, fd278;
fma.rn.f64 fd307, fd306, 0d3FE2CF2304755A5E, fd305;
sub.f64 fd308, fd303, fd307;
add.f64 fd309, fd307, fd303;
mul.f64 fd310, fd293, 0d3FE9E3779B97F4A8;
sub.f64 fd311, fd253, fd310;
fma.rn.f64 fd312, fd295, 0d3FD3C6EF372FE950, fd311;
mul.f64 fd313, fd304, 0d3FE2CF2304755A5E;
mul.f64 fd314, fd306, 0d3FEE6F0E134454FF;
sub.f64 fd315, fd313, fd314;
sub.f64 fd316, fd312, fd315;
add.f64 fd317, fd315, fd312;
fma.rn.f64 fd318, fd297, 0d3FD3C6EF372FE950, fd254;
mul.f64 fd319, fd299, 0d3FE9E3779B97F4A8;
sub.f64 fd320, fd318, fd319;
sub.f64 fd321, fd261, fd285;
mul.f64 fd322, fd321, 0d3FEE6F0E134454FF;
sub.f64 fd323, fd269, fd277;
fma.rn.f64 fd324, fd323, 0d3FE2CF2304755A5E, fd322;
add.f64 fd325, fd324, fd320;
sub.f64 fd326, fd320, fd324;
mul.f64 fd327, fd297, 0d3FE9E3779B97F4A8;
sub.f64 fd328, fd254, fd327;
fma.rn.f64 fd329, fd299, 0d3FD3C6EF372FE950, fd328;
mul.f64 fd330, fd321, 0d3FE2CF2304755A5E;
mul.f64 fd331, fd323, 0d3FEE6F0E134454FF;
sub.f64 fd332, fd330, fd331;
add.f64 fd333, fd332, fd329;
sub.f64 fd334, fd329, fd332;
add.f64 fd335, fd265, fd289;
add.f64 fd336, fd257, fd335;
add.f64 fd337, fd273, fd281;
add.f64 fd338, fd337, fd336;
add.f64 fd339, fd266, fd290;
add.f64 fd340, fd258, fd339;
add.f64 fd341, fd274, fd282;
add.f64 fd342, fd341, fd340;
fma.rn.f64 fd343, fd335, 0d3FD3C6EF372FE950, fd257;
mul.f64 fd344, fd337, 0d3FE9E3779B97F4A8;
sub.f64 fd345, fd343, fd344;
sub.f64 fd346, fd266, fd290;
mul.f64 fd347, fd346, 0d3FEE6F0E134454FF;
sub.f64 fd348, fd274, fd282;
fma.rn.f64 fd349, fd348, 0d3FE2CF2304755A5E, fd347;
sub.f64 fd350, fd345, fd349;
add.f64 fd351, fd349, fd345;
mul.f64 fd352, fd335, 0d3FE9E3779B97F4A8;
sub.f64 fd353, fd257, fd352;
fma.rn.f64 fd354, fd337, 0d3FD3C6EF372FE950, fd353;
mul.f64 fd355, fd346, 0d3FE2CF2304755A5E;
mul.f64 fd356, fd348, 0d3FEE6F0E134454FF;
sub.f64 fd357, fd355, fd356;
sub.f64 fd358, fd354, fd357;
add.f64 fd359, fd357, fd354;
fma.rn.f64 fd360, fd339, 0d3FD3C6EF372FE950, fd258;
mul.f64 fd361, fd341, 0d3FE9E3779B97F4A8;
sub.f64 fd362, fd360, fd361;
sub.f64 fd363, fd265, fd289;
mul.f64 fd364, fd363, 0d3FEE6F0E134454FF;
sub.f64 fd365, fd273, fd281;
fma.rn.f64 fd366, fd365, 0d3FE2CF2304755A5E, fd364;
add.f64 fd367, fd366, fd362;
sub.f64 fd368, fd362, fd366;
mul.f64 fd369, fd339, 0d3FE9E3779B97F4A8;
sub.f64 fd370, fd258, fd369;
fma.rn.f64 fd371, fd341, 0d3FD3C6EF372FE950, fd370;
mul.f64 fd372, fd363, 0d3FE2CF2304755A5E;
mul.f64 fd373, fd365, 0d3FEE6F0E134454FF;
sub.f64 fd374, fd372, fd373;
add.f64 fd375, fd374, fd371;
sub.f64 fd376, fd371, fd374;
mul.f64 fd377, fd350, 0d3FE9E3779B97F4A8;
mul.f64 fd378, fd367, 0d3FE2CF2304755A5E;
sub.f64 fd379, fd377, fd378;
mul.f64 fd380, fd367, 0d3FE9E3779B97F4A8;
fma.rn.f64 fd381, fd350, 0d3FE2CF2304755A5E, fd380;
mul.f64 fd382, fd358, 0d3FD3C6EF372FE950;
mul.f64 fd383, fd375, 0d3FEE6F0E134454FF;
sub.f64 fd384, fd382, fd383;
mul.f64 fd385, fd375, 0d3FD3C6EF372FE950;
fma.rn.f64 fd386, fd358, 0d3FEE6F0E134454FF, fd385;
mul.f64 fd387, fd359, 0dBFD3C6EF372FE950;
mul.f64 fd388, fd376, 0d3FEE6F0E134454FF;
sub.f64 fd389, fd387, fd388;
mul.f64 fd390, fd376, 0dBFD3C6EF372FE950;
fma.rn.f64 fd391, fd359, 0d3FEE6F0E134454FF, fd390;
mul.f64 fd392, fd351, 0dBFE9E3779B97F4A8;
mul.f64 fd393, fd368, 0d3FE2CF2304755A5E;
sub.f64 fd394, fd392, fd393;
mul.f64 fd395, fd368, 0dBFE9E3779B97F4A8;
fma.rn.f64 fd396, fd351, 0d3FE2CF2304755A5E, fd395;
add.f64 %1, fd300, fd342;
add.f64 %0, fd296, fd338;
add.f64 %3, fd325, fd381;
add.f64 %2, fd308, fd379;
add.f64 %5, fd333, fd386;
add.f64 %4, fd316, fd384;
add.f64 %7, fd334, fd391;
add.f64 %6, fd317, fd389;
add.f64 %9, fd326, fd396;
add.f64 %8, fd309, fd394;
sub.f64 %11, fd300, fd342;
sub.f64 %10, fd296, fd338;
sub.f64 %13, fd325, fd381;
sub.f64 %12, fd308, fd379;
sub.f64 %15, fd333, fd386;
sub.f64 %14, fd316, fd384;
sub.f64 %17, fd334, fd391;
sub.f64 %16, fd317, fd389;
sub.f64 %19, fd326, fd396;
sub.f64 %18, fd309, fd394;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y): "r"(smem), "l"(lut_dp_10_100), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y));
};


#endif


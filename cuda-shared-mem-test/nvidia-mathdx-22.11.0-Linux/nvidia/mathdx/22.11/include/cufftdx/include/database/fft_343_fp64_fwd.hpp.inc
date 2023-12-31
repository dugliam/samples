//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_343_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_343_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<549, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .b32 r<21>;
.reg .f64 fd<465>;
.reg .b64 rd<12>;
mov.u32 r1, %tid.y;
mov.u32 r2, %14;
mad.lo.s32 r3, r1, 5488, r2;
add.f64 fd29, %19, %33;
add.f64 fd30, %17, fd29;
add.f64 fd31, %22, %30;
add.f64 fd32, fd31, fd30;
add.f64 fd33, %25, %27;
add.f64 fd34, %21, %34;
add.f64 fd35, %18, fd34;
add.f64 fd36, %24, %32;
add.f64 fd37, fd36, fd35;
add.f64 fd38, %26, %29;
fma.rn.f64 fd39, fd29, 0d3FE3F3A0E28BEDD1, %17;
mul.f64 fd40, fd31, 0d3FCC7B90E3024582;
sub.f64 fd41, fd39, fd40;
mul.f64 fd42, fd33, 0d3FECD4BCA9CB5C71;
sub.f64 fd43, fd41, fd42;
sub.f64 fd44, %21, %34;
mul.f64 fd45, fd44, 0d3FE904C37505DE4B;
sub.f64 fd46, %24, %32;
mul.f64 fd47, fd46, 0dBFEF329C0558E969;
sub.f64 fd48, fd47, fd45;
sub.f64 fd49, %26, %29;
mul.f64 fd50, fd49, 0d3FDBC4C04D71ABC1;
sub.f64 fd51, fd48, fd50;
sub.f64 fd52, fd43, fd51;
add.f64 fd53, fd51, fd43;
mul.f64 fd54, fd29, 0d3FCC7B90E3024582;
sub.f64 fd55, %17, fd54;
mul.f64 fd56, fd31, 0d3FECD4BCA9CB5C71;
sub.f64 fd57, fd55, fd56;
fma.rn.f64 fd58, fd33, 0d3FE3F3A0E28BEDD1, fd57;
mul.f64 fd59, fd44, 0d3FEF329C0558E969;
mul.f64 fd60, fd46, 0d3FDBC4C04D71ABC1;
sub.f64 fd61, fd60, fd59;
fma.rn.f64 fd62, fd49, 0d3FE904C37505DE4B, fd61;
sub.f64 fd63, fd58, fd62;
add.f64 fd64, fd62, fd58;
mul.f64 fd65, fd29, 0d3FECD4BCA9CB5C71;
sub.f64 fd66, %17, fd65;
fma.rn.f64 fd67, fd31, 0d3FE3F3A0E28BEDD1, fd66;
mul.f64 fd68, fd33, 0d3FCC7B90E3024582;
sub.f64 fd69, fd67, fd68;
mul.f64 fd70, fd44, 0d3FDBC4C04D71ABC1;
mul.f64 fd71, fd46, 0d3FE904C37505DE4B;
sub.f64 fd72, fd71, fd70;
mul.f64 fd73, fd49, 0d3FEF329C0558E969;
sub.f64 fd74, fd72, fd73;
sub.f64 fd75, fd69, fd74;
add.f64 fd76, fd74, fd69;
fma.rn.f64 fd77, fd34, 0d3FE3F3A0E28BEDD1, %18;
mul.f64 fd78, fd36, 0d3FCC7B90E3024582;
sub.f64 fd79, fd77, fd78;
mul.f64 fd80, fd38, 0d3FECD4BCA9CB5C71;
sub.f64 fd81, fd79, fd80;
sub.f64 fd82, %19, %33;
mul.f64 fd83, fd82, 0d3FE904C37505DE4B;
sub.f64 fd84, %22, %30;
mul.f64 fd85, fd84, 0dBFEF329C0558E969;
sub.f64 fd86, fd85, fd83;
sub.f64 fd87, %25, %27;
mul.f64 fd88, fd87, 0d3FDBC4C04D71ABC1;
sub.f64 fd89, fd86, fd88;
add.f64 fd90, fd89, fd81;
sub.f64 fd91, fd81, fd89;
mul.f64 fd92, fd34, 0d3FCC7B90E3024582;
sub.f64 fd93, %18, fd92;
mul.f64 fd94, fd36, 0d3FECD4BCA9CB5C71;
sub.f64 fd95, fd93, fd94;
fma.rn.f64 fd96, fd38, 0d3FE3F3A0E28BEDD1, fd95;
mul.f64 fd97, fd82, 0d3FEF329C0558E969;
mul.f64 fd98, fd84, 0d3FDBC4C04D71ABC1;
sub.f64 fd99, fd98, fd97;
fma.rn.f64 fd100, fd87, 0d3FE904C37505DE4B, fd99;
add.f64 fd101, fd100, fd96;
sub.f64 fd102, fd96, fd100;
mul.f64 fd103, fd34, 0d3FECD4BCA9CB5C71;
sub.f64 fd104, %18, fd103;
fma.rn.f64 fd105, fd36, 0d3FE3F3A0E28BEDD1, fd104;
mul.f64 fd106, fd38, 0d3FCC7B90E3024582;
sub.f64 fd107, fd105, fd106;
mul.f64 fd108, fd82, 0d3FDBC4C04D71ABC1;
mul.f64 fd109, fd84, 0d3FE904C37505DE4B;
sub.f64 fd110, fd109, fd108;
mul.f64 fd111, fd87, 0d3FEF329C0558E969;
sub.f64 fd112, fd110, fd111;
add.f64 fd113, fd112, fd107;
sub.f64 fd114, fd107, fd112;
mov.u32 r4, %tid.x;
mul.wide.u32 rd2, r4, 1402438301;
shr.u64 rd3, rd2, 36;
cvt.u32.u64 r5, rd3;
mul.lo.s32 r6, r5, 49;
sub.s32 r7, r4, r6;
mad.lo.s32 r8, r5, 5488, r3;
mul.wide.u32 rd4, r7, 16;
mov.u64 rd5, %15;
add.s64 rd6, rd5, rd4;
ld.global.v2.f64 {fd115, fd116}, [rd6];
mul.f64 fd119, fd115, fd52;
mul.f64 fd120, fd116, fd90;
mul.f64 fd121, fd115, fd90;
mul.f64 fd122, fd115, fd115;
mul.f64 fd123, fd116, fd116;
sub.f64 fd124, fd122, fd123;
mul.f64 fd125, fd116, fd115;
fma.rn.f64 fd126, fd116, fd115, fd125;
mul.f64 fd127, fd124, fd63;
mul.f64 fd128, fd126, fd101;
mul.f64 fd129, fd124, fd101;
mul.f64 fd130, fd115, fd124;
mul.f64 fd131, fd116, fd126;
sub.f64 fd132, fd130, fd131;
mul.f64 fd133, fd115, fd126;
fma.rn.f64 fd134, fd116, fd124, fd133;
mul.f64 fd135, fd132, fd75;
mul.f64 fd136, fd134, fd113;
mul.f64 fd137, fd132, fd113;
ld.global.v2.f64 {fd138, fd139}, [rd6+784];
mul.f64 fd142, fd138, fd76;
mul.f64 fd143, fd139, fd114;
mul.f64 fd144, fd138, fd114;
mul.f64 fd145, fd115, fd138;
mul.f64 fd146, fd116, fd139;
sub.f64 fd147, fd145, fd146;
mul.f64 fd148, fd115, fd139;
fma.rn.f64 fd149, fd116, fd138, fd148;
mul.f64 fd150, fd147, fd64;
mul.f64 fd151, fd149, fd102;
mul.f64 fd152, fd147, fd102;
mul.f64 fd153, fd115, fd147;
mul.f64 fd154, fd116, fd149;
sub.f64 fd155, fd153, fd154;
mul.f64 fd156, fd115, fd149;
fma.rn.f64 fd157, fd116, fd147, fd156;
mul.f64 fd158, fd155, fd53;
mul.f64 fd159, fd157, fd91;
mul.f64 fd160, fd155, fd91;
barrier.sync 0;
mad.lo.s32 r9, r7, 112, r8;
add.f64 fd161, fd38, fd37;
add.f64 fd162, fd33, fd32;
st.shared.v2.f64 [r9], {fd162, fd161};
fma.rn.f64 fd163, fd116, fd52, fd121;
sub.f64 fd164, fd119, fd120;
st.shared.v2.f64 [r9+16], {fd164, fd163};
fma.rn.f64 fd165, fd126, fd63, fd129;
sub.f64 fd166, fd127, fd128;
st.shared.v2.f64 [r9+32], {fd166, fd165};
sub.f64 fd167, fd135, fd136;
fma.rn.f64 fd168, fd134, fd75, fd137;
st.shared.v2.f64 [r9+48], {fd167, fd168};
fma.rn.f64 fd169, fd139, fd76, fd144;
sub.f64 fd170, fd142, fd143;
st.shared.v2.f64 [r9+64], {fd170, fd169};
fma.rn.f64 fd171, fd149, fd64, fd152;
sub.f64 fd172, fd150, fd151;
st.shared.v2.f64 [r9+80], {fd172, fd171};
sub.f64 fd173, fd158, fd159;
fma.rn.f64 fd174, fd157, fd53, fd160;
st.shared.v2.f64 [r9+96], {fd173, fd174};
barrier.sync 0;
mad.lo.s32 r10, r7, -96, r9;
ld.shared.v2.f64 {fd175, fd176}, [r10];
ld.shared.v2.f64 {fd179, fd180}, [r10+784];
ld.shared.v2.f64 {fd183, fd184}, [r10+1568];
ld.shared.v2.f64 {fd187, fd188}, [r10+2352];
ld.shared.v2.f64 {fd191, fd192}, [r10+3136];
ld.shared.v2.f64 {fd195, fd196}, [r10+3920];
ld.shared.v2.f64 {fd199, fd200}, [r10+4704];
add.f64 fd203, fd179, fd199;
add.f64 fd204, fd175, fd203;
add.f64 fd205, fd183, fd195;
add.f64 fd206, fd205, fd204;
add.f64 fd207, fd187, fd191;
add.f64 fd208, fd180, fd200;
add.f64 fd209, fd176, fd208;
add.f64 fd210, fd184, fd196;
add.f64 fd211, fd210, fd209;
add.f64 fd212, fd188, fd192;
fma.rn.f64 fd213, fd203, 0d3FE3F3A0E28BEDD1, fd175;
mul.f64 fd214, fd205, 0d3FCC7B90E3024582;
sub.f64 fd215, fd213, fd214;
mul.f64 fd216, fd207, 0d3FECD4BCA9CB5C71;
sub.f64 fd217, fd215, fd216;
sub.f64 fd218, fd180, fd200;
mul.f64 fd219, fd218, 0d3FE904C37505DE4B;
sub.f64 fd220, fd184, fd196;
mul.f64 fd221, fd220, 0dBFEF329C0558E969;
sub.f64 fd222, fd221, fd219;
sub.f64 fd223, fd188, fd192;
mul.f64 fd224, fd223, 0d3FDBC4C04D71ABC1;
sub.f64 fd225, fd222, fd224;
sub.f64 fd226, fd217, fd225;
add.f64 fd227, fd225, fd217;
mul.f64 fd228, fd203, 0d3FCC7B90E3024582;
sub.f64 fd229, fd175, fd228;
mul.f64 fd230, fd205, 0d3FECD4BCA9CB5C71;
sub.f64 fd231, fd229, fd230;
fma.rn.f64 fd232, fd207, 0d3FE3F3A0E28BEDD1, fd231;
mul.f64 fd233, fd218, 0d3FEF329C0558E969;
mul.f64 fd234, fd220, 0d3FDBC4C04D71ABC1;
sub.f64 fd235, fd234, fd233;
fma.rn.f64 fd236, fd223, 0d3FE904C37505DE4B, fd235;
sub.f64 fd237, fd232, fd236;
add.f64 fd238, fd236, fd232;
mul.f64 fd239, fd203, 0d3FECD4BCA9CB5C71;
sub.f64 fd240, fd175, fd239;
fma.rn.f64 fd241, fd205, 0d3FE3F3A0E28BEDD1, fd240;
mul.f64 fd242, fd207, 0d3FCC7B90E3024582;
sub.f64 fd243, fd241, fd242;
mul.f64 fd244, fd218, 0d3FDBC4C04D71ABC1;
mul.f64 fd245, fd220, 0d3FE904C37505DE4B;
sub.f64 fd246, fd245, fd244;
mul.f64 fd247, fd223, 0d3FEF329C0558E969;
sub.f64 fd248, fd246, fd247;
sub.f64 fd249, fd243, fd248;
add.f64 fd250, fd248, fd243;
fma.rn.f64 fd251, fd208, 0d3FE3F3A0E28BEDD1, fd176;
mul.f64 fd252, fd210, 0d3FCC7B90E3024582;
sub.f64 fd253, fd251, fd252;
mul.f64 fd254, fd212, 0d3FECD4BCA9CB5C71;
sub.f64 fd255, fd253, fd254;
sub.f64 fd256, fd179, fd199;
mul.f64 fd257, fd256, 0d3FE904C37505DE4B;
sub.f64 fd258, fd183, fd195;
mul.f64 fd259, fd258, 0dBFEF329C0558E969;
sub.f64 fd260, fd259, fd257;
sub.f64 fd261, fd187, fd191;
mul.f64 fd262, fd261, 0d3FDBC4C04D71ABC1;
sub.f64 fd263, fd260, fd262;
add.f64 fd264, fd263, fd255;
sub.f64 fd265, fd255, fd263;
mul.f64 fd266, fd208, 0d3FCC7B90E3024582;
sub.f64 fd267, fd176, fd266;
mul.f64 fd268, fd210, 0d3FECD4BCA9CB5C71;
sub.f64 fd269, fd267, fd268;
fma.rn.f64 fd270, fd212, 0d3FE3F3A0E28BEDD1, fd269;
mul.f64 fd271, fd256, 0d3FEF329C0558E969;
mul.f64 fd272, fd258, 0d3FDBC4C04D71ABC1;
sub.f64 fd273, fd272, fd271;
fma.rn.f64 fd274, fd261, 0d3FE904C37505DE4B, fd273;
add.f64 fd275, fd274, fd270;
sub.f64 fd276, fd270, fd274;
mul.f64 fd277, fd208, 0d3FECD4BCA9CB5C71;
sub.f64 fd278, fd176, fd277;
fma.rn.f64 fd279, fd210, 0d3FE3F3A0E28BEDD1, fd278;
mul.f64 fd280, fd212, 0d3FCC7B90E3024582;
sub.f64 fd281, fd279, fd280;
mul.f64 fd282, fd256, 0d3FDBC4C04D71ABC1;
mul.f64 fd283, fd258, 0d3FE904C37505DE4B;
sub.f64 fd284, fd283, fd282;
mul.f64 fd285, fd261, 0d3FEF329C0558E969;
sub.f64 fd286, fd284, fd285;
add.f64 fd287, fd286, fd281;
sub.f64 fd288, fd281, fd286;
mul.wide.u32 rd7, r7, 613566757;
shr.u64 rd8, rd7, 32;
cvt.u32.u64 r11, rd8;
sub.s32 r12, r7, r11;
shr.u32 r13, r12, 1;
add.s32 r14, r13, r11;
shr.u32 r15, r14, 2;
mul.lo.s32 r16, r15, 7;
sub.s32 r17, r7, r16;
mul.wide.u32 rd9, r15, 16;
mov.u64 rd10, %16;
add.s64 rd11, rd10, rd9;
ld.global.v2.f64 {fd289, fd290}, [rd11];
mul.f64 fd293, fd289, fd226;
mul.f64 fd294, fd290, fd264;
mul.f64 fd295, fd289, fd264;
mul.f64 fd296, fd289, fd289;
mul.f64 fd297, fd290, fd290;
sub.f64 fd298, fd296, fd297;
mul.f64 fd299, fd290, fd289;
fma.rn.f64 fd300, fd290, fd289, fd299;
mul.f64 fd301, fd298, fd237;
mul.f64 fd302, fd300, fd275;
mul.f64 fd303, fd298, fd275;
mul.f64 fd304, fd289, fd298;
mul.f64 fd305, fd290, fd300;
sub.f64 fd306, fd304, fd305;
mul.f64 fd307, fd289, fd300;
fma.rn.f64 fd308, fd290, fd298, fd307;
mul.f64 fd309, fd306, fd249;
mul.f64 fd310, fd308, fd287;
mul.f64 fd311, fd306, fd287;
ld.global.v2.f64 {fd312, fd313}, [rd11+112];
mul.f64 fd316, fd312, fd250;
mul.f64 fd317, fd313, fd288;
mul.f64 fd318, fd312, fd288;
mul.f64 fd319, fd289, fd312;
mul.f64 fd320, fd290, fd313;
sub.f64 fd321, fd319, fd320;
mul.f64 fd322, fd289, fd313;
fma.rn.f64 fd323, fd290, fd312, fd322;
mul.f64 fd324, fd321, fd238;
mul.f64 fd325, fd323, fd276;
mul.f64 fd326, fd321, fd276;
mul.f64 fd327, fd289, fd321;
mul.f64 fd328, fd290, fd323;
sub.f64 fd329, fd327, fd328;
mul.f64 fd330, fd289, fd323;
fma.rn.f64 fd331, fd290, fd321, fd330;
mul.f64 fd332, fd329, fd227;
mul.f64 fd333, fd331, fd265;
mul.f64 fd334, fd329, fd265;
shl.b32 r18, r17, 4;
add.s32 r19, r8, r18;
barrier.sync 0;
mad.lo.s32 r20, r15, 784, r19;
add.f64 fd335, fd212, fd211;
add.f64 fd336, fd207, fd206;
st.shared.v2.f64 [r20], {fd336, fd335};
fma.rn.f64 fd337, fd290, fd226, fd295;
sub.f64 fd338, fd293, fd294;
st.shared.v2.f64 [r20+112], {fd338, fd337};
fma.rn.f64 fd339, fd300, fd237, fd303;
sub.f64 fd340, fd301, fd302;
st.shared.v2.f64 [r20+224], {fd340, fd339};
fma.rn.f64 fd341, fd308, fd249, fd311;
sub.f64 fd342, fd309, fd310;
st.shared.v2.f64 [r20+336], {fd342, fd341};
fma.rn.f64 fd343, fd313, fd250, fd318;
sub.f64 fd344, fd316, fd317;
st.shared.v2.f64 [r20+448], {fd344, fd343};
fma.rn.f64 fd345, fd323, fd238, fd326;
sub.f64 fd346, fd324, fd325;
st.shared.v2.f64 [r20+560], {fd346, fd345};
fma.rn.f64 fd347, fd331, fd227, fd334;
sub.f64 fd348, fd332, fd333;
st.shared.v2.f64 [r20+672], {fd348, fd347};
barrier.sync 0;
ld.shared.v2.f64 {fd349, fd350}, [r10];
ld.shared.v2.f64 {fd353, fd354}, [r10+784];
ld.shared.v2.f64 {fd357, fd358}, [r10+1568];
ld.shared.v2.f64 {fd361, fd362}, [r10+2352];
ld.shared.v2.f64 {fd365, fd366}, [r10+3136];
ld.shared.v2.f64 {fd369, fd370}, [r10+3920];
ld.shared.v2.f64 {fd373, fd374}, [r10+4704];
add.f64 fd377, fd353, fd373;
add.f64 fd378, fd349, fd377;
add.f64 fd379, fd357, fd369;
add.f64 fd380, fd379, fd378;
add.f64 fd381, fd361, fd365;
add.f64 fd382, fd354, fd374;
add.f64 fd383, fd350, fd382;
add.f64 fd384, fd358, fd370;
add.f64 fd385, fd384, fd383;
add.f64 fd386, fd362, fd366;
fma.rn.f64 fd387, fd377, 0d3FE3F3A0E28BEDD1, fd349;
mul.f64 fd388, fd379, 0d3FCC7B90E3024582;
sub.f64 fd389, fd387, fd388;
mul.f64 fd390, fd381, 0d3FECD4BCA9CB5C71;
sub.f64 fd391, fd389, fd390;
sub.f64 fd392, fd354, fd374;
mul.f64 fd393, fd392, 0d3FE904C37505DE4B;
sub.f64 fd394, fd358, fd370;
mul.f64 fd395, fd394, 0dBFEF329C0558E969;
sub.f64 fd396, fd395, fd393;
sub.f64 fd397, fd362, fd366;
mul.f64 fd398, fd397, 0d3FDBC4C04D71ABC1;
sub.f64 fd399, fd396, fd398;
mul.f64 fd400, fd377, 0d3FCC7B90E3024582;
sub.f64 fd401, fd349, fd400;
mul.f64 fd402, fd379, 0d3FECD4BCA9CB5C71;
sub.f64 fd403, fd401, fd402;
fma.rn.f64 fd404, fd381, 0d3FE3F3A0E28BEDD1, fd403;
mul.f64 fd405, fd392, 0d3FEF329C0558E969;
mul.f64 fd406, fd394, 0d3FDBC4C04D71ABC1;
sub.f64 fd407, fd406, fd405;
fma.rn.f64 fd408, fd397, 0d3FE904C37505DE4B, fd407;
mul.f64 fd409, fd377, 0d3FECD4BCA9CB5C71;
sub.f64 fd410, fd349, fd409;
fma.rn.f64 fd411, fd379, 0d3FE3F3A0E28BEDD1, fd410;
mul.f64 fd412, fd381, 0d3FCC7B90E3024582;
sub.f64 fd413, fd411, fd412;
mul.f64 fd414, fd392, 0d3FDBC4C04D71ABC1;
mul.f64 fd415, fd394, 0d3FE904C37505DE4B;
sub.f64 fd416, fd415, fd414;
mul.f64 fd417, fd397, 0d3FEF329C0558E969;
sub.f64 fd418, fd416, fd417;
fma.rn.f64 fd419, fd382, 0d3FE3F3A0E28BEDD1, fd350;
mul.f64 fd420, fd384, 0d3FCC7B90E3024582;
sub.f64 fd421, fd419, fd420;
mul.f64 fd422, fd386, 0d3FECD4BCA9CB5C71;
sub.f64 fd423, fd421, fd422;
sub.f64 fd424, fd353, fd373;
mul.f64 fd425, fd424, 0d3FE904C37505DE4B;
sub.f64 fd426, fd357, fd369;
mul.f64 fd427, fd426, 0dBFEF329C0558E969;
sub.f64 fd428, fd427, fd425;
sub.f64 fd429, fd361, fd365;
mul.f64 fd430, fd429, 0d3FDBC4C04D71ABC1;
sub.f64 fd431, fd428, fd430;
mul.f64 fd432, fd382, 0d3FCC7B90E3024582;
sub.f64 fd433, fd350, fd432;
mul.f64 fd434, fd384, 0d3FECD4BCA9CB5C71;
sub.f64 fd435, fd433, fd434;
fma.rn.f64 fd436, fd386, 0d3FE3F3A0E28BEDD1, fd435;
mul.f64 fd437, fd424, 0d3FEF329C0558E969;
mul.f64 fd438, fd426, 0d3FDBC4C04D71ABC1;
sub.f64 fd439, fd438, fd437;
fma.rn.f64 fd440, fd429, 0d3FE904C37505DE4B, fd439;
mul.f64 fd441, fd382, 0d3FECD4BCA9CB5C71;
sub.f64 fd442, fd350, fd441;
fma.rn.f64 fd443, fd384, 0d3FE3F3A0E28BEDD1, fd442;
mul.f64 fd444, fd386, 0d3FCC7B90E3024582;
sub.f64 fd445, fd443, fd444;
mul.f64 fd446, fd424, 0d3FDBC4C04D71ABC1;
mul.f64 fd447, fd426, 0d3FE904C37505DE4B;
sub.f64 fd448, fd447, fd446;
mul.f64 fd449, fd429, 0d3FEF329C0558E969;
sub.f64 fd450, fd448, fd449;
add.f64 %1, fd386, fd385;
add.f64 %0, fd381, fd380;
add.f64 %3, fd431, fd423;
sub.f64 %2, fd391, fd399;
add.f64 %5, fd440, fd436;
sub.f64 %4, fd404, fd408;
add.f64 %7, fd450, fd445;
sub.f64 %6, fd413, fd418;
sub.f64 %9, fd445, fd450;
add.f64 %8, fd418, fd413;
sub.f64 %11, fd436, fd440;
add.f64 %10, fd408, fd404;
sub.f64 %13, fd423, fd431;
add.f64 %12, fd399, fd391;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y): "r"(smem), "l"(lut_dp_7_343), "l"(lut_dp_7_49), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<550, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .b32 r<21>;
.reg .f64 fd<437>;
.reg .b64 rd<12>;
mov.u32 r1, %tid.y;
mov.u32 r2, %14;
mad.lo.s32 r3, r1, 2744, r2;
add.f64 fd29, %19, %33;
add.f64 fd30, %17, fd29;
add.f64 fd31, %22, %30;
add.f64 fd32, fd31, fd30;
add.f64 fd33, %25, %27;
add.f64 fd34, fd33, fd32;
add.f64 fd35, %21, %34;
add.f64 fd36, %18, fd35;
add.f64 fd37, %24, %32;
add.f64 fd38, fd37, fd36;
add.f64 fd39, %26, %29;
add.f64 fd40, fd39, fd38;
fma.rn.f64 fd41, fd29, 0d3FE3F3A0E28BEDD1, %17;
mul.f64 fd42, fd31, 0d3FCC7B90E3024582;
sub.f64 fd43, fd41, fd42;
mul.f64 fd44, fd33, 0d3FECD4BCA9CB5C71;
sub.f64 fd45, fd43, fd44;
sub.f64 fd46, %21, %34;
mul.f64 fd47, fd46, 0d3FE904C37505DE4B;
sub.f64 fd48, %24, %32;
mul.f64 fd49, fd48, 0dBFEF329C0558E969;
sub.f64 fd50, fd49, fd47;
sub.f64 fd51, %26, %29;
mul.f64 fd52, fd51, 0d3FDBC4C04D71ABC1;
sub.f64 fd53, fd50, fd52;
sub.f64 fd54, fd45, fd53;
add.f64 fd55, fd53, fd45;
mul.f64 fd56, fd29, 0d3FCC7B90E3024582;
sub.f64 fd57, %17, fd56;
mul.f64 fd58, fd31, 0d3FECD4BCA9CB5C71;
sub.f64 fd59, fd57, fd58;
fma.rn.f64 fd60, fd33, 0d3FE3F3A0E28BEDD1, fd59;
mul.f64 fd61, fd46, 0d3FEF329C0558E969;
mul.f64 fd62, fd48, 0d3FDBC4C04D71ABC1;
sub.f64 fd63, fd62, fd61;
fma.rn.f64 fd64, fd51, 0d3FE904C37505DE4B, fd63;
sub.f64 fd65, fd60, fd64;
add.f64 fd66, fd64, fd60;
mul.f64 fd67, fd29, 0d3FECD4BCA9CB5C71;
sub.f64 fd68, %17, fd67;
fma.rn.f64 fd69, fd31, 0d3FE3F3A0E28BEDD1, fd68;
mul.f64 fd70, fd33, 0d3FCC7B90E3024582;
sub.f64 fd71, fd69, fd70;
mul.f64 fd72, fd46, 0d3FDBC4C04D71ABC1;
mul.f64 fd73, fd48, 0d3FE904C37505DE4B;
sub.f64 fd74, fd73, fd72;
mul.f64 fd75, fd51, 0d3FEF329C0558E969;
sub.f64 fd76, fd74, fd75;
sub.f64 fd77, fd71, fd76;
add.f64 fd78, fd76, fd71;
fma.rn.f64 fd79, fd35, 0d3FE3F3A0E28BEDD1, %18;
mul.f64 fd80, fd37, 0d3FCC7B90E3024582;
sub.f64 fd81, fd79, fd80;
mul.f64 fd82, fd39, 0d3FECD4BCA9CB5C71;
sub.f64 fd83, fd81, fd82;
sub.f64 fd84, %19, %33;
mul.f64 fd85, fd84, 0d3FE904C37505DE4B;
sub.f64 fd86, %22, %30;
mul.f64 fd87, fd86, 0dBFEF329C0558E969;
sub.f64 fd88, fd87, fd85;
sub.f64 fd89, %25, %27;
mul.f64 fd90, fd89, 0d3FDBC4C04D71ABC1;
sub.f64 fd91, fd88, fd90;
add.f64 fd92, fd91, fd83;
sub.f64 fd93, fd83, fd91;
mul.f64 fd94, fd35, 0d3FCC7B90E3024582;
sub.f64 fd95, %18, fd94;
mul.f64 fd96, fd37, 0d3FECD4BCA9CB5C71;
sub.f64 fd97, fd95, fd96;
fma.rn.f64 fd98, fd39, 0d3FE3F3A0E28BEDD1, fd97;
mul.f64 fd99, fd84, 0d3FEF329C0558E969;
mul.f64 fd100, fd86, 0d3FDBC4C04D71ABC1;
sub.f64 fd101, fd100, fd99;
fma.rn.f64 fd102, fd89, 0d3FE904C37505DE4B, fd101;
add.f64 fd103, fd102, fd98;
sub.f64 fd104, fd98, fd102;
mul.f64 fd105, fd35, 0d3FECD4BCA9CB5C71;
sub.f64 fd106, %18, fd105;
fma.rn.f64 fd107, fd37, 0d3FE3F3A0E28BEDD1, fd106;
mul.f64 fd108, fd39, 0d3FCC7B90E3024582;
sub.f64 fd109, fd107, fd108;
mul.f64 fd110, fd84, 0d3FDBC4C04D71ABC1;
mul.f64 fd111, fd86, 0d3FE904C37505DE4B;
sub.f64 fd112, fd111, fd110;
mul.f64 fd113, fd89, 0d3FEF329C0558E969;
sub.f64 fd114, fd112, fd113;
add.f64 fd115, fd114, fd109;
sub.f64 fd116, fd109, fd114;
mov.u32 r4, %tid.x;
mul.wide.u32 rd2, r4, 1402438301;
shr.u64 rd3, rd2, 36;
cvt.u32.u64 r5, rd3;
mul.lo.s32 r6, r5, 49;
sub.s32 r7, r4, r6;
mul.wide.u32 rd4, r7, 16;
mov.u64 rd5, %15;
add.s64 rd6, rd5, rd4;
ld.global.v2.f64 {fd117, fd118}, [rd6];
mul.f64 fd121, fd117, fd54;
mul.f64 fd122, fd118, fd92;
sub.f64 fd123, fd121, fd122;
mul.f64 fd124, fd117, fd92;
fma.rn.f64 fd125, fd118, fd54, fd124;
mul.f64 fd126, fd117, fd117;
mul.f64 fd127, fd118, fd118;
sub.f64 fd128, fd126, fd127;
mul.f64 fd129, fd118, fd117;
fma.rn.f64 fd130, fd118, fd117, fd129;
mul.f64 fd131, fd128, fd65;
mul.f64 fd132, fd130, fd103;
sub.f64 fd133, fd131, fd132;
mul.f64 fd134, fd128, fd103;
fma.rn.f64 fd135, fd130, fd65, fd134;
mul.f64 fd136, fd117, fd128;
mul.f64 fd137, fd118, fd130;
sub.f64 fd138, fd136, fd137;
mul.f64 fd139, fd117, fd130;
fma.rn.f64 fd140, fd118, fd128, fd139;
mul.f64 fd141, fd138, fd77;
mul.f64 fd142, fd140, fd115;
sub.f64 fd143, fd141, fd142;
mul.f64 fd144, fd138, fd115;
fma.rn.f64 fd145, fd140, fd77, fd144;
ld.global.v2.f64 {fd146, fd147}, [rd6+784];
mul.f64 fd150, fd146, fd78;
mul.f64 fd151, fd147, fd116;
sub.f64 fd152, fd150, fd151;
mul.f64 fd153, fd146, fd116;
fma.rn.f64 fd154, fd147, fd78, fd153;
mul.f64 fd155, fd117, fd146;
mul.f64 fd156, fd118, fd147;
sub.f64 fd157, fd155, fd156;
mul.f64 fd158, fd117, fd147;
fma.rn.f64 fd159, fd118, fd146, fd158;
mul.f64 fd160, fd157, fd66;
mul.f64 fd161, fd159, fd104;
sub.f64 fd162, fd160, fd161;
mul.f64 fd163, fd157, fd104;
fma.rn.f64 fd164, fd159, fd66, fd163;
mul.f64 fd165, fd117, fd157;
mul.f64 fd166, fd118, fd159;
sub.f64 fd167, fd165, fd166;
mul.f64 fd168, fd117, fd159;
fma.rn.f64 fd169, fd118, fd157, fd168;
mul.f64 fd170, fd167, fd55;
mul.f64 fd171, fd169, fd93;
sub.f64 fd172, fd170, fd171;
mul.f64 fd173, fd167, fd93;
fma.rn.f64 fd174, fd169, fd55, fd173;
mad.lo.s32 r8, r5, 2744, r3;
barrier.sync 0;
mad.lo.s32 r9, r7, 56, r8;
st.shared.f64 [r9], fd34;
st.shared.f64 [r9+8], fd123;
st.shared.f64 [r9+16], fd133;
st.shared.f64 [r9+24], fd143;
st.shared.f64 [r9+32], fd152;
st.shared.f64 [r9+40], fd162;
st.shared.f64 [r9+48], fd172;
barrier.sync 0;
mad.lo.s32 r10, r7, -48, r9;
ld.shared.f64 fd175, [r10];
ld.shared.f64 fd176, [r10+392];
ld.shared.f64 fd177, [r10+784];
ld.shared.f64 fd178, [r10+1176];
ld.shared.f64 fd179, [r10+1568];
ld.shared.f64 fd180, [r10+1960];
ld.shared.f64 fd181, [r10+2352];
barrier.sync 0;
st.shared.f64 [r9], fd40;
st.shared.f64 [r9+8], fd125;
st.shared.f64 [r9+16], fd135;
st.shared.f64 [r9+24], fd145;
st.shared.f64 [r9+32], fd154;
st.shared.f64 [r9+40], fd164;
st.shared.f64 [r9+48], fd174;
barrier.sync 0;
ld.shared.f64 fd182, [r10];
ld.shared.f64 fd183, [r10+392];
ld.shared.f64 fd184, [r10+784];
ld.shared.f64 fd185, [r10+1176];
ld.shared.f64 fd186, [r10+1568];
ld.shared.f64 fd187, [r10+1960];
ld.shared.f64 fd188, [r10+2352];
add.f64 fd189, fd176, fd181;
add.f64 fd190, fd175, fd189;
add.f64 fd191, fd177, fd180;
add.f64 fd192, fd191, fd190;
add.f64 fd193, fd178, fd179;
add.f64 fd194, fd193, fd192;
add.f64 fd195, fd183, fd188;
add.f64 fd196, fd182, fd195;
add.f64 fd197, fd184, fd187;
add.f64 fd198, fd197, fd196;
add.f64 fd199, fd185, fd186;
add.f64 fd200, fd199, fd198;
fma.rn.f64 fd201, fd189, 0d3FE3F3A0E28BEDD1, fd175;
mul.f64 fd202, fd191, 0d3FCC7B90E3024582;
sub.f64 fd203, fd201, fd202;
mul.f64 fd204, fd193, 0d3FECD4BCA9CB5C71;
sub.f64 fd205, fd203, fd204;
sub.f64 fd206, fd183, fd188;
mul.f64 fd207, fd206, 0d3FE904C37505DE4B;
sub.f64 fd208, fd184, fd187;
mul.f64 fd209, fd208, 0dBFEF329C0558E969;
sub.f64 fd210, fd209, fd207;
sub.f64 fd211, fd185, fd186;
mul.f64 fd212, fd211, 0d3FDBC4C04D71ABC1;
sub.f64 fd213, fd210, fd212;
sub.f64 fd214, fd205, fd213;
add.f64 fd215, fd213, fd205;
mul.f64 fd216, fd189, 0d3FCC7B90E3024582;
sub.f64 fd217, fd175, fd216;
mul.f64 fd218, fd191, 0d3FECD4BCA9CB5C71;
sub.f64 fd219, fd217, fd218;
fma.rn.f64 fd220, fd193, 0d3FE3F3A0E28BEDD1, fd219;
mul.f64 fd221, fd206, 0d3FEF329C0558E969;
mul.f64 fd222, fd208, 0d3FDBC4C04D71ABC1;
sub.f64 fd223, fd222, fd221;
fma.rn.f64 fd224, fd211, 0d3FE904C37505DE4B, fd223;
sub.f64 fd225, fd220, fd224;
add.f64 fd226, fd224, fd220;
mul.f64 fd227, fd189, 0d3FECD4BCA9CB5C71;
sub.f64 fd228, fd175, fd227;
fma.rn.f64 fd229, fd191, 0d3FE3F3A0E28BEDD1, fd228;
mul.f64 fd230, fd193, 0d3FCC7B90E3024582;
sub.f64 fd231, fd229, fd230;
mul.f64 fd232, fd206, 0d3FDBC4C04D71ABC1;
mul.f64 fd233, fd208, 0d3FE904C37505DE4B;
sub.f64 fd234, fd233, fd232;
mul.f64 fd235, fd211, 0d3FEF329C0558E969;
sub.f64 fd236, fd234, fd235;
sub.f64 fd237, fd231, fd236;
add.f64 fd238, fd236, fd231;
fma.rn.f64 fd239, fd195, 0d3FE3F3A0E28BEDD1, fd182;
mul.f64 fd240, fd197, 0d3FCC7B90E3024582;
sub.f64 fd241, fd239, fd240;
mul.f64 fd242, fd199, 0d3FECD4BCA9CB5C71;
sub.f64 fd243, fd241, fd242;
sub.f64 fd244, fd176, fd181;
mul.f64 fd245, fd244, 0d3FE904C37505DE4B;
sub.f64 fd246, fd177, fd180;
mul.f64 fd247, fd246, 0dBFEF329C0558E969;
sub.f64 fd248, fd247, fd245;
sub.f64 fd249, fd178, fd179;
mul.f64 fd250, fd249, 0d3FDBC4C04D71ABC1;
sub.f64 fd251, fd248, fd250;
add.f64 fd252, fd251, fd243;
sub.f64 fd253, fd243, fd251;
mul.f64 fd254, fd195, 0d3FCC7B90E3024582;
sub.f64 fd255, fd182, fd254;
mul.f64 fd256, fd197, 0d3FECD4BCA9CB5C71;
sub.f64 fd257, fd255, fd256;
fma.rn.f64 fd258, fd199, 0d3FE3F3A0E28BEDD1, fd257;
mul.f64 fd259, fd244, 0d3FEF329C0558E969;
mul.f64 fd260, fd246, 0d3FDBC4C04D71ABC1;
sub.f64 fd261, fd260, fd259;
fma.rn.f64 fd262, fd249, 0d3FE904C37505DE4B, fd261;
add.f64 fd263, fd262, fd258;
sub.f64 fd264, fd258, fd262;
mul.f64 fd265, fd195, 0d3FECD4BCA9CB5C71;
sub.f64 fd266, fd182, fd265;
fma.rn.f64 fd267, fd197, 0d3FE3F3A0E28BEDD1, fd266;
mul.f64 fd268, fd199, 0d3FCC7B90E3024582;
sub.f64 fd269, fd267, fd268;
mul.f64 fd270, fd244, 0d3FDBC4C04D71ABC1;
mul.f64 fd271, fd246, 0d3FE904C37505DE4B;
sub.f64 fd272, fd271, fd270;
mul.f64 fd273, fd249, 0d3FEF329C0558E969;
sub.f64 fd274, fd272, fd273;
add.f64 fd275, fd274, fd269;
sub.f64 fd276, fd269, fd274;
mul.wide.u32 rd7, r7, 613566757;
shr.u64 rd8, rd7, 32;
cvt.u32.u64 r11, rd8;
sub.s32 r12, r7, r11;
shr.u32 r13, r12, 1;
add.s32 r14, r13, r11;
shr.u32 r15, r14, 2;
mul.lo.s32 r16, r15, 7;
sub.s32 r17, r7, r16;
mul.wide.u32 rd9, r15, 16;
mov.u64 rd10, %16;
add.s64 rd11, rd10, rd9;
ld.global.v2.f64 {fd277, fd278}, [rd11];
mul.f64 fd281, fd277, fd214;
mul.f64 fd282, fd278, fd252;
sub.f64 fd283, fd281, fd282;
mul.f64 fd284, fd277, fd252;
fma.rn.f64 fd285, fd278, fd214, fd284;
mul.f64 fd286, fd277, fd277;
mul.f64 fd287, fd278, fd278;
sub.f64 fd288, fd286, fd287;
mul.f64 fd289, fd278, fd277;
fma.rn.f64 fd290, fd278, fd277, fd289;
mul.f64 fd291, fd288, fd225;
mul.f64 fd292, fd290, fd263;
sub.f64 fd293, fd291, fd292;
mul.f64 fd294, fd288, fd263;
fma.rn.f64 fd295, fd290, fd225, fd294;
mul.f64 fd296, fd277, fd288;
mul.f64 fd297, fd278, fd290;
sub.f64 fd298, fd296, fd297;
mul.f64 fd299, fd277, fd290;
fma.rn.f64 fd300, fd278, fd288, fd299;
mul.f64 fd301, fd298, fd237;
mul.f64 fd302, fd300, fd275;
sub.f64 fd303, fd301, fd302;
mul.f64 fd304, fd298, fd275;
fma.rn.f64 fd305, fd300, fd237, fd304;
ld.global.v2.f64 {fd306, fd307}, [rd11+112];
mul.f64 fd310, fd306, fd238;
mul.f64 fd311, fd307, fd276;
sub.f64 fd312, fd310, fd311;
mul.f64 fd313, fd306, fd276;
fma.rn.f64 fd314, fd307, fd238, fd313;
mul.f64 fd315, fd277, fd306;
mul.f64 fd316, fd278, fd307;
sub.f64 fd317, fd315, fd316;
mul.f64 fd318, fd277, fd307;
fma.rn.f64 fd319, fd278, fd306, fd318;
mul.f64 fd320, fd317, fd226;
mul.f64 fd321, fd319, fd264;
sub.f64 fd322, fd320, fd321;
mul.f64 fd323, fd317, fd264;
fma.rn.f64 fd324, fd319, fd226, fd323;
mul.f64 fd325, fd277, fd317;
mul.f64 fd326, fd278, fd319;
sub.f64 fd327, fd325, fd326;
mul.f64 fd328, fd277, fd319;
fma.rn.f64 fd329, fd278, fd317, fd328;
mul.f64 fd330, fd327, fd215;
mul.f64 fd331, fd329, fd253;
sub.f64 fd332, fd330, fd331;
mul.f64 fd333, fd327, fd253;
fma.rn.f64 fd334, fd329, fd215, fd333;
shl.b32 r18, r17, 3;
add.s32 r19, r8, r18;
barrier.sync 0;
mad.lo.s32 r20, r15, 392, r19;
st.shared.f64 [r20], fd194;
st.shared.f64 [r20+56], fd283;
st.shared.f64 [r20+112], fd293;
st.shared.f64 [r20+168], fd303;
st.shared.f64 [r20+224], fd312;
st.shared.f64 [r20+280], fd322;
st.shared.f64 [r20+336], fd332;
barrier.sync 0;
ld.shared.f64 fd335, [r10];
ld.shared.f64 fd336, [r10+392];
ld.shared.f64 fd337, [r10+784];
ld.shared.f64 fd338, [r10+1176];
ld.shared.f64 fd339, [r10+1568];
ld.shared.f64 fd340, [r10+1960];
ld.shared.f64 fd341, [r10+2352];
barrier.sync 0;
st.shared.f64 [r20], fd200;
st.shared.f64 [r20+56], fd285;
st.shared.f64 [r20+112], fd295;
st.shared.f64 [r20+168], fd305;
st.shared.f64 [r20+224], fd314;
st.shared.f64 [r20+280], fd324;
st.shared.f64 [r20+336], fd334;
barrier.sync 0;
ld.shared.f64 fd342, [r10];
ld.shared.f64 fd343, [r10+392];
ld.shared.f64 fd344, [r10+784];
ld.shared.f64 fd345, [r10+1176];
ld.shared.f64 fd346, [r10+1568];
ld.shared.f64 fd347, [r10+1960];
ld.shared.f64 fd348, [r10+2352];
add.f64 fd349, fd336, fd341;
add.f64 fd350, fd335, fd349;
add.f64 fd351, fd337, fd340;
add.f64 fd352, fd351, fd350;
add.f64 fd353, fd338, fd339;
add.f64 fd354, fd343, fd348;
add.f64 fd355, fd342, fd354;
add.f64 fd356, fd344, fd347;
add.f64 fd357, fd356, fd355;
add.f64 fd358, fd345, fd346;
fma.rn.f64 fd359, fd349, 0d3FE3F3A0E28BEDD1, fd335;
mul.f64 fd360, fd351, 0d3FCC7B90E3024582;
sub.f64 fd361, fd359, fd360;
mul.f64 fd362, fd353, 0d3FECD4BCA9CB5C71;
sub.f64 fd363, fd361, fd362;
sub.f64 fd364, fd343, fd348;
mul.f64 fd365, fd364, 0d3FE904C37505DE4B;
sub.f64 fd366, fd344, fd347;
mul.f64 fd367, fd366, 0dBFEF329C0558E969;
sub.f64 fd368, fd367, fd365;
sub.f64 fd369, fd345, fd346;
mul.f64 fd370, fd369, 0d3FDBC4C04D71ABC1;
sub.f64 fd371, fd368, fd370;
mul.f64 fd372, fd349, 0d3FCC7B90E3024582;
sub.f64 fd373, fd335, fd372;
mul.f64 fd374, fd351, 0d3FECD4BCA9CB5C71;
sub.f64 fd375, fd373, fd374;
fma.rn.f64 fd376, fd353, 0d3FE3F3A0E28BEDD1, fd375;
mul.f64 fd377, fd364, 0d3FEF329C0558E969;
mul.f64 fd378, fd366, 0d3FDBC4C04D71ABC1;
sub.f64 fd379, fd378, fd377;
fma.rn.f64 fd380, fd369, 0d3FE904C37505DE4B, fd379;
mul.f64 fd381, fd349, 0d3FECD4BCA9CB5C71;
sub.f64 fd382, fd335, fd381;
fma.rn.f64 fd383, fd351, 0d3FE3F3A0E28BEDD1, fd382;
mul.f64 fd384, fd353, 0d3FCC7B90E3024582;
sub.f64 fd385, fd383, fd384;
mul.f64 fd386, fd364, 0d3FDBC4C04D71ABC1;
mul.f64 fd387, fd366, 0d3FE904C37505DE4B;
sub.f64 fd388, fd387, fd386;
mul.f64 fd389, fd369, 0d3FEF329C0558E969;
sub.f64 fd390, fd388, fd389;
fma.rn.f64 fd391, fd354, 0d3FE3F3A0E28BEDD1, fd342;
mul.f64 fd392, fd356, 0d3FCC7B90E3024582;
sub.f64 fd393, fd391, fd392;
mul.f64 fd394, fd358, 0d3FECD4BCA9CB5C71;
sub.f64 fd395, fd393, fd394;
sub.f64 fd396, fd336, fd341;
mul.f64 fd397, fd396, 0d3FE904C37505DE4B;
sub.f64 fd398, fd337, fd340;
mul.f64 fd399, fd398, 0dBFEF329C0558E969;
sub.f64 fd400, fd399, fd397;
sub.f64 fd401, fd338, fd339;
mul.f64 fd402, fd401, 0d3FDBC4C04D71ABC1;
sub.f64 fd403, fd400, fd402;
mul.f64 fd404, fd354, 0d3FCC7B90E3024582;
sub.f64 fd405, fd342, fd404;
mul.f64 fd406, fd356, 0d3FECD4BCA9CB5C71;
sub.f64 fd407, fd405, fd406;
fma.rn.f64 fd408, fd358, 0d3FE3F3A0E28BEDD1, fd407;
mul.f64 fd409, fd396, 0d3FEF329C0558E969;
mul.f64 fd410, fd398, 0d3FDBC4C04D71ABC1;
sub.f64 fd411, fd410, fd409;
fma.rn.f64 fd412, fd401, 0d3FE904C37505DE4B, fd411;
mul.f64 fd413, fd354, 0d3FECD4BCA9CB5C71;
sub.f64 fd414, fd342, fd413;
fma.rn.f64 fd415, fd356, 0d3FE3F3A0E28BEDD1, fd414;
mul.f64 fd416, fd358, 0d3FCC7B90E3024582;
sub.f64 fd417, fd415, fd416;
mul.f64 fd418, fd396, 0d3FDBC4C04D71ABC1;
mul.f64 fd419, fd398, 0d3FE904C37505DE4B;
sub.f64 fd420, fd419, fd418;
mul.f64 fd421, fd401, 0d3FEF329C0558E969;
sub.f64 fd422, fd420, fd421;
add.f64 %0, fd353, fd352;
add.f64 %1, fd358, fd357;
add.f64 %3, fd403, fd395;
sub.f64 %2, fd363, fd371;
sub.f64 %4, fd376, fd380;
add.f64 %5, fd412, fd408;
sub.f64 %6, fd385, fd390;
add.f64 %7, fd422, fd417;
add.f64 %8, fd390, fd385;
sub.f64 %9, fd417, fd422;
add.f64 %10, fd380, fd376;
sub.f64 %11, fd408, fd412;
sub.f64 %13, fd395, fd403;
add.f64 %12, fd371, fd363;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y): "r"(smem), "l"(lut_dp_7_343), "l"(lut_dp_7_49), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y));
};


#endif


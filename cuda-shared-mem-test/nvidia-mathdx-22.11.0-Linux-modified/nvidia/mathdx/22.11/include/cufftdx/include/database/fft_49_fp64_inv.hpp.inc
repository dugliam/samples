//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_49_FP64_INV_PTX_HPP
#define CUFFTDX_FFT_49_FP64_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<719, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .b32 r<15>;
.reg .f64 fd<283>;
.reg .b64 rd<7>;
mov.u32 r1, %tid.y;
mov.u32 r2, %14;
mad.lo.s32 r3, r1, 784, r2;
add.f64 fd29, %18, %32;
add.f64 fd30, %16, fd29;
add.f64 fd31, %21, %29;
add.f64 fd32, fd31, fd30;
add.f64 fd33, %24, %26;
add.f64 fd34, %20, %33;
add.f64 fd35, %17, fd34;
add.f64 fd36, %23, %31;
add.f64 fd37, fd36, fd35;
add.f64 fd38, %25, %28;
fma.rn.f64 fd39, fd29, 0d3FE3F3A0E28BEDD1, %16;
mul.f64 fd40, fd31, 0d3FCC7B90E3024582;
sub.f64 fd41, fd39, fd40;
mul.f64 fd42, fd33, 0d3FECD4BCA9CB5C71;
sub.f64 fd43, fd41, fd42;
sub.f64 fd44, %20, %33;
mul.f64 fd45, fd44, 0d3FE904C37505DE4B;
sub.f64 fd46, %23, %31;
fma.rn.f64 fd47, fd46, 0d3FEF329C0558E969, fd45;
sub.f64 fd48, %25, %28;
fma.rn.f64 fd49, fd48, 0d3FDBC4C04D71ABC1, fd47;
sub.f64 fd50, fd43, fd49;
add.f64 fd51, fd49, fd43;
mul.f64 fd52, fd29, 0d3FCC7B90E3024582;
sub.f64 fd53, %16, fd52;
mul.f64 fd54, fd31, 0d3FECD4BCA9CB5C71;
sub.f64 fd55, fd53, fd54;
fma.rn.f64 fd56, fd33, 0d3FE3F3A0E28BEDD1, fd55;
mul.f64 fd57, fd44, 0d3FEF329C0558E969;
mul.f64 fd58, fd46, 0d3FDBC4C04D71ABC1;
sub.f64 fd59, fd57, fd58;
mul.f64 fd60, fd48, 0d3FE904C37505DE4B;
sub.f64 fd61, fd59, fd60;
sub.f64 fd62, fd56, fd61;
add.f64 fd63, fd61, fd56;
mul.f64 fd64, fd29, 0d3FECD4BCA9CB5C71;
sub.f64 fd65, %16, fd64;
fma.rn.f64 fd66, fd31, 0d3FE3F3A0E28BEDD1, fd65;
mul.f64 fd67, fd33, 0d3FCC7B90E3024582;
sub.f64 fd68, fd66, fd67;
mul.f64 fd69, fd44, 0d3FDBC4C04D71ABC1;
mul.f64 fd70, fd46, 0d3FE904C37505DE4B;
sub.f64 fd71, fd69, fd70;
fma.rn.f64 fd72, fd48, 0d3FEF329C0558E969, fd71;
sub.f64 fd73, fd68, fd72;
add.f64 fd74, fd72, fd68;
fma.rn.f64 fd75, fd34, 0d3FE3F3A0E28BEDD1, %17;
mul.f64 fd76, fd36, 0d3FCC7B90E3024582;
sub.f64 fd77, fd75, fd76;
mul.f64 fd78, fd38, 0d3FECD4BCA9CB5C71;
sub.f64 fd79, fd77, fd78;
sub.f64 fd80, %18, %32;
mul.f64 fd81, fd80, 0d3FE904C37505DE4B;
sub.f64 fd82, %21, %29;
fma.rn.f64 fd83, fd82, 0d3FEF329C0558E969, fd81;
sub.f64 fd84, %24, %26;
fma.rn.f64 fd85, fd84, 0d3FDBC4C04D71ABC1, fd83;
add.f64 fd86, fd85, fd79;
sub.f64 fd87, fd79, fd85;
mul.f64 fd88, fd34, 0d3FCC7B90E3024582;
sub.f64 fd89, %17, fd88;
mul.f64 fd90, fd36, 0d3FECD4BCA9CB5C71;
sub.f64 fd91, fd89, fd90;
fma.rn.f64 fd92, fd38, 0d3FE3F3A0E28BEDD1, fd91;
mul.f64 fd93, fd80, 0d3FEF329C0558E969;
mul.f64 fd94, fd82, 0d3FDBC4C04D71ABC1;
sub.f64 fd95, fd93, fd94;
mul.f64 fd96, fd84, 0d3FE904C37505DE4B;
sub.f64 fd97, fd95, fd96;
add.f64 fd98, fd97, fd92;
sub.f64 fd99, fd92, fd97;
mul.f64 fd100, fd34, 0d3FECD4BCA9CB5C71;
sub.f64 fd101, %17, fd100;
fma.rn.f64 fd102, fd36, 0d3FE3F3A0E28BEDD1, fd101;
mul.f64 fd103, fd38, 0d3FCC7B90E3024582;
sub.f64 fd104, fd102, fd103;
mul.f64 fd105, fd80, 0d3FDBC4C04D71ABC1;
mul.f64 fd106, fd82, 0d3FE904C37505DE4B;
sub.f64 fd107, fd105, fd106;
fma.rn.f64 fd108, fd84, 0d3FEF329C0558E969, fd107;
add.f64 fd109, fd108, fd104;
sub.f64 fd110, fd104, fd108;
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
mad.lo.s32 r12, r9, 784, r3;
mul.wide.u32 rd4, r11, 16;
mov.u64 rd5, %15;
add.s64 rd6, rd5, rd4;
ld.global.v2.f64 {fd111, fd112}, [rd6];
mul.f64 fd115, fd86, fd112;
mul.f64 fd116, fd50, fd112;
mul.f64 fd117, fd111, fd86;
mul.f64 fd118, fd111, fd111;
mul.f64 fd119, fd112, fd112;
sub.f64 fd120, fd118, fd119;
mul.f64 fd121, fd112, fd111;
fma.rn.f64 fd122, fd112, fd111, fd121;
mul.f64 fd123, fd98, fd122;
mul.f64 fd124, fd62, fd122;
mul.f64 fd125, fd120, fd98;
mul.f64 fd126, fd111, fd120;
mul.f64 fd127, fd112, fd122;
sub.f64 fd128, fd126, fd127;
mul.f64 fd129, fd111, fd122;
fma.rn.f64 fd130, fd112, fd120, fd129;
mul.f64 fd131, fd109, fd130;
mul.f64 fd132, fd73, fd130;
mul.f64 fd133, fd128, fd109;
ld.global.v2.f64 {fd134, fd135}, [rd6+112];
mul.f64 fd138, fd110, fd135;
mul.f64 fd139, fd74, fd135;
mul.f64 fd140, fd134, fd110;
mul.f64 fd141, fd111, fd134;
mul.f64 fd142, fd112, fd135;
sub.f64 fd143, fd141, fd142;
mul.f64 fd144, fd111, fd135;
fma.rn.f64 fd145, fd112, fd134, fd144;
mul.f64 fd146, fd99, fd145;
mul.f64 fd147, fd63, fd145;
mul.f64 fd148, fd143, fd99;
mul.f64 fd149, fd111, fd143;
mul.f64 fd150, fd112, fd145;
sub.f64 fd151, fd149, fd150;
mul.f64 fd152, fd111, fd145;
fma.rn.f64 fd153, fd112, fd143, fd152;
mul.f64 fd154, fd87, fd153;
mul.f64 fd155, fd51, fd153;
mul.f64 fd156, fd151, fd87;
barrier.sync 0;
mad.lo.s32 r13, r11, 112, r12;
add.f64 fd157, fd38, fd37;
add.f64 fd158, fd33, fd32;
st.shared.v2.f64 [r13], {fd158, fd157};
fma.rn.f64 fd159, fd111, fd50, fd115;
sub.f64 fd160, fd117, fd116;
st.shared.v2.f64 [r13+16], {fd159, fd160};
fma.rn.f64 fd161, fd120, fd62, fd123;
sub.f64 fd162, fd125, fd124;
st.shared.v2.f64 [r13+32], {fd161, fd162};
sub.f64 fd163, fd133, fd132;
fma.rn.f64 fd164, fd128, fd73, fd131;
st.shared.v2.f64 [r13+48], {fd164, fd163};
fma.rn.f64 fd165, fd134, fd74, fd138;
sub.f64 fd166, fd140, fd139;
st.shared.v2.f64 [r13+64], {fd165, fd166};
fma.rn.f64 fd167, fd143, fd63, fd146;
sub.f64 fd168, fd148, fd147;
st.shared.v2.f64 [r13+80], {fd167, fd168};
sub.f64 fd169, fd156, fd155;
fma.rn.f64 fd170, fd151, fd51, fd154;
st.shared.v2.f64 [r13+96], {fd170, fd169};
barrier.sync 0;
mad.lo.s32 r14, r11, -96, r13;
ld.shared.v2.f64 {fd171, fd172}, [r14];
ld.shared.v2.f64 {fd175, fd176}, [r14+112];
ld.shared.v2.f64 {fd179, fd180}, [r14+224];
ld.shared.v2.f64 {fd183, fd184}, [r14+336];
ld.shared.v2.f64 {fd187, fd188}, [r14+448];
ld.shared.v2.f64 {fd191, fd192}, [r14+560];
ld.shared.v2.f64 {fd195, fd196}, [r14+672];
add.f64 fd199, fd175, fd195;
add.f64 fd200, fd171, fd199;
add.f64 fd201, fd179, fd191;
add.f64 fd202, fd201, fd200;
add.f64 fd203, fd183, fd187;
add.f64 fd204, fd176, fd196;
add.f64 fd205, fd172, fd204;
add.f64 fd206, fd180, fd192;
add.f64 fd207, fd206, fd205;
add.f64 fd208, fd184, fd188;
fma.rn.f64 fd209, fd199, 0d3FE3F3A0E28BEDD1, fd171;
mul.f64 fd210, fd201, 0d3FCC7B90E3024582;
sub.f64 fd211, fd209, fd210;
mul.f64 fd212, fd203, 0d3FECD4BCA9CB5C71;
sub.f64 fd213, fd211, fd212;
sub.f64 fd214, fd176, fd196;
mul.f64 fd215, fd214, 0d3FE904C37505DE4B;
sub.f64 fd216, fd180, fd192;
fma.rn.f64 fd217, fd216, 0d3FEF329C0558E969, fd215;
sub.f64 fd218, fd184, fd188;
fma.rn.f64 fd219, fd218, 0d3FDBC4C04D71ABC1, fd217;
mul.f64 fd220, fd199, 0d3FCC7B90E3024582;
sub.f64 fd221, fd171, fd220;
mul.f64 fd222, fd201, 0d3FECD4BCA9CB5C71;
sub.f64 fd223, fd221, fd222;
fma.rn.f64 fd224, fd203, 0d3FE3F3A0E28BEDD1, fd223;
mul.f64 fd225, fd214, 0d3FEF329C0558E969;
mul.f64 fd226, fd216, 0d3FDBC4C04D71ABC1;
sub.f64 fd227, fd225, fd226;
mul.f64 fd228, fd218, 0d3FE904C37505DE4B;
sub.f64 fd229, fd227, fd228;
mul.f64 fd230, fd199, 0d3FECD4BCA9CB5C71;
sub.f64 fd231, fd171, fd230;
fma.rn.f64 fd232, fd201, 0d3FE3F3A0E28BEDD1, fd231;
mul.f64 fd233, fd203, 0d3FCC7B90E3024582;
sub.f64 fd234, fd232, fd233;
mul.f64 fd235, fd214, 0d3FDBC4C04D71ABC1;
mul.f64 fd236, fd216, 0d3FE904C37505DE4B;
sub.f64 fd237, fd235, fd236;
fma.rn.f64 fd238, fd218, 0d3FEF329C0558E969, fd237;
fma.rn.f64 fd239, fd204, 0d3FE3F3A0E28BEDD1, fd172;
mul.f64 fd240, fd206, 0d3FCC7B90E3024582;
sub.f64 fd241, fd239, fd240;
mul.f64 fd242, fd208, 0d3FECD4BCA9CB5C71;
sub.f64 fd243, fd241, fd242;
sub.f64 fd244, fd175, fd195;
mul.f64 fd245, fd244, 0d3FE904C37505DE4B;
sub.f64 fd246, fd179, fd191;
fma.rn.f64 fd247, fd246, 0d3FEF329C0558E969, fd245;
sub.f64 fd248, fd183, fd187;
fma.rn.f64 fd249, fd248, 0d3FDBC4C04D71ABC1, fd247;
mul.f64 fd250, fd204, 0d3FCC7B90E3024582;
sub.f64 fd251, fd172, fd250;
mul.f64 fd252, fd206, 0d3FECD4BCA9CB5C71;
sub.f64 fd253, fd251, fd252;
fma.rn.f64 fd254, fd208, 0d3FE3F3A0E28BEDD1, fd253;
mul.f64 fd255, fd244, 0d3FEF329C0558E969;
mul.f64 fd256, fd246, 0d3FDBC4C04D71ABC1;
sub.f64 fd257, fd255, fd256;
mul.f64 fd258, fd248, 0d3FE904C37505DE4B;
sub.f64 fd259, fd257, fd258;
mul.f64 fd260, fd204, 0d3FECD4BCA9CB5C71;
sub.f64 fd261, fd172, fd260;
fma.rn.f64 fd262, fd206, 0d3FE3F3A0E28BEDD1, fd261;
mul.f64 fd263, fd208, 0d3FCC7B90E3024582;
sub.f64 fd264, fd262, fd263;
mul.f64 fd265, fd244, 0d3FDBC4C04D71ABC1;
mul.f64 fd266, fd246, 0d3FE904C37505DE4B;
sub.f64 fd267, fd265, fd266;
fma.rn.f64 fd268, fd248, 0d3FEF329C0558E969, fd267;
add.f64 %1, fd208, fd207;
add.f64 %0, fd203, fd202;
add.f64 %3, fd249, fd243;
sub.f64 %2, fd213, fd219;
add.f64 %5, fd259, fd254;
sub.f64 %4, fd224, fd229;
add.f64 %7, fd268, fd264;
sub.f64 %6, fd234, fd238;
sub.f64 %9, fd264, fd268;
add.f64 %8, fd238, fd234;
sub.f64 %11, fd254, fd259;
add.f64 %10, fd229, fd224;
sub.f64 %13, fd243, fd249;
add.f64 %12, fd219, fd213;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y): "r"(smem), "l"(lut_dp_7_49), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<718, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .b32 r<15>;
.reg .f64 fd<269>;
.reg .b64 rd<7>;
mov.u32 r1, %tid.y;
mov.u32 r2, %14;
mad.lo.s32 r3, r1, 392, r2;
add.f64 fd29, %18, %32;
add.f64 fd30, %16, fd29;
add.f64 fd31, %21, %29;
add.f64 fd32, fd31, fd30;
add.f64 fd33, %24, %26;
add.f64 fd34, fd33, fd32;
add.f64 fd35, %20, %33;
add.f64 fd36, %17, fd35;
add.f64 fd37, %23, %31;
add.f64 fd38, fd37, fd36;
add.f64 fd39, %25, %28;
add.f64 fd40, fd39, fd38;
fma.rn.f64 fd41, fd29, 0d3FE3F3A0E28BEDD1, %16;
mul.f64 fd42, fd31, 0d3FCC7B90E3024582;
sub.f64 fd43, fd41, fd42;
mul.f64 fd44, fd33, 0d3FECD4BCA9CB5C71;
sub.f64 fd45, fd43, fd44;
sub.f64 fd46, %20, %33;
mul.f64 fd47, fd46, 0d3FE904C37505DE4B;
sub.f64 fd48, %23, %31;
fma.rn.f64 fd49, fd48, 0d3FEF329C0558E969, fd47;
sub.f64 fd50, %25, %28;
fma.rn.f64 fd51, fd50, 0d3FDBC4C04D71ABC1, fd49;
sub.f64 fd52, fd45, fd51;
add.f64 fd53, fd51, fd45;
mul.f64 fd54, fd29, 0d3FCC7B90E3024582;
sub.f64 fd55, %16, fd54;
mul.f64 fd56, fd31, 0d3FECD4BCA9CB5C71;
sub.f64 fd57, fd55, fd56;
fma.rn.f64 fd58, fd33, 0d3FE3F3A0E28BEDD1, fd57;
mul.f64 fd59, fd46, 0d3FEF329C0558E969;
mul.f64 fd60, fd48, 0d3FDBC4C04D71ABC1;
sub.f64 fd61, fd59, fd60;
mul.f64 fd62, fd50, 0d3FE904C37505DE4B;
sub.f64 fd63, fd61, fd62;
sub.f64 fd64, fd58, fd63;
add.f64 fd65, fd63, fd58;
mul.f64 fd66, fd29, 0d3FECD4BCA9CB5C71;
sub.f64 fd67, %16, fd66;
fma.rn.f64 fd68, fd31, 0d3FE3F3A0E28BEDD1, fd67;
mul.f64 fd69, fd33, 0d3FCC7B90E3024582;
sub.f64 fd70, fd68, fd69;
mul.f64 fd71, fd46, 0d3FDBC4C04D71ABC1;
mul.f64 fd72, fd48, 0d3FE904C37505DE4B;
sub.f64 fd73, fd71, fd72;
fma.rn.f64 fd74, fd50, 0d3FEF329C0558E969, fd73;
sub.f64 fd75, fd70, fd74;
add.f64 fd76, fd74, fd70;
fma.rn.f64 fd77, fd35, 0d3FE3F3A0E28BEDD1, %17;
mul.f64 fd78, fd37, 0d3FCC7B90E3024582;
sub.f64 fd79, fd77, fd78;
mul.f64 fd80, fd39, 0d3FECD4BCA9CB5C71;
sub.f64 fd81, fd79, fd80;
sub.f64 fd82, %18, %32;
mul.f64 fd83, fd82, 0d3FE904C37505DE4B;
sub.f64 fd84, %21, %29;
fma.rn.f64 fd85, fd84, 0d3FEF329C0558E969, fd83;
sub.f64 fd86, %24, %26;
fma.rn.f64 fd87, fd86, 0d3FDBC4C04D71ABC1, fd85;
add.f64 fd88, fd87, fd81;
sub.f64 fd89, fd81, fd87;
mul.f64 fd90, fd35, 0d3FCC7B90E3024582;
sub.f64 fd91, %17, fd90;
mul.f64 fd92, fd37, 0d3FECD4BCA9CB5C71;
sub.f64 fd93, fd91, fd92;
fma.rn.f64 fd94, fd39, 0d3FE3F3A0E28BEDD1, fd93;
mul.f64 fd95, fd82, 0d3FEF329C0558E969;
mul.f64 fd96, fd84, 0d3FDBC4C04D71ABC1;
sub.f64 fd97, fd95, fd96;
mul.f64 fd98, fd86, 0d3FE904C37505DE4B;
sub.f64 fd99, fd97, fd98;
add.f64 fd100, fd99, fd94;
sub.f64 fd101, fd94, fd99;
mul.f64 fd102, fd35, 0d3FECD4BCA9CB5C71;
sub.f64 fd103, %17, fd102;
fma.rn.f64 fd104, fd37, 0d3FE3F3A0E28BEDD1, fd103;
mul.f64 fd105, fd39, 0d3FCC7B90E3024582;
sub.f64 fd106, fd104, fd105;
mul.f64 fd107, fd82, 0d3FDBC4C04D71ABC1;
mul.f64 fd108, fd84, 0d3FE904C37505DE4B;
sub.f64 fd109, fd107, fd108;
fma.rn.f64 fd110, fd86, 0d3FEF329C0558E969, fd109;
add.f64 fd111, fd110, fd106;
sub.f64 fd112, fd106, fd110;
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
mul.wide.u32 rd4, r11, 16;
mov.u64 rd5, %15;
add.s64 rd6, rd5, rd4;
ld.global.v2.f64 {fd113, fd114}, [rd6];
mul.f64 fd117, fd88, fd114;
fma.rn.f64 fd118, fd113, fd52, fd117;
mul.f64 fd119, fd52, fd114;
mul.f64 fd120, fd113, fd88;
sub.f64 fd121, fd120, fd119;
mul.f64 fd122, fd113, fd113;
mul.f64 fd123, fd114, fd114;
sub.f64 fd124, fd122, fd123;
mul.f64 fd125, fd114, fd113;
fma.rn.f64 fd126, fd114, fd113, fd125;
mul.f64 fd127, fd100, fd126;
fma.rn.f64 fd128, fd124, fd64, fd127;
mul.f64 fd129, fd64, fd126;
mul.f64 fd130, fd124, fd100;
sub.f64 fd131, fd130, fd129;
mul.f64 fd132, fd113, fd124;
mul.f64 fd133, fd114, fd126;
sub.f64 fd134, fd132, fd133;
mul.f64 fd135, fd113, fd126;
fma.rn.f64 fd136, fd114, fd124, fd135;
mul.f64 fd137, fd111, fd136;
fma.rn.f64 fd138, fd134, fd75, fd137;
mul.f64 fd139, fd75, fd136;
mul.f64 fd140, fd134, fd111;
sub.f64 fd141, fd140, fd139;
ld.global.v2.f64 {fd142, fd143}, [rd6+112];
mul.f64 fd146, fd112, fd143;
fma.rn.f64 fd147, fd142, fd76, fd146;
mul.f64 fd148, fd76, fd143;
mul.f64 fd149, fd142, fd112;
sub.f64 fd150, fd149, fd148;
mul.f64 fd151, fd113, fd142;
mul.f64 fd152, fd114, fd143;
sub.f64 fd153, fd151, fd152;
mul.f64 fd154, fd113, fd143;
fma.rn.f64 fd155, fd114, fd142, fd154;
mul.f64 fd156, fd101, fd155;
fma.rn.f64 fd157, fd153, fd65, fd156;
mul.f64 fd158, fd65, fd155;
mul.f64 fd159, fd153, fd101;
sub.f64 fd160, fd159, fd158;
mul.f64 fd161, fd113, fd153;
mul.f64 fd162, fd114, fd155;
sub.f64 fd163, fd161, fd162;
mul.f64 fd164, fd113, fd155;
fma.rn.f64 fd165, fd114, fd153, fd164;
mul.f64 fd166, fd89, fd165;
fma.rn.f64 fd167, fd163, fd53, fd166;
mul.f64 fd168, fd53, fd165;
mul.f64 fd169, fd163, fd89;
sub.f64 fd170, fd169, fd168;
mad.lo.s32 r12, r9, 392, r3;
barrier.sync 0;
mad.lo.s32 r13, r11, 56, r12;
st.shared.f64 [r13], fd34;
st.shared.f64 [r13+8], fd118;
st.shared.f64 [r13+16], fd128;
st.shared.f64 [r13+24], fd138;
st.shared.f64 [r13+32], fd147;
st.shared.f64 [r13+40], fd157;
st.shared.f64 [r13+48], fd167;
barrier.sync 0;
mad.lo.s32 r14, r11, -48, r13;
ld.shared.f64 fd171, [r14];
ld.shared.f64 fd172, [r14+56];
ld.shared.f64 fd173, [r14+112];
ld.shared.f64 fd174, [r14+168];
ld.shared.f64 fd175, [r14+224];
ld.shared.f64 fd176, [r14+280];
ld.shared.f64 fd177, [r14+336];
barrier.sync 0;
st.shared.f64 [r13], fd40;
st.shared.f64 [r13+8], fd121;
st.shared.f64 [r13+16], fd131;
st.shared.f64 [r13+24], fd141;
st.shared.f64 [r13+32], fd150;
st.shared.f64 [r13+40], fd160;
st.shared.f64 [r13+48], fd170;
barrier.sync 0;
ld.shared.f64 fd178, [r14];
ld.shared.f64 fd179, [r14+56];
ld.shared.f64 fd180, [r14+112];
ld.shared.f64 fd181, [r14+168];
ld.shared.f64 fd182, [r14+224];
ld.shared.f64 fd183, [r14+280];
ld.shared.f64 fd184, [r14+336];
add.f64 fd185, fd172, fd177;
add.f64 fd186, fd171, fd185;
add.f64 fd187, fd173, fd176;
add.f64 fd188, fd187, fd186;
add.f64 fd189, fd174, fd175;
add.f64 fd190, fd179, fd184;
add.f64 fd191, fd178, fd190;
add.f64 fd192, fd180, fd183;
add.f64 fd193, fd192, fd191;
add.f64 fd194, fd181, fd182;
fma.rn.f64 fd195, fd185, 0d3FE3F3A0E28BEDD1, fd171;
mul.f64 fd196, fd187, 0d3FCC7B90E3024582;
sub.f64 fd197, fd195, fd196;
mul.f64 fd198, fd189, 0d3FECD4BCA9CB5C71;
sub.f64 fd199, fd197, fd198;
sub.f64 fd200, fd179, fd184;
mul.f64 fd201, fd200, 0d3FE904C37505DE4B;
sub.f64 fd202, fd180, fd183;
fma.rn.f64 fd203, fd202, 0d3FEF329C0558E969, fd201;
sub.f64 fd204, fd181, fd182;
fma.rn.f64 fd205, fd204, 0d3FDBC4C04D71ABC1, fd203;
mul.f64 fd206, fd185, 0d3FCC7B90E3024582;
sub.f64 fd207, fd171, fd206;
mul.f64 fd208, fd187, 0d3FECD4BCA9CB5C71;
sub.f64 fd209, fd207, fd208;
fma.rn.f64 fd210, fd189, 0d3FE3F3A0E28BEDD1, fd209;
mul.f64 fd211, fd200, 0d3FEF329C0558E969;
mul.f64 fd212, fd202, 0d3FDBC4C04D71ABC1;
sub.f64 fd213, fd211, fd212;
mul.f64 fd214, fd204, 0d3FE904C37505DE4B;
sub.f64 fd215, fd213, fd214;
mul.f64 fd216, fd185, 0d3FECD4BCA9CB5C71;
sub.f64 fd217, fd171, fd216;
fma.rn.f64 fd218, fd187, 0d3FE3F3A0E28BEDD1, fd217;
mul.f64 fd219, fd189, 0d3FCC7B90E3024582;
sub.f64 fd220, fd218, fd219;
mul.f64 fd221, fd200, 0d3FDBC4C04D71ABC1;
mul.f64 fd222, fd202, 0d3FE904C37505DE4B;
sub.f64 fd223, fd221, fd222;
fma.rn.f64 fd224, fd204, 0d3FEF329C0558E969, fd223;
fma.rn.f64 fd225, fd190, 0d3FE3F3A0E28BEDD1, fd178;
mul.f64 fd226, fd192, 0d3FCC7B90E3024582;
sub.f64 fd227, fd225, fd226;
mul.f64 fd228, fd194, 0d3FECD4BCA9CB5C71;
sub.f64 fd229, fd227, fd228;
sub.f64 fd230, fd172, fd177;
mul.f64 fd231, fd230, 0d3FE904C37505DE4B;
sub.f64 fd232, fd173, fd176;
fma.rn.f64 fd233, fd232, 0d3FEF329C0558E969, fd231;
sub.f64 fd234, fd174, fd175;
fma.rn.f64 fd235, fd234, 0d3FDBC4C04D71ABC1, fd233;
mul.f64 fd236, fd190, 0d3FCC7B90E3024582;
sub.f64 fd237, fd178, fd236;
mul.f64 fd238, fd192, 0d3FECD4BCA9CB5C71;
sub.f64 fd239, fd237, fd238;
fma.rn.f64 fd240, fd194, 0d3FE3F3A0E28BEDD1, fd239;
mul.f64 fd241, fd230, 0d3FEF329C0558E969;
mul.f64 fd242, fd232, 0d3FDBC4C04D71ABC1;
sub.f64 fd243, fd241, fd242;
mul.f64 fd244, fd234, 0d3FE904C37505DE4B;
sub.f64 fd245, fd243, fd244;
mul.f64 fd246, fd190, 0d3FECD4BCA9CB5C71;
sub.f64 fd247, fd178, fd246;
fma.rn.f64 fd248, fd192, 0d3FE3F3A0E28BEDD1, fd247;
mul.f64 fd249, fd194, 0d3FCC7B90E3024582;
sub.f64 fd250, fd248, fd249;
mul.f64 fd251, fd230, 0d3FDBC4C04D71ABC1;
mul.f64 fd252, fd232, 0d3FE904C37505DE4B;
sub.f64 fd253, fd251, fd252;
fma.rn.f64 fd254, fd234, 0d3FEF329C0558E969, fd253;
add.f64 %0, fd189, fd188;
add.f64 %1, fd194, fd193;
add.f64 %3, fd235, fd229;
sub.f64 %2, fd199, fd205;
sub.f64 %4, fd210, fd215;
add.f64 %5, fd245, fd240;
sub.f64 %6, fd220, fd224;
add.f64 %7, fd254, fd250;
add.f64 %8, fd224, fd220;
sub.f64 %9, fd250, fd254;
add.f64 %10, fd215, fd210;
sub.f64 %11, fd240, fd245;
sub.f64 %13, fd229, fd235;
add.f64 %12, fd205, fd199;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y): "r"(smem), "l"(lut_dp_7_49), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y));
};


#endif


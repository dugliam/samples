//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_9_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_9_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<501, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .f64 fd<153>;
.reg .b64 rd<2>;
add.f64 fd37, %26, %34;
add.f64 fd38, %18, fd37;
add.f64 fd39, %27, %35;
add.f64 fd40, %19, fd39;
mul.f64 fd41, fd37, 0d3FE0000000000000;
sub.f64 fd42, %18, fd41;
sub.f64 fd43, %27, %35;
mul.f64 fd44, fd43, 0d3FEBB67AE8584CAA;
add.f64 fd45, fd44, fd42;
sub.f64 fd46, fd42, fd44;
mul.f64 fd47, fd39, 0d3FE0000000000000;
sub.f64 fd48, %19, fd47;
sub.f64 fd49, %26, %34;
mul.f64 fd50, fd49, 0d3FEBB67AE8584CAA;
sub.f64 fd51, fd48, fd50;
add.f64 fd52, fd50, fd48;
add.f64 fd53, %28, %36;
add.f64 fd54, %20, fd53;
add.f64 fd55, %30, %38;
add.f64 fd56, %22, fd55;
mul.f64 fd57, fd53, 0d3FE0000000000000;
sub.f64 fd58, %20, fd57;
sub.f64 fd59, %30, %38;
mul.f64 fd60, fd59, 0d3FEBB67AE8584CAA;
add.f64 fd61, fd60, fd58;
sub.f64 fd62, fd58, fd60;
mul.f64 fd63, fd55, 0d3FE0000000000000;
sub.f64 fd64, %22, fd63;
sub.f64 fd65, %28, %36;
mul.f64 fd66, fd65, 0d3FEBB67AE8584CAA;
sub.f64 fd67, fd64, fd66;
add.f64 fd68, fd66, fd64;
add.f64 fd69, %31, %39;
add.f64 fd70, %23, fd69;
add.f64 fd71, %33, %40;
add.f64 fd72, %25, fd71;
mul.f64 fd73, fd69, 0d3FE0000000000000;
sub.f64 fd74, %23, fd73;
sub.f64 fd75, %33, %40;
mul.f64 fd76, fd75, 0d3FEBB67AE8584CAA;
add.f64 fd77, fd76, fd74;
sub.f64 fd78, fd74, fd76;
mul.f64 fd79, fd71, 0d3FE0000000000000;
sub.f64 fd80, %25, fd79;
sub.f64 fd81, %31, %39;
mul.f64 fd82, fd81, 0d3FEBB67AE8584CAA;
sub.f64 fd83, fd80, fd82;
add.f64 fd84, fd82, fd80;
mul.f64 fd85, fd61, 0d3FE8836FA2CF5039;
mul.f64 fd86, fd67, 0dBFE491B7523C161D;
sub.f64 fd87, fd85, fd86;
mul.f64 fd88, fd67, 0d3FE8836FA2CF5039;
fma.rn.f64 fd89, fd61, 0dBFE491B7523C161D, fd88;
mul.f64 fd90, fd77, 0d3FC63A1A7E0B738A;
mul.f64 fd91, fd83, 0dBFEF838B8C811C17;
sub.f64 fd92, fd90, fd91;
mul.f64 fd93, fd83, 0d3FC63A1A7E0B738A;
fma.rn.f64 fd94, fd77, 0dBFEF838B8C811C17, fd93;
mul.f64 fd95, fd62, 0d3FC63A1A7E0B738A;
mul.f64 fd96, fd68, 0dBFEF838B8C811C17;
sub.f64 fd97, fd95, fd96;
mul.f64 fd98, fd68, 0d3FC63A1A7E0B738A;
fma.rn.f64 fd99, fd62, 0dBFEF838B8C811C17, fd98;
mul.f64 fd100, fd78, 0dBFEE11F642522D1C;
mul.f64 fd101, fd84, 0dBFD5E3A8748A0BF5;
sub.f64 fd102, fd100, fd101;
mul.f64 fd103, fd84, 0dBFEE11F642522D1C;
fma.rn.f64 fd104, fd78, 0dBFD5E3A8748A0BF5, fd103;
add.f64 fd105, fd54, fd70;
add.f64 fd106, fd56, fd72;
mul.f64 fd107, fd105, 0d3FE0000000000000;
sub.f64 fd108, fd38, fd107;
sub.f64 fd109, fd56, fd72;
mul.f64 fd110, fd109, 0d3FEBB67AE8584CAA;
mul.f64 fd111, fd106, 0d3FE0000000000000;
sub.f64 fd112, fd40, fd111;
sub.f64 fd113, fd54, fd70;
mul.f64 fd114, fd113, 0d3FEBB67AE8584CAA;
add.f64 fd115, fd87, fd92;
add.f64 fd116, fd89, fd94;
mul.f64 fd117, fd115, 0d3FE0000000000000;
sub.f64 fd118, fd45, fd117;
sub.f64 fd119, fd89, fd94;
mul.f64 fd120, fd119, 0d3FEBB67AE8584CAA;
mul.f64 fd121, fd116, 0d3FE0000000000000;
sub.f64 fd122, fd51, fd121;
sub.f64 fd123, fd87, fd92;
mul.f64 fd124, fd123, 0d3FEBB67AE8584CAA;
add.f64 fd125, fd97, fd102;
add.f64 fd126, fd99, fd104;
mul.f64 fd127, fd125, 0d3FE0000000000000;
sub.f64 fd128, fd46, fd127;
sub.f64 fd129, fd99, fd104;
mul.f64 fd130, fd129, 0d3FEBB67AE8584CAA;
mul.f64 fd131, fd126, 0d3FE0000000000000;
sub.f64 fd132, fd52, fd131;
sub.f64 fd133, fd97, fd102;
mul.f64 fd134, fd133, 0d3FEBB67AE8584CAA;
add.f64 %1, fd40, fd106;
add.f64 %0, fd38, fd105;
add.f64 %3, fd51, fd116;
add.f64 %2, fd45, fd115;
add.f64 %5, fd52, fd126;
add.f64 %4, fd46, fd125;
sub.f64 %7, fd112, fd114;
add.f64 %6, fd110, fd108;
sub.f64 %9, fd122, fd124;
add.f64 %8, fd120, fd118;
sub.f64 %11, fd132, fd134;
add.f64 %10, fd130, fd128;
add.f64 %13, fd114, fd112;
sub.f64 %12, fd108, fd110;
add.f64 %15, fd124, fd122;
sub.f64 %14, fd118, fd120;
add.f64 %17, fd134, fd132;
sub.f64 %16, fd128, fd130;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y): "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<502, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .b32 r<12>;
.reg .f64 fd<69>;
.reg .b64 rd<7>;
mov.u32 r1, %tid.y;
mov.u32 r2, %6;
mad.lo.s32 r3, r1, 72, r2;
add.f64 fd13, %10, %13;
add.f64 fd14, %8, fd13;
add.f64 fd15, %12, %14;
add.f64 fd16, %9, fd15;
mul.f64 fd17, fd13, 0d3FE0000000000000;
sub.f64 fd18, %8, fd17;
sub.f64 fd19, %12, %14;
mul.f64 fd20, fd19, 0d3FEBB67AE8584CAA;
add.f64 fd21, fd20, fd18;
sub.f64 fd22, fd18, fd20;
mul.f64 fd23, fd15, 0d3FE0000000000000;
sub.f64 fd24, %9, fd23;
sub.f64 fd25, %10, %13;
mul.f64 fd26, fd25, 0d3FEBB67AE8584CAA;
sub.f64 fd27, fd24, fd26;
add.f64 fd28, fd26, fd24;
mov.u32 r4, %tid.x;
mul.wide.u32 rd2, r4, -1431655765;
shr.u64 rd3, rd2, 33;
cvt.u32.u64 r5, rd3;
mul.lo.s32 r6, r5, 3;
sub.s32 r7, r4, r6;
mad.lo.s32 r8, r5, 72, r3;
mul.wide.u32 rd4, r7, 16;
mov.u64 rd5, %7;
add.s64 rd6, rd5, rd4;
ld.global.v2.f64 {fd29, fd30}, [rd6];
mul.f64 fd33, fd29, fd21;
mul.f64 fd34, fd30, fd27;
sub.f64 fd35, fd33, fd34;
mul.f64 fd36, fd29, fd27;
fma.rn.f64 fd37, fd30, fd21, fd36;
ld.global.v2.f64 {fd38, fd39}, [rd6+48];
mul.f64 fd42, fd38, fd22;
mul.f64 fd43, fd39, fd28;
sub.f64 fd44, fd42, fd43;
mul.f64 fd45, fd38, fd28;
fma.rn.f64 fd46, fd39, fd22, fd45;
barrier.sync 0;
mad.lo.s32 r9, r7, 24, r8;
st.shared.f64 [r9], fd14;
st.shared.f64 [r9+8], fd35;
st.shared.f64 [r9+16], fd44;
barrier.sync 0;
shl.b32 r10, r7, 4;
sub.s32 r11, r9, r10;
ld.shared.f64 fd47, [r11];
ld.shared.f64 fd48, [r11+24];
ld.shared.f64 fd49, [r11+48];
barrier.sync 0;
st.shared.f64 [r9], fd16;
st.shared.f64 [r9+8], fd37;
st.shared.f64 [r9+16], fd46;
barrier.sync 0;
ld.shared.f64 fd50, [r11];
ld.shared.f64 fd51, [r11+24];
ld.shared.f64 fd52, [r11+48];
add.f64 fd53, fd48, fd49;
add.f64 fd54, fd51, fd52;
mul.f64 fd55, fd53, 0d3FE0000000000000;
sub.f64 fd56, fd47, fd55;
sub.f64 fd57, fd51, fd52;
mul.f64 fd58, fd57, 0d3FEBB67AE8584CAA;
mul.f64 fd59, fd54, 0d3FE0000000000000;
sub.f64 fd60, fd50, fd59;
sub.f64 fd61, fd48, fd49;
mul.f64 fd62, fd61, 0d3FEBB67AE8584CAA;
add.f64 %0, fd47, fd53;
add.f64 %1, fd50, fd54;
add.f64 %2, fd58, fd56;
sub.f64 %3, fd60, fd62;
sub.f64 %4, fd56, fd58;
add.f64 %5, fd62, fd60;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y): "r"(smem), "l"(lut_dp_3_9), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<503, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .b32 r<12>;
.reg .f64 fd<75>;
.reg .b64 rd<7>;
mov.u32 r1, %tid.y;
mov.u32 r2, %6;
mad.lo.s32 r3, r1, 144, r2;
add.f64 fd13, %10, %13;
add.f64 fd14, %12, %14;
mul.f64 fd15, fd13, 0d3FE0000000000000;
sub.f64 fd16, %8, fd15;
sub.f64 fd17, %12, %14;
mul.f64 fd18, fd17, 0d3FEBB67AE8584CAA;
add.f64 fd19, fd18, fd16;
sub.f64 fd20, fd16, fd18;
mul.f64 fd21, fd14, 0d3FE0000000000000;
sub.f64 fd22, %9, fd21;
sub.f64 fd23, %10, %13;
mul.f64 fd24, fd23, 0d3FEBB67AE8584CAA;
sub.f64 fd25, fd22, fd24;
add.f64 fd26, fd24, fd22;
mov.u32 r4, %tid.x;
mul.wide.u32 rd2, r4, -1431655765;
shr.u64 rd3, rd2, 33;
cvt.u32.u64 r5, rd3;
mul.lo.s32 r6, r5, 3;
sub.s32 r7, r4, r6;
mad.lo.s32 r8, r5, 144, r3;
mul.wide.u32 rd4, r7, 16;
mov.u64 rd5, %7;
add.s64 rd6, rd5, rd4;
ld.global.v2.f64 {fd27, fd28}, [rd6];
mul.f64 fd31, fd27, fd19;
mul.f64 fd32, fd28, fd25;
mul.f64 fd33, fd27, fd25;
ld.global.v2.f64 {fd34, fd35}, [rd6+48];
mul.f64 fd38, fd34, fd20;
mul.f64 fd39, fd35, fd26;
mul.f64 fd40, fd34, fd26;
barrier.sync 0;
mad.lo.s32 r9, r7, 48, r8;
add.f64 fd41, %9, fd14;
add.f64 fd42, %8, fd13;
st.shared.v2.f64 [r9], {fd42, fd41};
fma.rn.f64 fd43, fd28, fd19, fd33;
sub.f64 fd44, fd31, fd32;
st.shared.v2.f64 [r9+16], {fd44, fd43};
fma.rn.f64 fd45, fd35, fd20, fd40;
sub.f64 fd46, fd38, fd39;
st.shared.v2.f64 [r9+32], {fd46, fd45};
barrier.sync 0;
shl.b32 r10, r7, 5;
sub.s32 r11, r9, r10;
ld.shared.v2.f64 {fd47, fd48}, [r11];
ld.shared.v2.f64 {fd51, fd52}, [r11+48];
ld.shared.v2.f64 {fd55, fd56}, [r11+96];
add.f64 fd59, fd51, fd55;
add.f64 fd60, fd52, fd56;
mul.f64 fd61, fd59, 0d3FE0000000000000;
sub.f64 fd62, fd47, fd61;
sub.f64 fd63, fd52, fd56;
mul.f64 fd64, fd63, 0d3FEBB67AE8584CAA;
mul.f64 fd65, fd60, 0d3FE0000000000000;
sub.f64 fd66, fd48, fd65;
sub.f64 fd67, fd51, fd55;
mul.f64 fd68, fd67, 0d3FEBB67AE8584CAA;
add.f64 %1, fd48, fd60;
add.f64 %0, fd47, fd59;
sub.f64 %3, fd66, fd68;
add.f64 %2, fd64, fd62;
add.f64 %5, fd68, fd66;
sub.f64 %4, fd62, fd64;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y): "r"(smem), "l"(lut_dp_3_9), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y));
};


#endif


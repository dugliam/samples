//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_9_FP32_INV_PTX_HPP
#define CUFFTDX_FFT_9_FP32_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<320, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<153>;
.reg .b64 rd<2>;
add.f32 f37, %26, %34;
add.f32 f38, %18, f37;
add.f32 f39, %27, %35;
add.f32 f40, %19, f39;
mul.f32 f41, f37, 0f3F000000;
sub.f32 f42, %18, f41;
sub.f32 f43, %27, %35;
mul.f32 f44, f43, 0fBF5DB3D7;
add.f32 f45, f44, f42;
sub.f32 f46, f42, f44;
mul.f32 f47, f39, 0f3F000000;
sub.f32 f48, %19, f47;
sub.f32 f49, %26, %34;
mul.f32 f50, f49, 0fBF5DB3D7;
sub.f32 f51, f48, f50;
add.f32 f52, f50, f48;
add.f32 f53, %28, %36;
add.f32 f54, %20, f53;
add.f32 f55, %30, %38;
add.f32 f56, %22, f55;
mul.f32 f57, f53, 0f3F000000;
sub.f32 f58, %20, f57;
sub.f32 f59, %30, %38;
mul.f32 f60, f59, 0fBF5DB3D7;
add.f32 f61, f60, f58;
sub.f32 f62, f58, f60;
mul.f32 f63, f55, 0f3F000000;
sub.f32 f64, %22, f63;
sub.f32 f65, %28, %36;
mul.f32 f66, f65, 0fBF5DB3D7;
sub.f32 f67, f64, f66;
add.f32 f68, f66, f64;
add.f32 f69, %31, %39;
add.f32 f70, %23, f69;
add.f32 f71, %33, %40;
add.f32 f72, %25, f71;
mul.f32 f73, f69, 0f3F000000;
sub.f32 f74, %23, f73;
sub.f32 f75, %33, %40;
mul.f32 f76, f75, 0fBF5DB3D7;
add.f32 f77, f76, f74;
sub.f32 f78, f74, f76;
mul.f32 f79, f71, 0f3F000000;
sub.f32 f80, %25, f79;
sub.f32 f81, %31, %39;
mul.f32 f82, f81, 0fBF5DB3D7;
sub.f32 f83, f80, f82;
add.f32 f84, f82, f80;
mul.f32 f85, f61, 0f3F441B7D;
mul.f32 f86, f67, 0f3F248DBB;
sub.f32 f87, f85, f86;
mul.f32 f88, f67, 0f3F441B7D;
fma.rn.f32 f89, f61, 0f3F248DBB, f88;
mul.f32 f90, f77, 0f3E31D0D4;
mul.f32 f91, f83, 0f3F7C1C5C;
sub.f32 f92, f90, f91;
mul.f32 f93, f83, 0f3E31D0D4;
fma.rn.f32 f94, f77, 0f3F7C1C5C, f93;
mul.f32 f95, f62, 0f3E31D0D4;
mul.f32 f96, f68, 0f3F7C1C5C;
sub.f32 f97, f95, f96;
mul.f32 f98, f68, 0f3E31D0D4;
fma.rn.f32 f99, f62, 0f3F7C1C5C, f98;
mul.f32 f100, f78, 0fBF708FB2;
mul.f32 f101, f84, 0f3EAF1D44;
sub.f32 f102, f100, f101;
mul.f32 f103, f84, 0fBF708FB2;
fma.rn.f32 f104, f78, 0f3EAF1D44, f103;
add.f32 f105, f54, f70;
add.f32 f106, f56, f72;
mul.f32 f107, f105, 0f3F000000;
sub.f32 f108, f38, f107;
sub.f32 f109, f56, f72;
mul.f32 f110, f109, 0fBF5DB3D7;
mul.f32 f111, f106, 0f3F000000;
sub.f32 f112, f40, f111;
sub.f32 f113, f54, f70;
mul.f32 f114, f113, 0fBF5DB3D7;
add.f32 f115, f87, f92;
add.f32 f116, f89, f94;
mul.f32 f117, f115, 0f3F000000;
sub.f32 f118, f45, f117;
sub.f32 f119, f89, f94;
mul.f32 f120, f119, 0fBF5DB3D7;
mul.f32 f121, f116, 0f3F000000;
sub.f32 f122, f51, f121;
sub.f32 f123, f87, f92;
mul.f32 f124, f123, 0fBF5DB3D7;
add.f32 f125, f97, f102;
add.f32 f126, f99, f104;
mul.f32 f127, f125, 0f3F000000;
sub.f32 f128, f46, f127;
sub.f32 f129, f99, f104;
mul.f32 f130, f129, 0fBF5DB3D7;
mul.f32 f131, f126, 0f3F000000;
sub.f32 f132, f52, f131;
sub.f32 f133, f97, f102;
mul.f32 f134, f133, 0fBF5DB3D7;
add.f32 %1, f40, f106;
add.f32 %0, f38, f105;
add.f32 %3, f51, f116;
add.f32 %2, f45, f115;
add.f32 %5, f52, f126;
add.f32 %4, f46, f125;
sub.f32 %7, f112, f114;
add.f32 %6, f110, f108;
sub.f32 %9, f122, f124;
add.f32 %8, f120, f118;
sub.f32 %11, f132, f134;
add.f32 %10, f130, f128;
add.f32 %13, f114, f112;
sub.f32 %12, f108, f110;
add.f32 %15, f124, f122;
sub.f32 %14, f118, f120;
add.f32 %17, f134, f132;
sub.f32 %16, f128, f130;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y), "=f"(rmem[7].x), "=f"(rmem[7].y), "=f"(rmem[8].x), "=f"(rmem[8].y): "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y), "f"(rmem[7].x), "f"(rmem[7].y), "f"(rmem[7].y), "f"(rmem[8].x), "f"(rmem[8].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<321, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<76>;
.reg .b32 r<12>;
.reg .b64 rd<7>;
mov.u32 r1, %tid.y;
mov.u32 r2, %6;
mad.lo.s32 r3, r1, 72, r2;
add.f32 f13, %10, %13;
add.f32 f14, %12, %14;
mul.f32 f15, f13, 0f3F000000;
sub.f32 f16, %8, f15;
sub.f32 f17, %12, %14;
mul.f32 f18, f17, 0fBF5DB3D7;
add.f32 f19, f18, f16;
sub.f32 f20, f16, f18;
mul.f32 f21, f14, 0f3F000000;
sub.f32 f22, %9, f21;
sub.f32 f23, %10, %13;
mul.f32 f24, f23, 0fBF5DB3D7;
sub.f32 f25, f22, f24;
add.f32 f26, f24, f22;
mov.u32 r4, %tid.x;
mul.wide.u32 rd2, r4, -1431655765;
shr.u64 rd3, rd2, 33;
cvt.u32.u64 r5, rd3;
mul.lo.s32 r6, r5, 3;
sub.s32 r7, r4, r6;
mad.lo.s32 r8, r5, 72, r3;
mul.wide.u32 rd4, r7, 8;
mov.u64 rd5, %7;
add.s64 rd6, rd5, rd4;
ld.global.v2.f32 {f27, f28}, [rd6];
mul.f32 f31, f25, f28;
mul.f32 f32, f19, f28;
mul.f32 f33, f27, f25;
mul.f32 f34, f27, f27;
mul.f32 f35, f28, f28;
sub.f32 f36, f34, f35;
mul.f32 f37, f28, f27;
fma.rn.f32 f38, f28, f27, f37;
mul.f32 f39, f26, f38;
mul.f32 f40, f20, f38;
mul.f32 f41, f36, f26;
barrier.sync 0;
mad.lo.s32 r9, r7, 24, r8;
add.f32 f42, %9, f14;
add.f32 f43, %8, f13;
st.shared.v2.f32 [r9], {f43, f42};
fma.rn.f32 f44, f27, f19, f31;
sub.f32 f45, f33, f32;
st.shared.v2.f32 [r9+8], {f44, f45};
sub.f32 f46, f41, f40;
fma.rn.f32 f47, f36, f20, f39;
st.shared.v2.f32 [r9+16], {f47, f46};
barrier.sync 0;
shl.b32 r10, r7, 4;
sub.s32 r11, r9, r10;
ld.shared.v2.f32 {f48, f49}, [r11];
ld.shared.v2.f32 {f52, f53}, [r11+24];
ld.shared.v2.f32 {f56, f57}, [r11+48];
add.f32 f60, f52, f56;
add.f32 f61, f53, f57;
mul.f32 f62, f60, 0f3F000000;
sub.f32 f63, f48, f62;
sub.f32 f64, f53, f57;
mul.f32 f65, f64, 0fBF5DB3D7;
mul.f32 f66, f61, 0f3F000000;
sub.f32 f67, f49, f66;
sub.f32 f68, f52, f56;
mul.f32 f69, f68, 0fBF5DB3D7;
add.f32 %1, f49, f61;
add.f32 %0, f48, f60;
sub.f32 %3, f67, f69;
add.f32 %2, f65, f63;
add.f32 %5, f69, f67;
sub.f32 %4, f63, f65;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y): "r"(smem), "l"(lut_sp_3_9), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<322, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<70>;
.reg .b32 r<12>;
.reg .b64 rd<7>;
mov.u32 r1, %tid.y;
mov.u32 r2, %6;
mad.lo.s32 r3, r1, 36, r2;
add.f32 f13, %10, %13;
add.f32 f14, %8, f13;
add.f32 f15, %12, %14;
add.f32 f16, %9, f15;
mul.f32 f17, f13, 0f3F000000;
sub.f32 f18, %8, f17;
sub.f32 f19, %12, %14;
mul.f32 f20, f19, 0fBF5DB3D7;
add.f32 f21, f20, f18;
sub.f32 f22, f18, f20;
mul.f32 f23, f15, 0f3F000000;
sub.f32 f24, %9, f23;
sub.f32 f25, %10, %13;
mul.f32 f26, f25, 0fBF5DB3D7;
sub.f32 f27, f24, f26;
add.f32 f28, f26, f24;
mov.u32 r4, %tid.x;
mul.wide.u32 rd2, r4, -1431655765;
shr.u64 rd3, rd2, 33;
cvt.u32.u64 r5, rd3;
mul.lo.s32 r6, r5, 3;
sub.s32 r7, r4, r6;
mad.lo.s32 r8, r5, 36, r3;
mul.wide.u32 rd4, r7, 8;
mov.u64 rd5, %7;
add.s64 rd6, rd5, rd4;
ld.global.v2.f32 {f29, f30}, [rd6];
mul.f32 f33, f27, f30;
fma.rn.f32 f34, f29, f21, f33;
mul.f32 f35, f21, f30;
mul.f32 f36, f29, f27;
sub.f32 f37, f36, f35;
mul.f32 f38, f29, f29;
mul.f32 f39, f30, f30;
sub.f32 f40, f38, f39;
mul.f32 f41, f30, f29;
fma.rn.f32 f42, f30, f29, f41;
mul.f32 f43, f28, f42;
fma.rn.f32 f44, f40, f22, f43;
mul.f32 f45, f22, f42;
mul.f32 f46, f40, f28;
sub.f32 f47, f46, f45;
barrier.sync 0;
mad.lo.s32 r9, r7, 12, r8;
st.shared.f32 [r9], f14;
st.shared.f32 [r9+4], f34;
st.shared.f32 [r9+8], f44;
barrier.sync 0;
shl.b32 r10, r7, 3;
sub.s32 r11, r9, r10;
ld.shared.f32 f48, [r11];
ld.shared.f32 f49, [r11+12];
ld.shared.f32 f50, [r11+24];
barrier.sync 0;
st.shared.f32 [r9], f16;
st.shared.f32 [r9+4], f37;
st.shared.f32 [r9+8], f47;
barrier.sync 0;
ld.shared.f32 f51, [r11];
ld.shared.f32 f52, [r11+12];
ld.shared.f32 f53, [r11+24];
add.f32 f54, f49, f50;
add.f32 f55, f52, f53;
mul.f32 f56, f54, 0f3F000000;
sub.f32 f57, f48, f56;
sub.f32 f58, f52, f53;
mul.f32 f59, f58, 0fBF5DB3D7;
mul.f32 f60, f55, 0f3F000000;
sub.f32 f61, f51, f60;
sub.f32 f62, f49, f50;
mul.f32 f63, f62, 0fBF5DB3D7;
add.f32 %0, f48, f54;
add.f32 %1, f51, f55;
add.f32 %2, f59, f57;
sub.f32 %3, f61, f63;
sub.f32 %4, f57, f59;
add.f32 %5, f63, f61;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y): "r"(smem), "l"(lut_sp_3_9), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y));
};


#endif


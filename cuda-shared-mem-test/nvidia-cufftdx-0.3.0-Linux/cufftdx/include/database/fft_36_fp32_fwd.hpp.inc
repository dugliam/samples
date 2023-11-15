#ifndef CUFFTDX_FFT_36_FP32_FWD_PTX_HPP
#define CUFFTDX_FFT_36_FP32_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<202, float, 1>(cufftdx::detail::complex<float> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<198>;\n\t"
    ".reg .b32 r<16>;\n\t"
    ".reg .b64 rd<7>;\n\t"
    "mov.u32 r3, %tid.y;\n\t"
    "mov.u32 r4, %tid.x;\n\t"
    "add.f32 f37, %19, %24;\n\t"
    "add.f32 f38, %14, f37;\n\t"
    "add.f32 f39, %21, %26;\n\t"
    "add.f32 f40, %15, f39;\n\t"
    "fma.rn.f32 f41, f37, 0fBF000000, %14;\n\t"
    "sub.f32 f42, %21, %26;\n\t"
    "mul.f32 f43, f42, 0f3F5DB3D7;\n\t"
    "add.f32 f44, f43, f41;\n\t"
    "sub.f32 f45, f41, f43;\n\t"
    "fma.rn.f32 f46, f39, 0fBF000000, %15;\n\t"
    "sub.f32 f47, %19, %24;\n\t"
    "mul.f32 f48, f47, 0f3F5DB3D7;\n\t"
    "sub.f32 f49, f46, f48;\n\t"
    "add.f32 f50, f48, f46;\n\t"
    "add.f32 f51, %22, %27;\n\t"
    "add.f32 f52, %16, f51;\n\t"
    "add.f32 f53, %23, %28;\n\t"
    "add.f32 f54, %18, f53;\n\t"
    "fma.rn.f32 f55, f51, 0fBF000000, %16;\n\t"
    "sub.f32 f56, %23, %28;\n\t"
    "mul.f32 f57, f56, 0f3F5DB3D7;\n\t"
    "add.f32 f58, f57, f55;\n\t"
    "sub.f32 f59, f55, f57;\n\t"
    "fma.rn.f32 f60, f53, 0fBF000000, %18;\n\t"
    "sub.f32 f61, %22, %27;\n\t"
    "mul.f32 f62, f61, 0f3F5DB3D7;\n\t"
    "sub.f32 f63, f60, f62;\n\t"
    "add.f32 f64, f62, f60;\n\t"
    "mul.f32 f65, f58, 0f3F000000;\n\t"
    "mul.f32 f66, f63, 0fBF5DB3D7;\n\t"
    "sub.f32 f67, f65, f66;\n\t"
    "mul.f32 f68, f63, 0f3F000000;\n\t"
    "fma.rn.f32 f69, f58, 0fBF5DB3D7, f68;\n\t"
    "mul.f32 f70, f59, 0fBF000000;\n\t"
    "mul.f32 f71, f64, 0fBF5DB3D7;\n\t"
    "sub.f32 f72, f70, f71;\n\t"
    "mul.f32 f73, f64, 0fBF000000;\n\t"
    "fma.rn.f32 f74, f59, 0fBF5DB3D7, f73;\n\t"
    "add.f32 f1, f38, f52;\n\t"
    "add.f32 f2, f40, f54;\n\t"
    "sub.f32 f75, f38, f52;\n\t"
    "sub.f32 f76, f40, f54;\n\t"
    "add.f32 f77, f44, f67;\n\t"
    "add.f32 f78, f49, f69;\n\t"
    "sub.f32 f79, f44, f67;\n\t"
    "sub.f32 f80, f49, f69;\n\t"
    "add.f32 f81, f45, f72;\n\t"
    "add.f32 f82, f50, f74;\n\t"
    "sub.f32 f83, f45, f72;\n\t"
    "sub.f32 f84, f50, f74;\n\t"
    "mul.wide.u32 rd2, r4, -1431655765;\n\t"
    "shr.u64 rd3, rd2, 34;\n\t"
    "cvt.u32.u64 r5, rd3;\n\t"
    "mul.lo.s32 r6, r5, 6;\n\t"
    "sub.s32 r1, r4, r6;\n\t"
    "add.s32 r7, r5, r3;\n\t"
    "mul.wide.u32 rd4, r1, 8;\n\t"
    "mov.u64 rd5, %13;\n\t"
    "add.s64 rd6, rd5, rd4;\n\t"
    "ld.global.v2.f32 {f85, f86}, [rd6];\n\t"
    "mul.f32 f89, f85, f77;\n\t"
    "mul.f32 f90, f86, f78;\n\t"
    "sub.f32 f3, f89, f90;\n\t"
    "mul.f32 f91, f85, f78;\n\t"
    "fma.rn.f32 f4, f86, f77, f91;\n\t"
    "mul.f32 f92, f85, f85;\n\t"
    "mul.f32 f93, f86, f86;\n\t"
    "sub.f32 f94, f92, f93;\n\t"
    "mul.f32 f95, f86, f85;\n\t"
    "fma.rn.f32 f96, f86, f85, f95;\n\t"
    "mul.f32 f97, f94, f81;\n\t"
    "mul.f32 f98, f96, f82;\n\t"
    "sub.f32 f5, f97, f98;\n\t"
    "mul.f32 f99, f94, f82;\n\t"
    "fma.rn.f32 f6, f96, f81, f99;\n\t"
    "mul.f32 f100, f85, f94;\n\t"
    "mul.f32 f101, f86, f96;\n\t"
    "sub.f32 f102, f100, f101;\n\t"
    "mul.f32 f103, f85, f96;\n\t"
    "fma.rn.f32 f104, f86, f94, f103;\n\t"
    "mul.f32 f105, f102, f75;\n\t"
    "mul.f32 f106, f104, f76;\n\t"
    "sub.f32 f7, f105, f106;\n\t"
    "mul.f32 f107, f102, f76;\n\t"
    "fma.rn.f32 f8, f104, f75, f107;\n\t"
    "mul.f32 f108, f85, f102;\n\t"
    "mul.f32 f109, f86, f104;\n\t"
    "sub.f32 f110, f108, f109;\n\t"
    "mul.f32 f111, f85, f104;\n\t"
    "fma.rn.f32 f112, f86, f102, f111;\n\t"
    "mul.f32 f113, f110, f79;\n\t"
    "mul.f32 f114, f112, f80;\n\t"
    "sub.f32 f9, f113, f114;\n\t"
    "mul.f32 f115, f110, f80;\n\t"
    "fma.rn.f32 f10, f112, f79, f115;\n\t"
    "mul.f32 f116, f85, f110;\n\t"
    "mul.f32 f117, f86, f112;\n\t"
    "sub.f32 f118, f116, f117;\n\t"
    "mul.f32 f119, f85, f112;\n\t"
    "fma.rn.f32 f120, f86, f110, f119;\n\t"
    "mul.f32 f121, f118, f83;\n\t"
    "mul.f32 f122, f120, f84;\n\t"
    "sub.f32 f11, f121, f122;\n\t"
    "mul.f32 f123, f118, f84;\n\t"
    "fma.rn.f32 f12, f120, f83, f123;\n\t"
    "mul.lo.s32 r2, r7, 36;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r8, r1, 6, r2;\n\t"
    "shl.b32 r9, r8, 3;\n\t"
    "{\n\t"
    ".reg .u64 wide1;\n\t"
    ".reg .u32 narrow1;\n\t"
    "mov.u64 wide1, %12;\n\t"
    "cvt.u32.u64 narrow1, wide1;\n\t"
    "cvta.to.shared.u32 r10, narrow1;\n\t"
    "}\n\t"
    "add.s32 r11, r10, r9;\n\t"
    "st.shared.v2.f32 [r11], {f1, f2};\n\t"
    "st.shared.v2.f32 [r11+8], {f3, f4};\n\t"
    "st.shared.v2.f32 [r11+16], {f5, f6};\n\t"
    "st.shared.v2.f32 [r11+24], {f7, f8};\n\t"
    "st.shared.v2.f32 [r11+32], {f9, f10};\n\t"
    "st.shared.v2.f32 [r11+40], {f11, f12};\n\t"
    "barrier.sync 0;\n\t"
    "add.s32 r12, r1, r2;\n\t"
    "shl.b32 r13, r12, 3;\n\t"
    "add.s32 r15, r10, r13;\n\t"
    "ld.shared.v2.f32 {f124, f125}, [r15];\n\t"
    "ld.shared.v2.f32 {f128, f129}, [r15+48];\n\t"
    "ld.shared.v2.f32 {f132, f133}, [r15+96];\n\t"
    "ld.shared.v2.f32 {f136, f137}, [r15+144];\n\t"
    "ld.shared.v2.f32 {f140, f141}, [r15+192];\n\t"
    "ld.shared.v2.f32 {f144, f145}, [r15+240];\n\t"
    "add.f32 f148, f132, f140;\n\t"
    "add.f32 f149, f124, f148;\n\t"
    "add.f32 f150, f133, f141;\n\t"
    "add.f32 f151, f125, f150;\n\t"
    "fma.rn.f32 f152, f148, 0fBF000000, f124;\n\t"
    "sub.f32 f153, f133, f141;\n\t"
    "mul.f32 f154, f153, 0f3F5DB3D7;\n\t"
    "add.f32 f155, f154, f152;\n\t"
    "sub.f32 f156, f152, f154;\n\t"
    "fma.rn.f32 f157, f150, 0fBF000000, f125;\n\t"
    "sub.f32 f158, f132, f140;\n\t"
    "mul.f32 f159, f158, 0f3F5DB3D7;\n\t"
    "sub.f32 f160, f157, f159;\n\t"
    "add.f32 f161, f159, f157;\n\t"
    "add.f32 f162, f136, f144;\n\t"
    "add.f32 f163, f128, f162;\n\t"
    "add.f32 f164, f137, f145;\n\t"
    "add.f32 f165, f129, f164;\n\t"
    "fma.rn.f32 f166, f162, 0fBF000000, f128;\n\t"
    "sub.f32 f167, f137, f145;\n\t"
    "mul.f32 f168, f167, 0f3F5DB3D7;\n\t"
    "add.f32 f169, f168, f166;\n\t"
    "sub.f32 f170, f166, f168;\n\t"
    "fma.rn.f32 f171, f164, 0fBF000000, f129;\n\t"
    "sub.f32 f172, f136, f144;\n\t"
    "mul.f32 f173, f172, 0f3F5DB3D7;\n\t"
    "sub.f32 f174, f171, f173;\n\t"
    "add.f32 f175, f173, f171;\n\t"
    "mul.f32 f176, f169, 0f3F000000;\n\t"
    "mul.f32 f177, f174, 0fBF5DB3D7;\n\t"
    "sub.f32 f178, f176, f177;\n\t"
    "mul.f32 f179, f174, 0f3F000000;\n\t"
    "fma.rn.f32 f180, f169, 0fBF5DB3D7, f179;\n\t"
    "mul.f32 f181, f170, 0fBF000000;\n\t"
    "mul.f32 f182, f175, 0fBF5DB3D7;\n\t"
    "sub.f32 f183, f181, f182;\n\t"
    "mul.f32 f184, f175, 0fBF000000;\n\t"
    "fma.rn.f32 f185, f170, 0fBF5DB3D7, f184;\n\t"
    "add.f32 %1, f151, f165;\n\t"
    "add.f32 %0, f149, f163;\n\t"
    "add.f32 %3, f160, f180;\n\t"
    "add.f32 %2, f155, f178;\n\t"
    "add.f32 %5, f161, f185;\n\t"
    "add.f32 %4, f156, f183;\n\t"
    "sub.f32 %7, f151, f165;\n\t"
    "sub.f32 %6, f149, f163;\n\t"
    "sub.f32 %9, f160, f180;\n\t"
    "sub.f32 %8, f155, f178;\n\t"
    "sub.f32 %11, f161, f185;\n\t"
    "sub.f32 %10, f156, f183;\n\t"
    "}"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y): "l"(smem), "l"(lut_sp_6_36), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<203, float, 1>(cufftdx::detail::complex<float> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<186>;\n\t"
    ".reg .b32 r<16>;\n\t"
    ".reg .b64 rd<7>;\n\t"
    "mov.u32 r5, %tid.y;\n\t"
    "mov.u32 r6, %tid.x;\n\t"
    "add.f32 f43, %19, %24;\n\t"
    "add.f32 f44, %14, f43;\n\t"
    "add.f32 f45, %21, %26;\n\t"
    "add.f32 f46, %15, f45;\n\t"
    "fma.rn.f32 f47, f43, 0fBF000000, %14;\n\t"
    "sub.f32 f48, %21, %26;\n\t"
    "mul.f32 f49, f48, 0f3F5DB3D7;\n\t"
    "add.f32 f50, f49, f47;\n\t"
    "sub.f32 f51, f47, f49;\n\t"
    "fma.rn.f32 f52, f45, 0fBF000000, %15;\n\t"
    "sub.f32 f53, %19, %24;\n\t"
    "mul.f32 f54, f53, 0f3F5DB3D7;\n\t"
    "sub.f32 f55, f52, f54;\n\t"
    "add.f32 f56, f54, f52;\n\t"
    "add.f32 f57, %22, %27;\n\t"
    "add.f32 f58, %16, f57;\n\t"
    "add.f32 f59, %23, %28;\n\t"
    "add.f32 f60, %18, f59;\n\t"
    "fma.rn.f32 f61, f57, 0fBF000000, %16;\n\t"
    "sub.f32 f62, %23, %28;\n\t"
    "mul.f32 f63, f62, 0f3F5DB3D7;\n\t"
    "add.f32 f64, f63, f61;\n\t"
    "sub.f32 f65, f61, f63;\n\t"
    "fma.rn.f32 f66, f59, 0fBF000000, %18;\n\t"
    "sub.f32 f67, %22, %27;\n\t"
    "mul.f32 f68, f67, 0f3F5DB3D7;\n\t"
    "sub.f32 f69, f66, f68;\n\t"
    "add.f32 f70, f68, f66;\n\t"
    "mul.f32 f71, f64, 0f3F000000;\n\t"
    "mul.f32 f72, f69, 0fBF5DB3D7;\n\t"
    "sub.f32 f73, f71, f72;\n\t"
    "mul.f32 f74, f69, 0f3F000000;\n\t"
    "fma.rn.f32 f75, f64, 0fBF5DB3D7, f74;\n\t"
    "mul.f32 f76, f65, 0fBF000000;\n\t"
    "mul.f32 f77, f70, 0fBF5DB3D7;\n\t"
    "sub.f32 f78, f76, f77;\n\t"
    "mul.f32 f79, f70, 0fBF000000;\n\t"
    "fma.rn.f32 f80, f65, 0fBF5DB3D7, f79;\n\t"
    "add.f32 f1, f44, f58;\n\t"
    "add.f32 f2, f46, f60;\n\t"
    "sub.f32 f81, f44, f58;\n\t"
    "sub.f32 f82, f46, f60;\n\t"
    "add.f32 f83, f50, f73;\n\t"
    "add.f32 f84, f55, f75;\n\t"
    "sub.f32 f85, f50, f73;\n\t"
    "sub.f32 f86, f55, f75;\n\t"
    "add.f32 f87, f51, f78;\n\t"
    "add.f32 f88, f56, f80;\n\t"
    "sub.f32 f89, f51, f78;\n\t"
    "sub.f32 f90, f56, f80;\n\t"
    "mul.wide.u32 rd2, r6, -1431655765;\n\t"
    "shr.u64 rd3, rd2, 34;\n\t"
    "cvt.u32.u64 r7, rd3;\n\t"
    "mul.lo.s32 r8, r7, 6;\n\t"
    "sub.s32 r1, r6, r8;\n\t"
    "add.s32 r9, r7, r5;\n\t"
    "mul.wide.u32 rd4, r1, 8;\n\t"
    "mov.u64 rd5, %13;\n\t"
    "add.s64 rd6, rd5, rd4;\n\t"
    "ld.global.v2.f32 {f91, f92}, [rd6];\n\t"
    "mul.f32 f95, f91, f83;\n\t"
    "mul.f32 f96, f92, f84;\n\t"
    "sub.f32 f3, f95, f96;\n\t"
    "mul.f32 f97, f91, f84;\n\t"
    "fma.rn.f32 f4, f92, f83, f97;\n\t"
    "mul.f32 f98, f91, f91;\n\t"
    "mul.f32 f99, f92, f92;\n\t"
    "sub.f32 f100, f98, f99;\n\t"
    "mul.f32 f101, f92, f91;\n\t"
    "fma.rn.f32 f102, f92, f91, f101;\n\t"
    "mul.f32 f103, f100, f87;\n\t"
    "mul.f32 f104, f102, f88;\n\t"
    "sub.f32 f5, f103, f104;\n\t"
    "mul.f32 f105, f100, f88;\n\t"
    "fma.rn.f32 f6, f102, f87, f105;\n\t"
    "mul.f32 f106, f91, f100;\n\t"
    "mul.f32 f107, f92, f102;\n\t"
    "sub.f32 f108, f106, f107;\n\t"
    "mul.f32 f109, f91, f102;\n\t"
    "fma.rn.f32 f110, f92, f100, f109;\n\t"
    "mul.f32 f111, f108, f81;\n\t"
    "mul.f32 f112, f110, f82;\n\t"
    "sub.f32 f7, f111, f112;\n\t"
    "mul.f32 f113, f108, f82;\n\t"
    "fma.rn.f32 f8, f110, f81, f113;\n\t"
    "mul.f32 f114, f91, f108;\n\t"
    "mul.f32 f115, f92, f110;\n\t"
    "sub.f32 f116, f114, f115;\n\t"
    "mul.f32 f117, f91, f110;\n\t"
    "fma.rn.f32 f118, f92, f108, f117;\n\t"
    "mul.f32 f119, f116, f85;\n\t"
    "mul.f32 f120, f118, f86;\n\t"
    "sub.f32 f9, f119, f120;\n\t"
    "mul.f32 f121, f116, f86;\n\t"
    "fma.rn.f32 f10, f118, f85, f121;\n\t"
    "mul.f32 f122, f91, f116;\n\t"
    "mul.f32 f123, f92, f118;\n\t"
    "sub.f32 f124, f122, f123;\n\t"
    "mul.f32 f125, f91, f118;\n\t"
    "fma.rn.f32 f126, f92, f116, f125;\n\t"
    "mul.f32 f127, f124, f89;\n\t"
    "mul.f32 f128, f126, f90;\n\t"
    "sub.f32 f11, f127, f128;\n\t"
    "mul.f32 f129, f124, f90;\n\t"
    "fma.rn.f32 f12, f126, f89, f129;\n\t"
    "mul.lo.s32 r2, r9, 36;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r10, r1, 6, r2;\n\t"
    "shl.b32 r11, r10, 2;\n\t"
    "{\n\t"
    ".reg .u64 wide1;\n\t"
    ".reg .u32 narrow1;\n\t"
    "mov.u64 wide1, %12;\n\t"
    "cvt.u32.u64 narrow1, wide1;\n\t"
    "cvta.to.shared.u32 r12, narrow1;\n\t"
    "}\n\t"
    "add.s32 r3, r12, r11;\n\t"
    "st.shared.f32 [r3], f1;\n\t"
    "st.shared.f32 [r3+4], f3;\n\t"
    "st.shared.f32 [r3+8], f5;\n\t"
    "st.shared.f32 [r3+12], f7;\n\t"
    "st.shared.f32 [r3+16], f9;\n\t"
    "st.shared.f32 [r3+20], f11;\n\t"
    "barrier.sync 0;\n\t"
    "add.s32 r13, r1, r2;\n\t"
    "shl.b32 r14, r13, 2;\n\t"
    "add.s32 r4, r12, r14;\n\t"
    "ld.shared.f32 f13, [r4];\n\t"
    "ld.shared.f32 f14, [r4+24];\n\t"
    "ld.shared.f32 f15, [r4+48];\n\t"
    "ld.shared.f32 f16, [r4+72];\n\t"
    "ld.shared.f32 f17, [r4+96];\n\t"
    "ld.shared.f32 f18, [r4+120];\n\t"
    "barrier.sync 0;\n\t"
    "st.shared.f32 [r3], f2;\n\t"
    "st.shared.f32 [r3+4], f4;\n\t"
    "st.shared.f32 [r3+8], f6;\n\t"
    "st.shared.f32 [r3+12], f8;\n\t"
    "st.shared.f32 [r3+16], f10;\n\t"
    "st.shared.f32 [r3+20], f12;\n\t"
    "barrier.sync 0;\n\t"
    "ld.shared.f32 f130, [r4];\n\t"
    "ld.shared.f32 f131, [r4+24];\n\t"
    "ld.shared.f32 f132, [r4+48];\n\t"
    "ld.shared.f32 f133, [r4+72];\n\t"
    "ld.shared.f32 f134, [r4+96];\n\t"
    "ld.shared.f32 f135, [r4+120];\n\t"
    "add.f32 f136, f15, f17;\n\t"
    "add.f32 f137, f13, f136;\n\t"
    "add.f32 f138, f132, f134;\n\t"
    "add.f32 f139, f130, f138;\n\t"
    "fma.rn.f32 f140, f136, 0fBF000000, f13;\n\t"
    "sub.f32 f141, f132, f134;\n\t"
    "mul.f32 f142, f141, 0f3F5DB3D7;\n\t"
    "add.f32 f143, f142, f140;\n\t"
    "sub.f32 f144, f140, f142;\n\t"
    "fma.rn.f32 f145, f138, 0fBF000000, f130;\n\t"
    "sub.f32 f146, f15, f17;\n\t"
    "mul.f32 f147, f146, 0f3F5DB3D7;\n\t"
    "sub.f32 f148, f145, f147;\n\t"
    "add.f32 f149, f147, f145;\n\t"
    "add.f32 f150, f16, f18;\n\t"
    "add.f32 f151, f14, f150;\n\t"
    "add.f32 f152, f133, f135;\n\t"
    "add.f32 f153, f131, f152;\n\t"
    "fma.rn.f32 f154, f150, 0fBF000000, f14;\n\t"
    "sub.f32 f155, f133, f135;\n\t"
    "mul.f32 f156, f155, 0f3F5DB3D7;\n\t"
    "add.f32 f157, f156, f154;\n\t"
    "sub.f32 f158, f154, f156;\n\t"
    "fma.rn.f32 f159, f152, 0fBF000000, f131;\n\t"
    "sub.f32 f160, f16, f18;\n\t"
    "mul.f32 f161, f160, 0f3F5DB3D7;\n\t"
    "sub.f32 f162, f159, f161;\n\t"
    "add.f32 f163, f161, f159;\n\t"
    "mul.f32 f164, f157, 0f3F000000;\n\t"
    "mul.f32 f165, f162, 0fBF5DB3D7;\n\t"
    "sub.f32 f166, f164, f165;\n\t"
    "mul.f32 f167, f162, 0f3F000000;\n\t"
    "fma.rn.f32 f168, f157, 0fBF5DB3D7, f167;\n\t"
    "mul.f32 f169, f158, 0fBF000000;\n\t"
    "mul.f32 f170, f163, 0fBF5DB3D7;\n\t"
    "sub.f32 f171, f169, f170;\n\t"
    "mul.f32 f172, f163, 0fBF000000;\n\t"
    "fma.rn.f32 f173, f158, 0fBF5DB3D7, f172;\n\t"
    "add.f32 %0, f137, f151;\n\t"
    "add.f32 %1, f139, f153;\n\t"
    "add.f32 %3, f148, f168;\n\t"
    "add.f32 %2, f143, f166;\n\t"
    "add.f32 %5, f149, f173;\n\t"
    "add.f32 %4, f144, f171;\n\t"
    "sub.f32 %6, f137, f151;\n\t"
    "sub.f32 %7, f139, f153;\n\t"
    "sub.f32 %9, f148, f168;\n\t"
    "sub.f32 %8, f143, f166;\n\t"
    "sub.f32 %11, f149, f173;\n\t"
    "sub.f32 %10, f144, f171;\n\t"
    "}"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y): "l"(smem), "l"(lut_sp_6_36), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y));
};


#endif
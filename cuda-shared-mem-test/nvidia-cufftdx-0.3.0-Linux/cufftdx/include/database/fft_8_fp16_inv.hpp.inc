#ifndef CUFFTDX_FFT_8_FP16_INV_PTX_HPP
#define CUFFTDX_FFT_8_FP16_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<1002, __half2, 1>(cufftdx::detail::complex<__half2> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .b16 rs<15>;\n\t"
    ".reg .b32 r<183>;\n\t"
    ".reg .f64 fd<15>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "{\n\t"
    "add.f16x2 r1, %17, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r4, %18, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r7, %17, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r10, %18, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r13, %21, %29;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r16, %22, %30;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r19, %21, %29;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r22, %22, %30;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r25, r22;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r27, r1, r13;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r30, r4, r16;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r33, r1, r13;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r36, r4, r16;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r39, r7, r25;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r42, r10, r19;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r45, r7, r25;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r48, r10, r19;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r51, %19, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r54, %20, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r57, %19, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r60, %20, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r63, %23, %31;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r66, %24, %32;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r69, %23, %31;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r72, %24, %32;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r75, r72;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r77, r51, r63;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r80, r54, r66;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r83, r51, r63;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r86, r54, r66;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r89, r57, r75;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r92, r60, r69;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r95, r57, r75;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r98, r60, r69;\n\t"
    "}\n\t"
    "mov.f64 fd6, 0d3FE6A09E667F3BCD;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs1, fd6;\n\t"
    "}\n\t"
    "mov.b32 r115, {rs1, rs1};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs2, fd6;\n\t"
    "}\n\t"
    "mov.b32 r112, {rs2, rs2};\n\t"
    "mov.f64 fd5, 0dBFE6A09E667F3BCD;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs5, fd5;\n\t"
    "}\n\t"
    "mov.b32 r133, {rs5, rs5};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs6, fd6;\n\t"
    "}\n\t"
    "mov.b32 r130, {rs6, rs6};\n\t"
    "{\n\t"
    "mul.f16x2 r101, r89, r115;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r104, r92, r112;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r107, r101, r104;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r110, r89, r112;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r113, r92, r115, r110;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r117, r86;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r119, r95, r133;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r122, r98, r130;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r125, r119, r122;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r128, r95, r130;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r131, r98, r133, r128;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %0, r27, r77;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %1, r30, r80;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %8, r27, r77;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %9, r30, r80;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %2, r39, r107;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %3, r42, r113;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %10, r39, r107;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %11, r42, r113;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %4, r33, r117;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %5, r36, r83;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %12, r33, r117;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %13, r36, r83;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %6, r45, r125;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %7, r48, r131;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %14, r45, r125;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %15, r48, r131;\n\t"
    "}\n\t"
    "}"
     : "=r"(__HALF2_TO_UI(rmem[0].x)), "=r"(__HALF2_TO_UI(rmem[0].y)), "=r"(__HALF2_TO_UI(rmem[1].x)), "=r"(__HALF2_TO_UI(rmem[1].y)), "=r"(__HALF2_TO_UI(rmem[2].x)), "=r"(__HALF2_TO_UI(rmem[2].y)), "=r"(__HALF2_TO_UI(rmem[3].x)), "=r"(__HALF2_TO_UI(rmem[3].y)), "=r"(__HALF2_TO_UI(rmem[4].x)), "=r"(__HALF2_TO_UI(rmem[4].y)), "=r"(__HALF2_TO_UI(rmem[5].x)), "=r"(__HALF2_TO_UI(rmem[5].y)), "=r"(__HALF2_TO_UI(rmem[6].x)), "=r"(__HALF2_TO_UI(rmem[6].y)), "=r"(__HALF2_TO_UI(rmem[7].x)), "=r"(__HALF2_TO_UI(rmem[7].y)): "l"(smem), "r"(__HALF2_TO_UI(rmem[0].x)), "r"(__HALF2_TO_UI(rmem[0].y)), "r"(__HALF2_TO_UI(rmem[1].x)), "r"(__HALF2_TO_UI(rmem[1].y)), "r"(__HALF2_TO_UI(rmem[2].x)), "r"(__HALF2_TO_UI(rmem[2].y)), "r"(__HALF2_TO_UI(rmem[3].x)), "r"(__HALF2_TO_UI(rmem[3].y)), "r"(__HALF2_TO_UI(rmem[4].x)), "r"(__HALF2_TO_UI(rmem[4].y)), "r"(__HALF2_TO_UI(rmem[5].x)), "r"(__HALF2_TO_UI(rmem[5].y)), "r"(__HALF2_TO_UI(rmem[6].x)), "r"(__HALF2_TO_UI(rmem[6].y)), "r"(__HALF2_TO_UI(rmem[7].x)), "r"(__HALF2_TO_UI(rmem[7].y)));
};




template<> __forceinline__ __device__ void cufftdx_private_function<1003, __half2, 1>(cufftdx::detail::complex<__half2> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<9>;\n\t"
    ".reg .b32 r<213>;\n\t"
    ".reg .b64 rd<5>;\n\t"
    "mov.u32 r181, %tid.y;\n\t"
    "mov.u32 r182, %tid.x;\n\t"
    "{\n\t"
    "add.f16x2 r18, %10, %14;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r21, %11, %15;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r24, %10, %14;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r27, %11, %15;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r30, %12, %16;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r33, %13, %17;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r36, %12, %16;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r39, %13, %17;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r42, r39;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r44, r18, r30;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r47, r21, r33;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r50, r18, r30;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r53, r21, r33;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r56, r24, r42;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r59, r27, r36;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r62, r24, r42;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r65, r27, r36;\n\t"
    "}\n\t"
    "and.b32 r3, r182, 1;\n\t"
    "shr.u32 r183, r182, 1;\n\t"
    "add.s32 r184, r183, r181;\n\t"
    "mul.wide.u32 rd2, r3, 4;\n\t"
    "mov.u64 rd3, %9;\n\t"
    "add.s64 rd4, rd3, rd2;\n\t"
    "ld.global.u32 r71, [rd4];\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r71;\n\t"
    "mov.b32 r70, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r71;\n\t"
    "mov.b32 r72, {high, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r74, r59, r72;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r77, r56, r70, r74;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r81, r56, r72;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r84, r81;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r86, r59, r70, r84;\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r71;\n\t"
    "mov.b32 r90, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r71;\n\t"
    "mov.b32 r92, {high, high};\n\t"
    "}\n\t"
    "mov.f32 f5, 0fBF800000;\n\t"
    "mov.f32 f6, 0f3F800000;\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "cvt.rn.f16.f32 low, f5;\n\t"
    "cvt.rn.f16.f32 high, f6;\n\t"
    "mov.b32 r94, {low, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r95, r92, r94;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r98, r71, r90;\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r71;\n\t"
    "mov.b32 r101, {high, low};\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r103, r95, r101, r98;\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r103;\n\t"
    "mov.b32 r107, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r103;\n\t"
    "mov.b32 r109, {high, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r111, r53, r109;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r114, r50, r107, r111;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r118, r50, r109;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r121, r118;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r123, r53, r107, r121;\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r71;\n\t"
    "mov.b32 r127, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r71;\n\t"
    "mov.b32 r129, {high, high};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "cvt.rn.f16.f32 low, f5;\n\t"
    "cvt.rn.f16.f32 high, f6;\n\t"
    "mov.b32 r131, {low, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r132, r129, r131;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r135, r103, r127;\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r103;\n\t"
    "mov.b32 r138, {high, low};\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r140, r132, r138, r135;\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r140;\n\t"
    "mov.b32 r144, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r140;\n\t"
    "mov.b32 r146, {high, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r148, r65, r146;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r151, r62, r144, r148;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r155, r62, r146;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r158, r155;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r160, r65, r144, r158;\n\t"
    "}\n\t"
    "shl.b32 r185, r184, 5;\n\t"
    "{\n\t"
    ".reg .u64 wide1;\n\t"
    ".reg .u32 narrow1;\n\t"
    "mov.u64 wide1, %8;\n\t"
    "cvt.u32.u64 narrow1, wide1;\n\t"
    "cvta.to.shared.u32 r186, narrow1;\n\t"
    "}\n\t"
    "add.s32 r10, r186, r185;\n\t"
    "barrier.sync 0;\n\t"
    "shl.b32 r187, r3, 4;\n\t"
    "add.s32 r12, r10, r187;\n\t"
    "st.shared.u32 [r12], r44;\n\t"
    "st.shared.u32 [r12+4], r77;\n\t"
    "st.shared.u32 [r12+8], r114;\n\t"
    "st.shared.u32 [r12+12], r151;\n\t"
    "barrier.sync 0;\n\t"
    "shl.b32 r188, r3, 2;\n\t"
    "add.s32 r13, r10, r188;\n\t"
    "ld.shared.u32 r14, [r13];\n\t"
    "ld.shared.u32 r15, [r13+8];\n\t"
    "ld.shared.u32 r16, [r13+16];\n\t"
    "ld.shared.u32 r17, [r13+24];\n\t"
    "barrier.sync 0;\n\t"
    "st.shared.u32 [r12], r47;\n\t"
    "st.shared.u32 [r12+4], r86;\n\t"
    "st.shared.u32 [r12+8], r123;\n\t"
    "st.shared.u32 [r12+12], r160;\n\t"
    "barrier.sync 0;\n\t"
    "ld.shared.u32 r193, [r13];\n\t"
    "ld.shared.u32 r205, [r13+8];\n\t"
    "ld.shared.u32 r194, [r13+16];\n\t"
    "ld.shared.u32 r206, [r13+24];\n\t"
    "{\n\t"
    "add.f16x2 %0, r14, r16;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %1, r193, r194;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %4, r14, r16;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %5, r193, r194;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %2, r15, r17;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %3, r205, r206;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %6, r15, r17;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %7, r205, r206;\n\t"
    "}\n\t"
    "}"
     : "=r"(__HALF2_TO_UI(rmem[0].x)), "=r"(__HALF2_TO_UI(rmem[0].y)), "=r"(__HALF2_TO_UI(rmem[1].x)), "=r"(__HALF2_TO_UI(rmem[1].y)), "=r"(__HALF2_TO_UI(rmem[2].x)), "=r"(__HALF2_TO_UI(rmem[2].y)), "=r"(__HALF2_TO_UI(rmem[3].x)), "=r"(__HALF2_TO_UI(rmem[3].y)): "l"(smem), "l"(lut_hp_4_8), "r"(__HALF2_TO_UI(rmem[0].x)), "r"(__HALF2_TO_UI(rmem[0].y)), "r"(__HALF2_TO_UI(rmem[1].x)), "r"(__HALF2_TO_UI(rmem[1].y)), "r"(__HALF2_TO_UI(rmem[2].x)), "r"(__HALF2_TO_UI(rmem[2].y)), "r"(__HALF2_TO_UI(rmem[3].x)), "r"(__HALF2_TO_UI(rmem[3].y)));
};




template<> __forceinline__ __device__ void cufftdx_private_function<1004, __half2, 1>(cufftdx::detail::complex<__half2> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<9>;\n\t"
    ".reg .b32 r<212>;\n\t"
    ".reg .b64 rd<5>;\n\t"
    "mov.u32 r174, %tid.x;\n\t"
    "{\n\t"
    "add.f16x2 r11, %10, %14;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r14, %11, %15;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r17, %10, %14;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r20, %11, %15;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r23, %12, %16;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r26, %13, %17;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r29, %12, %16;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r32, %13, %17;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r35, r32;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r37, r11, r23;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r40, r14, r26;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r43, r11, r23;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r46, r14, r26;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r49, r17, r35;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r52, r20, r29;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r55, r17, r35;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r58, r20, r29;\n\t"
    "}\n\t"
    "and.b32 r3, r174, 1;\n\t"
    "mul.wide.u32 rd2, r3, 4;\n\t"
    "mov.u64 rd3, %9;\n\t"
    "add.s64 rd4, rd3, rd2;\n\t"
    "ld.global.u32 r64, [rd4];\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r64;\n\t"
    "mov.b32 r63, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r64;\n\t"
    "mov.b32 r65, {high, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r67, r52, r65;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r70, r49, r63, r67;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r74, r49, r65;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r77, r74;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r79, r52, r63, r77;\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r64;\n\t"
    "mov.b32 r83, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r64;\n\t"
    "mov.b32 r85, {high, high};\n\t"
    "}\n\t"
    "mov.f32 f5, 0fBF800000;\n\t"
    "mov.f32 f6, 0f3F800000;\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "cvt.rn.f16.f32 low, f5;\n\t"
    "cvt.rn.f16.f32 high, f6;\n\t"
    "mov.b32 r87, {low, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r88, r85, r87;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r91, r64, r83;\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r64;\n\t"
    "mov.b32 r94, {high, low};\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r96, r88, r94, r91;\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r96;\n\t"
    "mov.b32 r100, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r96;\n\t"
    "mov.b32 r102, {high, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r104, r46, r102;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r107, r43, r100, r104;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r111, r43, r102;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r114, r111;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r116, r46, r100, r114;\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r64;\n\t"
    "mov.b32 r120, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r64;\n\t"
    "mov.b32 r122, {high, high};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "cvt.rn.f16.f32 low, f5;\n\t"
    "cvt.rn.f16.f32 high, f6;\n\t"
    "mov.b32 r124, {low, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r125, r122, r124;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r128, r96, r120;\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r96;\n\t"
    "mov.b32 r131, {high, low};\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r133, r125, r131, r128;\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r133;\n\t"
    "mov.b32 r137, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r133;\n\t"
    "mov.b32 r139, {high, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r141, r58, r139;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r144, r55, r137, r141;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r148, r55, r139;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r151, r148;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r153, r58, r137, r151;\n\t"
    "}\n\t"
    "mov.u32 r175, %tid.y;\n\t"
    "shl.b32 r176, r175, 3;\n\t"
    "shl.b32 r177, r174, 2;\n\t"
    "and.b32 r178, r177, -8;\n\t"
    "add.s32 r10, r178, r176;\n\t"
    "barrier.sync 0;\n\t"
    "shl.b32 r179, r3, 2;\n\t"
    "add.s32 r180, r179, r10;\n\t"
    "shl.b32 r181, r180, 3;\n\t"
    "{\n\t"
    ".reg .u64 wide1;\n\t"
    ".reg .u32 narrow1;\n\t"
    "mov.u64 wide1, %8;\n\t"
    "cvt.u32.u64 narrow1, wide1;\n\t"
    "cvta.to.shared.u32 r182, narrow1;\n\t"
    "}\n\t"
    "add.s32 r183, r182, r181;\n\t"
    "st.shared.u32 [r183], r37;\n\t"
    "st.shared.u32 [r183+4], r40;\n\t"
    "st.shared.u32 [r183+8], r70;\n\t"
    "st.shared.u32 [r183+12], r79;\n\t"
    "st.shared.u32 [r183+16], r107;\n\t"
    "st.shared.u32 [r183+20], r116;\n\t"
    "st.shared.u32 [r183+24], r144;\n\t"
    "st.shared.u32 [r183+28], r153;\n\t"
    "barrier.sync 0;\n\t"
    "add.s32 r208, r3, r10;\n\t"
    "shl.b32 r209, r208, 3;\n\t"
    "add.s32 r211, r182, r209;\n\t"
    "ld.shared.u32 r185, [r211];\n\t"
    "ld.shared.u32 r188, [r211+4];\n\t"
    "ld.shared.u32 r197, [r211+16];\n\t"
    "ld.shared.u32 r200, [r211+20];\n\t"
    "ld.shared.u32 r186, [r211+32];\n\t"
    "ld.shared.u32 r189, [r211+36];\n\t"
    "ld.shared.u32 r198, [r211+48];\n\t"
    "ld.shared.u32 r201, [r211+52];\n\t"
    "{\n\t"
    "add.f16x2 %0, r185, r186;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %1, r188, r189;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %4, r185, r186;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %5, r188, r189;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %2, r197, r198;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %3, r200, r201;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %6, r197, r198;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %7, r200, r201;\n\t"
    "}\n\t"
    "}"
     : "=r"(__HALF2_TO_UI(rmem[0].x)), "=r"(__HALF2_TO_UI(rmem[0].y)), "=r"(__HALF2_TO_UI(rmem[1].x)), "=r"(__HALF2_TO_UI(rmem[1].y)), "=r"(__HALF2_TO_UI(rmem[2].x)), "=r"(__HALF2_TO_UI(rmem[2].y)), "=r"(__HALF2_TO_UI(rmem[3].x)), "=r"(__HALF2_TO_UI(rmem[3].y)): "l"(smem), "l"(lut_hp_4_8), "r"(__HALF2_TO_UI(rmem[0].x)), "r"(__HALF2_TO_UI(rmem[0].y)), "r"(__HALF2_TO_UI(rmem[1].x)), "r"(__HALF2_TO_UI(rmem[1].y)), "r"(__HALF2_TO_UI(rmem[2].x)), "r"(__HALF2_TO_UI(rmem[2].y)), "r"(__HALF2_TO_UI(rmem[3].x)), "r"(__HALF2_TO_UI(rmem[3].y)));
};




template<> __forceinline__ __device__ void cufftdx_private_function<1005, __half2, 1>(cufftdx::detail::complex<__half2> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<9>;\n\t"
    ".reg .b32 r<152>;\n\t"
    ".reg .b64 rd<8>;\n\t"
    "mov.u32 r1, %tid.x;\n\t"
    "{\n\t"
    "add.f16x2 r14, %7, %9;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r17, %8, %10;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r20, %7, %9;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r23, %8, %10;\n\t"
    "}\n\t"
    "and.b32 r4, r1, 3;\n\t"
    "mul.wide.u32 rd2, r4, 4;\n\t"
    "mov.u64 rd3, %5;\n\t"
    "add.s64 rd4, rd3, rd2;\n\t"
    "ld.global.u32 r29, [rd4];\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r29;\n\t"
    "mov.b32 r28, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r29;\n\t"
    "mov.b32 r30, {high, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r32, r23, r30;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r35, r20, r28, r32;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r39, r20, r30;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r42, r39;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r44, r23, r28, r42;\n\t"
    "}\n\t"
    "mov.u32 r65, %tid.y;\n\t"
    "shl.b32 r66, r65, 3;\n\t"
    "shl.b32 r67, r1, 1;\n\t"
    "and.b32 r68, r67, -8;\n\t"
    "add.s32 r7, r68, r66;\n\t"
    "barrier.sync 0;\n\t"
    "shl.b32 r69, r4, 1;\n\t"
    "add.s32 r70, r69, r7;\n\t"
    "shl.b32 r71, r70, 3;\n\t"
    "{\n\t"
    ".reg .u64 wide1;\n\t"
    ".reg .u32 narrow1;\n\t"
    "mov.u64 wide1, %4;\n\t"
    "cvt.u32.u64 narrow1, wide1;\n\t"
    "cvta.to.shared.u32 r72, narrow1;\n\t"
    "}\n\t"
    "add.s32 r73, r72, r71;\n\t"
    "st.shared.u32 [r73], r14;\n\t"
    "st.shared.u32 [r73+4], r17;\n\t"
    "st.shared.u32 [r73+8], r35;\n\t"
    "st.shared.u32 [r73+12], r44;\n\t"
    "barrier.sync 0;\n\t"
    "add.s32 r125, r4, r7;\n\t"
    "shl.b32 r126, r125, 3;\n\t"
    "add.s32 r128, r72, r126;\n\t"
    "ld.shared.u32 r75, [r128];\n\t"
    "ld.shared.u32 r78, [r128+4];\n\t"
    "ld.shared.u32 r76, [r128+32];\n\t"
    "ld.shared.u32 r79, [r128+36];\n\t"
    "{\n\t"
    "add.f16x2 r74, r75, r76;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r77, r78, r79;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r80, r75, r76;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r83, r78, r79;\n\t"
    "}\n\t"
    "and.b32 r10, r1, 2;\n\t"
    "bfe.u32 r129, r1, 1, 1;\n\t"
    "mul.wide.u32 rd5, r129, 4;\n\t"
    "mov.u64 rd6, %6;\n\t"
    "add.s64 rd7, rd6, rd5;\n\t"
    "ld.global.u32 r89, [rd7];\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r89;\n\t"
    "mov.b32 r88, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r89;\n\t"
    "mov.b32 r90, {high, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r92, r83, r90;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r95, r80, r88, r92;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r99, r80, r90;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r102, r99;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r104, r83, r88, r102;\n\t"
    "}\n\t"
    "and.b32 r130, r1, 1;\n\t"
    "add.s32 r13, r7, r130;\n\t"
    "barrier.sync 0;\n\t"
    "shl.b32 r131, r10, 1;\n\t"
    "add.s32 r132, r131, r13;\n\t"
    "shl.b32 r133, r132, 3;\n\t"
    "add.s32 r135, r72, r133;\n\t"
    "st.shared.u32 [r135], r74;\n\t"
    "st.shared.u32 [r135+4], r77;\n\t"
    "st.shared.u32 [r135+16], r95;\n\t"
    "st.shared.u32 [r135+20], r104;\n\t"
    "barrier.sync 0;\n\t"
    "add.s32 r148, r10, r13;\n\t"
    "shl.b32 r149, r148, 3;\n\t"
    "add.s32 r151, r72, r149;\n\t"
    "ld.shared.u32 r137, [r151];\n\t"
    "ld.shared.u32 r140, [r151+4];\n\t"
    "ld.shared.u32 r138, [r151+32];\n\t"
    "ld.shared.u32 r141, [r151+36];\n\t"
    "{\n\t"
    "add.f16x2 %0, r137, r138;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %1, r140, r141;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %2, r137, r138;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %3, r140, r141;\n\t"
    "}\n\t"
    "}"
     : "=r"(__HALF2_TO_UI(rmem[0].x)), "=r"(__HALF2_TO_UI(rmem[0].y)), "=r"(__HALF2_TO_UI(rmem[1].x)), "=r"(__HALF2_TO_UI(rmem[1].y)): "l"(smem), "l"(lut_hp_2_8), "l"(lut_hp_2_4), "r"(__HALF2_TO_UI(rmem[0].x)), "r"(__HALF2_TO_UI(rmem[0].y)), "r"(__HALF2_TO_UI(rmem[1].x)), "r"(__HALF2_TO_UI(rmem[1].y)));
};




template<> __forceinline__ __device__ void cufftdx_private_function<1006, __half2, 1>(cufftdx::detail::complex<__half2> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<9>;\n\t"
    ".reg .b32 r<154>;\n\t"
    ".reg .b64 rd<8>;\n\t"
    "mov.u32 r76, %tid.y;\n\t"
    "shl.b32 r77, r76, 3;\n\t"
    "mov.u32 r1, %tid.x;\n\t"
    "{\n\t"
    "add.f16x2 r25, %7, %9;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r28, %8, %10;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r31, %7, %9;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r34, %8, %10;\n\t"
    "}\n\t"
    "and.b32 r4, r1, 3;\n\t"
    "shl.b32 r78, r1, 1;\n\t"
    "and.b32 r79, r78, -8;\n\t"
    "add.s32 r5, r79, r77;\n\t"
    "mul.wide.u32 rd2, r4, 4;\n\t"
    "mov.u64 rd3, %5;\n\t"
    "add.s64 rd4, rd3, rd2;\n\t"
    "ld.global.u32 r40, [rd4];\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r40;\n\t"
    "mov.b32 r39, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r40;\n\t"
    "mov.b32 r41, {high, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r43, r34, r41;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r46, r31, r39, r43;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r50, r31, r41;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r53, r50;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r55, r34, r39, r53;\n\t"
    "}\n\t"
    "shl.b32 r80, r5, 2;\n\t"
    "{\n\t"
    ".reg .u64 wide1;\n\t"
    ".reg .u32 narrow1;\n\t"
    "mov.u64 wide1, %4;\n\t"
    "cvt.u32.u64 narrow1, wide1;\n\t"
    "cvta.to.shared.u32 r81, narrow1;\n\t"
    "}\n\t"
    "add.s32 r8, r81, r80;\n\t"
    "barrier.sync 0;\n\t"
    "shl.b32 r82, r4, 3;\n\t"
    "add.s32 r10, r8, r82;\n\t"
    "st.shared.u32 [r10], r25;\n\t"
    "st.shared.u32 [r10+4], r46;\n\t"
    "barrier.sync 0;\n\t"
    "shl.b32 r83, r4, 2;\n\t"
    "add.s32 r11, r8, r83;\n\t"
    "ld.shared.u32 r12, [r11];\n\t"
    "ld.shared.u32 r13, [r11+16];\n\t"
    "barrier.sync 0;\n\t"
    "st.shared.u32 [r10], r28;\n\t"
    "st.shared.u32 [r10+4], r55;\n\t"
    "barrier.sync 0;\n\t"
    "ld.shared.u32 r88, [r11];\n\t"
    "ld.shared.u32 r89, [r11+16];\n\t"
    "{\n\t"
    "add.f16x2 r84, r12, r13;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r87, r88, r89;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r90, r12, r13;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r93, r88, r89;\n\t"
    "}\n\t"
    "and.b32 r16, r1, 2;\n\t"
    "and.b32 r135, r1, 1;\n\t"
    "bfe.u32 r136, r1, 1, 1;\n\t"
    "add.s32 r137, r5, r135;\n\t"
    "mul.wide.u32 rd5, r136, 4;\n\t"
    "mov.u64 rd6, %6;\n\t"
    "add.s64 rd7, rd6, rd5;\n\t"
    "ld.global.u32 r99, [rd7];\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r99;\n\t"
    "mov.b32 r98, {low, low};\n\t"
    "}\n\t"
    "{\n\t"
    ".reg .f16 low, high;\n\t"
    "mov.b32 {low, high}, r99;\n\t"
    "mov.b32 r100, {high, high};\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r102, r93, r100;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r105, r90, r98, r102;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r109, r90, r100;\n\t"
    "}\n\t"
    "{\n\t"
    "neg.f16x2 r112, r109;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r114, r93, r98, r112;\n\t"
    "}\n\t"
    "shl.b32 r138, r137, 2;\n\t"
    "add.s32 r19, r81, r138;\n\t"
    "barrier.sync 0;\n\t"
    "shl.b32 r140, r16, 3;\n\t"
    "add.s32 r21, r19, r140;\n\t"
    "st.shared.u32 [r21], r84;\n\t"
    "st.shared.u32 [r21+8], r105;\n\t"
    "barrier.sync 0;\n\t"
    "shl.b32 r141, r16, 2;\n\t"
    "add.s32 r22, r19, r141;\n\t"
    "ld.shared.u32 r23, [r22];\n\t"
    "ld.shared.u32 r24, [r22+16];\n\t"
    "barrier.sync 0;\n\t"
    "st.shared.u32 [r21], r87;\n\t"
    "st.shared.u32 [r21+8], r114;\n\t"
    "barrier.sync 0;\n\t"
    "ld.shared.u32 r146, [r22];\n\t"
    "ld.shared.u32 r147, [r22+16];\n\t"
    "{\n\t"
    "add.f16x2 %0, r23, r24;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %1, r146, r147;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %2, r23, r24;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %3, r146, r147;\n\t"
    "}\n\t"
    "}"
     : "=r"(__HALF2_TO_UI(rmem[0].x)), "=r"(__HALF2_TO_UI(rmem[0].y)), "=r"(__HALF2_TO_UI(rmem[1].x)), "=r"(__HALF2_TO_UI(rmem[1].y)): "l"(smem), "l"(lut_hp_2_8), "l"(lut_hp_2_4), "r"(__HALF2_TO_UI(rmem[0].x)), "r"(__HALF2_TO_UI(rmem[0].y)), "r"(__HALF2_TO_UI(rmem[1].x)), "r"(__HALF2_TO_UI(rmem[1].y)));
};


#endif
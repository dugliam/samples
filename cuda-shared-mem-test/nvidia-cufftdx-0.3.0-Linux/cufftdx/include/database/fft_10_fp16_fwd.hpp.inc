#ifndef CUFFTDX_FFT_10_FP16_FWD_PTX_HPP
#define CUFFTDX_FFT_10_FP16_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<958, __half2, 1>(cufftdx::detail::complex<__half2> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .b16 rs<29>;\n\t"
    ".reg .b32 r<749>;\n\t"
    ".reg .f64 fd<29>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "mov.f64 fd13, 0d3FD3C6EF372FE950;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs1, fd13;\n\t"
    "}\n\t"
    "mov.b32 r291, {rs1, rs1};\n\t"
    "mov.f64 fd16, 0dBFEE6F0E134454FF;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs2, fd16;\n\t"
    "}\n\t"
    "mov.b32 r228, {rs2, rs2};\n\t"
    "mov.f64 fd17, 0dBFE9E3779B97F4A8;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs3, fd17;\n\t"
    "}\n\t"
    "mov.b32 r282, {rs3, rs3};\n\t"
    "mov.f64 fd18, 0dBFE2CF2304755A5E;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs4, fd18;\n\t"
    "}\n\t"
    "mov.b32 r300, {rs4, rs4};\n\t"
    "mov.f64 fd10, 0d3FEE6F0E134454FF;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs5, fd10;\n\t"
    "}\n\t"
    "mov.b32 r306, {rs5, rs5};\n\t"
    "{\n\t"
    "add.f16x2 r1, %25, %37;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r4, %21, r1;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r7, %29, %33;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r10, r4, r7;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r13, %26, %38;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r16, %22, r13;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r19, %30, %34;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r22, r16, r19;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r25, %25, %37;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r28, r25, r291;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r31, %21, r28;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r34, %29, %33;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r37, r34, r282;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r40, r31, r37;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r43, %26, %38;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r46, r43, r228;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r49, %30, %34;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r52, r49, r300;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r55, r46, r52;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r58, r40, r55;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r61, %25, %37;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r64, r61, r291;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r67, %21, r64;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r70, %29, %33;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r73, r70, r282;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r76, r67, r73;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r79, %26, %38;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r82, r79, r228;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r85, %30, %34;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r88, r85, r300;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r91, r82, r88;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r94, r76, r91;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r97, %25, %37;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r100, r97, r282;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r103, %21, r100;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r106, %29, %33;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r109, r106, r291;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r112, r103, r109;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r115, %26, %38;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r118, r115, r300;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r121, %30, %34;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r124, r121, r306;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r127, r118, r124;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r130, r112, r127;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r133, %25, %37;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r136, r133, r282;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r139, %21, r136;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r142, %29, %33;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r145, r142, r291;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r148, r139, r145;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r151, %26, %38;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r154, r151, r300;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r157, %30, %34;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r160, r157, r306;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r163, r154, r160;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r166, r148, r163;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r169, %26, %38;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r172, r169, r291;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r175, %22, r172;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r178, %30, %34;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r181, r178, r282;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r184, r175, r181;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r187, %25, %37;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r190, r187, r228;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r193, %29, %33;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r196, r193, r300;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r199, r190, r196;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r202, r184, r199;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r205, %26, %38;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r208, r205, r291;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r211, %22, r208;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r214, %30, %34;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r217, r214, r282;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r220, r211, r217;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r223, %25, %37;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r226, r223, r228;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r229, %29, %33;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r232, r229, r300;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r235, r226, r232;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r238, r220, r235;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r241, %26, %38;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r244, r241, r282;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r247, %22, r244;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r250, %30, %34;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r253, r250, r291;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r256, r247, r253;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r259, %25, %37;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r262, r259, r300;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r265, %29, %33;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r268, r265, r306;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r271, r262, r268;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r274, r256, r271;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r277, %26, %38;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r280, r277, r282;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r283, %22, r280;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r286, %30, %34;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r289, r286, r291;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r292, r283, r289;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r295, %25, %37;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r298, r295, r300;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r301, %29, %33;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r304, r301, r306;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r307, r298, r304;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r310, r292, r307;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs6, fd13;\n\t"
    "}\n\t"
    "mov.b32 r603, {rs6, rs6};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs7, fd16;\n\t"
    "}\n\t"
    "mov.b32 r540, {rs7, rs7};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs8, fd17;\n\t"
    "}\n\t"
    "mov.b32 r594, {rs8, rs8};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs9, fd18;\n\t"
    "}\n\t"
    "mov.b32 r612, {rs9, rs9};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs10, fd10;\n\t"
    "}\n\t"
    "mov.b32 r618, {rs10, rs10};\n\t"
    "{\n\t"
    "add.f16x2 r313, %27, %39;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r316, %23, r313;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r319, %31, %35;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r322, r316, r319;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r325, %28, %40;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r328, %24, r325;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r331, %32, %36;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r334, r328, r331;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r337, %27, %39;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r340, r337, r603;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r343, %23, r340;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r346, %31, %35;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r349, r346, r594;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r352, r343, r349;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r355, %28, %40;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r358, r355, r540;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r361, %32, %36;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r364, r361, r612;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r367, r358, r364;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r370, r352, r367;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r373, %27, %39;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r376, r373, r603;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r379, %23, r376;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r382, %31, %35;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r385, r382, r594;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r388, r379, r385;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r391, %28, %40;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r394, r391, r540;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r397, %32, %36;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r400, r397, r612;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r403, r394, r400;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r406, r388, r403;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r409, %27, %39;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r412, r409, r594;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r415, %23, r412;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r418, %31, %35;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r421, r418, r603;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r424, r415, r421;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r427, %28, %40;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r430, r427, r612;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r433, %32, %36;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r436, r433, r618;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r439, r430, r436;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r442, r424, r439;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r445, %27, %39;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r448, r445, r594;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r451, %23, r448;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r454, %31, %35;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r457, r454, r603;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r460, r451, r457;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r463, %28, %40;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r466, r463, r612;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r469, %32, %36;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r472, r469, r618;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r475, r466, r472;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r478, r460, r475;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r481, %28, %40;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r484, r481, r603;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r487, %24, r484;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r490, %32, %36;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r493, r490, r594;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r496, r487, r493;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r499, %27, %39;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r502, r499, r540;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r505, %31, %35;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r508, r505, r612;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r511, r502, r508;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r514, r496, r511;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r517, %28, %40;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r520, r517, r603;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r523, %24, r520;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r526, %32, %36;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r529, r526, r594;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r532, r523, r529;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r535, %27, %39;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r538, r535, r540;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r541, %31, %35;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r544, r541, r612;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r547, r538, r544;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r550, r532, r547;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r553, %28, %40;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r556, r553, r594;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r559, %24, r556;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r562, %32, %36;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r565, r562, r603;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r568, r559, r565;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r571, %27, %39;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r574, r571, r612;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r577, %31, %35;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r580, r577, r618;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r583, r574, r580;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r586, r568, r583;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r589, %28, %40;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r592, r589, r594;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r595, %24, r592;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r598, %32, %36;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r601, r598, r603;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r604, r595, r601;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r607, %27, %39;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r610, r607, r612;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r613, %31, %35;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r616, r613, r618;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r619, r610, r616;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r622, r604, r619;\n\t"
    "}\n\t"
    "mov.f64 fd11, 0d3FE9E3779B97F4A8;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs11, fd11;\n\t"
    "}\n\t"
    "mov.b32 r639, {rs11, rs11};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs12, fd18;\n\t"
    "}\n\t"
    "mov.b32 r636, {rs12, rs12};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs13, fd13;\n\t"
    "}\n\t"
    "mov.b32 r655, {rs13, rs13};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs14, fd16;\n\t"
    "}\n\t"
    "mov.b32 r652, {rs14, rs14};\n\t"
    "mov.f64 fd15, 0dBFD3C6EF372FE950;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs15, fd15;\n\t"
    "}\n\t"
    "mov.b32 r671, {rs15, rs15};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs16, fd16;\n\t"
    "}\n\t"
    "mov.b32 r668, {rs16, rs16};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs17, fd17;\n\t"
    "}\n\t"
    "mov.b32 r687, {rs17, rs17};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs18, fd18;\n\t"
    "}\n\t"
    "mov.b32 r684, {rs18, rs18};\n\t"
    "{\n\t"
    "mul.f16x2 r625, r370, r639;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r628, r514, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r631, r625, r628;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r634, r370, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r637, r514, r639, r634;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r641, r442, r655;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r644, r586, r652;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r647, r641, r644;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r650, r442, r652;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r653, r586, r655, r650;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r657, r478, r671;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r660, r622, r668;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r663, r657, r660;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r666, r478, r668;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r669, r622, r671, r666;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r673, r406, r687;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r676, r550, r684;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r679, r673, r676;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r682, r406, r684;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r685, r550, r687, r682;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %0, r10, r322;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %1, r22, r334;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %10, r10, r322;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %11, r22, r334;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %2, r58, r631;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %3, r202, r637;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %12, r58, r631;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %13, r202, r637;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %4, r130, r647;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %5, r274, r653;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %14, r130, r647;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %15, r274, r653;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %6, r166, r663;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %7, r310, r669;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %16, r166, r663;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %17, r310, r669;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %8, r94, r679;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %9, r238, r685;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %18, r94, r679;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %19, r238, r685;\n\t"
    "}\n\t"
    "}"
     : "=r"(__HALF2_TO_UI(rmem[0].x)), "=r"(__HALF2_TO_UI(rmem[0].y)), "=r"(__HALF2_TO_UI(rmem[1].x)), "=r"(__HALF2_TO_UI(rmem[1].y)), "=r"(__HALF2_TO_UI(rmem[2].x)), "=r"(__HALF2_TO_UI(rmem[2].y)), "=r"(__HALF2_TO_UI(rmem[3].x)), "=r"(__HALF2_TO_UI(rmem[3].y)), "=r"(__HALF2_TO_UI(rmem[4].x)), "=r"(__HALF2_TO_UI(rmem[4].y)), "=r"(__HALF2_TO_UI(rmem[5].x)), "=r"(__HALF2_TO_UI(rmem[5].y)), "=r"(__HALF2_TO_UI(rmem[6].x)), "=r"(__HALF2_TO_UI(rmem[6].y)), "=r"(__HALF2_TO_UI(rmem[7].x)), "=r"(__HALF2_TO_UI(rmem[7].y)), "=r"(__HALF2_TO_UI(rmem[8].x)), "=r"(__HALF2_TO_UI(rmem[8].y)), "=r"(__HALF2_TO_UI(rmem[9].x)), "=r"(__HALF2_TO_UI(rmem[9].y)): "l"(smem), "r"(__HALF2_TO_UI(rmem[0].x)), "r"(__HALF2_TO_UI(rmem[0].y)), "r"(__HALF2_TO_UI(rmem[1].x)), "r"(__HALF2_TO_UI(rmem[1].y)), "r"(__HALF2_TO_UI(rmem[2].x)), "r"(__HALF2_TO_UI(rmem[2].y)), "r"(__HALF2_TO_UI(rmem[3].x)), "r"(__HALF2_TO_UI(rmem[3].y)), "r"(__HALF2_TO_UI(rmem[4].x)), "r"(__HALF2_TO_UI(rmem[4].y)), "r"(__HALF2_TO_UI(rmem[5].x)), "r"(__HALF2_TO_UI(rmem[5].y)), "r"(__HALF2_TO_UI(rmem[6].x)), "r"(__HALF2_TO_UI(rmem[6].y)), "r"(__HALF2_TO_UI(rmem[7].x)), "r"(__HALF2_TO_UI(rmem[7].y)), "r"(__HALF2_TO_UI(rmem[8].x)), "r"(__HALF2_TO_UI(rmem[8].y)), "r"(__HALF2_TO_UI(rmem[9].x)), "r"(__HALF2_TO_UI(rmem[9].y)));
};


#endif
#ifndef CUFFTDX_FFT_7_FP16_FWD_PTX_HPP
#define CUFFTDX_FFT_7_FP16_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<951, __half2, 1>(cufftdx::detail::complex<__half2> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .b16 rs<9>;\n\t"
    ".reg .b32 r<685>;\n\t"
    ".reg .f64 fd<9>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "mov.f64 fd1, 0d3FE3F3A0E28BEDD1;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs1, fd1;\n\t"
    "}\n\t"
    "mov.b32 r645, {rs1, rs1};\n\t"
    "mov.f64 fd2, 0dBFE904C37505DE4B;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs2, fd2;\n\t"
    "}\n\t"
    "mov.b32 r447, {rs2, rs2};\n\t"
    "mov.f64 fd3, 0dBFCC7B90E3024582;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs3, fd3;\n\t"
    "}\n\t"
    "mov.b32 r654, {rs3, rs3};\n\t"
    "mov.f64 fd4, 0dBFEF329C0558E969;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs4, fd4;\n\t"
    "}\n\t"
    "mov.b32 r678, {rs4, rs4};\n\t"
    "mov.f64 fd5, 0dBFECD4BCA9CB5C71;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs5, fd5;\n\t"
    "}\n\t"
    "mov.b32 r636, {rs5, rs5};\n\t"
    "mov.f64 fd6, 0dBFDBC4C04D71ABC1;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs6, fd6;\n\t"
    "}\n\t"
    "mov.b32 r663, {rs6, rs6};\n\t"
    "mov.f64 fd7, 0d3FDBC4C04D71ABC1;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs7, fd7;\n\t"
    "}\n\t"
    "mov.b32 r561, {rs7, rs7};\n\t"
    "mov.f64 fd8, 0d3FE904C37505DE4B;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs8, fd8;\n\t"
    "}\n\t"
    "mov.b32 r669, {rs8, rs8};\n\t"
    "{\n\t"
    "add.f16x2 r1, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r4, %15, r1;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r7, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r10, r4, r7;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r13, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %0, r10, r13;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r19, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r22, %16, r19;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r25, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r28, r22, r25;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r31, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %1, r28, r31;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r37, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r40, r37, r645;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r43, %15, r40;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r46, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r49, r46, r654;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r52, r43, r49;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r55, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r58, r55, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r61, r52, r58;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r64, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r67, r64, r447;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r70, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r73, r70, r678;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r76, r67, r73;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r79, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r82, r79, r663;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r85, r76, r82;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %2, r61, r85;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r91, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r94, r91, r645;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r97, %15, r94;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r100, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r103, r100, r654;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r106, r97, r103;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r109, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r112, r109, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r115, r106, r112;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r118, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r121, r118, r447;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r124, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r127, r124, r678;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r130, r121, r127;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r133, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r136, r133, r663;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r139, r130, r136;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %12, r115, r139;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r145, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r148, r145, r654;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r151, %15, r148;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r154, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r157, r154, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r160, r151, r157;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r163, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r166, r163, r645;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r169, r160, r166;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r172, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r175, r172, r678;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r178, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r181, r178, r561;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r184, r175, r181;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r187, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r190, r187, r669;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r193, r184, r190;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %4, r169, r193;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r199, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r202, r199, r654;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r205, %15, r202;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r208, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r211, r208, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r214, r205, r211;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r217, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r220, r217, r645;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r223, r214, r220;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r226, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r229, r226, r678;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r232, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r235, r232, r561;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r238, r229, r235;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r241, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r244, r241, r669;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r247, r238, r244;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %10, r223, r247;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r253, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r256, r253, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r259, %15, r256;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r262, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r265, r262, r645;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r268, r259, r265;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r271, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r274, r271, r654;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r277, r268, r274;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r280, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r283, r280, r663;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r286, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r289, r286, r669;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r292, r283, r289;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r295, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r298, r295, r678;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r301, r292, r298;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %6, r277, r301;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r307, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r310, r307, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r313, %15, r310;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r316, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r319, r316, r645;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r322, r313, r319;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r325, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r328, r325, r654;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r331, r322, r328;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r334, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r337, r334, r663;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r340, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r343, r340, r669;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r346, r337, r343;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r349, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r352, r349, r678;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r355, r346, r352;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %8, r331, r355;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r361, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r364, r361, r645;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r367, %16, r364;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r370, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r373, r370, r654;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r376, r367, r373;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r379, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r382, r379, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r385, r376, r382;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r388, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r391, r388, r447;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r394, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r397, r394, r678;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r400, r391, r397;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r403, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r406, r403, r663;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r409, r400, r406;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %3, r385, r409;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r415, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r418, r415, r645;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r421, %16, r418;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r424, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r427, r424, r654;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r430, r421, r427;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r433, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r436, r433, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r439, r430, r436;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r442, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r445, r442, r447;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r448, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r451, r448, r678;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r454, r445, r451;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r457, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r460, r457, r663;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r463, r454, r460;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %13, r439, r463;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r469, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r472, r469, r654;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r475, %16, r472;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r478, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r481, r478, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r484, r475, r481;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r487, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r490, r487, r645;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r493, r484, r490;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r496, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r499, r496, r678;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r502, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r505, r502, r561;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r508, r499, r505;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r511, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r514, r511, r669;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r517, r508, r514;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %5, r493, r517;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r523, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r526, r523, r654;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r529, %16, r526;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r532, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r535, r532, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r538, r529, r535;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r541, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r544, r541, r645;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r547, r538, r544;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r550, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r553, r550, r678;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r556, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r559, r556, r561;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r562, r553, r559;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r565, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r568, r565, r669;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r571, r562, r568;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %11, r547, r571;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r577, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r580, r577, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r583, %16, r580;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r586, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r589, r586, r645;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r592, r583, r589;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r595, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r598, r595, r654;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r601, r592, r598;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r604, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r607, r604, r663;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r610, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r613, r610, r669;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r616, r607, r613;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r619, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r622, r619, r678;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r625, r616, r622;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %7, r601, r625;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r631, %18, %28;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r634, r631, r636;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r637, %16, r634;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r640, %20, %26;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r643, r640, r645;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r646, r637, r643;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r649, %22, %24;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r652, r649, r654;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r655, r646, r652;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r658, %17, %27;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r661, r658, r663;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r664, %19, %25;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r667, r664, r669;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r670, r661, r667;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r673, %21, %23;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r676, r673, r678;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r679, r670, r676;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %9, r655, r679;\n\t"
    "}\n\t"
    "}"
     : "=r"(__HALF2_TO_UI(rmem[0].x)), "=r"(__HALF2_TO_UI(rmem[0].y)), "=r"(__HALF2_TO_UI(rmem[1].x)), "=r"(__HALF2_TO_UI(rmem[1].y)), "=r"(__HALF2_TO_UI(rmem[2].x)), "=r"(__HALF2_TO_UI(rmem[2].y)), "=r"(__HALF2_TO_UI(rmem[3].x)), "=r"(__HALF2_TO_UI(rmem[3].y)), "=r"(__HALF2_TO_UI(rmem[4].x)), "=r"(__HALF2_TO_UI(rmem[4].y)), "=r"(__HALF2_TO_UI(rmem[5].x)), "=r"(__HALF2_TO_UI(rmem[5].y)), "=r"(__HALF2_TO_UI(rmem[6].x)), "=r"(__HALF2_TO_UI(rmem[6].y)): "l"(smem), "r"(__HALF2_TO_UI(rmem[0].x)), "r"(__HALF2_TO_UI(rmem[0].y)), "r"(__HALF2_TO_UI(rmem[1].x)), "r"(__HALF2_TO_UI(rmem[1].y)), "r"(__HALF2_TO_UI(rmem[2].x)), "r"(__HALF2_TO_UI(rmem[2].y)), "r"(__HALF2_TO_UI(rmem[3].x)), "r"(__HALF2_TO_UI(rmem[3].y)), "r"(__HALF2_TO_UI(rmem[4].x)), "r"(__HALF2_TO_UI(rmem[4].y)), "r"(__HALF2_TO_UI(rmem[5].x)), "r"(__HALF2_TO_UI(rmem[5].y)), "r"(__HALF2_TO_UI(rmem[6].x)), "r"(__HALF2_TO_UI(rmem[6].y)));
};


#endif

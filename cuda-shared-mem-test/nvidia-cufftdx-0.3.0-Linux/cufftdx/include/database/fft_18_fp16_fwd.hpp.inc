#ifndef CUFFTDX_FFT_18_FP16_FWD_PTX_HPP
#define CUFFTDX_FFT_18_FP16_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<772, __half2, 1>(cufftdx::detail::complex<__half2> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .b16 rs<91>;\n\t"
    ".reg .b32 r<1373>;\n\t"
    ".reg .f64 fd<91>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "mov.f64 fd67, 0dBFE0000000000000;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs1, fd67;\n\t"
    "}\n\t"
    "mov.b32 r72, {rs1, rs1};\n\t"
    "mov.f64 fd56, 0d3FEBB67AE8584CAA;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs2, fd56;\n\t"
    "}\n\t"
    "mov.b32 r81, {rs2, rs2};\n\t"
    "{\n\t"
    "add.f16x2 r1, %49, %61;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r4, %37, r1;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r7, %50, %62;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r10, %38, r7;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r13, %49, %61;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r16, r13, r72;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r19, %37, r16;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r22, %50, %62;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r25, r22, r81;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r28, r19, r25;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r31, %49, %61;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r34, r31, r72;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r37, %37, r34;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r40, %50, %62;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r43, r40, r81;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r46, r37, r43;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r49, %50, %62;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r52, r49, r72;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r55, %38, r52;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r58, %49, %61;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r61, r58, r81;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r64, r55, r61;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r67, %50, %62;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r70, r67, r72;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r73, %38, r70;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r76, %49, %61;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r79, r76, r81;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r82, r73, r79;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs3, fd67;\n\t"
    "}\n\t"
    "mov.b32 r156, {rs3, rs3};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs4, fd56;\n\t"
    "}\n\t"
    "mov.b32 r165, {rs4, rs4};\n\t"
    "{\n\t"
    "add.f16x2 r85, %53, %65;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r88, %41, r85;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r91, %54, %66;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r94, %42, r91;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r97, %53, %65;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r100, r97, r156;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r103, %41, r100;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r106, %54, %66;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r109, r106, r165;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r112, r103, r109;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r115, %53, %65;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r118, r115, r156;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r121, %41, r118;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r124, %54, %66;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r127, r124, r165;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r130, r121, r127;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r133, %54, %66;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r136, r133, r156;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r139, %42, r136;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r142, %53, %65;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r145, r142, r165;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r148, r139, r145;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r151, %54, %66;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r154, r151, r156;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r157, %42, r154;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r160, %53, %65;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r163, r160, r165;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r166, r157, r163;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs5, fd67;\n\t"
    "}\n\t"
    "mov.b32 r240, {rs5, rs5};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs6, fd56;\n\t"
    "}\n\t"
    "mov.b32 r249, {rs6, rs6};\n\t"
    "{\n\t"
    "add.f16x2 r169, %57, %69;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r172, %45, r169;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r175, %58, %70;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r178, %46, r175;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r181, %57, %69;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r184, r181, r240;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r187, %45, r184;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r190, %58, %70;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r193, r190, r249;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r196, r187, r193;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r199, %57, %69;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r202, r199, r240;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r205, %45, r202;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r208, %58, %70;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r211, r208, r249;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r214, r205, r211;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r217, %58, %70;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r220, r217, r240;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r223, %46, r220;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r226, %57, %69;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r229, r226, r249;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r232, r223, r229;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r235, %58, %70;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r238, r235, r240;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r241, %46, r238;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r244, %57, %69;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r247, r244, r249;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r250, r241, r247;\n\t"
    "}\n\t"
    "mov.f64 fd59, 0d3FE8836FA2CF5039;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs7, fd59;\n\t"
    "}\n\t"
    "mov.b32 r267, {rs7, rs7};\n\t"
    "mov.f64 fd70, 0dBFE491B7523C161D;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs8, fd70;\n\t"
    "}\n\t"
    "mov.b32 r264, {rs8, rs8};\n\t"
    "mov.f64 fd63, 0d3FC63A1A7E0B738A;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs9, fd63;\n\t"
    "}\n\t"
    "mov.b32 r299, {rs9, rs9};\n\t"
    "mov.f64 fd66, 0dBFEF838B8C811C17;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs10, fd66;\n\t"
    "}\n\t"
    "mov.b32 r296, {rs10, rs10};\n\t"
    "mov.f64 fd71, 0dBFEE11F642522D1C;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs13, fd71;\n\t"
    "}\n\t"
    "mov.b32 r315, {rs13, rs13};\n\t"
    "mov.f64 fd72, 0dBFD5E3A8748A0BF5;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs14, fd72;\n\t"
    "}\n\t"
    "mov.b32 r312, {rs14, rs14};\n\t"
    "{\n\t"
    "mul.f16x2 r253, r112, r267;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r256, r148, r264;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r259, r253, r256;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r262, r112, r264;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r265, r148, r267, r262;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r269, r196, r299;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r272, r232, r296;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r275, r269, r272;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r278, r196, r296;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r281, r232, r299, r278;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r285, r130, r299;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r288, r166, r296;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r291, r285, r288;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r294, r130, r296;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r297, r166, r299, r294;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r301, r214, r315;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r304, r250, r312;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r307, r301, r304;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r310, r214, r312;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r313, r250, r315, r310;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs23, fd67;\n\t"
    "}\n\t"
    "mov.b32 r388, {rs23, rs23};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs24, fd56;\n\t"
    "}\n\t"
    "mov.b32 r397, {rs24, rs24};\n\t"
    "{\n\t"
    "add.f16x2 r317, r88, r172;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r320, r4, r317;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r323, r94, r178;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r326, r10, r323;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r329, r88, r172;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r332, r329, r388;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r335, r4, r332;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r338, r94, r178;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r341, r338, r397;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r344, r335, r341;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r347, r88, r172;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r350, r347, r388;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r353, r4, r350;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r356, r94, r178;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r359, r356, r397;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r362, r353, r359;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r365, r94, r178;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r368, r365, r388;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r371, r10, r368;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r374, r88, r172;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r377, r374, r397;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r380, r371, r377;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r383, r94, r178;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r386, r383, r388;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r389, r10, r386;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r392, r88, r172;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r395, r392, r397;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r398, r389, r395;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs25, fd67;\n\t"
    "}\n\t"
    "mov.b32 r472, {rs25, rs25};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs26, fd56;\n\t"
    "}\n\t"
    "mov.b32 r481, {rs26, rs26};\n\t"
    "{\n\t"
    "add.f16x2 r401, r259, r275;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r404, r28, r401;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r407, r265, r281;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r410, r64, r407;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r413, r259, r275;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r416, r413, r472;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r419, r28, r416;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r422, r265, r281;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r425, r422, r481;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r428, r419, r425;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r431, r259, r275;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r434, r431, r472;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r437, r28, r434;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r440, r265, r281;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r443, r440, r481;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r446, r437, r443;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r449, r265, r281;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r452, r449, r472;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r455, r64, r452;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r458, r259, r275;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r461, r458, r481;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r464, r455, r461;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r467, r265, r281;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r470, r467, r472;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r473, r64, r470;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r476, r259, r275;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r479, r476, r481;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r482, r473, r479;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs27, fd67;\n\t"
    "}\n\t"
    "mov.b32 r556, {rs27, rs27};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs28, fd56;\n\t"
    "}\n\t"
    "mov.b32 r565, {rs28, rs28};\n\t"
    "{\n\t"
    "add.f16x2 r485, r291, r307;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r488, r46, r485;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r491, r297, r313;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r494, r82, r491;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r497, r291, r307;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r500, r497, r556;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r503, r46, r500;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r506, r297, r313;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r509, r506, r565;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r512, r503, r509;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r515, r291, r307;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r518, r515, r556;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r521, r46, r518;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r524, r297, r313;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r527, r524, r565;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r530, r521, r527;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r533, r297, r313;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r536, r533, r556;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r539, r82, r536;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r542, r291, r307;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r545, r542, r565;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r548, r539, r545;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r551, r297, r313;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r554, r551, r556;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r557, r82, r554;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r560, r291, r307;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r563, r560, r565;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r566, r557, r563;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs29, fd67;\n\t"
    "}\n\t"
    "mov.b32 r640, {rs29, rs29};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs30, fd56;\n\t"
    "}\n\t"
    "mov.b32 r649, {rs30, rs30};\n\t"
    "{\n\t"
    "add.f16x2 r569, %51, %63;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r572, %39, r569;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r575, %52, %64;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r578, %40, r575;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r581, %51, %63;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r584, r581, r640;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r587, %39, r584;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r590, %52, %64;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r593, r590, r649;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r596, r587, r593;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r599, %51, %63;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r602, r599, r640;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r605, %39, r602;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r608, %52, %64;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r611, r608, r649;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r614, r605, r611;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r617, %52, %64;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r620, r617, r640;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r623, %40, r620;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r626, %51, %63;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r629, r626, r649;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r632, r623, r629;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r635, %52, %64;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r638, r635, r640;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r641, %40, r638;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r644, %51, %63;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r647, r644, r649;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r650, r641, r647;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs31, fd67;\n\t"
    "}\n\t"
    "mov.b32 r724, {rs31, rs31};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs32, fd56;\n\t"
    "}\n\t"
    "mov.b32 r733, {rs32, rs32};\n\t"
    "{\n\t"
    "add.f16x2 r653, %55, %67;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r656, %43, r653;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r659, %56, %68;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r662, %44, r659;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r665, %55, %67;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r668, r665, r724;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r671, %43, r668;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r674, %56, %68;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r677, r674, r733;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r680, r671, r677;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r683, %55, %67;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r686, r683, r724;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r689, %43, r686;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r692, %56, %68;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r695, r692, r733;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r698, r689, r695;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r701, %56, %68;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r704, r701, r724;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r707, %44, r704;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r710, %55, %67;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r713, r710, r733;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r716, r707, r713;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r719, %56, %68;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r722, r719, r724;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r725, %44, r722;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r728, %55, %67;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r731, r728, r733;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r734, r725, r731;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs33, fd67;\n\t"
    "}\n\t"
    "mov.b32 r808, {rs33, rs33};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs34, fd56;\n\t"
    "}\n\t"
    "mov.b32 r817, {rs34, rs34};\n\t"
    "{\n\t"
    "add.f16x2 r737, %59, %71;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r740, %47, r737;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r743, %60, %72;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r746, %48, r743;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r749, %59, %71;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r752, r749, r808;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r755, %47, r752;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r758, %60, %72;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r761, r758, r817;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r764, r755, r761;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r767, %59, %71;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r770, r767, r808;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r773, %47, r770;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r776, %60, %72;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r779, r776, r817;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r782, r773, r779;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r785, %60, %72;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r788, r785, r808;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r791, %48, r788;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r794, %59, %71;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r797, r794, r817;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r800, r791, r797;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r803, %60, %72;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r806, r803, r808;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r809, %48, r806;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r812, %59, %71;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r815, r812, r817;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r818, r809, r815;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs35, fd59;\n\t"
    "}\n\t"
    "mov.b32 r835, {rs35, rs35};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs36, fd70;\n\t"
    "}\n\t"
    "mov.b32 r832, {rs36, rs36};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs37, fd63;\n\t"
    "}\n\t"
    "mov.b32 r867, {rs37, rs37};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs38, fd66;\n\t"
    "}\n\t"
    "mov.b32 r864, {rs38, rs38};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs41, fd71;\n\t"
    "}\n\t"
    "mov.b32 r883, {rs41, rs41};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs42, fd72;\n\t"
    "}\n\t"
    "mov.b32 r880, {rs42, rs42};\n\t"
    "{\n\t"
    "mul.f16x2 r821, r680, r835;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r824, r716, r832;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r827, r821, r824;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r830, r680, r832;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r833, r716, r835, r830;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r837, r764, r867;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r840, r800, r864;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r843, r837, r840;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r846, r764, r864;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r849, r800, r867, r846;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r853, r698, r867;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r856, r734, r864;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r859, r853, r856;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r862, r698, r864;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r865, r734, r867, r862;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r869, r782, r883;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r872, r818, r880;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r875, r869, r872;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r878, r782, r880;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r881, r818, r883, r878;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs51, fd67;\n\t"
    "}\n\t"
    "mov.b32 r956, {rs51, rs51};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs52, fd56;\n\t"
    "}\n\t"
    "mov.b32 r965, {rs52, rs52};\n\t"
    "{\n\t"
    "add.f16x2 r885, r656, r740;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r888, r572, r885;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r891, r662, r746;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r894, r578, r891;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r897, r656, r740;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r900, r897, r956;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r903, r572, r900;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r906, r662, r746;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r909, r906, r965;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r912, r903, r909;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r915, r656, r740;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r918, r915, r956;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r921, r572, r918;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r924, r662, r746;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r927, r924, r965;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r930, r921, r927;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r933, r662, r746;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r936, r933, r956;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r939, r578, r936;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r942, r656, r740;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r945, r942, r965;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r948, r939, r945;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r951, r662, r746;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r954, r951, r956;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r957, r578, r954;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r960, r656, r740;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r963, r960, r965;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r966, r957, r963;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs53, fd67;\n\t"
    "}\n\t"
    "mov.b32 r1040, {rs53, rs53};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs54, fd56;\n\t"
    "}\n\t"
    "mov.b32 r1049, {rs54, rs54};\n\t"
    "{\n\t"
    "add.f16x2 r969, r827, r843;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r972, r596, r969;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r975, r833, r849;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r978, r632, r975;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r981, r827, r843;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r984, r981, r1040;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r987, r596, r984;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r990, r833, r849;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r993, r990, r1049;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r996, r987, r993;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r999, r827, r843;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1002, r999, r1040;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1005, r596, r1002;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1008, r833, r849;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1011, r1008, r1049;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1014, r1005, r1011;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1017, r833, r849;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1020, r1017, r1040;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1023, r632, r1020;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1026, r827, r843;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1029, r1026, r1049;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1032, r1023, r1029;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1035, r833, r849;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1038, r1035, r1040;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1041, r632, r1038;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1044, r827, r843;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1047, r1044, r1049;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1050, r1041, r1047;\n\t"
    "}\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs55, fd67;\n\t"
    "}\n\t"
    "mov.b32 r1124, {rs55, rs55};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs56, fd56;\n\t"
    "}\n\t"
    "mov.b32 r1133, {rs56, rs56};\n\t"
    "{\n\t"
    "add.f16x2 r1053, r859, r875;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1056, r614, r1053;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1059, r865, r881;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1062, r650, r1059;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1065, r859, r875;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1068, r1065, r1124;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1071, r614, r1068;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1074, r865, r881;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1077, r1074, r1133;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1080, r1071, r1077;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1083, r859, r875;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1086, r1083, r1124;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1089, r614, r1086;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1092, r865, r881;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1095, r1092, r1133;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1098, r1089, r1095;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1101, r865, r881;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1104, r1101, r1124;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1107, r650, r1104;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1110, r859, r875;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1113, r1110, r1133;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1116, r1107, r1113;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1119, r865, r881;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1122, r1119, r1124;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1125, r650, r1122;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1128, r859, r875;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1131, r1128, r1133;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 r1134, r1125, r1131;\n\t"
    "}\n\t"
    "mov.f64 fd57, 0d3FEE11F642522D1C;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs57, fd57;\n\t"
    "}\n\t"
    "mov.b32 r1151, {rs57, rs57};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs58, fd72;\n\t"
    "}\n\t"
    "mov.b32 r1148, {rs58, rs58};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs59, fd59;\n\t"
    "}\n\t"
    "mov.b32 r1167, {rs59, rs59};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs60, fd70;\n\t"
    "}\n\t"
    "mov.b32 r1164, {rs60, rs60};\n\t"
    "mov.f64 fd61, 0d3FE0000000000000;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs61, fd61;\n\t"
    "}\n\t"
    "mov.b32 r1183, {rs61, rs61};\n\t"
    "mov.f64 fd68, 0dBFEBB67AE8584CAA;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs62, fd68;\n\t"
    "}\n\t"
    "mov.b32 r1180, {rs62, rs62};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs63, fd63;\n\t"
    "}\n\t"
    "mov.b32 r1199, {rs63, rs63};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs64, fd66;\n\t"
    "}\n\t"
    "mov.b32 r1196, {rs64, rs64};\n\t"
    "mov.f64 fd65, 0dBFC63A1A7E0B738A;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs65, fd65;\n\t"
    "}\n\t"
    "mov.b32 r1215, {rs65, rs65};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs66, fd66;\n\t"
    "}\n\t"
    "mov.b32 r1212, {rs66, rs66};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs67, fd67;\n\t"
    "}\n\t"
    "mov.b32 r1231, {rs67, rs67};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs68, fd68;\n\t"
    "}\n\t"
    "mov.b32 r1228, {rs68, rs68};\n\t"
    "mov.f64 fd69, 0dBFE8836FA2CF5039;\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs69, fd69;\n\t"
    "}\n\t"
    "mov.b32 r1247, {rs69, rs69};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs70, fd70;\n\t"
    "}\n\t"
    "mov.b32 r1244, {rs70, rs70};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs71, fd71;\n\t"
    "}\n\t"
    "mov.b32 r1263, {rs71, rs71};\n\t"
    "{\n\t"
    "cvt.rn.f16.f64 rs72, fd72;\n\t"
    "}\n\t"
    "mov.b32 r1260, {rs72, rs72};\n\t"
    "{\n\t"
    "mul.f16x2 r1137, r972, r1151;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1140, r978, r1148;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1143, r1137, r1140;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1146, r972, r1148;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r1149, r978, r1151, r1146;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1153, r1056, r1167;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1156, r1062, r1164;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1159, r1153, r1156;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1162, r1056, r1164;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r1165, r1062, r1167, r1162;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1169, r912, r1183;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1172, r948, r1180;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1175, r1169, r1172;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1178, r912, r1180;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r1181, r948, r1183, r1178;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1185, r996, r1199;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1188, r1032, r1196;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1191, r1185, r1188;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1194, r996, r1196;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r1197, r1032, r1199, r1194;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1201, r1080, r1215;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1204, r1116, r1212;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1207, r1201, r1204;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1210, r1080, r1212;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r1213, r1116, r1215, r1210;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1217, r930, r1231;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1220, r966, r1228;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1223, r1217, r1220;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1226, r930, r1228;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r1229, r966, r1231, r1226;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1233, r1014, r1247;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1236, r1050, r1244;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1239, r1233, r1236;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1242, r1014, r1244;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r1245, r1050, r1247, r1242;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1249, r1098, r1263;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1252, r1134, r1260;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 r1255, r1249, r1252;\n\t"
    "}\n\t"
    "{\n\t"
    "mul.f16x2 r1258, r1098, r1260;\n\t"
    "}\n\t"
    "{\n\t"
    "fma.rn.f16x2 r1261, r1134, r1263, r1258;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %0, r320, r888;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %1, r326, r894;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %18, r320, r888;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %19, r326, r894;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %2, r404, r1143;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %3, r410, r1149;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %20, r404, r1143;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %21, r410, r1149;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %4, r488, r1159;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %5, r494, r1165;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %22, r488, r1159;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %23, r494, r1165;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %6, r344, r1175;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %7, r380, r1181;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %24, r344, r1175;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %25, r380, r1181;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %8, r428, r1191;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %9, r464, r1197;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %26, r428, r1191;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %27, r464, r1197;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %10, r512, r1207;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %11, r548, r1213;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %28, r512, r1207;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %29, r548, r1213;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %12, r362, r1223;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %13, r398, r1229;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %30, r362, r1223;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %31, r398, r1229;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %14, r446, r1239;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %15, r482, r1245;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %32, r446, r1239;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %33, r482, r1245;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %16, r530, r1255;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %17, r566, r1261;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %34, r530, r1255;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %35, r566, r1261;\n\t"
    "}\n\t"
    "}"
     : "=r"(__HALF2_TO_UI(rmem[0].x)), "=r"(__HALF2_TO_UI(rmem[0].y)), "=r"(__HALF2_TO_UI(rmem[1].x)), "=r"(__HALF2_TO_UI(rmem[1].y)), "=r"(__HALF2_TO_UI(rmem[2].x)), "=r"(__HALF2_TO_UI(rmem[2].y)), "=r"(__HALF2_TO_UI(rmem[3].x)), "=r"(__HALF2_TO_UI(rmem[3].y)), "=r"(__HALF2_TO_UI(rmem[4].x)), "=r"(__HALF2_TO_UI(rmem[4].y)), "=r"(__HALF2_TO_UI(rmem[5].x)), "=r"(__HALF2_TO_UI(rmem[5].y)), "=r"(__HALF2_TO_UI(rmem[6].x)), "=r"(__HALF2_TO_UI(rmem[6].y)), "=r"(__HALF2_TO_UI(rmem[7].x)), "=r"(__HALF2_TO_UI(rmem[7].y)), "=r"(__HALF2_TO_UI(rmem[8].x)), "=r"(__HALF2_TO_UI(rmem[8].y)), "=r"(__HALF2_TO_UI(rmem[9].x)), "=r"(__HALF2_TO_UI(rmem[9].y)), "=r"(__HALF2_TO_UI(rmem[10].x)), "=r"(__HALF2_TO_UI(rmem[10].y)), "=r"(__HALF2_TO_UI(rmem[11].x)), "=r"(__HALF2_TO_UI(rmem[11].y)), "=r"(__HALF2_TO_UI(rmem[12].x)), "=r"(__HALF2_TO_UI(rmem[12].y)), "=r"(__HALF2_TO_UI(rmem[13].x)), "=r"(__HALF2_TO_UI(rmem[13].y)), "=r"(__HALF2_TO_UI(rmem[14].x)), "=r"(__HALF2_TO_UI(rmem[14].y)), "=r"(__HALF2_TO_UI(rmem[15].x)), "=r"(__HALF2_TO_UI(rmem[15].y)), "=r"(__HALF2_TO_UI(rmem[16].x)), "=r"(__HALF2_TO_UI(rmem[16].y)), "=r"(__HALF2_TO_UI(rmem[17].x)), "=r"(__HALF2_TO_UI(rmem[17].y)): "l"(smem), "r"(__HALF2_TO_UI(rmem[0].x)), "r"(__HALF2_TO_UI(rmem[0].y)), "r"(__HALF2_TO_UI(rmem[1].x)), "r"(__HALF2_TO_UI(rmem[1].y)), "r"(__HALF2_TO_UI(rmem[2].x)), "r"(__HALF2_TO_UI(rmem[2].y)), "r"(__HALF2_TO_UI(rmem[3].x)), "r"(__HALF2_TO_UI(rmem[3].y)), "r"(__HALF2_TO_UI(rmem[4].x)), "r"(__HALF2_TO_UI(rmem[4].y)), "r"(__HALF2_TO_UI(rmem[5].x)), "r"(__HALF2_TO_UI(rmem[5].y)), "r"(__HALF2_TO_UI(rmem[6].x)), "r"(__HALF2_TO_UI(rmem[6].y)), "r"(__HALF2_TO_UI(rmem[7].x)), "r"(__HALF2_TO_UI(rmem[7].y)), "r"(__HALF2_TO_UI(rmem[8].x)), "r"(__HALF2_TO_UI(rmem[8].y)), "r"(__HALF2_TO_UI(rmem[9].x)), "r"(__HALF2_TO_UI(rmem[9].y)), "r"(__HALF2_TO_UI(rmem[10].x)), "r"(__HALF2_TO_UI(rmem[10].y)), "r"(__HALF2_TO_UI(rmem[11].x)), "r"(__HALF2_TO_UI(rmem[11].y)), "r"(__HALF2_TO_UI(rmem[12].x)), "r"(__HALF2_TO_UI(rmem[12].y)), "r"(__HALF2_TO_UI(rmem[13].x)), "r"(__HALF2_TO_UI(rmem[13].y)), "r"(__HALF2_TO_UI(rmem[14].x)), "r"(__HALF2_TO_UI(rmem[14].y)), "r"(__HALF2_TO_UI(rmem[15].x)), "r"(__HALF2_TO_UI(rmem[15].y)), "r"(__HALF2_TO_UI(rmem[16].x)), "r"(__HALF2_TO_UI(rmem[16].y)), "r"(__HALF2_TO_UI(rmem[17].x)), "r"(__HALF2_TO_UI(rmem[17].y)));
};


#endif
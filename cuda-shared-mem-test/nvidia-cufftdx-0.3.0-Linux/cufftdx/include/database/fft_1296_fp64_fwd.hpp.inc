#ifndef CUFFTDX_FFT_1296_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_1296_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<590, double, 1>(cufftdx::detail::complex<double> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .b32 r<42>;\n\t"
    ".reg .f64 fd<405>;\n\t"
    ".reg .b64 rd<19>;\n\t"
    "mov.u32 r13, %tid.y;\n\t"
    "mov.u32 r14, %tid.x;\n\t"
    "add.f64 fd79, %21, %26;\n\t"
    "add.f64 fd80, %16, fd79;\n\t"
    "add.f64 fd81, %23, %28;\n\t"
    "add.f64 fd82, %17, fd81;\n\t"
    "fma.rn.f64 fd83, fd79, 0dBFE0000000000000, %16;\n\t"
    "sub.f64 fd84, %23, %28;\n\t"
    "mul.f64 fd85, fd84, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd86, fd85, fd83;\n\t"
    "sub.f64 fd87, fd83, fd85;\n\t"
    "fma.rn.f64 fd88, fd81, 0dBFE0000000000000, %17;\n\t"
    "sub.f64 fd89, %21, %26;\n\t"
    "mul.f64 fd90, fd89, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd91, fd88, fd90;\n\t"
    "add.f64 fd92, fd90, fd88;\n\t"
    "add.f64 fd93, %24, %29;\n\t"
    "add.f64 fd94, %18, fd93;\n\t"
    "add.f64 fd95, %25, %30;\n\t"
    "add.f64 fd96, %20, fd95;\n\t"
    "fma.rn.f64 fd97, fd93, 0dBFE0000000000000, %18;\n\t"
    "sub.f64 fd98, %25, %30;\n\t"
    "mul.f64 fd99, fd98, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd100, fd99, fd97;\n\t"
    "sub.f64 fd101, fd97, fd99;\n\t"
    "fma.rn.f64 fd102, fd95, 0dBFE0000000000000, %20;\n\t"
    "sub.f64 fd103, %24, %29;\n\t"
    "mul.f64 fd104, fd103, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd105, fd102, fd104;\n\t"
    "add.f64 fd106, fd104, fd102;\n\t"
    "mul.f64 fd107, fd100, 0d3FE0000000000000;\n\t"
    "mul.f64 fd108, fd105, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd109, fd107, fd108;\n\t"
    "mul.f64 fd110, fd105, 0d3FE0000000000000;\n\t"
    "fma.rn.f64 fd111, fd100, 0dBFEBB67AE8584CAA, fd110;\n\t"
    "mul.f64 fd112, fd101, 0dBFE0000000000000;\n\t"
    "mul.f64 fd113, fd106, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd114, fd112, fd113;\n\t"
    "mul.f64 fd115, fd106, 0dBFE0000000000000;\n\t"
    "fma.rn.f64 fd116, fd101, 0dBFEBB67AE8584CAA, fd115;\n\t"
    "add.f64 fd1, fd80, fd94;\n\t"
    "add.f64 fd2, fd82, fd96;\n\t"
    "sub.f64 fd117, fd80, fd94;\n\t"
    "sub.f64 fd118, fd82, fd96;\n\t"
    "add.f64 fd119, fd86, fd109;\n\t"
    "add.f64 fd120, fd91, fd111;\n\t"
    "sub.f64 fd121, fd86, fd109;\n\t"
    "sub.f64 fd122, fd91, fd111;\n\t"
    "add.f64 fd123, fd87, fd114;\n\t"
    "add.f64 fd124, fd92, fd116;\n\t"
    "sub.f64 fd125, fd87, fd114;\n\t"
    "sub.f64 fd126, fd92, fd116;\n\t"
    "shr.u32 r15, r14, 3;\n\t"
    "mul.wide.u32 rd2, r15, 159072863;\n\t"
    "shr.u64 rd3, rd2, 32;\n\t"
    "cvt.u32.u64 r16, rd3;\n\t"
    "mul.lo.s32 r17, r16, 216;\n\t"
    "sub.s32 r1, r14, r17;\n\t"
    "add.s32 r18, r16, r13;\n\t"
    "mul.wide.u32 rd4, r1, 16;\n\t"
    "mov.u64 rd5, %13;\n\t"
    "add.s64 rd6, rd5, rd4;\n\t"
    "ld.global.v2.f64 {fd127, fd128}, [rd6];\n\t"
    "add.s32 r19, r1, 216;\n\t"
    "mul.f64 fd131, fd127, fd119;\n\t"
    "mul.f64 fd132, fd128, fd120;\n\t"
    "sub.f64 fd3, fd131, fd132;\n\t"
    "mul.f64 fd133, fd127, fd120;\n\t"
    "fma.rn.f64 fd4, fd128, fd119, fd133;\n\t"
    "mul.f64 fd134, fd127, fd127;\n\t"
    "mul.f64 fd135, fd128, fd128;\n\t"
    "sub.f64 fd136, fd134, fd135;\n\t"
    "mul.f64 fd137, fd128, fd127;\n\t"
    "fma.rn.f64 fd138, fd128, fd127, fd137;\n\t"
    "mul.f64 fd139, fd136, fd123;\n\t"
    "mul.f64 fd140, fd138, fd124;\n\t"
    "sub.f64 fd5, fd139, fd140;\n\t"
    "mul.f64 fd141, fd136, fd124;\n\t"
    "fma.rn.f64 fd6, fd138, fd123, fd141;\n\t"
    "mul.f64 fd142, fd127, fd136;\n\t"
    "mul.f64 fd143, fd128, fd138;\n\t"
    "sub.f64 fd144, fd142, fd143;\n\t"
    "mul.f64 fd145, fd127, fd138;\n\t"
    "fma.rn.f64 fd146, fd128, fd136, fd145;\n\t"
    "mul.f64 fd147, fd144, fd117;\n\t"
    "mul.f64 fd148, fd146, fd118;\n\t"
    "sub.f64 fd7, fd147, fd148;\n\t"
    "mul.f64 fd149, fd144, fd118;\n\t"
    "fma.rn.f64 fd8, fd146, fd117, fd149;\n\t"
    "mul.wide.u32 rd7, r19, 16;\n\t"
    "add.s64 rd8, rd5, rd7;\n\t"
    "ld.global.v2.f64 {fd150, fd151}, [rd8];\n\t"
    "mul.f64 fd154, fd150, fd121;\n\t"
    "mul.f64 fd155, fd151, fd122;\n\t"
    "sub.f64 fd9, fd154, fd155;\n\t"
    "mul.f64 fd156, fd150, fd122;\n\t"
    "fma.rn.f64 fd10, fd151, fd121, fd156;\n\t"
    "mul.f64 fd157, fd127, fd150;\n\t"
    "mul.f64 fd158, fd128, fd151;\n\t"
    "sub.f64 fd159, fd157, fd158;\n\t"
    "mul.f64 fd160, fd127, fd151;\n\t"
    "fma.rn.f64 fd161, fd128, fd150, fd160;\n\t"
    "mul.f64 fd162, fd159, fd125;\n\t"
    "mul.f64 fd163, fd161, fd126;\n\t"
    "sub.f64 fd11, fd162, fd163;\n\t"
    "mul.f64 fd164, fd159, fd126;\n\t"
    "fma.rn.f64 fd12, fd161, fd125, fd164;\n\t"
    "mul.lo.s32 r2, r18, 1296;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r20, r1, 6, r2;\n\t"
    "shl.b32 r21, r20, 3;\n\t"
    "{\n\t"
    ".reg .u64 wide1;\n\t"
    ".reg .u32 narrow1;\n\t"
    "mov.u64 wide1, %12;\n\t"
    "cvt.u32.u64 narrow1, wide1;\n\t"
    "cvta.to.shared.u32 r22, narrow1;\n\t"
    "}\n\t"
    "add.s32 r3, r22, r21;\n\t"
    "st.shared.f64 [r3], fd1;\n\t"
    "st.shared.f64 [r3+8], fd3;\n\t"
    "st.shared.f64 [r3+16], fd5;\n\t"
    "st.shared.f64 [r3+24], fd7;\n\t"
    "st.shared.f64 [r3+32], fd9;\n\t"
    "st.shared.f64 [r3+40], fd11;\n\t"
    "barrier.sync 0;\n\t"
    "add.s32 r23, r1, r2;\n\t"
    "shl.b32 r24, r23, 3;\n\t"
    "add.s32 r4, r22, r24;\n\t"
    "ld.shared.f64 fd13, [r4];\n\t"
    "ld.shared.f64 fd14, [r4+1728];\n\t"
    "ld.shared.f64 fd15, [r4+3456];\n\t"
    "ld.shared.f64 fd16, [r4+5184];\n\t"
    "ld.shared.f64 fd17, [r4+6912];\n\t"
    "ld.shared.f64 fd18, [r4+8640];\n\t"
    "barrier.sync 0;\n\t"
    "st.shared.f64 [r3], fd2;\n\t"
    "st.shared.f64 [r3+8], fd4;\n\t"
    "st.shared.f64 [r3+16], fd6;\n\t"
    "st.shared.f64 [r3+24], fd8;\n\t"
    "st.shared.f64 [r3+32], fd10;\n\t"
    "st.shared.f64 [r3+40], fd12;\n\t"
    "barrier.sync 0;\n\t"
    "ld.shared.f64 fd165, [r4];\n\t"
    "ld.shared.f64 fd166, [r4+1728];\n\t"
    "ld.shared.f64 fd167, [r4+3456];\n\t"
    "ld.shared.f64 fd168, [r4+5184];\n\t"
    "ld.shared.f64 fd169, [r4+6912];\n\t"
    "ld.shared.f64 fd170, [r4+8640];\n\t"
    "add.f64 fd171, fd15, fd17;\n\t"
    "add.f64 fd172, fd13, fd171;\n\t"
    "add.f64 fd173, fd167, fd169;\n\t"
    "add.f64 fd174, fd165, fd173;\n\t"
    "fma.rn.f64 fd175, fd171, 0dBFE0000000000000, fd13;\n\t"
    "sub.f64 fd176, fd167, fd169;\n\t"
    "mul.f64 fd177, fd176, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd178, fd177, fd175;\n\t"
    "sub.f64 fd179, fd175, fd177;\n\t"
    "fma.rn.f64 fd180, fd173, 0dBFE0000000000000, fd165;\n\t"
    "sub.f64 fd181, fd15, fd17;\n\t"
    "mul.f64 fd182, fd181, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd183, fd180, fd182;\n\t"
    "add.f64 fd184, fd182, fd180;\n\t"
    "add.f64 fd185, fd16, fd18;\n\t"
    "add.f64 fd186, fd14, fd185;\n\t"
    "add.f64 fd187, fd168, fd170;\n\t"
    "add.f64 fd188, fd166, fd187;\n\t"
    "fma.rn.f64 fd189, fd185, 0dBFE0000000000000, fd14;\n\t"
    "sub.f64 fd190, fd168, fd170;\n\t"
    "mul.f64 fd191, fd190, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd192, fd191, fd189;\n\t"
    "sub.f64 fd193, fd189, fd191;\n\t"
    "fma.rn.f64 fd194, fd187, 0dBFE0000000000000, fd166;\n\t"
    "sub.f64 fd195, fd16, fd18;\n\t"
    "mul.f64 fd196, fd195, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd197, fd194, fd196;\n\t"
    "add.f64 fd198, fd196, fd194;\n\t"
    "mul.f64 fd199, fd192, 0d3FE0000000000000;\n\t"
    "mul.f64 fd200, fd197, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd201, fd199, fd200;\n\t"
    "mul.f64 fd202, fd197, 0d3FE0000000000000;\n\t"
    "fma.rn.f64 fd203, fd192, 0dBFEBB67AE8584CAA, fd202;\n\t"
    "mul.f64 fd204, fd193, 0dBFE0000000000000;\n\t"
    "mul.f64 fd205, fd198, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd206, fd204, fd205;\n\t"
    "mul.f64 fd207, fd198, 0dBFE0000000000000;\n\t"
    "fma.rn.f64 fd208, fd193, 0dBFEBB67AE8584CAA, fd207;\n\t"
    "add.f64 fd19, fd172, fd186;\n\t"
    "add.f64 fd20, fd174, fd188;\n\t"
    "sub.f64 fd209, fd172, fd186;\n\t"
    "sub.f64 fd210, fd174, fd188;\n\t"
    "add.f64 fd211, fd178, fd201;\n\t"
    "add.f64 fd212, fd183, fd203;\n\t"
    "sub.f64 fd213, fd178, fd201;\n\t"
    "sub.f64 fd214, fd183, fd203;\n\t"
    "add.f64 fd215, fd179, fd206;\n\t"
    "add.f64 fd216, fd184, fd208;\n\t"
    "sub.f64 fd217, fd179, fd206;\n\t"
    "sub.f64 fd218, fd184, fd208;\n\t"
    "mul.wide.u32 rd9, r1, -1431655765;\n\t"
    "shr.u64 rd10, rd9, 34;\n\t"
    "cvt.u32.u64 r5, rd10;\n\t"
    "mul.wide.u32 rd11, r5, 16;\n\t"
    "mov.u64 rd12, %14;\n\t"
    "add.s64 rd13, rd12, rd11;\n\t"
    "ld.global.v2.f64 {fd219, fd220}, [rd13];\n\t"
    "mul.f64 fd223, fd219, fd211;\n\t"
    "mul.f64 fd224, fd220, fd212;\n\t"
    "sub.f64 fd21, fd223, fd224;\n\t"
    "mul.f64 fd225, fd219, fd212;\n\t"
    "fma.rn.f64 fd22, fd220, fd211, fd225;\n\t"
    "mul.f64 fd226, fd219, fd219;\n\t"
    "mul.f64 fd227, fd220, fd220;\n\t"
    "sub.f64 fd228, fd226, fd227;\n\t"
    "mul.f64 fd229, fd220, fd219;\n\t"
    "fma.rn.f64 fd230, fd220, fd219, fd229;\n\t"
    "mul.f64 fd231, fd228, fd215;\n\t"
    "mul.f64 fd232, fd230, fd216;\n\t"
    "sub.f64 fd23, fd231, fd232;\n\t"
    "mul.f64 fd233, fd228, fd216;\n\t"
    "fma.rn.f64 fd24, fd230, fd215, fd233;\n\t"
    "mul.f64 fd234, fd219, fd228;\n\t"
    "mul.f64 fd235, fd220, fd230;\n\t"
    "sub.f64 fd236, fd234, fd235;\n\t"
    "mul.f64 fd237, fd219, fd230;\n\t"
    "fma.rn.f64 fd238, fd220, fd228, fd237;\n\t"
    "mul.f64 fd239, fd236, fd209;\n\t"
    "mul.f64 fd240, fd238, fd210;\n\t"
    "sub.f64 fd25, fd239, fd240;\n\t"
    "mul.f64 fd241, fd236, fd210;\n\t"
    "fma.rn.f64 fd26, fd238, fd209, fd241;\n\t"
    "ld.global.v2.f64 {fd242, fd243}, [rd13+576];\n\t"
    "mul.f64 fd246, fd242, fd213;\n\t"
    "mul.f64 fd247, fd243, fd214;\n\t"
    "sub.f64 fd27, fd246, fd247;\n\t"
    "mul.f64 fd248, fd242, fd214;\n\t"
    "fma.rn.f64 fd28, fd243, fd213, fd248;\n\t"
    "mul.f64 fd249, fd219, fd242;\n\t"
    "mul.f64 fd250, fd220, fd243;\n\t"
    "sub.f64 fd251, fd249, fd250;\n\t"
    "mul.f64 fd252, fd219, fd243;\n\t"
    "fma.rn.f64 fd253, fd220, fd242, fd252;\n\t"
    "mul.f64 fd254, fd251, fd217;\n\t"
    "mul.f64 fd255, fd253, fd218;\n\t"
    "sub.f64 fd29, fd254, fd255;\n\t"
    "mul.f64 fd256, fd251, fd218;\n\t"
    "fma.rn.f64 fd30, fd253, fd217, fd256;\n\t"
    "mul.lo.s32 r26, r5, 6;\n\t"
    "sub.s32 r27, r1, r26;\n\t"
    "add.s32 r6, r27, r2;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r28, r5, 36, r6;\n\t"
    "shl.b32 r29, r28, 3;\n\t"
    "add.s32 r7, r22, r29;\n\t"
    "st.shared.f64 [r7], fd19;\n\t"
    "st.shared.f64 [r7+48], fd21;\n\t"
    "st.shared.f64 [r7+96], fd23;\n\t"
    "st.shared.f64 [r7+144], fd25;\n\t"
    "st.shared.f64 [r7+192], fd27;\n\t"
    "st.shared.f64 [r7+240], fd29;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r31, r5, 6, r6;\n\t"
    "shl.b32 r32, r31, 3;\n\t"
    "add.s32 r8, r22, r32;\n\t"
    "ld.shared.f64 fd31, [r8];\n\t"
    "ld.shared.f64 fd32, [r8+1728];\n\t"
    "ld.shared.f64 fd33, [r8+3456];\n\t"
    "ld.shared.f64 fd34, [r8+5184];\n\t"
    "ld.shared.f64 fd35, [r8+6912];\n\t"
    "ld.shared.f64 fd36, [r8+8640];\n\t"
    "barrier.sync 0;\n\t"
    "st.shared.f64 [r7], fd20;\n\t"
    "st.shared.f64 [r7+48], fd22;\n\t"
    "st.shared.f64 [r7+96], fd24;\n\t"
    "st.shared.f64 [r7+144], fd26;\n\t"
    "st.shared.f64 [r7+192], fd28;\n\t"
    "st.shared.f64 [r7+240], fd30;\n\t"
    "barrier.sync 0;\n\t"
    "ld.shared.f64 fd257, [r8];\n\t"
    "ld.shared.f64 fd258, [r8+1728];\n\t"
    "ld.shared.f64 fd259, [r8+3456];\n\t"
    "ld.shared.f64 fd260, [r8+5184];\n\t"
    "ld.shared.f64 fd261, [r8+6912];\n\t"
    "ld.shared.f64 fd262, [r8+8640];\n\t"
    "add.f64 fd263, fd33, fd35;\n\t"
    "add.f64 fd264, fd31, fd263;\n\t"
    "add.f64 fd265, fd259, fd261;\n\t"
    "add.f64 fd266, fd257, fd265;\n\t"
    "fma.rn.f64 fd267, fd263, 0dBFE0000000000000, fd31;\n\t"
    "sub.f64 fd268, fd259, fd261;\n\t"
    "mul.f64 fd269, fd268, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd270, fd269, fd267;\n\t"
    "sub.f64 fd271, fd267, fd269;\n\t"
    "fma.rn.f64 fd272, fd265, 0dBFE0000000000000, fd257;\n\t"
    "sub.f64 fd273, fd33, fd35;\n\t"
    "mul.f64 fd274, fd273, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd275, fd272, fd274;\n\t"
    "add.f64 fd276, fd274, fd272;\n\t"
    "add.f64 fd277, fd34, fd36;\n\t"
    "add.f64 fd278, fd32, fd277;\n\t"
    "add.f64 fd279, fd260, fd262;\n\t"
    "add.f64 fd280, fd258, fd279;\n\t"
    "fma.rn.f64 fd281, fd277, 0dBFE0000000000000, fd32;\n\t"
    "sub.f64 fd282, fd260, fd262;\n\t"
    "mul.f64 fd283, fd282, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd284, fd283, fd281;\n\t"
    "sub.f64 fd285, fd281, fd283;\n\t"
    "fma.rn.f64 fd286, fd279, 0dBFE0000000000000, fd258;\n\t"
    "sub.f64 fd287, fd34, fd36;\n\t"
    "mul.f64 fd288, fd287, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd289, fd286, fd288;\n\t"
    "add.f64 fd290, fd288, fd286;\n\t"
    "mul.f64 fd291, fd284, 0d3FE0000000000000;\n\t"
    "mul.f64 fd292, fd289, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd293, fd291, fd292;\n\t"
    "mul.f64 fd294, fd289, 0d3FE0000000000000;\n\t"
    "fma.rn.f64 fd295, fd284, 0dBFEBB67AE8584CAA, fd294;\n\t"
    "mul.f64 fd296, fd285, 0dBFE0000000000000;\n\t"
    "mul.f64 fd297, fd290, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd298, fd296, fd297;\n\t"
    "mul.f64 fd299, fd290, 0dBFE0000000000000;\n\t"
    "fma.rn.f64 fd300, fd285, 0dBFEBB67AE8584CAA, fd299;\n\t"
    "add.f64 fd37, fd264, fd278;\n\t"
    "add.f64 fd38, fd266, fd280;\n\t"
    "sub.f64 fd301, fd264, fd278;\n\t"
    "sub.f64 fd302, fd266, fd280;\n\t"
    "add.f64 fd303, fd270, fd293;\n\t"
    "add.f64 fd304, fd275, fd295;\n\t"
    "sub.f64 fd305, fd270, fd293;\n\t"
    "sub.f64 fd306, fd275, fd295;\n\t"
    "add.f64 fd307, fd271, fd298;\n\t"
    "add.f64 fd308, fd276, fd300;\n\t"
    "sub.f64 fd309, fd271, fd298;\n\t"
    "sub.f64 fd310, fd276, fd300;\n\t"
    "mul.wide.u32 rd14, r1, 954437177;\n\t"
    "shr.u64 rd15, rd14, 35;\n\t"
    "cvt.u32.u64 r9, rd15;\n\t"
    "mul.wide.u32 rd16, r9, 16;\n\t"
    "mov.u64 rd17, %15;\n\t"
    "add.s64 rd18, rd17, rd16;\n\t"
    "ld.global.v2.f64 {fd311, fd312}, [rd18];\n\t"
    "mul.f64 fd315, fd311, fd303;\n\t"
    "mul.f64 fd316, fd312, fd304;\n\t"
    "sub.f64 fd39, fd315, fd316;\n\t"
    "mul.f64 fd317, fd311, fd304;\n\t"
    "fma.rn.f64 fd40, fd312, fd303, fd317;\n\t"
    "mul.f64 fd318, fd311, fd311;\n\t"
    "mul.f64 fd319, fd312, fd312;\n\t"
    "sub.f64 fd320, fd318, fd319;\n\t"
    "mul.f64 fd321, fd312, fd311;\n\t"
    "fma.rn.f64 fd322, fd312, fd311, fd321;\n\t"
    "mul.f64 fd323, fd320, fd307;\n\t"
    "mul.f64 fd324, fd322, fd308;\n\t"
    "sub.f64 fd41, fd323, fd324;\n\t"
    "mul.f64 fd325, fd320, fd308;\n\t"
    "fma.rn.f64 fd42, fd322, fd307, fd325;\n\t"
    "mul.f64 fd326, fd311, fd320;\n\t"
    "mul.f64 fd327, fd312, fd322;\n\t"
    "sub.f64 fd328, fd326, fd327;\n\t"
    "mul.f64 fd329, fd311, fd322;\n\t"
    "fma.rn.f64 fd330, fd312, fd320, fd329;\n\t"
    "mul.f64 fd331, fd328, fd301;\n\t"
    "mul.f64 fd332, fd330, fd302;\n\t"
    "sub.f64 fd43, fd331, fd332;\n\t"
    "mul.f64 fd333, fd328, fd302;\n\t"
    "fma.rn.f64 fd44, fd330, fd301, fd333;\n\t"
    "ld.global.v2.f64 {fd334, fd335}, [rd18+96];\n\t"
    "mul.f64 fd338, fd334, fd305;\n\t"
    "mul.f64 fd339, fd335, fd306;\n\t"
    "sub.f64 fd45, fd338, fd339;\n\t"
    "mul.f64 fd340, fd334, fd306;\n\t"
    "fma.rn.f64 fd46, fd335, fd305, fd340;\n\t"
    "mul.f64 fd341, fd311, fd334;\n\t"
    "mul.f64 fd342, fd312, fd335;\n\t"
    "sub.f64 fd343, fd341, fd342;\n\t"
    "mul.f64 fd344, fd311, fd335;\n\t"
    "fma.rn.f64 fd345, fd312, fd334, fd344;\n\t"
    "mul.f64 fd346, fd343, fd309;\n\t"
    "mul.f64 fd347, fd345, fd310;\n\t"
    "sub.f64 fd47, fd346, fd347;\n\t"
    "mul.f64 fd348, fd343, fd310;\n\t"
    "fma.rn.f64 fd48, fd345, fd309, fd348;\n\t"
    "mul.lo.s32 r34, r9, 36;\n\t"
    "sub.s32 r35, r1, r34;\n\t"
    "add.s32 r10, r35, r2;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r36, r9, 216, r10;\n\t"
    "shl.b32 r37, r36, 3;\n\t"
    "add.s32 r11, r22, r37;\n\t"
    "st.shared.f64 [r11], fd37;\n\t"
    "st.shared.f64 [r11+288], fd39;\n\t"
    "st.shared.f64 [r11+576], fd41;\n\t"
    "st.shared.f64 [r11+864], fd43;\n\t"
    "st.shared.f64 [r11+1152], fd45;\n\t"
    "st.shared.f64 [r11+1440], fd47;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r39, r9, 36, r10;\n\t"
    "shl.b32 r40, r39, 3;\n\t"
    "add.s32 r12, r22, r40;\n\t"
    "ld.shared.f64 fd49, [r12];\n\t"
    "ld.shared.f64 fd50, [r12+1728];\n\t"
    "ld.shared.f64 fd51, [r12+3456];\n\t"
    "ld.shared.f64 fd52, [r12+5184];\n\t"
    "ld.shared.f64 fd53, [r12+6912];\n\t"
    "ld.shared.f64 fd54, [r12+8640];\n\t"
    "barrier.sync 0;\n\t"
    "st.shared.f64 [r11], fd38;\n\t"
    "st.shared.f64 [r11+288], fd40;\n\t"
    "st.shared.f64 [r11+576], fd42;\n\t"
    "st.shared.f64 [r11+864], fd44;\n\t"
    "st.shared.f64 [r11+1152], fd46;\n\t"
    "st.shared.f64 [r11+1440], fd48;\n\t"
    "barrier.sync 0;\n\t"
    "ld.shared.f64 fd349, [r12];\n\t"
    "ld.shared.f64 fd350, [r12+1728];\n\t"
    "ld.shared.f64 fd351, [r12+3456];\n\t"
    "ld.shared.f64 fd352, [r12+5184];\n\t"
    "ld.shared.f64 fd353, [r12+6912];\n\t"
    "ld.shared.f64 fd354, [r12+8640];\n\t"
    "add.f64 fd355, fd51, fd53;\n\t"
    "add.f64 fd356, fd49, fd355;\n\t"
    "add.f64 fd357, fd351, fd353;\n\t"
    "add.f64 fd358, fd349, fd357;\n\t"
    "fma.rn.f64 fd359, fd355, 0dBFE0000000000000, fd49;\n\t"
    "sub.f64 fd360, fd351, fd353;\n\t"
    "mul.f64 fd361, fd360, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd362, fd361, fd359;\n\t"
    "sub.f64 fd363, fd359, fd361;\n\t"
    "fma.rn.f64 fd364, fd357, 0dBFE0000000000000, fd349;\n\t"
    "sub.f64 fd365, fd51, fd53;\n\t"
    "mul.f64 fd366, fd365, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd367, fd364, fd366;\n\t"
    "add.f64 fd368, fd366, fd364;\n\t"
    "add.f64 fd369, fd52, fd54;\n\t"
    "add.f64 fd370, fd50, fd369;\n\t"
    "add.f64 fd371, fd352, fd354;\n\t"
    "add.f64 fd372, fd350, fd371;\n\t"
    "fma.rn.f64 fd373, fd369, 0dBFE0000000000000, fd50;\n\t"
    "sub.f64 fd374, fd352, fd354;\n\t"
    "mul.f64 fd375, fd374, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd376, fd375, fd373;\n\t"
    "sub.f64 fd377, fd373, fd375;\n\t"
    "fma.rn.f64 fd378, fd371, 0dBFE0000000000000, fd350;\n\t"
    "sub.f64 fd379, fd52, fd54;\n\t"
    "mul.f64 fd380, fd379, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd381, fd378, fd380;\n\t"
    "add.f64 fd382, fd380, fd378;\n\t"
    "mul.f64 fd383, fd376, 0d3FE0000000000000;\n\t"
    "mul.f64 fd384, fd381, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd385, fd383, fd384;\n\t"
    "mul.f64 fd386, fd381, 0d3FE0000000000000;\n\t"
    "fma.rn.f64 fd387, fd376, 0dBFEBB67AE8584CAA, fd386;\n\t"
    "mul.f64 fd388, fd377, 0dBFE0000000000000;\n\t"
    "mul.f64 fd389, fd382, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd390, fd388, fd389;\n\t"
    "mul.f64 fd391, fd382, 0dBFE0000000000000;\n\t"
    "fma.rn.f64 fd392, fd377, 0dBFEBB67AE8584CAA, fd391;\n\t"
    "add.f64 %0, fd356, fd370;\n\t"
    "add.f64 %1, fd358, fd372;\n\t"
    "add.f64 %3, fd367, fd387;\n\t"
    "add.f64 %2, fd362, fd385;\n\t"
    "add.f64 %5, fd368, fd392;\n\t"
    "add.f64 %4, fd363, fd390;\n\t"
    "sub.f64 %6, fd356, fd370;\n\t"
    "sub.f64 %7, fd358, fd372;\n\t"
    "sub.f64 %9, fd367, fd387;\n\t"
    "sub.f64 %8, fd362, fd385;\n\t"
    "sub.f64 %11, fd368, fd392;\n\t"
    "sub.f64 %10, fd363, fd390;\n\t"
    "}"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y): "l"(smem), "l"(lut_dp_6_1296), "l"(lut_dp_6_216), "l"(lut_dp_6_36), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<591, double, 1>(cufftdx::detail::complex<double> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .b32 r<42>;\n\t"
    ".reg .f64 fd<441>;\n\t"
    ".reg .b64 rd<19>;\n\t"
    "mov.u32 r7, %tid.y;\n\t"
    "mov.u32 r8, %tid.x;\n\t"
    "add.f64 fd61, %21, %26;\n\t"
    "add.f64 fd62, %16, fd61;\n\t"
    "add.f64 fd63, %23, %28;\n\t"
    "add.f64 fd64, %17, fd63;\n\t"
    "fma.rn.f64 fd65, fd61, 0dBFE0000000000000, %16;\n\t"
    "sub.f64 fd66, %23, %28;\n\t"
    "mul.f64 fd67, fd66, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd68, fd67, fd65;\n\t"
    "sub.f64 fd69, fd65, fd67;\n\t"
    "fma.rn.f64 fd70, fd63, 0dBFE0000000000000, %17;\n\t"
    "sub.f64 fd71, %21, %26;\n\t"
    "mul.f64 fd72, fd71, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd73, fd70, fd72;\n\t"
    "add.f64 fd74, fd72, fd70;\n\t"
    "add.f64 fd75, %24, %29;\n\t"
    "add.f64 fd76, %18, fd75;\n\t"
    "add.f64 fd77, %25, %30;\n\t"
    "add.f64 fd78, %20, fd77;\n\t"
    "fma.rn.f64 fd79, fd75, 0dBFE0000000000000, %18;\n\t"
    "sub.f64 fd80, %25, %30;\n\t"
    "mul.f64 fd81, fd80, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd82, fd81, fd79;\n\t"
    "sub.f64 fd83, fd79, fd81;\n\t"
    "fma.rn.f64 fd84, fd77, 0dBFE0000000000000, %20;\n\t"
    "sub.f64 fd85, %24, %29;\n\t"
    "mul.f64 fd86, fd85, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd87, fd84, fd86;\n\t"
    "add.f64 fd88, fd86, fd84;\n\t"
    "mul.f64 fd89, fd82, 0d3FE0000000000000;\n\t"
    "mul.f64 fd90, fd87, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd91, fd89, fd90;\n\t"
    "mul.f64 fd92, fd87, 0d3FE0000000000000;\n\t"
    "fma.rn.f64 fd93, fd82, 0dBFEBB67AE8584CAA, fd92;\n\t"
    "mul.f64 fd94, fd83, 0dBFE0000000000000;\n\t"
    "mul.f64 fd95, fd88, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd96, fd94, fd95;\n\t"
    "mul.f64 fd97, fd88, 0dBFE0000000000000;\n\t"
    "fma.rn.f64 fd98, fd83, 0dBFEBB67AE8584CAA, fd97;\n\t"
    "add.f64 fd1, fd62, fd76;\n\t"
    "add.f64 fd2, fd64, fd78;\n\t"
    "sub.f64 fd99, fd62, fd76;\n\t"
    "sub.f64 fd100, fd64, fd78;\n\t"
    "add.f64 fd101, fd68, fd91;\n\t"
    "add.f64 fd102, fd73, fd93;\n\t"
    "sub.f64 fd103, fd68, fd91;\n\t"
    "sub.f64 fd104, fd73, fd93;\n\t"
    "add.f64 fd105, fd69, fd96;\n\t"
    "add.f64 fd106, fd74, fd98;\n\t"
    "sub.f64 fd107, fd69, fd96;\n\t"
    "sub.f64 fd108, fd74, fd98;\n\t"
    "shr.u32 r9, r8, 3;\n\t"
    "mul.wide.u32 rd2, r9, 159072863;\n\t"
    "shr.u64 rd3, rd2, 32;\n\t"
    "cvt.u32.u64 r10, rd3;\n\t"
    "mul.lo.s32 r11, r10, 216;\n\t"
    "sub.s32 r1, r8, r11;\n\t"
    "add.s32 r12, r10, r7;\n\t"
    "mul.wide.u32 rd4, r1, 16;\n\t"
    "mov.u64 rd5, %13;\n\t"
    "add.s64 rd6, rd5, rd4;\n\t"
    "ld.global.v2.f64 {fd109, fd110}, [rd6];\n\t"
    "add.s32 r13, r1, 216;\n\t"
    "mul.f64 fd113, fd109, fd101;\n\t"
    "mul.f64 fd114, fd110, fd102;\n\t"
    "sub.f64 fd3, fd113, fd114;\n\t"
    "mul.f64 fd115, fd109, fd102;\n\t"
    "fma.rn.f64 fd4, fd110, fd101, fd115;\n\t"
    "mul.f64 fd116, fd109, fd109;\n\t"
    "mul.f64 fd117, fd110, fd110;\n\t"
    "sub.f64 fd118, fd116, fd117;\n\t"
    "mul.f64 fd119, fd110, fd109;\n\t"
    "fma.rn.f64 fd120, fd110, fd109, fd119;\n\t"
    "mul.f64 fd121, fd118, fd105;\n\t"
    "mul.f64 fd122, fd120, fd106;\n\t"
    "sub.f64 fd5, fd121, fd122;\n\t"
    "mul.f64 fd123, fd118, fd106;\n\t"
    "fma.rn.f64 fd6, fd120, fd105, fd123;\n\t"
    "mul.f64 fd124, fd109, fd118;\n\t"
    "mul.f64 fd125, fd110, fd120;\n\t"
    "sub.f64 fd126, fd124, fd125;\n\t"
    "mul.f64 fd127, fd109, fd120;\n\t"
    "fma.rn.f64 fd128, fd110, fd118, fd127;\n\t"
    "mul.f64 fd129, fd126, fd99;\n\t"
    "mul.f64 fd130, fd128, fd100;\n\t"
    "sub.f64 fd7, fd129, fd130;\n\t"
    "mul.f64 fd131, fd126, fd100;\n\t"
    "fma.rn.f64 fd8, fd128, fd99, fd131;\n\t"
    "mul.wide.u32 rd7, r13, 16;\n\t"
    "add.s64 rd8, rd5, rd7;\n\t"
    "ld.global.v2.f64 {fd132, fd133}, [rd8];\n\t"
    "mul.f64 fd136, fd132, fd103;\n\t"
    "mul.f64 fd137, fd133, fd104;\n\t"
    "sub.f64 fd9, fd136, fd137;\n\t"
    "mul.f64 fd138, fd132, fd104;\n\t"
    "fma.rn.f64 fd10, fd133, fd103, fd138;\n\t"
    "mul.f64 fd139, fd109, fd132;\n\t"
    "mul.f64 fd140, fd110, fd133;\n\t"
    "sub.f64 fd141, fd139, fd140;\n\t"
    "mul.f64 fd142, fd109, fd133;\n\t"
    "fma.rn.f64 fd143, fd110, fd132, fd142;\n\t"
    "mul.f64 fd144, fd141, fd107;\n\t"
    "mul.f64 fd145, fd143, fd108;\n\t"
    "sub.f64 fd11, fd144, fd145;\n\t"
    "mul.f64 fd146, fd141, fd108;\n\t"
    "fma.rn.f64 fd12, fd143, fd107, fd146;\n\t"
    "mul.lo.s32 r2, r12, 1296;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r14, r1, 6, r2;\n\t"
    "shl.b32 r15, r14, 4;\n\t"
    "{\n\t"
    ".reg .u64 wide1;\n\t"
    ".reg .u32 narrow1;\n\t"
    "mov.u64 wide1, %12;\n\t"
    "cvt.u32.u64 narrow1, wide1;\n\t"
    "cvta.to.shared.u32 r16, narrow1;\n\t"
    "}\n\t"
    "add.s32 r17, r16, r15;\n\t"
    "st.shared.v2.f64 [r17], {fd1, fd2};\n\t"
    "st.shared.v2.f64 [r17+16], {fd3, fd4};\n\t"
    "st.shared.v2.f64 [r17+32], {fd5, fd6};\n\t"
    "st.shared.v2.f64 [r17+48], {fd7, fd8};\n\t"
    "st.shared.v2.f64 [r17+64], {fd9, fd10};\n\t"
    "st.shared.v2.f64 [r17+80], {fd11, fd12};\n\t"
    "barrier.sync 0;\n\t"
    "add.s32 r18, r1, r2;\n\t"
    "shl.b32 r19, r18, 4;\n\t"
    "add.s32 r21, r16, r19;\n\t"
    "ld.shared.v2.f64 {fd147, fd148}, [r21];\n\t"
    "ld.shared.v2.f64 {fd151, fd152}, [r21+3456];\n\t"
    "ld.shared.v2.f64 {fd155, fd156}, [r21+6912];\n\t"
    "ld.shared.v2.f64 {fd159, fd160}, [r21+10368];\n\t"
    "ld.shared.v2.f64 {fd163, fd164}, [r21+13824];\n\t"
    "ld.shared.v2.f64 {fd167, fd168}, [r21+17280];\n\t"
    "add.f64 fd171, fd155, fd163;\n\t"
    "add.f64 fd172, fd147, fd171;\n\t"
    "add.f64 fd173, fd156, fd164;\n\t"
    "add.f64 fd174, fd148, fd173;\n\t"
    "fma.rn.f64 fd175, fd171, 0dBFE0000000000000, fd147;\n\t"
    "sub.f64 fd176, fd156, fd164;\n\t"
    "mul.f64 fd177, fd176, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd178, fd177, fd175;\n\t"
    "sub.f64 fd179, fd175, fd177;\n\t"
    "fma.rn.f64 fd180, fd173, 0dBFE0000000000000, fd148;\n\t"
    "sub.f64 fd181, fd155, fd163;\n\t"
    "mul.f64 fd182, fd181, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd183, fd180, fd182;\n\t"
    "add.f64 fd184, fd182, fd180;\n\t"
    "add.f64 fd185, fd159, fd167;\n\t"
    "add.f64 fd186, fd151, fd185;\n\t"
    "add.f64 fd187, fd160, fd168;\n\t"
    "add.f64 fd188, fd152, fd187;\n\t"
    "fma.rn.f64 fd189, fd185, 0dBFE0000000000000, fd151;\n\t"
    "sub.f64 fd190, fd160, fd168;\n\t"
    "mul.f64 fd191, fd190, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd192, fd191, fd189;\n\t"
    "sub.f64 fd193, fd189, fd191;\n\t"
    "fma.rn.f64 fd194, fd187, 0dBFE0000000000000, fd152;\n\t"
    "sub.f64 fd195, fd159, fd167;\n\t"
    "mul.f64 fd196, fd195, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd197, fd194, fd196;\n\t"
    "add.f64 fd198, fd196, fd194;\n\t"
    "mul.f64 fd199, fd192, 0d3FE0000000000000;\n\t"
    "mul.f64 fd200, fd197, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd201, fd199, fd200;\n\t"
    "mul.f64 fd202, fd197, 0d3FE0000000000000;\n\t"
    "fma.rn.f64 fd203, fd192, 0dBFEBB67AE8584CAA, fd202;\n\t"
    "mul.f64 fd204, fd193, 0dBFE0000000000000;\n\t"
    "mul.f64 fd205, fd198, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd206, fd204, fd205;\n\t"
    "mul.f64 fd207, fd198, 0dBFE0000000000000;\n\t"
    "fma.rn.f64 fd208, fd193, 0dBFEBB67AE8584CAA, fd207;\n\t"
    "add.f64 fd13, fd172, fd186;\n\t"
    "add.f64 fd14, fd174, fd188;\n\t"
    "sub.f64 fd209, fd172, fd186;\n\t"
    "sub.f64 fd210, fd174, fd188;\n\t"
    "add.f64 fd211, fd178, fd201;\n\t"
    "add.f64 fd212, fd183, fd203;\n\t"
    "sub.f64 fd213, fd178, fd201;\n\t"
    "sub.f64 fd214, fd183, fd203;\n\t"
    "add.f64 fd215, fd179, fd206;\n\t"
    "add.f64 fd216, fd184, fd208;\n\t"
    "sub.f64 fd217, fd179, fd206;\n\t"
    "sub.f64 fd218, fd184, fd208;\n\t"
    "mul.wide.u32 rd9, r1, -1431655765;\n\t"
    "shr.u64 rd10, rd9, 34;\n\t"
    "cvt.u32.u64 r3, rd10;\n\t"
    "mul.wide.u32 rd11, r3, 16;\n\t"
    "mov.u64 rd12, %14;\n\t"
    "add.s64 rd13, rd12, rd11;\n\t"
    "ld.global.v2.f64 {fd219, fd220}, [rd13];\n\t"
    "mul.f64 fd223, fd219, fd211;\n\t"
    "mul.f64 fd224, fd220, fd212;\n\t"
    "sub.f64 fd15, fd223, fd224;\n\t"
    "mul.f64 fd225, fd219, fd212;\n\t"
    "fma.rn.f64 fd16, fd220, fd211, fd225;\n\t"
    "mul.f64 fd226, fd219, fd219;\n\t"
    "mul.f64 fd227, fd220, fd220;\n\t"
    "sub.f64 fd228, fd226, fd227;\n\t"
    "mul.f64 fd229, fd220, fd219;\n\t"
    "fma.rn.f64 fd230, fd220, fd219, fd229;\n\t"
    "mul.f64 fd231, fd228, fd215;\n\t"
    "mul.f64 fd232, fd230, fd216;\n\t"
    "sub.f64 fd17, fd231, fd232;\n\t"
    "mul.f64 fd233, fd228, fd216;\n\t"
    "fma.rn.f64 fd18, fd230, fd215, fd233;\n\t"
    "mul.f64 fd234, fd219, fd228;\n\t"
    "mul.f64 fd235, fd220, fd230;\n\t"
    "sub.f64 fd236, fd234, fd235;\n\t"
    "mul.f64 fd237, fd219, fd230;\n\t"
    "fma.rn.f64 fd238, fd220, fd228, fd237;\n\t"
    "mul.f64 fd239, fd236, fd209;\n\t"
    "mul.f64 fd240, fd238, fd210;\n\t"
    "sub.f64 fd19, fd239, fd240;\n\t"
    "mul.f64 fd241, fd236, fd210;\n\t"
    "fma.rn.f64 fd20, fd238, fd209, fd241;\n\t"
    "ld.global.v2.f64 {fd242, fd243}, [rd13+576];\n\t"
    "mul.f64 fd246, fd242, fd213;\n\t"
    "mul.f64 fd247, fd243, fd214;\n\t"
    "sub.f64 fd21, fd246, fd247;\n\t"
    "mul.f64 fd248, fd242, fd214;\n\t"
    "fma.rn.f64 fd22, fd243, fd213, fd248;\n\t"
    "mul.f64 fd249, fd219, fd242;\n\t"
    "mul.f64 fd250, fd220, fd243;\n\t"
    "sub.f64 fd251, fd249, fd250;\n\t"
    "mul.f64 fd252, fd219, fd243;\n\t"
    "fma.rn.f64 fd253, fd220, fd242, fd252;\n\t"
    "mul.f64 fd254, fd251, fd217;\n\t"
    "mul.f64 fd255, fd253, fd218;\n\t"
    "sub.f64 fd23, fd254, fd255;\n\t"
    "mul.f64 fd256, fd251, fd218;\n\t"
    "fma.rn.f64 fd24, fd253, fd217, fd256;\n\t"
    "mul.lo.s32 r22, r3, 6;\n\t"
    "sub.s32 r23, r1, r22;\n\t"
    "add.s32 r4, r23, r2;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r24, r3, 36, r4;\n\t"
    "shl.b32 r25, r24, 4;\n\t"
    "add.s32 r27, r16, r25;\n\t"
    "st.shared.v2.f64 [r27], {fd13, fd14};\n\t"
    "st.shared.v2.f64 [r27+96], {fd15, fd16};\n\t"
    "st.shared.v2.f64 [r27+192], {fd17, fd18};\n\t"
    "st.shared.v2.f64 [r27+288], {fd19, fd20};\n\t"
    "st.shared.v2.f64 [r27+384], {fd21, fd22};\n\t"
    "st.shared.v2.f64 [r27+480], {fd23, fd24};\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r28, r3, 6, r4;\n\t"
    "shl.b32 r29, r28, 4;\n\t"
    "add.s32 r31, r16, r29;\n\t"
    "ld.shared.v2.f64 {fd257, fd258}, [r31];\n\t"
    "ld.shared.v2.f64 {fd261, fd262}, [r31+3456];\n\t"
    "ld.shared.v2.f64 {fd265, fd266}, [r31+6912];\n\t"
    "ld.shared.v2.f64 {fd269, fd270}, [r31+10368];\n\t"
    "ld.shared.v2.f64 {fd273, fd274}, [r31+13824];\n\t"
    "ld.shared.v2.f64 {fd277, fd278}, [r31+17280];\n\t"
    "add.f64 fd281, fd265, fd273;\n\t"
    "add.f64 fd282, fd257, fd281;\n\t"
    "add.f64 fd283, fd266, fd274;\n\t"
    "add.f64 fd284, fd258, fd283;\n\t"
    "fma.rn.f64 fd285, fd281, 0dBFE0000000000000, fd257;\n\t"
    "sub.f64 fd286, fd266, fd274;\n\t"
    "mul.f64 fd287, fd286, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd288, fd287, fd285;\n\t"
    "sub.f64 fd289, fd285, fd287;\n\t"
    "fma.rn.f64 fd290, fd283, 0dBFE0000000000000, fd258;\n\t"
    "sub.f64 fd291, fd265, fd273;\n\t"
    "mul.f64 fd292, fd291, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd293, fd290, fd292;\n\t"
    "add.f64 fd294, fd292, fd290;\n\t"
    "add.f64 fd295, fd269, fd277;\n\t"
    "add.f64 fd296, fd261, fd295;\n\t"
    "add.f64 fd297, fd270, fd278;\n\t"
    "add.f64 fd298, fd262, fd297;\n\t"
    "fma.rn.f64 fd299, fd295, 0dBFE0000000000000, fd261;\n\t"
    "sub.f64 fd300, fd270, fd278;\n\t"
    "mul.f64 fd301, fd300, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd302, fd301, fd299;\n\t"
    "sub.f64 fd303, fd299, fd301;\n\t"
    "fma.rn.f64 fd304, fd297, 0dBFE0000000000000, fd262;\n\t"
    "sub.f64 fd305, fd269, fd277;\n\t"
    "mul.f64 fd306, fd305, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd307, fd304, fd306;\n\t"
    "add.f64 fd308, fd306, fd304;\n\t"
    "mul.f64 fd309, fd302, 0d3FE0000000000000;\n\t"
    "mul.f64 fd310, fd307, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd311, fd309, fd310;\n\t"
    "mul.f64 fd312, fd307, 0d3FE0000000000000;\n\t"
    "fma.rn.f64 fd313, fd302, 0dBFEBB67AE8584CAA, fd312;\n\t"
    "mul.f64 fd314, fd303, 0dBFE0000000000000;\n\t"
    "mul.f64 fd315, fd308, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd316, fd314, fd315;\n\t"
    "mul.f64 fd317, fd308, 0dBFE0000000000000;\n\t"
    "fma.rn.f64 fd318, fd303, 0dBFEBB67AE8584CAA, fd317;\n\t"
    "add.f64 fd25, fd282, fd296;\n\t"
    "add.f64 fd26, fd284, fd298;\n\t"
    "sub.f64 fd319, fd282, fd296;\n\t"
    "sub.f64 fd320, fd284, fd298;\n\t"
    "add.f64 fd321, fd288, fd311;\n\t"
    "add.f64 fd322, fd293, fd313;\n\t"
    "sub.f64 fd323, fd288, fd311;\n\t"
    "sub.f64 fd324, fd293, fd313;\n\t"
    "add.f64 fd325, fd289, fd316;\n\t"
    "add.f64 fd326, fd294, fd318;\n\t"
    "sub.f64 fd327, fd289, fd316;\n\t"
    "sub.f64 fd328, fd294, fd318;\n\t"
    "mul.wide.u32 rd14, r1, 954437177;\n\t"
    "shr.u64 rd15, rd14, 35;\n\t"
    "cvt.u32.u64 r5, rd15;\n\t"
    "mul.wide.u32 rd16, r5, 16;\n\t"
    "mov.u64 rd17, %15;\n\t"
    "add.s64 rd18, rd17, rd16;\n\t"
    "ld.global.v2.f64 {fd329, fd330}, [rd18];\n\t"
    "mul.f64 fd333, fd329, fd321;\n\t"
    "mul.f64 fd334, fd330, fd322;\n\t"
    "sub.f64 fd27, fd333, fd334;\n\t"
    "mul.f64 fd335, fd329, fd322;\n\t"
    "fma.rn.f64 fd28, fd330, fd321, fd335;\n\t"
    "mul.f64 fd336, fd329, fd329;\n\t"
    "mul.f64 fd337, fd330, fd330;\n\t"
    "sub.f64 fd338, fd336, fd337;\n\t"
    "mul.f64 fd339, fd330, fd329;\n\t"
    "fma.rn.f64 fd340, fd330, fd329, fd339;\n\t"
    "mul.f64 fd341, fd338, fd325;\n\t"
    "mul.f64 fd342, fd340, fd326;\n\t"
    "sub.f64 fd29, fd341, fd342;\n\t"
    "mul.f64 fd343, fd338, fd326;\n\t"
    "fma.rn.f64 fd30, fd340, fd325, fd343;\n\t"
    "mul.f64 fd344, fd329, fd338;\n\t"
    "mul.f64 fd345, fd330, fd340;\n\t"
    "sub.f64 fd346, fd344, fd345;\n\t"
    "mul.f64 fd347, fd329, fd340;\n\t"
    "fma.rn.f64 fd348, fd330, fd338, fd347;\n\t"
    "mul.f64 fd349, fd346, fd319;\n\t"
    "mul.f64 fd350, fd348, fd320;\n\t"
    "sub.f64 fd31, fd349, fd350;\n\t"
    "mul.f64 fd351, fd346, fd320;\n\t"
    "fma.rn.f64 fd32, fd348, fd319, fd351;\n\t"
    "ld.global.v2.f64 {fd352, fd353}, [rd18+96];\n\t"
    "mul.f64 fd356, fd352, fd323;\n\t"
    "mul.f64 fd357, fd353, fd324;\n\t"
    "sub.f64 fd33, fd356, fd357;\n\t"
    "mul.f64 fd358, fd352, fd324;\n\t"
    "fma.rn.f64 fd34, fd353, fd323, fd358;\n\t"
    "mul.f64 fd359, fd329, fd352;\n\t"
    "mul.f64 fd360, fd330, fd353;\n\t"
    "sub.f64 fd361, fd359, fd360;\n\t"
    "mul.f64 fd362, fd329, fd353;\n\t"
    "fma.rn.f64 fd363, fd330, fd352, fd362;\n\t"
    "mul.f64 fd364, fd361, fd327;\n\t"
    "mul.f64 fd365, fd363, fd328;\n\t"
    "sub.f64 fd35, fd364, fd365;\n\t"
    "mul.f64 fd366, fd361, fd328;\n\t"
    "fma.rn.f64 fd36, fd363, fd327, fd366;\n\t"
    "mul.lo.s32 r32, r5, 36;\n\t"
    "sub.s32 r33, r1, r32;\n\t"
    "add.s32 r6, r33, r2;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r34, r5, 216, r6;\n\t"
    "shl.b32 r35, r34, 4;\n\t"
    "add.s32 r37, r16, r35;\n\t"
    "st.shared.v2.f64 [r37], {fd25, fd26};\n\t"
    "st.shared.v2.f64 [r37+576], {fd27, fd28};\n\t"
    "st.shared.v2.f64 [r37+1152], {fd29, fd30};\n\t"
    "st.shared.v2.f64 [r37+1728], {fd31, fd32};\n\t"
    "st.shared.v2.f64 [r37+2304], {fd33, fd34};\n\t"
    "st.shared.v2.f64 [r37+2880], {fd35, fd36};\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r38, r5, 36, r6;\n\t"
    "shl.b32 r39, r38, 4;\n\t"
    "add.s32 r41, r16, r39;\n\t"
    "ld.shared.v2.f64 {fd367, fd368}, [r41];\n\t"
    "ld.shared.v2.f64 {fd371, fd372}, [r41+3456];\n\t"
    "ld.shared.v2.f64 {fd375, fd376}, [r41+6912];\n\t"
    "ld.shared.v2.f64 {fd379, fd380}, [r41+10368];\n\t"
    "ld.shared.v2.f64 {fd383, fd384}, [r41+13824];\n\t"
    "ld.shared.v2.f64 {fd387, fd388}, [r41+17280];\n\t"
    "add.f64 fd391, fd375, fd383;\n\t"
    "add.f64 fd392, fd367, fd391;\n\t"
    "add.f64 fd393, fd376, fd384;\n\t"
    "add.f64 fd394, fd368, fd393;\n\t"
    "fma.rn.f64 fd395, fd391, 0dBFE0000000000000, fd367;\n\t"
    "sub.f64 fd396, fd376, fd384;\n\t"
    "mul.f64 fd397, fd396, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd398, fd397, fd395;\n\t"
    "sub.f64 fd399, fd395, fd397;\n\t"
    "fma.rn.f64 fd400, fd393, 0dBFE0000000000000, fd368;\n\t"
    "sub.f64 fd401, fd375, fd383;\n\t"
    "mul.f64 fd402, fd401, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd403, fd400, fd402;\n\t"
    "add.f64 fd404, fd402, fd400;\n\t"
    "add.f64 fd405, fd379, fd387;\n\t"
    "add.f64 fd406, fd371, fd405;\n\t"
    "add.f64 fd407, fd380, fd388;\n\t"
    "add.f64 fd408, fd372, fd407;\n\t"
    "fma.rn.f64 fd409, fd405, 0dBFE0000000000000, fd371;\n\t"
    "sub.f64 fd410, fd380, fd388;\n\t"
    "mul.f64 fd411, fd410, 0d3FEBB67AE8584CAA;\n\t"
    "add.f64 fd412, fd411, fd409;\n\t"
    "sub.f64 fd413, fd409, fd411;\n\t"
    "fma.rn.f64 fd414, fd407, 0dBFE0000000000000, fd372;\n\t"
    "sub.f64 fd415, fd379, fd387;\n\t"
    "mul.f64 fd416, fd415, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd417, fd414, fd416;\n\t"
    "add.f64 fd418, fd416, fd414;\n\t"
    "mul.f64 fd419, fd412, 0d3FE0000000000000;\n\t"
    "mul.f64 fd420, fd417, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd421, fd419, fd420;\n\t"
    "mul.f64 fd422, fd417, 0d3FE0000000000000;\n\t"
    "fma.rn.f64 fd423, fd412, 0dBFEBB67AE8584CAA, fd422;\n\t"
    "mul.f64 fd424, fd413, 0dBFE0000000000000;\n\t"
    "mul.f64 fd425, fd418, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd426, fd424, fd425;\n\t"
    "mul.f64 fd427, fd418, 0dBFE0000000000000;\n\t"
    "fma.rn.f64 fd428, fd413, 0dBFEBB67AE8584CAA, fd427;\n\t"
    "add.f64 %1, fd394, fd408;\n\t"
    "add.f64 %0, fd392, fd406;\n\t"
    "add.f64 %3, fd403, fd423;\n\t"
    "add.f64 %2, fd398, fd421;\n\t"
    "add.f64 %5, fd404, fd428;\n\t"
    "add.f64 %4, fd399, fd426;\n\t"
    "sub.f64 %7, fd394, fd408;\n\t"
    "sub.f64 %6, fd392, fd406;\n\t"
    "sub.f64 %9, fd403, fd423;\n\t"
    "sub.f64 %8, fd398, fd421;\n\t"
    "sub.f64 %11, fd404, fd428;\n\t"
    "sub.f64 %10, fd399, fd426;\n\t"
    "}"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y): "l"(smem), "l"(lut_dp_6_1296), "l"(lut_dp_6_216), "l"(lut_dp_6_36), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y));
};


#endif

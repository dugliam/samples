#ifndef CUFFTDX_FFT_1296_FP32_INV_PTX_HPP
#define CUFFTDX_FFT_1296_FP32_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<414, float, 1>(cufftdx::detail::complex<float> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<444>;\n\t"
    ".reg .b32 r<41>;\n\t"
    ".reg .b64 rd<17>;\n\t"
    "mov.u32 r7, %tid.y;\n\t"
    "mov.u32 r8, %tid.x;\n\t"
    "add.f32 f61, %21, %26;\n\t"
    "add.f32 f62, %16, f61;\n\t"
    "add.f32 f63, %23, %28;\n\t"
    "add.f32 f64, %17, f63;\n\t"
    "fma.rn.f32 f65, f61, 0fBF000000, %16;\n\t"
    "sub.f32 f66, %23, %28;\n\t"
    "mul.f32 f67, f66, 0fBF5DB3D7;\n\t"
    "add.f32 f68, f67, f65;\n\t"
    "sub.f32 f69, f65, f67;\n\t"
    "fma.rn.f32 f70, f63, 0fBF000000, %17;\n\t"
    "sub.f32 f71, %21, %26;\n\t"
    "mul.f32 f72, f71, 0fBF5DB3D7;\n\t"
    "sub.f32 f73, f70, f72;\n\t"
    "add.f32 f74, f72, f70;\n\t"
    "add.f32 f75, %24, %29;\n\t"
    "add.f32 f76, %18, f75;\n\t"
    "add.f32 f77, %25, %30;\n\t"
    "add.f32 f78, %20, f77;\n\t"
    "fma.rn.f32 f79, f75, 0fBF000000, %18;\n\t"
    "sub.f32 f80, %25, %30;\n\t"
    "mul.f32 f81, f80, 0fBF5DB3D7;\n\t"
    "add.f32 f82, f81, f79;\n\t"
    "sub.f32 f83, f79, f81;\n\t"
    "fma.rn.f32 f84, f77, 0fBF000000, %20;\n\t"
    "sub.f32 f85, %24, %29;\n\t"
    "mul.f32 f86, f85, 0fBF5DB3D7;\n\t"
    "sub.f32 f87, f84, f86;\n\t"
    "add.f32 f88, f86, f84;\n\t"
    "mul.f32 f89, f82, 0f3F000000;\n\t"
    "mul.f32 f90, f87, 0f3F5DB3D7;\n\t"
    "sub.f32 f91, f89, f90;\n\t"
    "mul.f32 f92, f87, 0f3F000000;\n\t"
    "fma.rn.f32 f93, f82, 0f3F5DB3D7, f92;\n\t"
    "mul.f32 f94, f83, 0fBF000000;\n\t"
    "mul.f32 f95, f88, 0f3F5DB3D7;\n\t"
    "sub.f32 f96, f94, f95;\n\t"
    "mul.f32 f97, f88, 0fBF000000;\n\t"
    "fma.rn.f32 f98, f83, 0f3F5DB3D7, f97;\n\t"
    "add.f32 f1, f62, f76;\n\t"
    "add.f32 f2, f64, f78;\n\t"
    "sub.f32 f99, f62, f76;\n\t"
    "sub.f32 f100, f64, f78;\n\t"
    "add.f32 f101, f68, f91;\n\t"
    "add.f32 f102, f73, f93;\n\t"
    "sub.f32 f103, f68, f91;\n\t"
    "sub.f32 f104, f73, f93;\n\t"
    "add.f32 f105, f69, f96;\n\t"
    "add.f32 f106, f74, f98;\n\t"
    "sub.f32 f107, f69, f96;\n\t"
    "sub.f32 f108, f74, f98;\n\t"
    "shr.u32 r9, r8, 3;\n\t"
    "mul.wide.u32 rd2, r9, 159072863;\n\t"
    "shr.u64 rd3, rd2, 32;\n\t"
    "cvt.u32.u64 r10, rd3;\n\t"
    "mul.lo.s32 r11, r10, 216;\n\t"
    "sub.s32 r1, r8, r11;\n\t"
    "add.s32 r12, r10, r7;\n\t"
    "mul.wide.u32 rd4, r1, 8;\n\t"
    "mov.u64 rd5, %13;\n\t"
    "add.s64 rd6, rd5, rd4;\n\t"
    "ld.global.v2.f32 {f109, f110}, [rd6];\n\t"
    "mul.f32 f113, f102, f110;\n\t"
    "fma.rn.f32 f3, f109, f101, f113;\n\t"
    "mul.f32 f114, f101, f110;\n\t"
    "mul.f32 f115, f109, f102;\n\t"
    "sub.f32 f4, f115, f114;\n\t"
    "mul.f32 f116, f109, f109;\n\t"
    "mul.f32 f117, f110, f110;\n\t"
    "sub.f32 f118, f116, f117;\n\t"
    "mul.f32 f119, f110, f109;\n\t"
    "fma.rn.f32 f120, f110, f109, f119;\n\t"
    "mul.f32 f121, f106, f120;\n\t"
    "fma.rn.f32 f5, f118, f105, f121;\n\t"
    "mul.f32 f122, f105, f120;\n\t"
    "mul.f32 f123, f118, f106;\n\t"
    "sub.f32 f6, f123, f122;\n\t"
    "mul.f32 f124, f109, f118;\n\t"
    "mul.f32 f125, f110, f120;\n\t"
    "sub.f32 f126, f124, f125;\n\t"
    "mul.f32 f127, f109, f120;\n\t"
    "fma.rn.f32 f128, f110, f118, f127;\n\t"
    "mul.f32 f129, f100, f128;\n\t"
    "fma.rn.f32 f7, f126, f99, f129;\n\t"
    "mul.f32 f130, f99, f128;\n\t"
    "mul.f32 f131, f126, f100;\n\t"
    "sub.f32 f8, f131, f130;\n\t"
    "mul.f32 f132, f109, f126;\n\t"
    "mul.f32 f133, f110, f128;\n\t"
    "sub.f32 f134, f132, f133;\n\t"
    "mul.f32 f135, f109, f128;\n\t"
    "fma.rn.f32 f136, f110, f126, f135;\n\t"
    "mul.f32 f137, f104, f136;\n\t"
    "fma.rn.f32 f9, f134, f103, f137;\n\t"
    "mul.f32 f138, f103, f136;\n\t"
    "mul.f32 f139, f134, f104;\n\t"
    "sub.f32 f10, f139, f138;\n\t"
    "mul.f32 f140, f109, f134;\n\t"
    "mul.f32 f141, f110, f136;\n\t"
    "sub.f32 f142, f140, f141;\n\t"
    "mul.f32 f143, f109, f136;\n\t"
    "fma.rn.f32 f144, f110, f134, f143;\n\t"
    "mul.f32 f145, f108, f144;\n\t"
    "fma.rn.f32 f11, f142, f107, f145;\n\t"
    "mul.f32 f146, f107, f144;\n\t"
    "mul.f32 f147, f142, f108;\n\t"
    "sub.f32 f12, f147, f146;\n\t"
    "mul.lo.s32 r2, r12, 1296;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r13, r1, 6, r2;\n\t"
    "shl.b32 r14, r13, 3;\n\t"
    "{\n\t"
    ".reg .u64 wide1;\n\t"
    ".reg .u32 narrow1;\n\t"
    "mov.u64 wide1, %12;\n\t"
    "cvt.u32.u64 narrow1, wide1;\n\t"
    "cvta.to.shared.u32 r15, narrow1;\n\t"
    "}\n\t"
    "add.s32 r16, r15, r14;\n\t"
    "st.shared.v2.f32 [r16], {f1, f2};\n\t"
    "st.shared.v2.f32 [r16+8], {f3, f4};\n\t"
    "st.shared.v2.f32 [r16+16], {f5, f6};\n\t"
    "st.shared.v2.f32 [r16+24], {f7, f8};\n\t"
    "st.shared.v2.f32 [r16+32], {f9, f10};\n\t"
    "st.shared.v2.f32 [r16+40], {f11, f12};\n\t"
    "barrier.sync 0;\n\t"
    "add.s32 r17, r1, r2;\n\t"
    "shl.b32 r18, r17, 3;\n\t"
    "add.s32 r20, r15, r18;\n\t"
    "ld.shared.v2.f32 {f148, f149}, [r20];\n\t"
    "ld.shared.v2.f32 {f152, f153}, [r20+1728];\n\t"
    "ld.shared.v2.f32 {f156, f157}, [r20+3456];\n\t"
    "ld.shared.v2.f32 {f160, f161}, [r20+5184];\n\t"
    "ld.shared.v2.f32 {f164, f165}, [r20+6912];\n\t"
    "ld.shared.v2.f32 {f168, f169}, [r20+8640];\n\t"
    "add.f32 f172, f156, f164;\n\t"
    "add.f32 f173, f148, f172;\n\t"
    "add.f32 f174, f157, f165;\n\t"
    "add.f32 f175, f149, f174;\n\t"
    "fma.rn.f32 f176, f172, 0fBF000000, f148;\n\t"
    "sub.f32 f177, f157, f165;\n\t"
    "mul.f32 f178, f177, 0fBF5DB3D7;\n\t"
    "add.f32 f179, f178, f176;\n\t"
    "sub.f32 f180, f176, f178;\n\t"
    "fma.rn.f32 f181, f174, 0fBF000000, f149;\n\t"
    "sub.f32 f182, f156, f164;\n\t"
    "mul.f32 f183, f182, 0fBF5DB3D7;\n\t"
    "sub.f32 f184, f181, f183;\n\t"
    "add.f32 f185, f183, f181;\n\t"
    "add.f32 f186, f160, f168;\n\t"
    "add.f32 f187, f152, f186;\n\t"
    "add.f32 f188, f161, f169;\n\t"
    "add.f32 f189, f153, f188;\n\t"
    "fma.rn.f32 f190, f186, 0fBF000000, f152;\n\t"
    "sub.f32 f191, f161, f169;\n\t"
    "mul.f32 f192, f191, 0fBF5DB3D7;\n\t"
    "add.f32 f193, f192, f190;\n\t"
    "sub.f32 f194, f190, f192;\n\t"
    "fma.rn.f32 f195, f188, 0fBF000000, f153;\n\t"
    "sub.f32 f196, f160, f168;\n\t"
    "mul.f32 f197, f196, 0fBF5DB3D7;\n\t"
    "sub.f32 f198, f195, f197;\n\t"
    "add.f32 f199, f197, f195;\n\t"
    "mul.f32 f200, f193, 0f3F000000;\n\t"
    "mul.f32 f201, f198, 0f3F5DB3D7;\n\t"
    "sub.f32 f202, f200, f201;\n\t"
    "mul.f32 f203, f198, 0f3F000000;\n\t"
    "fma.rn.f32 f204, f193, 0f3F5DB3D7, f203;\n\t"
    "mul.f32 f205, f194, 0fBF000000;\n\t"
    "mul.f32 f206, f199, 0f3F5DB3D7;\n\t"
    "sub.f32 f207, f205, f206;\n\t"
    "mul.f32 f208, f199, 0fBF000000;\n\t"
    "fma.rn.f32 f209, f194, 0f3F5DB3D7, f208;\n\t"
    "add.f32 f13, f173, f187;\n\t"
    "add.f32 f14, f175, f189;\n\t"
    "sub.f32 f210, f173, f187;\n\t"
    "sub.f32 f211, f175, f189;\n\t"
    "add.f32 f212, f179, f202;\n\t"
    "add.f32 f213, f184, f204;\n\t"
    "sub.f32 f214, f179, f202;\n\t"
    "sub.f32 f215, f184, f204;\n\t"
    "add.f32 f216, f180, f207;\n\t"
    "add.f32 f217, f185, f209;\n\t"
    "sub.f32 f218, f180, f207;\n\t"
    "sub.f32 f219, f185, f209;\n\t"
    "mul.wide.u32 rd7, r1, -1431655765;\n\t"
    "shr.u64 rd8, rd7, 34;\n\t"
    "cvt.u32.u64 r3, rd8;\n\t"
    "mul.wide.u32 rd9, r3, 8;\n\t"
    "mov.u64 rd10, %14;\n\t"
    "add.s64 rd11, rd10, rd9;\n\t"
    "ld.global.v2.f32 {f220, f221}, [rd11];\n\t"
    "mul.f32 f224, f213, f221;\n\t"
    "fma.rn.f32 f15, f220, f212, f224;\n\t"
    "mul.f32 f225, f212, f221;\n\t"
    "mul.f32 f226, f220, f213;\n\t"
    "sub.f32 f16, f226, f225;\n\t"
    "mul.f32 f227, f220, f220;\n\t"
    "mul.f32 f228, f221, f221;\n\t"
    "sub.f32 f229, f227, f228;\n\t"
    "mul.f32 f230, f221, f220;\n\t"
    "fma.rn.f32 f231, f221, f220, f230;\n\t"
    "mul.f32 f232, f217, f231;\n\t"
    "fma.rn.f32 f17, f229, f216, f232;\n\t"
    "mul.f32 f233, f216, f231;\n\t"
    "mul.f32 f234, f229, f217;\n\t"
    "sub.f32 f18, f234, f233;\n\t"
    "mul.f32 f235, f220, f229;\n\t"
    "mul.f32 f236, f221, f231;\n\t"
    "sub.f32 f237, f235, f236;\n\t"
    "mul.f32 f238, f220, f231;\n\t"
    "fma.rn.f32 f239, f221, f229, f238;\n\t"
    "mul.f32 f240, f211, f239;\n\t"
    "fma.rn.f32 f19, f237, f210, f240;\n\t"
    "mul.f32 f241, f210, f239;\n\t"
    "mul.f32 f242, f237, f211;\n\t"
    "sub.f32 f20, f242, f241;\n\t"
    "mul.f32 f243, f220, f237;\n\t"
    "mul.f32 f244, f221, f239;\n\t"
    "sub.f32 f245, f243, f244;\n\t"
    "mul.f32 f246, f220, f239;\n\t"
    "fma.rn.f32 f247, f221, f237, f246;\n\t"
    "mul.f32 f248, f215, f247;\n\t"
    "fma.rn.f32 f21, f245, f214, f248;\n\t"
    "mul.f32 f249, f214, f247;\n\t"
    "mul.f32 f250, f245, f215;\n\t"
    "sub.f32 f22, f250, f249;\n\t"
    "mul.f32 f251, f220, f245;\n\t"
    "mul.f32 f252, f221, f247;\n\t"
    "sub.f32 f253, f251, f252;\n\t"
    "mul.f32 f254, f220, f247;\n\t"
    "fma.rn.f32 f255, f221, f245, f254;\n\t"
    "mul.f32 f256, f219, f255;\n\t"
    "fma.rn.f32 f23, f253, f218, f256;\n\t"
    "mul.f32 f257, f218, f255;\n\t"
    "mul.f32 f258, f253, f219;\n\t"
    "sub.f32 f24, f258, f257;\n\t"
    "mul.lo.s32 r21, r3, 6;\n\t"
    "sub.s32 r22, r1, r21;\n\t"
    "add.s32 r4, r22, r2;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r23, r3, 36, r4;\n\t"
    "shl.b32 r24, r23, 3;\n\t"
    "add.s32 r26, r15, r24;\n\t"
    "st.shared.v2.f32 [r26], {f13, f14};\n\t"
    "st.shared.v2.f32 [r26+48], {f15, f16};\n\t"
    "st.shared.v2.f32 [r26+96], {f17, f18};\n\t"
    "st.shared.v2.f32 [r26+144], {f19, f20};\n\t"
    "st.shared.v2.f32 [r26+192], {f21, f22};\n\t"
    "st.shared.v2.f32 [r26+240], {f23, f24};\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r27, r3, 6, r4;\n\t"
    "shl.b32 r28, r27, 3;\n\t"
    "add.s32 r30, r15, r28;\n\t"
    "ld.shared.v2.f32 {f259, f260}, [r30];\n\t"
    "ld.shared.v2.f32 {f263, f264}, [r30+1728];\n\t"
    "ld.shared.v2.f32 {f267, f268}, [r30+3456];\n\t"
    "ld.shared.v2.f32 {f271, f272}, [r30+5184];\n\t"
    "ld.shared.v2.f32 {f275, f276}, [r30+6912];\n\t"
    "ld.shared.v2.f32 {f279, f280}, [r30+8640];\n\t"
    "add.f32 f283, f267, f275;\n\t"
    "add.f32 f284, f259, f283;\n\t"
    "add.f32 f285, f268, f276;\n\t"
    "add.f32 f286, f260, f285;\n\t"
    "fma.rn.f32 f287, f283, 0fBF000000, f259;\n\t"
    "sub.f32 f288, f268, f276;\n\t"
    "mul.f32 f289, f288, 0fBF5DB3D7;\n\t"
    "add.f32 f290, f289, f287;\n\t"
    "sub.f32 f291, f287, f289;\n\t"
    "fma.rn.f32 f292, f285, 0fBF000000, f260;\n\t"
    "sub.f32 f293, f267, f275;\n\t"
    "mul.f32 f294, f293, 0fBF5DB3D7;\n\t"
    "sub.f32 f295, f292, f294;\n\t"
    "add.f32 f296, f294, f292;\n\t"
    "add.f32 f297, f271, f279;\n\t"
    "add.f32 f298, f263, f297;\n\t"
    "add.f32 f299, f272, f280;\n\t"
    "add.f32 f300, f264, f299;\n\t"
    "fma.rn.f32 f301, f297, 0fBF000000, f263;\n\t"
    "sub.f32 f302, f272, f280;\n\t"
    "mul.f32 f303, f302, 0fBF5DB3D7;\n\t"
    "add.f32 f304, f303, f301;\n\t"
    "sub.f32 f305, f301, f303;\n\t"
    "fma.rn.f32 f306, f299, 0fBF000000, f264;\n\t"
    "sub.f32 f307, f271, f279;\n\t"
    "mul.f32 f308, f307, 0fBF5DB3D7;\n\t"
    "sub.f32 f309, f306, f308;\n\t"
    "add.f32 f310, f308, f306;\n\t"
    "mul.f32 f311, f304, 0f3F000000;\n\t"
    "mul.f32 f312, f309, 0f3F5DB3D7;\n\t"
    "sub.f32 f313, f311, f312;\n\t"
    "mul.f32 f314, f309, 0f3F000000;\n\t"
    "fma.rn.f32 f315, f304, 0f3F5DB3D7, f314;\n\t"
    "mul.f32 f316, f305, 0fBF000000;\n\t"
    "mul.f32 f317, f310, 0f3F5DB3D7;\n\t"
    "sub.f32 f318, f316, f317;\n\t"
    "mul.f32 f319, f310, 0fBF000000;\n\t"
    "fma.rn.f32 f320, f305, 0f3F5DB3D7, f319;\n\t"
    "add.f32 f25, f284, f298;\n\t"
    "add.f32 f26, f286, f300;\n\t"
    "sub.f32 f321, f284, f298;\n\t"
    "sub.f32 f322, f286, f300;\n\t"
    "add.f32 f323, f290, f313;\n\t"
    "add.f32 f324, f295, f315;\n\t"
    "sub.f32 f325, f290, f313;\n\t"
    "sub.f32 f326, f295, f315;\n\t"
    "add.f32 f327, f291, f318;\n\t"
    "add.f32 f328, f296, f320;\n\t"
    "sub.f32 f329, f291, f318;\n\t"
    "sub.f32 f330, f296, f320;\n\t"
    "mul.wide.u32 rd12, r1, 954437177;\n\t"
    "shr.u64 rd13, rd12, 35;\n\t"
    "cvt.u32.u64 r5, rd13;\n\t"
    "mul.wide.u32 rd14, r5, 8;\n\t"
    "mov.u64 rd15, %15;\n\t"
    "add.s64 rd16, rd15, rd14;\n\t"
    "ld.global.v2.f32 {f331, f332}, [rd16];\n\t"
    "mul.f32 f335, f324, f332;\n\t"
    "fma.rn.f32 f27, f331, f323, f335;\n\t"
    "mul.f32 f336, f323, f332;\n\t"
    "mul.f32 f337, f331, f324;\n\t"
    "sub.f32 f28, f337, f336;\n\t"
    "mul.f32 f338, f331, f331;\n\t"
    "mul.f32 f339, f332, f332;\n\t"
    "sub.f32 f340, f338, f339;\n\t"
    "mul.f32 f341, f332, f331;\n\t"
    "fma.rn.f32 f342, f332, f331, f341;\n\t"
    "mul.f32 f343, f328, f342;\n\t"
    "fma.rn.f32 f29, f340, f327, f343;\n\t"
    "mul.f32 f344, f327, f342;\n\t"
    "mul.f32 f345, f340, f328;\n\t"
    "sub.f32 f30, f345, f344;\n\t"
    "mul.f32 f346, f331, f340;\n\t"
    "mul.f32 f347, f332, f342;\n\t"
    "sub.f32 f348, f346, f347;\n\t"
    "mul.f32 f349, f331, f342;\n\t"
    "fma.rn.f32 f350, f332, f340, f349;\n\t"
    "mul.f32 f351, f322, f350;\n\t"
    "fma.rn.f32 f31, f348, f321, f351;\n\t"
    "mul.f32 f352, f321, f350;\n\t"
    "mul.f32 f353, f348, f322;\n\t"
    "sub.f32 f32, f353, f352;\n\t"
    "mul.f32 f354, f331, f348;\n\t"
    "mul.f32 f355, f332, f350;\n\t"
    "sub.f32 f356, f354, f355;\n\t"
    "mul.f32 f357, f331, f350;\n\t"
    "fma.rn.f32 f358, f332, f348, f357;\n\t"
    "mul.f32 f359, f326, f358;\n\t"
    "fma.rn.f32 f33, f356, f325, f359;\n\t"
    "mul.f32 f360, f325, f358;\n\t"
    "mul.f32 f361, f356, f326;\n\t"
    "sub.f32 f34, f361, f360;\n\t"
    "mul.f32 f362, f331, f356;\n\t"
    "mul.f32 f363, f332, f358;\n\t"
    "sub.f32 f364, f362, f363;\n\t"
    "mul.f32 f365, f331, f358;\n\t"
    "fma.rn.f32 f366, f332, f356, f365;\n\t"
    "mul.f32 f367, f330, f366;\n\t"
    "fma.rn.f32 f35, f364, f329, f367;\n\t"
    "mul.f32 f368, f329, f366;\n\t"
    "mul.f32 f369, f364, f330;\n\t"
    "sub.f32 f36, f369, f368;\n\t"
    "mul.lo.s32 r31, r5, 36;\n\t"
    "sub.s32 r32, r1, r31;\n\t"
    "add.s32 r6, r32, r2;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r33, r5, 216, r6;\n\t"
    "shl.b32 r34, r33, 3;\n\t"
    "add.s32 r36, r15, r34;\n\t"
    "st.shared.v2.f32 [r36], {f25, f26};\n\t"
    "st.shared.v2.f32 [r36+288], {f27, f28};\n\t"
    "st.shared.v2.f32 [r36+576], {f29, f30};\n\t"
    "st.shared.v2.f32 [r36+864], {f31, f32};\n\t"
    "st.shared.v2.f32 [r36+1152], {f33, f34};\n\t"
    "st.shared.v2.f32 [r36+1440], {f35, f36};\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r37, r5, 36, r6;\n\t"
    "shl.b32 r38, r37, 3;\n\t"
    "add.s32 r40, r15, r38;\n\t"
    "ld.shared.v2.f32 {f370, f371}, [r40];\n\t"
    "ld.shared.v2.f32 {f374, f375}, [r40+1728];\n\t"
    "ld.shared.v2.f32 {f378, f379}, [r40+3456];\n\t"
    "ld.shared.v2.f32 {f382, f383}, [r40+5184];\n\t"
    "ld.shared.v2.f32 {f386, f387}, [r40+6912];\n\t"
    "ld.shared.v2.f32 {f390, f391}, [r40+8640];\n\t"
    "add.f32 f394, f378, f386;\n\t"
    "add.f32 f395, f370, f394;\n\t"
    "add.f32 f396, f379, f387;\n\t"
    "add.f32 f397, f371, f396;\n\t"
    "fma.rn.f32 f398, f394, 0fBF000000, f370;\n\t"
    "sub.f32 f399, f379, f387;\n\t"
    "mul.f32 f400, f399, 0fBF5DB3D7;\n\t"
    "add.f32 f401, f400, f398;\n\t"
    "sub.f32 f402, f398, f400;\n\t"
    "fma.rn.f32 f403, f396, 0fBF000000, f371;\n\t"
    "sub.f32 f404, f378, f386;\n\t"
    "mul.f32 f405, f404, 0fBF5DB3D7;\n\t"
    "sub.f32 f406, f403, f405;\n\t"
    "add.f32 f407, f405, f403;\n\t"
    "add.f32 f408, f382, f390;\n\t"
    "add.f32 f409, f374, f408;\n\t"
    "add.f32 f410, f383, f391;\n\t"
    "add.f32 f411, f375, f410;\n\t"
    "fma.rn.f32 f412, f408, 0fBF000000, f374;\n\t"
    "sub.f32 f413, f383, f391;\n\t"
    "mul.f32 f414, f413, 0fBF5DB3D7;\n\t"
    "add.f32 f415, f414, f412;\n\t"
    "sub.f32 f416, f412, f414;\n\t"
    "fma.rn.f32 f417, f410, 0fBF000000, f375;\n\t"
    "sub.f32 f418, f382, f390;\n\t"
    "mul.f32 f419, f418, 0fBF5DB3D7;\n\t"
    "sub.f32 f420, f417, f419;\n\t"
    "add.f32 f421, f419, f417;\n\t"
    "mul.f32 f422, f415, 0f3F000000;\n\t"
    "mul.f32 f423, f420, 0f3F5DB3D7;\n\t"
    "sub.f32 f424, f422, f423;\n\t"
    "mul.f32 f425, f420, 0f3F000000;\n\t"
    "fma.rn.f32 f426, f415, 0f3F5DB3D7, f425;\n\t"
    "mul.f32 f427, f416, 0fBF000000;\n\t"
    "mul.f32 f428, f421, 0f3F5DB3D7;\n\t"
    "sub.f32 f429, f427, f428;\n\t"
    "mul.f32 f430, f421, 0fBF000000;\n\t"
    "fma.rn.f32 f431, f416, 0f3F5DB3D7, f430;\n\t"
    "add.f32 %1, f397, f411;\n\t"
    "add.f32 %0, f395, f409;\n\t"
    "add.f32 %3, f406, f426;\n\t"
    "add.f32 %2, f401, f424;\n\t"
    "add.f32 %5, f407, f431;\n\t"
    "add.f32 %4, f402, f429;\n\t"
    "sub.f32 %7, f397, f411;\n\t"
    "sub.f32 %6, f395, f409;\n\t"
    "sub.f32 %9, f406, f426;\n\t"
    "sub.f32 %8, f401, f424;\n\t"
    "sub.f32 %11, f407, f431;\n\t"
    "sub.f32 %10, f402, f429;\n\t"
    "}"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y): "l"(smem), "l"(lut_sp_6_1296), "l"(lut_sp_6_216), "l"(lut_sp_6_36), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<415, float, 1>(cufftdx::detail::complex<float> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<408>;\n\t"
    ".reg .b32 r<41>;\n\t"
    ".reg .b64 rd<17>;\n\t"
    "mov.u32 r13, %tid.y;\n\t"
    "mov.u32 r14, %tid.x;\n\t"
    "add.f32 f79, %21, %26;\n\t"
    "add.f32 f80, %16, f79;\n\t"
    "add.f32 f81, %23, %28;\n\t"
    "add.f32 f82, %17, f81;\n\t"
    "fma.rn.f32 f83, f79, 0fBF000000, %16;\n\t"
    "sub.f32 f84, %23, %28;\n\t"
    "mul.f32 f85, f84, 0fBF5DB3D7;\n\t"
    "add.f32 f86, f85, f83;\n\t"
    "sub.f32 f87, f83, f85;\n\t"
    "fma.rn.f32 f88, f81, 0fBF000000, %17;\n\t"
    "sub.f32 f89, %21, %26;\n\t"
    "mul.f32 f90, f89, 0fBF5DB3D7;\n\t"
    "sub.f32 f91, f88, f90;\n\t"
    "add.f32 f92, f90, f88;\n\t"
    "add.f32 f93, %24, %29;\n\t"
    "add.f32 f94, %18, f93;\n\t"
    "add.f32 f95, %25, %30;\n\t"
    "add.f32 f96, %20, f95;\n\t"
    "fma.rn.f32 f97, f93, 0fBF000000, %18;\n\t"
    "sub.f32 f98, %25, %30;\n\t"
    "mul.f32 f99, f98, 0fBF5DB3D7;\n\t"
    "add.f32 f100, f99, f97;\n\t"
    "sub.f32 f101, f97, f99;\n\t"
    "fma.rn.f32 f102, f95, 0fBF000000, %20;\n\t"
    "sub.f32 f103, %24, %29;\n\t"
    "mul.f32 f104, f103, 0fBF5DB3D7;\n\t"
    "sub.f32 f105, f102, f104;\n\t"
    "add.f32 f106, f104, f102;\n\t"
    "mul.f32 f107, f100, 0f3F000000;\n\t"
    "mul.f32 f108, f105, 0f3F5DB3D7;\n\t"
    "sub.f32 f109, f107, f108;\n\t"
    "mul.f32 f110, f105, 0f3F000000;\n\t"
    "fma.rn.f32 f111, f100, 0f3F5DB3D7, f110;\n\t"
    "mul.f32 f112, f101, 0fBF000000;\n\t"
    "mul.f32 f113, f106, 0f3F5DB3D7;\n\t"
    "sub.f32 f114, f112, f113;\n\t"
    "mul.f32 f115, f106, 0fBF000000;\n\t"
    "fma.rn.f32 f116, f101, 0f3F5DB3D7, f115;\n\t"
    "add.f32 f1, f80, f94;\n\t"
    "add.f32 f2, f82, f96;\n\t"
    "sub.f32 f117, f80, f94;\n\t"
    "sub.f32 f118, f82, f96;\n\t"
    "add.f32 f119, f86, f109;\n\t"
    "add.f32 f120, f91, f111;\n\t"
    "sub.f32 f121, f86, f109;\n\t"
    "sub.f32 f122, f91, f111;\n\t"
    "add.f32 f123, f87, f114;\n\t"
    "add.f32 f124, f92, f116;\n\t"
    "sub.f32 f125, f87, f114;\n\t"
    "sub.f32 f126, f92, f116;\n\t"
    "shr.u32 r15, r14, 3;\n\t"
    "mul.wide.u32 rd2, r15, 159072863;\n\t"
    "shr.u64 rd3, rd2, 32;\n\t"
    "cvt.u32.u64 r16, rd3;\n\t"
    "mul.lo.s32 r17, r16, 216;\n\t"
    "sub.s32 r1, r14, r17;\n\t"
    "add.s32 r18, r16, r13;\n\t"
    "mul.wide.u32 rd4, r1, 8;\n\t"
    "mov.u64 rd5, %13;\n\t"
    "add.s64 rd6, rd5, rd4;\n\t"
    "ld.global.v2.f32 {f127, f128}, [rd6];\n\t"
    "mul.f32 f131, f120, f128;\n\t"
    "fma.rn.f32 f3, f127, f119, f131;\n\t"
    "mul.f32 f132, f119, f128;\n\t"
    "mul.f32 f133, f127, f120;\n\t"
    "sub.f32 f4, f133, f132;\n\t"
    "mul.f32 f134, f127, f127;\n\t"
    "mul.f32 f135, f128, f128;\n\t"
    "sub.f32 f136, f134, f135;\n\t"
    "mul.f32 f137, f128, f127;\n\t"
    "fma.rn.f32 f138, f128, f127, f137;\n\t"
    "mul.f32 f139, f124, f138;\n\t"
    "fma.rn.f32 f5, f136, f123, f139;\n\t"
    "mul.f32 f140, f123, f138;\n\t"
    "mul.f32 f141, f136, f124;\n\t"
    "sub.f32 f6, f141, f140;\n\t"
    "mul.f32 f142, f127, f136;\n\t"
    "mul.f32 f143, f128, f138;\n\t"
    "sub.f32 f144, f142, f143;\n\t"
    "mul.f32 f145, f127, f138;\n\t"
    "fma.rn.f32 f146, f128, f136, f145;\n\t"
    "mul.f32 f147, f118, f146;\n\t"
    "fma.rn.f32 f7, f144, f117, f147;\n\t"
    "mul.f32 f148, f117, f146;\n\t"
    "mul.f32 f149, f144, f118;\n\t"
    "sub.f32 f8, f149, f148;\n\t"
    "mul.f32 f150, f127, f144;\n\t"
    "mul.f32 f151, f128, f146;\n\t"
    "sub.f32 f152, f150, f151;\n\t"
    "mul.f32 f153, f127, f146;\n\t"
    "fma.rn.f32 f154, f128, f144, f153;\n\t"
    "mul.f32 f155, f122, f154;\n\t"
    "fma.rn.f32 f9, f152, f121, f155;\n\t"
    "mul.f32 f156, f121, f154;\n\t"
    "mul.f32 f157, f152, f122;\n\t"
    "sub.f32 f10, f157, f156;\n\t"
    "mul.f32 f158, f127, f152;\n\t"
    "mul.f32 f159, f128, f154;\n\t"
    "sub.f32 f160, f158, f159;\n\t"
    "mul.f32 f161, f127, f154;\n\t"
    "fma.rn.f32 f162, f128, f152, f161;\n\t"
    "mul.f32 f163, f126, f162;\n\t"
    "fma.rn.f32 f11, f160, f125, f163;\n\t"
    "mul.f32 f164, f125, f162;\n\t"
    "mul.f32 f165, f160, f126;\n\t"
    "sub.f32 f12, f165, f164;\n\t"
    "mul.lo.s32 r2, r18, 1296;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r19, r1, 6, r2;\n\t"
    "shl.b32 r20, r19, 2;\n\t"
    "{\n\t"
    ".reg .u64 wide1;\n\t"
    ".reg .u32 narrow1;\n\t"
    "mov.u64 wide1, %12;\n\t"
    "cvt.u32.u64 narrow1, wide1;\n\t"
    "cvta.to.shared.u32 r21, narrow1;\n\t"
    "}\n\t"
    "add.s32 r3, r21, r20;\n\t"
    "st.shared.f32 [r3], f1;\n\t"
    "st.shared.f32 [r3+4], f3;\n\t"
    "st.shared.f32 [r3+8], f5;\n\t"
    "st.shared.f32 [r3+12], f7;\n\t"
    "st.shared.f32 [r3+16], f9;\n\t"
    "st.shared.f32 [r3+20], f11;\n\t"
    "barrier.sync 0;\n\t"
    "add.s32 r22, r1, r2;\n\t"
    "shl.b32 r23, r22, 2;\n\t"
    "add.s32 r4, r21, r23;\n\t"
    "ld.shared.f32 f13, [r4];\n\t"
    "ld.shared.f32 f14, [r4+864];\n\t"
    "ld.shared.f32 f15, [r4+1728];\n\t"
    "ld.shared.f32 f16, [r4+2592];\n\t"
    "ld.shared.f32 f17, [r4+3456];\n\t"
    "ld.shared.f32 f18, [r4+4320];\n\t"
    "barrier.sync 0;\n\t"
    "st.shared.f32 [r3], f2;\n\t"
    "st.shared.f32 [r3+4], f4;\n\t"
    "st.shared.f32 [r3+8], f6;\n\t"
    "st.shared.f32 [r3+12], f8;\n\t"
    "st.shared.f32 [r3+16], f10;\n\t"
    "st.shared.f32 [r3+20], f12;\n\t"
    "barrier.sync 0;\n\t"
    "ld.shared.f32 f166, [r4];\n\t"
    "ld.shared.f32 f167, [r4+864];\n\t"
    "ld.shared.f32 f168, [r4+1728];\n\t"
    "ld.shared.f32 f169, [r4+2592];\n\t"
    "ld.shared.f32 f170, [r4+3456];\n\t"
    "ld.shared.f32 f171, [r4+4320];\n\t"
    "add.f32 f172, f15, f17;\n\t"
    "add.f32 f173, f13, f172;\n\t"
    "add.f32 f174, f168, f170;\n\t"
    "add.f32 f175, f166, f174;\n\t"
    "fma.rn.f32 f176, f172, 0fBF000000, f13;\n\t"
    "sub.f32 f177, f168, f170;\n\t"
    "mul.f32 f178, f177, 0fBF5DB3D7;\n\t"
    "add.f32 f179, f178, f176;\n\t"
    "sub.f32 f180, f176, f178;\n\t"
    "fma.rn.f32 f181, f174, 0fBF000000, f166;\n\t"
    "sub.f32 f182, f15, f17;\n\t"
    "mul.f32 f183, f182, 0fBF5DB3D7;\n\t"
    "sub.f32 f184, f181, f183;\n\t"
    "add.f32 f185, f183, f181;\n\t"
    "add.f32 f186, f16, f18;\n\t"
    "add.f32 f187, f14, f186;\n\t"
    "add.f32 f188, f169, f171;\n\t"
    "add.f32 f189, f167, f188;\n\t"
    "fma.rn.f32 f190, f186, 0fBF000000, f14;\n\t"
    "sub.f32 f191, f169, f171;\n\t"
    "mul.f32 f192, f191, 0fBF5DB3D7;\n\t"
    "add.f32 f193, f192, f190;\n\t"
    "sub.f32 f194, f190, f192;\n\t"
    "fma.rn.f32 f195, f188, 0fBF000000, f167;\n\t"
    "sub.f32 f196, f16, f18;\n\t"
    "mul.f32 f197, f196, 0fBF5DB3D7;\n\t"
    "sub.f32 f198, f195, f197;\n\t"
    "add.f32 f199, f197, f195;\n\t"
    "mul.f32 f200, f193, 0f3F000000;\n\t"
    "mul.f32 f201, f198, 0f3F5DB3D7;\n\t"
    "sub.f32 f202, f200, f201;\n\t"
    "mul.f32 f203, f198, 0f3F000000;\n\t"
    "fma.rn.f32 f204, f193, 0f3F5DB3D7, f203;\n\t"
    "mul.f32 f205, f194, 0fBF000000;\n\t"
    "mul.f32 f206, f199, 0f3F5DB3D7;\n\t"
    "sub.f32 f207, f205, f206;\n\t"
    "mul.f32 f208, f199, 0fBF000000;\n\t"
    "fma.rn.f32 f209, f194, 0f3F5DB3D7, f208;\n\t"
    "add.f32 f19, f173, f187;\n\t"
    "add.f32 f20, f175, f189;\n\t"
    "sub.f32 f210, f173, f187;\n\t"
    "sub.f32 f211, f175, f189;\n\t"
    "add.f32 f212, f179, f202;\n\t"
    "add.f32 f213, f184, f204;\n\t"
    "sub.f32 f214, f179, f202;\n\t"
    "sub.f32 f215, f184, f204;\n\t"
    "add.f32 f216, f180, f207;\n\t"
    "add.f32 f217, f185, f209;\n\t"
    "sub.f32 f218, f180, f207;\n\t"
    "sub.f32 f219, f185, f209;\n\t"
    "mul.wide.u32 rd7, r1, -1431655765;\n\t"
    "shr.u64 rd8, rd7, 34;\n\t"
    "cvt.u32.u64 r5, rd8;\n\t"
    "mul.wide.u32 rd9, r5, 8;\n\t"
    "mov.u64 rd10, %14;\n\t"
    "add.s64 rd11, rd10, rd9;\n\t"
    "ld.global.v2.f32 {f220, f221}, [rd11];\n\t"
    "mul.f32 f224, f213, f221;\n\t"
    "fma.rn.f32 f21, f220, f212, f224;\n\t"
    "mul.f32 f225, f212, f221;\n\t"
    "mul.f32 f226, f220, f213;\n\t"
    "sub.f32 f22, f226, f225;\n\t"
    "mul.f32 f227, f220, f220;\n\t"
    "mul.f32 f228, f221, f221;\n\t"
    "sub.f32 f229, f227, f228;\n\t"
    "mul.f32 f230, f221, f220;\n\t"
    "fma.rn.f32 f231, f221, f220, f230;\n\t"
    "mul.f32 f232, f217, f231;\n\t"
    "fma.rn.f32 f23, f229, f216, f232;\n\t"
    "mul.f32 f233, f216, f231;\n\t"
    "mul.f32 f234, f229, f217;\n\t"
    "sub.f32 f24, f234, f233;\n\t"
    "mul.f32 f235, f220, f229;\n\t"
    "mul.f32 f236, f221, f231;\n\t"
    "sub.f32 f237, f235, f236;\n\t"
    "mul.f32 f238, f220, f231;\n\t"
    "fma.rn.f32 f239, f221, f229, f238;\n\t"
    "mul.f32 f240, f211, f239;\n\t"
    "fma.rn.f32 f25, f237, f210, f240;\n\t"
    "mul.f32 f241, f210, f239;\n\t"
    "mul.f32 f242, f237, f211;\n\t"
    "sub.f32 f26, f242, f241;\n\t"
    "mul.f32 f243, f220, f237;\n\t"
    "mul.f32 f244, f221, f239;\n\t"
    "sub.f32 f245, f243, f244;\n\t"
    "mul.f32 f246, f220, f239;\n\t"
    "fma.rn.f32 f247, f221, f237, f246;\n\t"
    "mul.f32 f248, f215, f247;\n\t"
    "fma.rn.f32 f27, f245, f214, f248;\n\t"
    "mul.f32 f249, f214, f247;\n\t"
    "mul.f32 f250, f245, f215;\n\t"
    "sub.f32 f28, f250, f249;\n\t"
    "mul.f32 f251, f220, f245;\n\t"
    "mul.f32 f252, f221, f247;\n\t"
    "sub.f32 f253, f251, f252;\n\t"
    "mul.f32 f254, f220, f247;\n\t"
    "fma.rn.f32 f255, f221, f245, f254;\n\t"
    "mul.f32 f256, f219, f255;\n\t"
    "fma.rn.f32 f29, f253, f218, f256;\n\t"
    "mul.f32 f257, f218, f255;\n\t"
    "mul.f32 f258, f253, f219;\n\t"
    "sub.f32 f30, f258, f257;\n\t"
    "mul.lo.s32 r25, r5, 6;\n\t"
    "sub.s32 r26, r1, r25;\n\t"
    "add.s32 r6, r26, r2;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r27, r5, 36, r6;\n\t"
    "shl.b32 r28, r27, 2;\n\t"
    "add.s32 r7, r21, r28;\n\t"
    "st.shared.f32 [r7], f19;\n\t"
    "st.shared.f32 [r7+24], f21;\n\t"
    "st.shared.f32 [r7+48], f23;\n\t"
    "st.shared.f32 [r7+72], f25;\n\t"
    "st.shared.f32 [r7+96], f27;\n\t"
    "st.shared.f32 [r7+120], f29;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r30, r5, 6, r6;\n\t"
    "shl.b32 r31, r30, 2;\n\t"
    "add.s32 r8, r21, r31;\n\t"
    "ld.shared.f32 f31, [r8];\n\t"
    "ld.shared.f32 f32, [r8+864];\n\t"
    "ld.shared.f32 f33, [r8+1728];\n\t"
    "ld.shared.f32 f34, [r8+2592];\n\t"
    "ld.shared.f32 f35, [r8+3456];\n\t"
    "ld.shared.f32 f36, [r8+4320];\n\t"
    "barrier.sync 0;\n\t"
    "st.shared.f32 [r7], f20;\n\t"
    "st.shared.f32 [r7+24], f22;\n\t"
    "st.shared.f32 [r7+48], f24;\n\t"
    "st.shared.f32 [r7+72], f26;\n\t"
    "st.shared.f32 [r7+96], f28;\n\t"
    "st.shared.f32 [r7+120], f30;\n\t"
    "barrier.sync 0;\n\t"
    "ld.shared.f32 f259, [r8];\n\t"
    "ld.shared.f32 f260, [r8+864];\n\t"
    "ld.shared.f32 f261, [r8+1728];\n\t"
    "ld.shared.f32 f262, [r8+2592];\n\t"
    "ld.shared.f32 f263, [r8+3456];\n\t"
    "ld.shared.f32 f264, [r8+4320];\n\t"
    "add.f32 f265, f33, f35;\n\t"
    "add.f32 f266, f31, f265;\n\t"
    "add.f32 f267, f261, f263;\n\t"
    "add.f32 f268, f259, f267;\n\t"
    "fma.rn.f32 f269, f265, 0fBF000000, f31;\n\t"
    "sub.f32 f270, f261, f263;\n\t"
    "mul.f32 f271, f270, 0fBF5DB3D7;\n\t"
    "add.f32 f272, f271, f269;\n\t"
    "sub.f32 f273, f269, f271;\n\t"
    "fma.rn.f32 f274, f267, 0fBF000000, f259;\n\t"
    "sub.f32 f275, f33, f35;\n\t"
    "mul.f32 f276, f275, 0fBF5DB3D7;\n\t"
    "sub.f32 f277, f274, f276;\n\t"
    "add.f32 f278, f276, f274;\n\t"
    "add.f32 f279, f34, f36;\n\t"
    "add.f32 f280, f32, f279;\n\t"
    "add.f32 f281, f262, f264;\n\t"
    "add.f32 f282, f260, f281;\n\t"
    "fma.rn.f32 f283, f279, 0fBF000000, f32;\n\t"
    "sub.f32 f284, f262, f264;\n\t"
    "mul.f32 f285, f284, 0fBF5DB3D7;\n\t"
    "add.f32 f286, f285, f283;\n\t"
    "sub.f32 f287, f283, f285;\n\t"
    "fma.rn.f32 f288, f281, 0fBF000000, f260;\n\t"
    "sub.f32 f289, f34, f36;\n\t"
    "mul.f32 f290, f289, 0fBF5DB3D7;\n\t"
    "sub.f32 f291, f288, f290;\n\t"
    "add.f32 f292, f290, f288;\n\t"
    "mul.f32 f293, f286, 0f3F000000;\n\t"
    "mul.f32 f294, f291, 0f3F5DB3D7;\n\t"
    "sub.f32 f295, f293, f294;\n\t"
    "mul.f32 f296, f291, 0f3F000000;\n\t"
    "fma.rn.f32 f297, f286, 0f3F5DB3D7, f296;\n\t"
    "mul.f32 f298, f287, 0fBF000000;\n\t"
    "mul.f32 f299, f292, 0f3F5DB3D7;\n\t"
    "sub.f32 f300, f298, f299;\n\t"
    "mul.f32 f301, f292, 0fBF000000;\n\t"
    "fma.rn.f32 f302, f287, 0f3F5DB3D7, f301;\n\t"
    "add.f32 f37, f266, f280;\n\t"
    "add.f32 f38, f268, f282;\n\t"
    "sub.f32 f303, f266, f280;\n\t"
    "sub.f32 f304, f268, f282;\n\t"
    "add.f32 f305, f272, f295;\n\t"
    "add.f32 f306, f277, f297;\n\t"
    "sub.f32 f307, f272, f295;\n\t"
    "sub.f32 f308, f277, f297;\n\t"
    "add.f32 f309, f273, f300;\n\t"
    "add.f32 f310, f278, f302;\n\t"
    "sub.f32 f311, f273, f300;\n\t"
    "sub.f32 f312, f278, f302;\n\t"
    "mul.wide.u32 rd12, r1, 954437177;\n\t"
    "shr.u64 rd13, rd12, 35;\n\t"
    "cvt.u32.u64 r9, rd13;\n\t"
    "mul.wide.u32 rd14, r9, 8;\n\t"
    "mov.u64 rd15, %15;\n\t"
    "add.s64 rd16, rd15, rd14;\n\t"
    "ld.global.v2.f32 {f313, f314}, [rd16];\n\t"
    "mul.f32 f317, f306, f314;\n\t"
    "fma.rn.f32 f39, f313, f305, f317;\n\t"
    "mul.f32 f318, f305, f314;\n\t"
    "mul.f32 f319, f313, f306;\n\t"
    "sub.f32 f40, f319, f318;\n\t"
    "mul.f32 f320, f313, f313;\n\t"
    "mul.f32 f321, f314, f314;\n\t"
    "sub.f32 f322, f320, f321;\n\t"
    "mul.f32 f323, f314, f313;\n\t"
    "fma.rn.f32 f324, f314, f313, f323;\n\t"
    "mul.f32 f325, f310, f324;\n\t"
    "fma.rn.f32 f41, f322, f309, f325;\n\t"
    "mul.f32 f326, f309, f324;\n\t"
    "mul.f32 f327, f322, f310;\n\t"
    "sub.f32 f42, f327, f326;\n\t"
    "mul.f32 f328, f313, f322;\n\t"
    "mul.f32 f329, f314, f324;\n\t"
    "sub.f32 f330, f328, f329;\n\t"
    "mul.f32 f331, f313, f324;\n\t"
    "fma.rn.f32 f332, f314, f322, f331;\n\t"
    "mul.f32 f333, f304, f332;\n\t"
    "fma.rn.f32 f43, f330, f303, f333;\n\t"
    "mul.f32 f334, f303, f332;\n\t"
    "mul.f32 f335, f330, f304;\n\t"
    "sub.f32 f44, f335, f334;\n\t"
    "mul.f32 f336, f313, f330;\n\t"
    "mul.f32 f337, f314, f332;\n\t"
    "sub.f32 f338, f336, f337;\n\t"
    "mul.f32 f339, f313, f332;\n\t"
    "fma.rn.f32 f340, f314, f330, f339;\n\t"
    "mul.f32 f341, f308, f340;\n\t"
    "fma.rn.f32 f45, f338, f307, f341;\n\t"
    "mul.f32 f342, f307, f340;\n\t"
    "mul.f32 f343, f338, f308;\n\t"
    "sub.f32 f46, f343, f342;\n\t"
    "mul.f32 f344, f313, f338;\n\t"
    "mul.f32 f345, f314, f340;\n\t"
    "sub.f32 f346, f344, f345;\n\t"
    "mul.f32 f347, f313, f340;\n\t"
    "fma.rn.f32 f348, f314, f338, f347;\n\t"
    "mul.f32 f349, f312, f348;\n\t"
    "fma.rn.f32 f47, f346, f311, f349;\n\t"
    "mul.f32 f350, f311, f348;\n\t"
    "mul.f32 f351, f346, f312;\n\t"
    "sub.f32 f48, f351, f350;\n\t"
    "mul.lo.s32 r33, r9, 36;\n\t"
    "sub.s32 r34, r1, r33;\n\t"
    "add.s32 r10, r34, r2;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r35, r9, 216, r10;\n\t"
    "shl.b32 r36, r35, 2;\n\t"
    "add.s32 r11, r21, r36;\n\t"
    "st.shared.f32 [r11], f37;\n\t"
    "st.shared.f32 [r11+144], f39;\n\t"
    "st.shared.f32 [r11+288], f41;\n\t"
    "st.shared.f32 [r11+432], f43;\n\t"
    "st.shared.f32 [r11+576], f45;\n\t"
    "st.shared.f32 [r11+720], f47;\n\t"
    "barrier.sync 0;\n\t"
    "mad.lo.s32 r38, r9, 36, r10;\n\t"
    "shl.b32 r39, r38, 2;\n\t"
    "add.s32 r12, r21, r39;\n\t"
    "ld.shared.f32 f49, [r12];\n\t"
    "ld.shared.f32 f50, [r12+864];\n\t"
    "ld.shared.f32 f51, [r12+1728];\n\t"
    "ld.shared.f32 f52, [r12+2592];\n\t"
    "ld.shared.f32 f53, [r12+3456];\n\t"
    "ld.shared.f32 f54, [r12+4320];\n\t"
    "barrier.sync 0;\n\t"
    "st.shared.f32 [r11], f38;\n\t"
    "st.shared.f32 [r11+144], f40;\n\t"
    "st.shared.f32 [r11+288], f42;\n\t"
    "st.shared.f32 [r11+432], f44;\n\t"
    "st.shared.f32 [r11+576], f46;\n\t"
    "st.shared.f32 [r11+720], f48;\n\t"
    "barrier.sync 0;\n\t"
    "ld.shared.f32 f352, [r12];\n\t"
    "ld.shared.f32 f353, [r12+864];\n\t"
    "ld.shared.f32 f354, [r12+1728];\n\t"
    "ld.shared.f32 f355, [r12+2592];\n\t"
    "ld.shared.f32 f356, [r12+3456];\n\t"
    "ld.shared.f32 f357, [r12+4320];\n\t"
    "add.f32 f358, f51, f53;\n\t"
    "add.f32 f359, f49, f358;\n\t"
    "add.f32 f360, f354, f356;\n\t"
    "add.f32 f361, f352, f360;\n\t"
    "fma.rn.f32 f362, f358, 0fBF000000, f49;\n\t"
    "sub.f32 f363, f354, f356;\n\t"
    "mul.f32 f364, f363, 0fBF5DB3D7;\n\t"
    "add.f32 f365, f364, f362;\n\t"
    "sub.f32 f366, f362, f364;\n\t"
    "fma.rn.f32 f367, f360, 0fBF000000, f352;\n\t"
    "sub.f32 f368, f51, f53;\n\t"
    "mul.f32 f369, f368, 0fBF5DB3D7;\n\t"
    "sub.f32 f370, f367, f369;\n\t"
    "add.f32 f371, f369, f367;\n\t"
    "add.f32 f372, f52, f54;\n\t"
    "add.f32 f373, f50, f372;\n\t"
    "add.f32 f374, f355, f357;\n\t"
    "add.f32 f375, f353, f374;\n\t"
    "fma.rn.f32 f376, f372, 0fBF000000, f50;\n\t"
    "sub.f32 f377, f355, f357;\n\t"
    "mul.f32 f378, f377, 0fBF5DB3D7;\n\t"
    "add.f32 f379, f378, f376;\n\t"
    "sub.f32 f380, f376, f378;\n\t"
    "fma.rn.f32 f381, f374, 0fBF000000, f353;\n\t"
    "sub.f32 f382, f52, f54;\n\t"
    "mul.f32 f383, f382, 0fBF5DB3D7;\n\t"
    "sub.f32 f384, f381, f383;\n\t"
    "add.f32 f385, f383, f381;\n\t"
    "mul.f32 f386, f379, 0f3F000000;\n\t"
    "mul.f32 f387, f384, 0f3F5DB3D7;\n\t"
    "sub.f32 f388, f386, f387;\n\t"
    "mul.f32 f389, f384, 0f3F000000;\n\t"
    "fma.rn.f32 f390, f379, 0f3F5DB3D7, f389;\n\t"
    "mul.f32 f391, f380, 0fBF000000;\n\t"
    "mul.f32 f392, f385, 0f3F5DB3D7;\n\t"
    "sub.f32 f393, f391, f392;\n\t"
    "mul.f32 f394, f385, 0fBF000000;\n\t"
    "fma.rn.f32 f395, f380, 0f3F5DB3D7, f394;\n\t"
    "add.f32 %0, f359, f373;\n\t"
    "add.f32 %1, f361, f375;\n\t"
    "add.f32 %3, f370, f390;\n\t"
    "add.f32 %2, f365, f388;\n\t"
    "add.f32 %5, f371, f395;\n\t"
    "add.f32 %4, f366, f393;\n\t"
    "sub.f32 %6, f359, f373;\n\t"
    "sub.f32 %7, f361, f375;\n\t"
    "sub.f32 %9, f370, f390;\n\t"
    "sub.f32 %8, f365, f388;\n\t"
    "sub.f32 %11, f371, f395;\n\t"
    "sub.f32 %10, f366, f393;\n\t"
    "}"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y): "l"(smem), "l"(lut_sp_6_1296), "l"(lut_sp_6_216), "l"(lut_sp_6_36), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y));
};


#endif
#ifndef CUFFTDX_FFT_18_FP32_INV_PTX_HPP
#define CUFFTDX_FFT_18_FP32_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<212, float, 1>(cufftdx::detail::complex<float> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<357>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "add.f32 f73, %53, %69;\n\t"
    "add.f32 f74, %37, f73;\n\t"
    "add.f32 f75, %54, %70;\n\t"
    "add.f32 f76, %38, f75;\n\t"
    "fma.rn.f32 f77, f73, 0fBF000000, %37;\n\t"
    "sub.f32 f78, %54, %70;\n\t"
    "mul.f32 f79, f78, 0fBF5DB3D7;\n\t"
    "add.f32 f80, f79, f77;\n\t"
    "sub.f32 f81, f77, f79;\n\t"
    "fma.rn.f32 f82, f75, 0fBF000000, %38;\n\t"
    "sub.f32 f83, %53, %69;\n\t"
    "mul.f32 f84, f83, 0fBF5DB3D7;\n\t"
    "sub.f32 f85, f82, f84;\n\t"
    "add.f32 f86, f84, f82;\n\t"
    "add.f32 f87, %58, %74;\n\t"
    "add.f32 f88, %42, f87;\n\t"
    "add.f32 f89, %60, %76;\n\t"
    "add.f32 f90, %44, f89;\n\t"
    "fma.rn.f32 f91, f87, 0fBF000000, %42;\n\t"
    "sub.f32 f92, %60, %76;\n\t"
    "mul.f32 f93, f92, 0fBF5DB3D7;\n\t"
    "add.f32 f94, f93, f91;\n\t"
    "sub.f32 f95, f91, f93;\n\t"
    "fma.rn.f32 f96, f89, 0fBF000000, %44;\n\t"
    "sub.f32 f97, %58, %74;\n\t"
    "mul.f32 f98, f97, 0fBF5DB3D7;\n\t"
    "sub.f32 f99, f96, f98;\n\t"
    "add.f32 f100, f98, f96;\n\t"
    "add.f32 f101, %63, %79;\n\t"
    "add.f32 f102, %47, f101;\n\t"
    "add.f32 f103, %65, %81;\n\t"
    "add.f32 f104, %49, f103;\n\t"
    "fma.rn.f32 f105, f101, 0fBF000000, %47;\n\t"
    "sub.f32 f106, %65, %81;\n\t"
    "mul.f32 f107, f106, 0fBF5DB3D7;\n\t"
    "add.f32 f108, f107, f105;\n\t"
    "sub.f32 f109, f105, f107;\n\t"
    "fma.rn.f32 f110, f103, 0fBF000000, %49;\n\t"
    "sub.f32 f111, %63, %79;\n\t"
    "mul.f32 f112, f111, 0fBF5DB3D7;\n\t"
    "sub.f32 f113, f110, f112;\n\t"
    "add.f32 f114, f112, f110;\n\t"
    "mul.f32 f115, f94, 0f3F441B7D;\n\t"
    "mul.f32 f116, f99, 0f3F248DBB;\n\t"
    "sub.f32 f117, f115, f116;\n\t"
    "mul.f32 f118, f99, 0f3F441B7D;\n\t"
    "fma.rn.f32 f119, f94, 0f3F248DBB, f118;\n\t"
    "mul.f32 f120, f108, 0f3E31D0D4;\n\t"
    "mul.f32 f121, f113, 0f3F7C1C5C;\n\t"
    "sub.f32 f122, f120, f121;\n\t"
    "mul.f32 f123, f113, 0f3E31D0D4;\n\t"
    "fma.rn.f32 f124, f108, 0f3F7C1C5C, f123;\n\t"
    "mul.f32 f125, f95, 0f3E31D0D4;\n\t"
    "mul.f32 f126, f100, 0f3F7C1C5C;\n\t"
    "sub.f32 f127, f125, f126;\n\t"
    "mul.f32 f128, f100, 0f3E31D0D4;\n\t"
    "fma.rn.f32 f129, f95, 0f3F7C1C5C, f128;\n\t"
    "mul.f32 f130, f109, 0fBF708FB2;\n\t"
    "mul.f32 f131, f114, 0f3EAF1D44;\n\t"
    "sub.f32 f132, f130, f131;\n\t"
    "mul.f32 f133, f114, 0fBF708FB2;\n\t"
    "fma.rn.f32 f134, f109, 0f3EAF1D44, f133;\n\t"
    "add.f32 f135, f88, f102;\n\t"
    "add.f32 f136, f74, f135;\n\t"
    "add.f32 f137, f90, f104;\n\t"
    "add.f32 f138, f76, f137;\n\t"
    "fma.rn.f32 f139, f135, 0fBF000000, f74;\n\t"
    "sub.f32 f140, f90, f104;\n\t"
    "mul.f32 f141, f140, 0fBF5DB3D7;\n\t"
    "add.f32 f142, f141, f139;\n\t"
    "sub.f32 f143, f139, f141;\n\t"
    "fma.rn.f32 f144, f137, 0fBF000000, f76;\n\t"
    "sub.f32 f145, f88, f102;\n\t"
    "mul.f32 f146, f145, 0fBF5DB3D7;\n\t"
    "sub.f32 f147, f144, f146;\n\t"
    "add.f32 f148, f146, f144;\n\t"
    "add.f32 f149, f117, f122;\n\t"
    "add.f32 f150, f80, f149;\n\t"
    "add.f32 f151, f119, f124;\n\t"
    "add.f32 f152, f85, f151;\n\t"
    "fma.rn.f32 f153, f149, 0fBF000000, f80;\n\t"
    "sub.f32 f154, f119, f124;\n\t"
    "mul.f32 f155, f154, 0fBF5DB3D7;\n\t"
    "add.f32 f156, f155, f153;\n\t"
    "sub.f32 f157, f153, f155;\n\t"
    "fma.rn.f32 f158, f151, 0fBF000000, f85;\n\t"
    "sub.f32 f159, f117, f122;\n\t"
    "mul.f32 f160, f159, 0fBF5DB3D7;\n\t"
    "sub.f32 f161, f158, f160;\n\t"
    "add.f32 f162, f160, f158;\n\t"
    "add.f32 f163, f127, f132;\n\t"
    "add.f32 f164, f81, f163;\n\t"
    "add.f32 f165, f129, f134;\n\t"
    "add.f32 f166, f86, f165;\n\t"
    "fma.rn.f32 f167, f163, 0fBF000000, f81;\n\t"
    "sub.f32 f168, f129, f134;\n\t"
    "mul.f32 f169, f168, 0fBF5DB3D7;\n\t"
    "add.f32 f170, f169, f167;\n\t"
    "sub.f32 f171, f167, f169;\n\t"
    "fma.rn.f32 f172, f165, 0fBF000000, f86;\n\t"
    "sub.f32 f173, f127, f132;\n\t"
    "mul.f32 f174, f173, 0fBF5DB3D7;\n\t"
    "sub.f32 f175, f172, f174;\n\t"
    "add.f32 f176, f174, f172;\n\t"
    "add.f32 f177, %55, %71;\n\t"
    "add.f32 f178, %39, f177;\n\t"
    "add.f32 f179, %57, %73;\n\t"
    "add.f32 f180, %41, f179;\n\t"
    "fma.rn.f32 f181, f177, 0fBF000000, %39;\n\t"
    "sub.f32 f182, %57, %73;\n\t"
    "mul.f32 f183, f182, 0fBF5DB3D7;\n\t"
    "add.f32 f184, f183, f181;\n\t"
    "sub.f32 f185, f181, f183;\n\t"
    "fma.rn.f32 f186, f179, 0fBF000000, %41;\n\t"
    "sub.f32 f187, %55, %71;\n\t"
    "mul.f32 f188, f187, 0fBF5DB3D7;\n\t"
    "sub.f32 f189, f186, f188;\n\t"
    "add.f32 f190, f188, f186;\n\t"
    "add.f32 f191, %61, %77;\n\t"
    "add.f32 f192, %45, f191;\n\t"
    "add.f32 f193, %62, %78;\n\t"
    "add.f32 f194, %46, f193;\n\t"
    "fma.rn.f32 f195, f191, 0fBF000000, %45;\n\t"
    "sub.f32 f196, %62, %78;\n\t"
    "mul.f32 f197, f196, 0fBF5DB3D7;\n\t"
    "add.f32 f198, f197, f195;\n\t"
    "sub.f32 f199, f195, f197;\n\t"
    "fma.rn.f32 f200, f193, 0fBF000000, %46;\n\t"
    "sub.f32 f201, %61, %77;\n\t"
    "mul.f32 f202, f201, 0fBF5DB3D7;\n\t"
    "sub.f32 f203, f200, f202;\n\t"
    "add.f32 f204, f202, f200;\n\t"
    "add.f32 f205, %66, %82;\n\t"
    "add.f32 f206, %50, f205;\n\t"
    "add.f32 f207, %68, %83;\n\t"
    "add.f32 f208, %52, f207;\n\t"
    "fma.rn.f32 f209, f205, 0fBF000000, %50;\n\t"
    "sub.f32 f210, %68, %83;\n\t"
    "mul.f32 f211, f210, 0fBF5DB3D7;\n\t"
    "add.f32 f212, f211, f209;\n\t"
    "sub.f32 f213, f209, f211;\n\t"
    "fma.rn.f32 f214, f207, 0fBF000000, %52;\n\t"
    "sub.f32 f215, %66, %82;\n\t"
    "mul.f32 f216, f215, 0fBF5DB3D7;\n\t"
    "sub.f32 f217, f214, f216;\n\t"
    "add.f32 f218, f216, f214;\n\t"
    "mul.f32 f219, f198, 0f3F441B7D;\n\t"
    "mul.f32 f220, f203, 0f3F248DBB;\n\t"
    "sub.f32 f221, f219, f220;\n\t"
    "mul.f32 f222, f203, 0f3F441B7D;\n\t"
    "fma.rn.f32 f223, f198, 0f3F248DBB, f222;\n\t"
    "mul.f32 f224, f212, 0f3E31D0D4;\n\t"
    "mul.f32 f225, f217, 0f3F7C1C5C;\n\t"
    "sub.f32 f226, f224, f225;\n\t"
    "mul.f32 f227, f217, 0f3E31D0D4;\n\t"
    "fma.rn.f32 f228, f212, 0f3F7C1C5C, f227;\n\t"
    "mul.f32 f229, f199, 0f3E31D0D4;\n\t"
    "mul.f32 f230, f204, 0f3F7C1C5C;\n\t"
    "sub.f32 f231, f229, f230;\n\t"
    "mul.f32 f232, f204, 0f3E31D0D4;\n\t"
    "fma.rn.f32 f233, f199, 0f3F7C1C5C, f232;\n\t"
    "mul.f32 f234, f213, 0fBF708FB2;\n\t"
    "mul.f32 f235, f218, 0f3EAF1D44;\n\t"
    "sub.f32 f236, f234, f235;\n\t"
    "mul.f32 f237, f218, 0fBF708FB2;\n\t"
    "fma.rn.f32 f238, f213, 0f3EAF1D44, f237;\n\t"
    "add.f32 f239, f192, f206;\n\t"
    "add.f32 f240, f178, f239;\n\t"
    "add.f32 f241, f194, f208;\n\t"
    "add.f32 f242, f180, f241;\n\t"
    "fma.rn.f32 f243, f239, 0fBF000000, f178;\n\t"
    "sub.f32 f244, f194, f208;\n\t"
    "mul.f32 f245, f244, 0fBF5DB3D7;\n\t"
    "add.f32 f246, f245, f243;\n\t"
    "sub.f32 f247, f243, f245;\n\t"
    "fma.rn.f32 f248, f241, 0fBF000000, f180;\n\t"
    "sub.f32 f249, f192, f206;\n\t"
    "mul.f32 f250, f249, 0fBF5DB3D7;\n\t"
    "sub.f32 f251, f248, f250;\n\t"
    "add.f32 f252, f250, f248;\n\t"
    "add.f32 f253, f221, f226;\n\t"
    "add.f32 f254, f184, f253;\n\t"
    "add.f32 f255, f223, f228;\n\t"
    "add.f32 f256, f189, f255;\n\t"
    "fma.rn.f32 f257, f253, 0fBF000000, f184;\n\t"
    "sub.f32 f258, f223, f228;\n\t"
    "mul.f32 f259, f258, 0fBF5DB3D7;\n\t"
    "add.f32 f260, f259, f257;\n\t"
    "sub.f32 f261, f257, f259;\n\t"
    "fma.rn.f32 f262, f255, 0fBF000000, f189;\n\t"
    "sub.f32 f263, f221, f226;\n\t"
    "mul.f32 f264, f263, 0fBF5DB3D7;\n\t"
    "sub.f32 f265, f262, f264;\n\t"
    "add.f32 f266, f264, f262;\n\t"
    "add.f32 f267, f231, f236;\n\t"
    "add.f32 f268, f185, f267;\n\t"
    "add.f32 f269, f233, f238;\n\t"
    "add.f32 f270, f190, f269;\n\t"
    "fma.rn.f32 f271, f267, 0fBF000000, f185;\n\t"
    "sub.f32 f272, f233, f238;\n\t"
    "mul.f32 f273, f272, 0fBF5DB3D7;\n\t"
    "add.f32 f274, f273, f271;\n\t"
    "sub.f32 f275, f271, f273;\n\t"
    "fma.rn.f32 f276, f269, 0fBF000000, f190;\n\t"
    "sub.f32 f277, f231, f236;\n\t"
    "mul.f32 f278, f277, 0fBF5DB3D7;\n\t"
    "sub.f32 f279, f276, f278;\n\t"
    "add.f32 f280, f278, f276;\n\t"
    "mul.f32 f281, f254, 0f3F708FB2;\n\t"
    "mul.f32 f282, f256, 0f3EAF1D44;\n\t"
    "sub.f32 f283, f281, f282;\n\t"
    "mul.f32 f284, f256, 0f3F708FB2;\n\t"
    "fma.rn.f32 f285, f254, 0f3EAF1D44, f284;\n\t"
    "mul.f32 f286, f268, 0f3F441B7D;\n\t"
    "mul.f32 f287, f270, 0f3F248DBB;\n\t"
    "sub.f32 f288, f286, f287;\n\t"
    "mul.f32 f289, f270, 0f3F441B7D;\n\t"
    "fma.rn.f32 f290, f268, 0f3F248DBB, f289;\n\t"
    "mul.f32 f291, f246, 0f3F000000;\n\t"
    "mul.f32 f292, f251, 0f3F5DB3D7;\n\t"
    "sub.f32 f293, f291, f292;\n\t"
    "mul.f32 f294, f251, 0f3F000000;\n\t"
    "fma.rn.f32 f295, f246, 0f3F5DB3D7, f294;\n\t"
    "mul.f32 f296, f260, 0f3E31D0D4;\n\t"
    "mul.f32 f297, f265, 0f3F7C1C5C;\n\t"
    "sub.f32 f298, f296, f297;\n\t"
    "mul.f32 f299, f265, 0f3E31D0D4;\n\t"
    "fma.rn.f32 f300, f260, 0f3F7C1C5C, f299;\n\t"
    "mul.f32 f301, f274, 0fBE31D0D4;\n\t"
    "mul.f32 f302, f279, 0f3F7C1C5C;\n\t"
    "sub.f32 f303, f301, f302;\n\t"
    "mul.f32 f304, f279, 0fBE31D0D4;\n\t"
    "fma.rn.f32 f305, f274, 0f3F7C1C5C, f304;\n\t"
    "mul.f32 f306, f247, 0fBF000000;\n\t"
    "mul.f32 f307, f252, 0f3F5DB3D7;\n\t"
    "sub.f32 f308, f306, f307;\n\t"
    "mul.f32 f309, f252, 0fBF000000;\n\t"
    "fma.rn.f32 f310, f247, 0f3F5DB3D7, f309;\n\t"
    "mul.f32 f311, f261, 0fBF441B7D;\n\t"
    "mul.f32 f312, f266, 0f3F248DBB;\n\t"
    "sub.f32 f313, f311, f312;\n\t"
    "mul.f32 f314, f266, 0fBF441B7D;\n\t"
    "fma.rn.f32 f315, f261, 0f3F248DBB, f314;\n\t"
    "mul.f32 f316, f275, 0fBF708FB2;\n\t"
    "mul.f32 f317, f280, 0f3EAF1D44;\n\t"
    "sub.f32 f318, f316, f317;\n\t"
    "mul.f32 f319, f280, 0fBF708FB2;\n\t"
    "fma.rn.f32 f320, f275, 0f3EAF1D44, f319;\n\t"
    "add.f32 %1, f138, f242;\n\t"
    "add.f32 %0, f136, f240;\n\t"
    "add.f32 %3, f152, f285;\n\t"
    "add.f32 %2, f150, f283;\n\t"
    "add.f32 %5, f166, f290;\n\t"
    "add.f32 %4, f164, f288;\n\t"
    "add.f32 %7, f147, f295;\n\t"
    "add.f32 %6, f142, f293;\n\t"
    "add.f32 %9, f161, f300;\n\t"
    "add.f32 %8, f156, f298;\n\t"
    "add.f32 %11, f175, f305;\n\t"
    "add.f32 %10, f170, f303;\n\t"
    "add.f32 %13, f148, f310;\n\t"
    "add.f32 %12, f143, f308;\n\t"
    "add.f32 %15, f162, f315;\n\t"
    "add.f32 %14, f157, f313;\n\t"
    "add.f32 %17, f176, f320;\n\t"
    "add.f32 %16, f171, f318;\n\t"
    "sub.f32 %19, f138, f242;\n\t"
    "sub.f32 %18, f136, f240;\n\t"
    "sub.f32 %21, f152, f285;\n\t"
    "sub.f32 %20, f150, f283;\n\t"
    "sub.f32 %23, f166, f290;\n\t"
    "sub.f32 %22, f164, f288;\n\t"
    "sub.f32 %25, f147, f295;\n\t"
    "sub.f32 %24, f142, f293;\n\t"
    "sub.f32 %27, f161, f300;\n\t"
    "sub.f32 %26, f156, f298;\n\t"
    "sub.f32 %29, f175, f305;\n\t"
    "sub.f32 %28, f170, f303;\n\t"
    "sub.f32 %31, f148, f310;\n\t"
    "sub.f32 %30, f143, f308;\n\t"
    "sub.f32 %33, f162, f315;\n\t"
    "sub.f32 %32, f157, f313;\n\t"
    "sub.f32 %35, f176, f320;\n\t"
    "sub.f32 %34, f171, f318;\n\t"
    "}"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y), "=f"(rmem[7].x), "=f"(rmem[7].y), "=f"(rmem[8].x), "=f"(rmem[8].y), "=f"(rmem[9].x), "=f"(rmem[9].y), "=f"(rmem[10].x), "=f"(rmem[10].y), "=f"(rmem[11].x), "=f"(rmem[11].y), "=f"(rmem[12].x), "=f"(rmem[12].y), "=f"(rmem[13].x), "=f"(rmem[13].y), "=f"(rmem[14].x), "=f"(rmem[14].y), "=f"(rmem[15].x), "=f"(rmem[15].y), "=f"(rmem[16].x), "=f"(rmem[16].y), "=f"(rmem[17].x), "=f"(rmem[17].y): "l"(smem), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y), "f"(rmem[7].x), "f"(rmem[7].y), "f"(rmem[7].y), "f"(rmem[8].x), "f"(rmem[8].y), "f"(rmem[8].y), "f"(rmem[9].x), "f"(rmem[9].y), "f"(rmem[10].x), "f"(rmem[10].y), "f"(rmem[10].y), "f"(rmem[11].x), "f"(rmem[11].y), "f"(rmem[11].y), "f"(rmem[12].x), "f"(rmem[12].y), "f"(rmem[13].x), "f"(rmem[13].y), "f"(rmem[13].y), "f"(rmem[14].x), "f"(rmem[14].y), "f"(rmem[14].y), "f"(rmem[15].x), "f"(rmem[15].y), "f"(rmem[16].x), "f"(rmem[16].y), "f"(rmem[16].y), "f"(rmem[17].x), "f"(rmem[17].y));
};


#endif

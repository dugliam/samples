//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_20_FP32_FWD_PTX_HPP
#define CUFFTDX_FFT_20_FP32_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<6, float, 1>(cufftdx::detail::complex<float> *rmem, unsigned smem){

asm volatile (R"({
.reg .f32 f<417>;
.reg .b64 rd<2>;
add.f32 f81, %50, %82;
add.f32 f82, %40, f81;
add.f32 f83, %61, %72;
add.f32 f84, f83, f82;
add.f32 f85, %52, %84;
add.f32 f86, %41, f85;
add.f32 f87, %63, %73;
add.f32 f88, f87, f86;
fma.rn.f32 f89, f81, 0f3E9E377A, %40;
mul.f32 f90, f83, 0f3F4F1BBD;
sub.f32 f91, f89, f90;
sub.f32 f92, %52, %84;
mul.f32 f93, f92, 0f3F737871;
sub.f32 f94, %63, %73;
mul.f32 f95, f94, 0fBF167918;
sub.f32 f96, f95, f93;
sub.f32 f97, f91, f96;
add.f32 f98, f96, f91;
mul.f32 f99, f81, 0f3F4F1BBD;
sub.f32 f100, %40, f99;
fma.rn.f32 f101, f83, 0f3E9E377A, f100;
mul.f32 f102, f92, 0f3F167918;
mul.f32 f103, f94, 0f3F737871;
sub.f32 f104, f103, f102;
sub.f32 f105, f101, f104;
add.f32 f106, f104, f101;
fma.rn.f32 f107, f85, 0f3E9E377A, %41;
mul.f32 f108, f87, 0f3F4F1BBD;
sub.f32 f109, f107, f108;
sub.f32 f110, %50, %82;
mul.f32 f111, f110, 0f3F737871;
sub.f32 f112, %61, %72;
mul.f32 f113, f112, 0fBF167918;
sub.f32 f114, f113, f111;
add.f32 f115, f114, f109;
sub.f32 f116, f109, f114;
mul.f32 f117, f85, 0f3F4F1BBD;
sub.f32 f118, %41, f117;
fma.rn.f32 f119, f87, 0f3E9E377A, f118;
mul.f32 f120, f110, 0f3F167918;
mul.f32 f121, f112, 0f3F737871;
sub.f32 f122, f121, f120;
add.f32 f123, f122, f119;
sub.f32 f124, f119, f122;
add.f32 f125, %56, %88;
add.f32 f126, %45, f125;
add.f32 f127, %66, %77;
add.f32 f128, f127, f126;
add.f32 f129, %57, %89;
add.f32 f130, %47, f129;
add.f32 f131, %68, %79;
add.f32 f132, f131, f130;
fma.rn.f32 f133, f125, 0f3E9E377A, %45;
mul.f32 f134, f127, 0f3F4F1BBD;
sub.f32 f135, f133, f134;
sub.f32 f136, %57, %89;
mul.f32 f137, f136, 0f3F737871;
sub.f32 f138, %68, %79;
mul.f32 f139, f138, 0fBF167918;
sub.f32 f140, f139, f137;
sub.f32 f141, f135, f140;
add.f32 f142, f140, f135;
mul.f32 f143, f125, 0f3F4F1BBD;
sub.f32 f144, %45, f143;
fma.rn.f32 f145, f127, 0f3E9E377A, f144;
mul.f32 f146, f136, 0f3F167918;
mul.f32 f147, f138, 0f3F737871;
sub.f32 f148, f147, f146;
sub.f32 f149, f145, f148;
add.f32 f150, f148, f145;
fma.rn.f32 f151, f129, 0f3E9E377A, %47;
mul.f32 f152, f131, 0f3F4F1BBD;
sub.f32 f153, f151, f152;
sub.f32 f154, %56, %88;
mul.f32 f155, f154, 0f3F737871;
sub.f32 f156, %66, %77;
mul.f32 f157, f156, 0fBF167918;
sub.f32 f158, f157, f155;
add.f32 f159, f158, f153;
sub.f32 f160, f153, f158;
mul.f32 f161, f129, 0f3F4F1BBD;
sub.f32 f162, %47, f161;
fma.rn.f32 f163, f131, 0f3E9E377A, f162;
mul.f32 f164, f154, 0f3F167918;
mul.f32 f165, f156, 0f3F737871;
sub.f32 f166, f165, f164;
add.f32 f167, f166, f163;
sub.f32 f168, f163, f166;
mul.f32 f169, f141, 0f3F4F1BBD;
mul.f32 f170, f159, 0fBF167918;
sub.f32 f171, f169, f170;
mul.f32 f172, f159, 0f3F4F1BBD;
fma.rn.f32 f173, f141, 0fBF167918, f172;
mul.f32 f174, f149, 0f3E9E377A;
mul.f32 f175, f167, 0fBF737871;
sub.f32 f176, f174, f175;
mul.f32 f177, f167, 0f3E9E377A;
fma.rn.f32 f178, f149, 0fBF737871, f177;
mul.f32 f179, f150, 0fBE9E377A;
mul.f32 f180, f168, 0fBF737871;
sub.f32 f181, f179, f180;
mul.f32 f182, f168, 0fBE9E377A;
fma.rn.f32 f183, f150, 0fBF737871, f182;
mul.f32 f184, f142, 0fBF4F1BBD;
mul.f32 f185, f160, 0fBF167918;
sub.f32 f186, f184, f185;
mul.f32 f187, f160, 0fBF4F1BBD;
fma.rn.f32 f188, f142, 0fBF167918, f187;
add.f32 f189, f84, f128;
add.f32 f190, f88, f132;
sub.f32 f191, f84, f128;
sub.f32 f192, f88, f132;
add.f32 f193, f97, f171;
add.f32 f194, f115, f173;
sub.f32 f195, f97, f171;
sub.f32 f196, f115, f173;
add.f32 f197, f105, f176;
add.f32 f198, f123, f178;
sub.f32 f199, f105, f176;
sub.f32 f200, f123, f178;
add.f32 f201, f106, f181;
add.f32 f202, f124, f183;
sub.f32 f203, f106, f181;
sub.f32 f204, f124, f183;
add.f32 f205, f98, f186;
add.f32 f206, f116, f188;
sub.f32 f207, f98, f186;
sub.f32 f208, f116, f188;
add.f32 f209, %53, %85;
add.f32 f210, %42, f209;
add.f32 f211, %64, %74;
add.f32 f212, f211, f210;
add.f32 f213, %55, %87;
add.f32 f214, %44, f213;
add.f32 f215, %65, %76;
add.f32 f216, f215, f214;
fma.rn.f32 f217, f209, 0f3E9E377A, %42;
mul.f32 f218, f211, 0f3F4F1BBD;
sub.f32 f219, f217, f218;
sub.f32 f220, %55, %87;
mul.f32 f221, f220, 0f3F737871;
sub.f32 f222, %65, %76;
mul.f32 f223, f222, 0fBF167918;
sub.f32 f224, f223, f221;
sub.f32 f225, f219, f224;
add.f32 f226, f224, f219;
mul.f32 f227, f209, 0f3F4F1BBD;
sub.f32 f228, %42, f227;
fma.rn.f32 f229, f211, 0f3E9E377A, f228;
mul.f32 f230, f220, 0f3F167918;
mul.f32 f231, f222, 0f3F737871;
sub.f32 f232, f231, f230;
sub.f32 f233, f229, f232;
add.f32 f234, f232, f229;
fma.rn.f32 f235, f213, 0f3E9E377A, %44;
mul.f32 f236, f215, 0f3F4F1BBD;
sub.f32 f237, f235, f236;
sub.f32 f238, %53, %85;
mul.f32 f239, f238, 0f3F737871;
sub.f32 f240, %64, %74;
mul.f32 f241, f240, 0fBF167918;
sub.f32 f242, f241, f239;
add.f32 f243, f242, f237;
sub.f32 f244, f237, f242;
mul.f32 f245, f213, 0f3F4F1BBD;
sub.f32 f246, %44, f245;
fma.rn.f32 f247, f215, 0f3E9E377A, f246;
mul.f32 f248, f238, 0f3F167918;
mul.f32 f249, f240, 0f3F737871;
sub.f32 f250, f249, f248;
add.f32 f251, f250, f247;
sub.f32 f252, f247, f250;
add.f32 f253, %58, %90;
add.f32 f254, %48, f253;
add.f32 f255, %69, %80;
add.f32 f256, f255, f254;
add.f32 f257, %60, %91;
add.f32 f258, %49, f257;
add.f32 f259, %71, %81;
add.f32 f260, f259, f258;
fma.rn.f32 f261, f253, 0f3E9E377A, %48;
mul.f32 f262, f255, 0f3F4F1BBD;
sub.f32 f263, f261, f262;
sub.f32 f264, %60, %91;
mul.f32 f265, f264, 0f3F737871;
sub.f32 f266, %71, %81;
mul.f32 f267, f266, 0fBF167918;
sub.f32 f268, f267, f265;
sub.f32 f269, f263, f268;
add.f32 f270, f268, f263;
mul.f32 f271, f253, 0f3F4F1BBD;
sub.f32 f272, %48, f271;
fma.rn.f32 f273, f255, 0f3E9E377A, f272;
mul.f32 f274, f264, 0f3F167918;
mul.f32 f275, f266, 0f3F737871;
sub.f32 f276, f275, f274;
sub.f32 f277, f273, f276;
add.f32 f278, f276, f273;
fma.rn.f32 f279, f257, 0f3E9E377A, %49;
mul.f32 f280, f259, 0f3F4F1BBD;
sub.f32 f281, f279, f280;
sub.f32 f282, %58, %90;
mul.f32 f283, f282, 0f3F737871;
sub.f32 f284, %69, %80;
mul.f32 f285, f284, 0fBF167918;
sub.f32 f286, f285, f283;
add.f32 f287, f286, f281;
sub.f32 f288, f281, f286;
mul.f32 f289, f257, 0f3F4F1BBD;
sub.f32 f290, %49, f289;
fma.rn.f32 f291, f259, 0f3E9E377A, f290;
mul.f32 f292, f282, 0f3F167918;
mul.f32 f293, f284, 0f3F737871;
sub.f32 f294, f293, f292;
add.f32 f295, f294, f291;
sub.f32 f296, f291, f294;
mul.f32 f297, f269, 0f3F4F1BBD;
mul.f32 f298, f287, 0fBF167918;
sub.f32 f299, f297, f298;
mul.f32 f300, f287, 0f3F4F1BBD;
fma.rn.f32 f301, f269, 0fBF167918, f300;
mul.f32 f302, f277, 0f3E9E377A;
mul.f32 f303, f295, 0fBF737871;
sub.f32 f304, f302, f303;
mul.f32 f305, f295, 0f3E9E377A;
fma.rn.f32 f306, f277, 0fBF737871, f305;
mul.f32 f307, f278, 0fBE9E377A;
mul.f32 f308, f296, 0fBF737871;
sub.f32 f309, f307, f308;
mul.f32 f310, f296, 0fBE9E377A;
fma.rn.f32 f311, f278, 0fBF737871, f310;
mul.f32 f312, f270, 0fBF4F1BBD;
mul.f32 f313, f288, 0fBF167918;
sub.f32 f314, f312, f313;
mul.f32 f315, f288, 0fBF4F1BBD;
fma.rn.f32 f316, f270, 0fBF167918, f315;
add.f32 f317, f212, f256;
add.f32 f318, f216, f260;
sub.f32 f319, f212, f256;
sub.f32 f320, f216, f260;
add.f32 f321, f225, f299;
add.f32 f322, f243, f301;
sub.f32 f323, f225, f299;
sub.f32 f324, f243, f301;
add.f32 f325, f233, f304;
add.f32 f326, f251, f306;
sub.f32 f327, f233, f304;
sub.f32 f328, f251, f306;
add.f32 f329, f234, f309;
add.f32 f330, f252, f311;
sub.f32 f331, f234, f309;
sub.f32 f332, f252, f311;
add.f32 f333, f226, f314;
add.f32 f334, f244, f316;
sub.f32 f335, f226, f314;
sub.f32 f336, f244, f316;
mul.f32 f337, f321, 0f3F737871;
mul.f32 f338, f322, 0fBE9E377A;
sub.f32 f339, f337, f338;
mul.f32 f340, f322, 0f3F737871;
fma.rn.f32 f341, f321, 0fBE9E377A, f340;
mul.f32 f342, f325, 0f3F4F1BBD;
mul.f32 f343, f326, 0fBF167918;
sub.f32 f344, f342, f343;
mul.f32 f345, f326, 0f3F4F1BBD;
fma.rn.f32 f346, f325, 0fBF167918, f345;
mul.f32 f347, f329, 0f3F167918;
mul.f32 f348, f330, 0fBF4F1BBD;
sub.f32 f349, f347, f348;
mul.f32 f350, f330, 0f3F167918;
fma.rn.f32 f351, f329, 0fBF4F1BBD, f350;
mul.f32 f352, f333, 0f3E9E377A;
mul.f32 f353, f334, 0fBF737871;
sub.f32 f354, f352, f353;
mul.f32 f355, f334, 0f3E9E377A;
fma.rn.f32 f356, f333, 0fBF737871, f355;
mul.f32 f357, f323, 0fBE9E377A;
mul.f32 f358, f324, 0fBF737871;
sub.f32 f359, f357, f358;
mul.f32 f360, f324, 0fBE9E377A;
fma.rn.f32 f361, f323, 0fBF737871, f360;
mul.f32 f362, f327, 0fBF167918;
mul.f32 f363, f328, 0fBF4F1BBD;
sub.f32 f364, f362, f363;
mul.f32 f365, f328, 0fBF167918;
fma.rn.f32 f366, f327, 0fBF4F1BBD, f365;
mul.f32 f367, f331, 0fBF4F1BBD;
mul.f32 f368, f332, 0fBF167918;
sub.f32 f369, f367, f368;
mul.f32 f370, f332, 0fBF4F1BBD;
fma.rn.f32 f371, f331, 0fBF167918, f370;
mul.f32 f372, f335, 0fBF737871;
mul.f32 f373, f336, 0fBE9E377A;
sub.f32 f374, f372, f373;
mul.f32 f375, f336, 0fBF737871;
fma.rn.f32 f376, f335, 0fBE9E377A, f375;
add.f32 %1, f190, f318;
add.f32 %0, f189, f317;
add.f32 %3, f194, f341;
add.f32 %2, f193, f339;
add.f32 %5, f198, f346;
add.f32 %4, f197, f344;
add.f32 %7, f202, f351;
add.f32 %6, f201, f349;
add.f32 %9, f206, f356;
add.f32 %8, f205, f354;
sub.f32 %11, f192, f319;
add.f32 %10, f191, f320;
add.f32 %13, f196, f361;
add.f32 %12, f195, f359;
add.f32 %15, f200, f366;
add.f32 %14, f199, f364;
add.f32 %17, f204, f371;
add.f32 %16, f203, f369;
add.f32 %19, f208, f376;
add.f32 %18, f207, f374;
sub.f32 %21, f190, f318;
sub.f32 %20, f189, f317;
sub.f32 %23, f194, f341;
sub.f32 %22, f193, f339;
sub.f32 %25, f198, f346;
sub.f32 %24, f197, f344;
sub.f32 %27, f202, f351;
sub.f32 %26, f201, f349;
sub.f32 %29, f206, f356;
sub.f32 %28, f205, f354;
add.f32 %31, f192, f319;
sub.f32 %30, f191, f320;
sub.f32 %33, f196, f361;
sub.f32 %32, f195, f359;
sub.f32 %35, f200, f366;
sub.f32 %34, f199, f364;
sub.f32 %37, f204, f371;
sub.f32 %36, f203, f369;
sub.f32 %39, f208, f376;
sub.f32 %38, f207, f374;
})"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y), "=f"(rmem[7].x), "=f"(rmem[7].y), "=f"(rmem[8].x), "=f"(rmem[8].y), "=f"(rmem[9].x), "=f"(rmem[9].y), "=f"(rmem[10].x), "=f"(rmem[10].y), "=f"(rmem[11].x), "=f"(rmem[11].y), "=f"(rmem[12].x), "=f"(rmem[12].y), "=f"(rmem[13].x), "=f"(rmem[13].y), "=f"(rmem[14].x), "=f"(rmem[14].y), "=f"(rmem[15].x), "=f"(rmem[15].y), "=f"(rmem[16].x), "=f"(rmem[16].y), "=f"(rmem[17].x), "=f"(rmem[17].y), "=f"(rmem[18].x), "=f"(rmem[18].y), "=f"(rmem[19].x), "=f"(rmem[19].y): "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y), "f"(rmem[7].x), "f"(rmem[7].y), "f"(rmem[7].y), "f"(rmem[8].x), "f"(rmem[8].y), "f"(rmem[8].y), "f"(rmem[9].x), "f"(rmem[9].y), "f"(rmem[10].x), "f"(rmem[10].y), "f"(rmem[10].y), "f"(rmem[11].x), "f"(rmem[11].y), "f"(rmem[11].y), "f"(rmem[12].x), "f"(rmem[12].y), "f"(rmem[13].x), "f"(rmem[13].y), "f"(rmem[13].y), "f"(rmem[14].x), "f"(rmem[14].y), "f"(rmem[14].y), "f"(rmem[15].x), "f"(rmem[15].y), "f"(rmem[16].x), "f"(rmem[16].y), "f"(rmem[16].y), "f"(rmem[17].x), "f"(rmem[17].y), "f"(rmem[17].y), "f"(rmem[18].x), "f"(rmem[18].y), "f"(rmem[19].x), "f"(rmem[19].y));
};


#endif

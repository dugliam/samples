//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_19_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_19_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<409, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .f64 fd<550>;
.reg .b64 rd<4>;
add.f64 fd77, %40, %75;
sub.f64 fd79, %40, %75;
add.f64 fd549, %42, %76;
sub.f64 fd80, %42, %76;
add.f64 fd81, %43, %73;
sub.f64 fd83, %43, %73;
add.f64 fd546, %77, %78;
sub.f64 fd84, %77, %78;
add.f64 fd85, %45, %71;
sub.f64 fd87, %45, %71;
add.f64 fd544, %46, %79;
sub.f64 fd88, %46, %79;
add.f64 fd89, %47, %69;
sub.f64 fd91, %47, %69;
add.f64 fd542, %80, %70;
sub.f64 fd92, %80, %70;
add.f64 fd93, %49, %67;
sub.f64 fd95, %49, %67;
add.f64 fd539, %81, %82;
sub.f64 fd96, %81, %82;
add.f64 fd97, %51, %65;
sub.f64 fd99, %51, %65;
add.f64 fd537, %52, %83;
sub.f64 fd100, %52, %83;
add.f64 fd101, %53, %63;
sub.f64 fd103, %53, %63;
add.f64 fd535, %84, %64;
sub.f64 fd104, %84, %64;
add.f64 fd105, %55, %61;
sub.f64 fd107, %55, %61;
add.f64 fd532, %85, %86;
sub.f64 fd108, %85, %86;
add.f64 fd109, %57, %59;
sub.f64 fd111, %57, %59;
add.f64 fd530, %58, %87;
sub.f64 fd112, %58, %87;
add.f64 fd113, %38, fd77;
add.f64 fd115, fd113, fd81;
add.f64 fd529, %39, fd549;
add.f64 fd116, fd529, fd546;
add.f64 fd117, fd115, fd85;
add.f64 fd118, fd116, fd544;
add.f64 fd119, fd117, fd89;
add.f64 fd120, fd118, fd542;
add.f64 fd121, fd119, fd93;
add.f64 fd122, fd120, fd539;
add.f64 fd123, fd121, fd97;
add.f64 fd124, fd122, fd537;
add.f64 fd125, fd123, fd101;
add.f64 fd126, fd124, fd535;
add.f64 fd127, fd125, fd105;
add.f64 fd128, fd126, fd532;
fma.rn.f64 fd129, fd77, 0d3FEE442285231BE1, %38;
fma.rn.f64 fd133, fd81, 0d3FE940A398F9CD23, fd129;
fma.rn.f64 fd528, fd80, 0dBFD4C7E04850CFAA, 0d0000000000000000;
fma.rn.f64 fd134, fd84, 0dBFE3A7A16B394423, fd528;
fma.rn.f64 fd527, fd549, 0d3FEE442285231BE1, %39;
fma.rn.f64 fd135, fd546, 0d3FE940A398F9CD23, fd527;
fma.rn.f64 fd526, fd79, 0dBFD4C7E04850CFAA, 0d0000000000000000;
fma.rn.f64 fd136, fd83, 0dBFE3A7A16B394423, fd526;
fma.rn.f64 fd137, fd85, 0d3FE180996C77C8CA, fd133;
fma.rn.f64 fd138, fd88, 0dBFEACA115AAE3DE4, fd134;
fma.rn.f64 fd139, fd544, 0d3FE180996C77C8CA, fd135;
fma.rn.f64 fd140, fd87, 0dBFEACA115AAE3DE4, fd136;
fma.rn.f64 fd141, fd89, 0d3FCF6C118574C83E, fd137;
fma.rn.f64 fd142, fd92, 0dBFEF0553B4DE2E18, fd138;
fma.rn.f64 fd143, fd542, 0d3FCF6C118574C83E, fd139;
fma.rn.f64 fd144, fd91, 0dBFEF0553B4DE2E18, fd140;
fma.rn.f64 fd145, fd93, 0dBFB523EB8420F5F5, fd141;
fma.rn.f64 fd146, fd96, 0dBFEFE40529A542AA, fd142;
fma.rn.f64 fd147, fd539, 0dBFB523EB8420F5F5, fd143;
fma.rn.f64 fd148, fd95, 0dBFEFE40529A542AA, fd144;
fma.rn.f64 fd149, fd97, 0dBFD9B560B9F596EA, fd145;
fma.rn.f64 fd150, fd100, 0dBFED4E03DD110B08, fd146;
fma.rn.f64 fd151, fd537, 0dBFD9B560B9F596EA, fd147;
fma.rn.f64 fd152, fd99, 0dBFED4E03DD110B08, fd148;
fma.rn.f64 fd153, fd101, 0dBFE5AC4A670A1CFF, fd149;
fma.rn.f64 fd154, fd104, 0dBFE78B0CDEE73E0F, fd150;
fma.rn.f64 fd155, fd535, 0dBFE5AC4A670A1CFF, fd151;
fma.rn.f64 fd156, fd103, 0dBFE78B0CDEE73E0F, fd152;
fma.rn.f64 fd157, fd105, 0dBFEC24A622E3E9F9, fd153;
fma.rn.f64 fd158, fd108, 0dBFDE75EC0DED7BEE, fd154;
fma.rn.f64 fd159, fd532, 0dBFEC24A622E3E9F9, fd155;
fma.rn.f64 fd160, fd107, 0dBFDE75EC0DED7BEE, fd156;
fma.rn.f64 fd161, fd109, 0dBFEF90459484F2B2, fd157;
fma.rn.f64 fd162, fd112, 0dBFC5116F7F2D58C5, fd158;
fma.rn.f64 fd163, fd530, 0dBFEF90459484F2B2, fd159;
fma.rn.f64 fd164, fd111, 0dBFC5116F7F2D58C5, fd160;
fma.rn.f64 fd165, fd77, 0d3FE940A398F9CD23, %38;
fma.rn.f64 fd169, fd81, 0d3FCF6C118574C83E, fd165;
fma.rn.f64 fd525, fd80, 0dBFE3A7A16B394423, 0d0000000000000000;
fma.rn.f64 fd170, fd84, 0dBFEF0553B4DE2E18, fd525;
fma.rn.f64 fd524, fd549, 0d3FE940A398F9CD23, %39;
fma.rn.f64 fd171, fd546, 0d3FCF6C118574C83E, fd524;
fma.rn.f64 fd523, fd79, 0dBFE3A7A16B394423, 0d0000000000000000;
fma.rn.f64 fd172, fd83, 0dBFEF0553B4DE2E18, fd523;
fma.rn.f64 fd173, fd85, 0dBFD9B560B9F596EA, fd169;
fma.rn.f64 fd174, fd88, 0dBFED4E03DD110B08, fd170;
fma.rn.f64 fd175, fd544, 0dBFD9B560B9F596EA, fd171;
fma.rn.f64 fd176, fd87, 0dBFED4E03DD110B08, fd172;
fma.rn.f64 fd177, fd89, 0dBFEC24A622E3E9F9, fd173;
fma.rn.f64 fd178, fd92, 0dBFDE75EC0DED7BEE, fd174;
fma.rn.f64 fd179, fd542, 0dBFEC24A622E3E9F9, fd175;
fma.rn.f64 fd180, fd91, 0dBFDE75EC0DED7BEE, fd176;
fma.rn.f64 fd181, fd93, 0dBFEF90459484F2B2, fd177;
fma.rn.f64 fd182, fd96, 0d3FC5116F7F2D58C5, fd178;
fma.rn.f64 fd183, fd539, 0dBFEF90459484F2B2, fd179;
fma.rn.f64 fd184, fd95, 0d3FC5116F7F2D58C5, fd180;
fma.rn.f64 fd185, fd97, 0dBFE5AC4A670A1CFF, fd181;
fma.rn.f64 fd186, fd100, 0d3FE78B0CDEE73E0F, fd182;
fma.rn.f64 fd187, fd537, 0dBFE5AC4A670A1CFF, fd183;
fma.rn.f64 fd188, fd99, 0d3FE78B0CDEE73E0F, fd184;
fma.rn.f64 fd189, fd101, 0dBFB523EB8420F5F5, fd185;
fma.rn.f64 fd190, fd104, 0d3FEFE40529A542AA, fd186;
fma.rn.f64 fd191, fd535, 0dBFB523EB8420F5F5, fd187;
fma.rn.f64 fd192, fd103, 0d3FEFE40529A542AA, fd188;
fma.rn.f64 fd193, fd105, 0d3FE180996C77C8CA, fd189;
fma.rn.f64 fd194, fd108, 0d3FEACA115AAE3DE4, fd190;
fma.rn.f64 fd195, fd532, 0d3FE180996C77C8CA, fd191;
fma.rn.f64 fd196, fd107, 0d3FEACA115AAE3DE4, fd192;
fma.rn.f64 fd197, fd109, 0d3FEE442285231BE1, fd193;
fma.rn.f64 fd198, fd112, 0d3FD4C7E04850CFAA, fd194;
fma.rn.f64 fd199, fd530, 0d3FEE442285231BE1, fd195;
fma.rn.f64 fd200, fd111, 0d3FD4C7E04850CFAA, fd196;
fma.rn.f64 fd201, fd77, 0d3FE180996C77C8CA, %38;
fma.rn.f64 fd205, fd81, 0dBFD9B560B9F596EA, fd201;
fma.rn.f64 fd522, fd80, 0dBFEACA115AAE3DE4, 0d0000000000000000;
fma.rn.f64 fd206, fd84, 0dBFED4E03DD110B08, fd522;
fma.rn.f64 fd521, fd549, 0d3FE180996C77C8CA, %39;
fma.rn.f64 fd207, fd546, 0dBFD9B560B9F596EA, fd521;
fma.rn.f64 fd520, fd79, 0dBFEACA115AAE3DE4, 0d0000000000000000;
fma.rn.f64 fd208, fd83, 0dBFED4E03DD110B08, fd520;
fma.rn.f64 fd209, fd85, 0dBFEF90459484F2B2, fd205;
fma.rn.f64 fd210, fd88, 0dBFC5116F7F2D58C5, fd206;
fma.rn.f64 fd211, fd544, 0dBFEF90459484F2B2, fd207;
fma.rn.f64 fd212, fd87, 0dBFC5116F7F2D58C5, fd208;
fma.rn.f64 fd213, fd89, 0dBFE5AC4A670A1CFF, fd209;
fma.rn.f64 fd214, fd92, 0d3FE78B0CDEE73E0F, fd210;
fma.rn.f64 fd215, fd542, 0dBFE5AC4A670A1CFF, fd211;
fma.rn.f64 fd216, fd91, 0d3FE78B0CDEE73E0F, fd212;
fma.rn.f64 fd217, fd93, 0d3FCF6C118574C83E, fd213;
fma.rn.f64 fd218, fd96, 0d3FEF0553B4DE2E18, fd214;
fma.rn.f64 fd219, fd539, 0d3FCF6C118574C83E, fd215;
fma.rn.f64 fd220, fd95, 0d3FEF0553B4DE2E18, fd216;
fma.rn.f64 fd221, fd97, 0d3FEE442285231BE1, fd217;
fma.rn.f64 fd222, fd100, 0d3FD4C7E04850CFAA, fd218;
fma.rn.f64 fd223, fd537, 0d3FEE442285231BE1, fd219;
fma.rn.f64 fd224, fd99, 0d3FD4C7E04850CFAA, fd220;
fma.rn.f64 fd225, fd101, 0d3FE940A398F9CD23, fd221;
fma.rn.f64 fd226, fd104, 0dBFE3A7A16B394423, fd222;
fma.rn.f64 fd227, fd535, 0d3FE940A398F9CD23, fd223;
fma.rn.f64 fd228, fd103, 0dBFE3A7A16B394423, fd224;
fma.rn.f64 fd229, fd105, 0dBFB523EB8420F5F5, fd225;
fma.rn.f64 fd230, fd108, 0dBFEFE40529A542AA, fd226;
fma.rn.f64 fd231, fd532, 0dBFB523EB8420F5F5, fd227;
fma.rn.f64 fd232, fd107, 0dBFEFE40529A542AA, fd228;
fma.rn.f64 fd233, fd109, 0dBFEC24A622E3E9F9, fd229;
fma.rn.f64 fd234, fd112, 0dBFDE75EC0DED7BEE, fd230;
fma.rn.f64 fd235, fd530, 0dBFEC24A622E3E9F9, fd231;
fma.rn.f64 fd236, fd111, 0dBFDE75EC0DED7BEE, fd232;
fma.rn.f64 fd237, fd77, 0d3FCF6C118574C83E, %38;
fma.rn.f64 fd241, fd81, 0dBFEC24A622E3E9F9, fd237;
fma.rn.f64 fd519, fd80, 0dBFEF0553B4DE2E18, 0d0000000000000000;
fma.rn.f64 fd242, fd84, 0dBFDE75EC0DED7BEE, fd519;
fma.rn.f64 fd518, fd549, 0d3FCF6C118574C83E, %39;
fma.rn.f64 fd243, fd546, 0dBFEC24A622E3E9F9, fd518;
fma.rn.f64 fd517, fd79, 0dBFEF0553B4DE2E18, 0d0000000000000000;
fma.rn.f64 fd244, fd83, 0dBFDE75EC0DED7BEE, fd517;
fma.rn.f64 fd245, fd85, 0dBFE5AC4A670A1CFF, fd241;
fma.rn.f64 fd246, fd88, 0d3FE78B0CDEE73E0F, fd242;
fma.rn.f64 fd247, fd544, 0dBFE5AC4A670A1CFF, fd243;
fma.rn.f64 fd248, fd87, 0d3FE78B0CDEE73E0F, fd244;
fma.rn.f64 fd249, fd89, 0d3FE180996C77C8CA, fd245;
fma.rn.f64 fd250, fd92, 0d3FEACA115AAE3DE4, fd246;
fma.rn.f64 fd251, fd542, 0d3FE180996C77C8CA, fd247;
fma.rn.f64 fd252, fd91, 0d3FEACA115AAE3DE4, fd248;
fma.rn.f64 fd253, fd93, 0d3FEE442285231BE1, fd249;
fma.rn.f64 fd254, fd96, 0dBFD4C7E04850CFAA, fd250;
fma.rn.f64 fd255, fd539, 0d3FEE442285231BE1, fd251;
fma.rn.f64 fd256, fd95, 0dBFD4C7E04850CFAA, fd252;
fma.rn.f64 fd257, fd97, 0dBFB523EB8420F5F5, fd253;
fma.rn.f64 fd258, fd100, 0dBFEFE40529A542AA, fd254;
fma.rn.f64 fd259, fd537, 0dBFB523EB8420F5F5, fd255;
fma.rn.f64 fd260, fd99, 0dBFEFE40529A542AA, fd256;
fma.rn.f64 fd261, fd101, 0dBFEF90459484F2B2, fd257;
fma.rn.f64 fd262, fd104, 0dBFC5116F7F2D58C5, fd258;
fma.rn.f64 fd263, fd535, 0dBFEF90459484F2B2, fd259;
fma.rn.f64 fd264, fd103, 0dBFC5116F7F2D58C5, fd260;
fma.rn.f64 fd265, fd105, 0dBFD9B560B9F596EA, fd261;
fma.rn.f64 fd266, fd108, 0d3FED4E03DD110B08, fd262;
fma.rn.f64 fd267, fd532, 0dBFD9B560B9F596EA, fd263;
fma.rn.f64 fd268, fd107, 0d3FED4E03DD110B08, fd264;
fma.rn.f64 fd269, fd109, 0d3FE940A398F9CD23, fd265;
fma.rn.f64 fd270, fd112, 0d3FE3A7A16B394423, fd266;
fma.rn.f64 fd271, fd530, 0d3FE940A398F9CD23, fd267;
fma.rn.f64 fd272, fd111, 0d3FE3A7A16B394423, fd268;
fma.rn.f64 fd273, fd77, 0dBFB523EB8420F5F5, %38;
fma.rn.f64 fd277, fd81, 0dBFEF90459484F2B2, fd273;
fma.rn.f64 fd516, fd80, 0dBFEFE40529A542AA, 0d0000000000000000;
fma.rn.f64 fd278, fd84, 0d3FC5116F7F2D58C5, fd516;
fma.rn.f64 fd515, fd549, 0dBFB523EB8420F5F5, %39;
fma.rn.f64 fd279, fd546, 0dBFEF90459484F2B2, fd515;
fma.rn.f64 fd514, fd79, 0dBFEFE40529A542AA, 0d0000000000000000;
fma.rn.f64 fd280, fd83, 0d3FC5116F7F2D58C5, fd514;
fma.rn.f64 fd281, fd85, 0d3FCF6C118574C83E, fd277;
fma.rn.f64 fd282, fd88, 0d3FEF0553B4DE2E18, fd278;
fma.rn.f64 fd283, fd544, 0d3FCF6C118574C83E, fd279;
fma.rn.f64 fd284, fd87, 0d3FEF0553B4DE2E18, fd280;
fma.rn.f64 fd285, fd89, 0d3FEE442285231BE1, fd281;
fma.rn.f64 fd286, fd92, 0dBFD4C7E04850CFAA, fd282;
fma.rn.f64 fd287, fd542, 0d3FEE442285231BE1, fd283;
fma.rn.f64 fd288, fd91, 0dBFD4C7E04850CFAA, fd284;
fma.rn.f64 fd289, fd93, 0dBFD9B560B9F596EA, fd285;
fma.rn.f64 fd290, fd96, 0dBFED4E03DD110B08, fd286;
fma.rn.f64 fd291, fd539, 0dBFD9B560B9F596EA, fd287;
fma.rn.f64 fd292, fd95, 0dBFED4E03DD110B08, fd288;
fma.rn.f64 fd293, fd97, 0dBFEC24A622E3E9F9, fd289;
fma.rn.f64 fd294, fd100, 0d3FDE75EC0DED7BEE, fd290;
fma.rn.f64 fd295, fd537, 0dBFEC24A622E3E9F9, fd291;
fma.rn.f64 fd296, fd99, 0d3FDE75EC0DED7BEE, fd292;
fma.rn.f64 fd297, fd101, 0d3FE180996C77C8CA, fd293;
fma.rn.f64 fd298, fd104, 0d3FEACA115AAE3DE4, fd294;
fma.rn.f64 fd299, fd535, 0d3FE180996C77C8CA, fd295;
fma.rn.f64 fd300, fd103, 0d3FEACA115AAE3DE4, fd296;
fma.rn.f64 fd301, fd105, 0d3FE940A398F9CD23, fd297;
fma.rn.f64 fd302, fd108, 0dBFE3A7A16B394423, fd298;
fma.rn.f64 fd303, fd532, 0d3FE940A398F9CD23, fd299;
fma.rn.f64 fd304, fd107, 0dBFE3A7A16B394423, fd300;
fma.rn.f64 fd305, fd109, 0dBFE5AC4A670A1CFF, fd301;
fma.rn.f64 fd306, fd112, 0dBFE78B0CDEE73E0F, fd302;
fma.rn.f64 fd307, fd530, 0dBFE5AC4A670A1CFF, fd303;
fma.rn.f64 fd308, fd111, 0dBFE78B0CDEE73E0F, fd304;
fma.rn.f64 fd309, fd77, 0dBFD9B560B9F596EA, %38;
fma.rn.f64 fd313, fd81, 0dBFE5AC4A670A1CFF, fd309;
fma.rn.f64 fd513, fd80, 0dBFED4E03DD110B08, 0d0000000000000000;
fma.rn.f64 fd314, fd84, 0d3FE78B0CDEE73E0F, fd513;
fma.rn.f64 fd512, fd549, 0dBFD9B560B9F596EA, %39;
fma.rn.f64 fd315, fd546, 0dBFE5AC4A670A1CFF, fd512;
fma.rn.f64 fd511, fd79, 0dBFED4E03DD110B08, 0d0000000000000000;
fma.rn.f64 fd316, fd83, 0d3FE78B0CDEE73E0F, fd511;
fma.rn.f64 fd317, fd85, 0d3FEE442285231BE1, fd313;
fma.rn.f64 fd318, fd88, 0d3FD4C7E04850CFAA, fd314;
fma.rn.f64 fd319, fd544, 0d3FEE442285231BE1, fd315;
fma.rn.f64 fd320, fd87, 0d3FD4C7E04850CFAA, fd316;
fma.rn.f64 fd321, fd89, 0dBFB523EB8420F5F5, fd317;
fma.rn.f64 fd322, fd92, 0dBFEFE40529A542AA, fd318;
fma.rn.f64 fd323, fd542, 0dBFB523EB8420F5F5, fd319;
fma.rn.f64 fd324, fd91, 0dBFEFE40529A542AA, fd320;
fma.rn.f64 fd325, fd93, 0dBFEC24A622E3E9F9, fd321;
fma.rn.f64 fd326, fd96, 0d3FDE75EC0DED7BEE, fd322;
fma.rn.f64 fd327, fd539, 0dBFEC24A622E3E9F9, fd323;
fma.rn.f64 fd328, fd95, 0d3FDE75EC0DED7BEE, fd324;
fma.rn.f64 fd329, fd97, 0d3FE940A398F9CD23, fd325;
fma.rn.f64 fd330, fd100, 0d3FE3A7A16B394423, fd326;
fma.rn.f64 fd331, fd537, 0d3FE940A398F9CD23, fd327;
fma.rn.f64 fd332, fd99, 0d3FE3A7A16B394423, fd328;
fma.rn.f64 fd333, fd101, 0d3FCF6C118574C83E, fd329;
fma.rn.f64 fd334, fd104, 0dBFEF0553B4DE2E18, fd330;
fma.rn.f64 fd335, fd535, 0d3FCF6C118574C83E, fd331;
fma.rn.f64 fd336, fd103, 0dBFEF0553B4DE2E18, fd332;
fma.rn.f64 fd337, fd105, 0dBFEF90459484F2B2, fd333;
fma.rn.f64 fd338, fd108, 0d3FC5116F7F2D58C5, fd334;
fma.rn.f64 fd339, fd532, 0dBFEF90459484F2B2, fd335;
fma.rn.f64 fd340, fd107, 0d3FC5116F7F2D58C5, fd336;
fma.rn.f64 fd341, fd109, 0d3FE180996C77C8CA, fd337;
fma.rn.f64 fd342, fd112, 0d3FEACA115AAE3DE4, fd338;
fma.rn.f64 fd343, fd530, 0d3FE180996C77C8CA, fd339;
fma.rn.f64 fd344, fd111, 0d3FEACA115AAE3DE4, fd340;
fma.rn.f64 fd345, fd77, 0dBFE5AC4A670A1CFF, %38;
fma.rn.f64 fd349, fd81, 0dBFB523EB8420F5F5, fd345;
fma.rn.f64 fd510, fd80, 0dBFE78B0CDEE73E0F, 0d0000000000000000;
fma.rn.f64 fd350, fd84, 0d3FEFE40529A542AA, fd510;
fma.rn.f64 fd509, fd549, 0dBFE5AC4A670A1CFF, %39;
fma.rn.f64 fd351, fd546, 0dBFB523EB8420F5F5, fd509;
fma.rn.f64 fd508, fd79, 0dBFE78B0CDEE73E0F, 0d0000000000000000;
fma.rn.f64 fd352, fd83, 0d3FEFE40529A542AA, fd508;
fma.rn.f64 fd353, fd85, 0d3FE940A398F9CD23, fd349;
fma.rn.f64 fd354, fd88, 0dBFE3A7A16B394423, fd350;
fma.rn.f64 fd355, fd544, 0d3FE940A398F9CD23, fd351;
fma.rn.f64 fd356, fd87, 0dBFE3A7A16B394423, fd352;
fma.rn.f64 fd357, fd89, 0dBFEF90459484F2B2, fd353;
fma.rn.f64 fd358, fd92, 0dBFC5116F7F2D58C5, fd354;
fma.rn.f64 fd359, fd542, 0dBFEF90459484F2B2, fd355;
fma.rn.f64 fd360, fd91, 0dBFC5116F7F2D58C5, fd356;
fma.rn.f64 fd361, fd93, 0d3FE180996C77C8CA, fd357;
fma.rn.f64 fd362, fd96, 0d3FEACA115AAE3DE4, fd358;
fma.rn.f64 fd363, fd539, 0d3FE180996C77C8CA, fd359;
fma.rn.f64 fd364, fd95, 0d3FEACA115AAE3DE4, fd360;
fma.rn.f64 fd365, fd97, 0d3FCF6C118574C83E, fd361;
fma.rn.f64 fd366, fd100, 0dBFEF0553B4DE2E18, fd362;
fma.rn.f64 fd367, fd537, 0d3FCF6C118574C83E, fd363;
fma.rn.f64 fd368, fd99, 0dBFEF0553B4DE2E18, fd364;
fma.rn.f64 fd369, fd101, 0dBFEC24A622E3E9F9, fd365;
fma.rn.f64 fd370, fd104, 0d3FDE75EC0DED7BEE, fd366;
fma.rn.f64 fd371, fd535, 0dBFEC24A622E3E9F9, fd367;
fma.rn.f64 fd372, fd103, 0d3FDE75EC0DED7BEE, fd368;
fma.rn.f64 fd373, fd105, 0d3FEE442285231BE1, fd369;
fma.rn.f64 fd374, fd108, 0d3FD4C7E04850CFAA, fd370;
fma.rn.f64 fd375, fd532, 0d3FEE442285231BE1, fd371;
fma.rn.f64 fd376, fd107, 0d3FD4C7E04850CFAA, fd372;
fma.rn.f64 fd377, fd109, 0dBFD9B560B9F596EA, fd373;
fma.rn.f64 fd378, fd112, 0dBFED4E03DD110B08, fd374;
fma.rn.f64 fd379, fd530, 0dBFD9B560B9F596EA, fd375;
fma.rn.f64 fd380, fd111, 0dBFED4E03DD110B08, fd376;
fma.rn.f64 fd381, fd77, 0dBFEC24A622E3E9F9, %38;
fma.rn.f64 fd385, fd81, 0d3FE180996C77C8CA, fd381;
fma.rn.f64 fd507, fd80, 0dBFDE75EC0DED7BEE, 0d0000000000000000;
fma.rn.f64 fd386, fd84, 0d3FEACA115AAE3DE4, fd507;
fma.rn.f64 fd506, fd549, 0dBFEC24A622E3E9F9, %39;
fma.rn.f64 fd387, fd546, 0d3FE180996C77C8CA, fd506;
fma.rn.f64 fd505, fd79, 0dBFDE75EC0DED7BEE, 0d0000000000000000;
fma.rn.f64 fd388, fd83, 0d3FEACA115AAE3DE4, fd505;
fma.rn.f64 fd389, fd85, 0dBFB523EB8420F5F5, fd385;
fma.rn.f64 fd390, fd88, 0dBFEFE40529A542AA, fd386;
fma.rn.f64 fd391, fd544, 0dBFB523EB8420F5F5, fd387;
fma.rn.f64 fd392, fd87, 0dBFEFE40529A542AA, fd388;
fma.rn.f64 fd393, fd89, 0dBFD9B560B9F596EA, fd389;
fma.rn.f64 fd394, fd92, 0d3FED4E03DD110B08, fd390;
fma.rn.f64 fd395, fd542, 0dBFD9B560B9F596EA, fd391;
fma.rn.f64 fd396, fd91, 0d3FED4E03DD110B08, fd392;
fma.rn.f64 fd397, fd93, 0d3FE940A398F9CD23, fd393;
fma.rn.f64 fd398, fd96, 0dBFE3A7A16B394423, fd394;
fma.rn.f64 fd399, fd539, 0d3FE940A398F9CD23, fd395;
fma.rn.f64 fd400, fd95, 0dBFE3A7A16B394423, fd396;
fma.rn.f64 fd401, fd97, 0dBFEF90459484F2B2, fd397;
fma.rn.f64 fd402, fd100, 0d3FC5116F7F2D58C5, fd398;
fma.rn.f64 fd403, fd537, 0dBFEF90459484F2B2, fd399;
fma.rn.f64 fd404, fd99, 0d3FC5116F7F2D58C5, fd400;
fma.rn.f64 fd405, fd101, 0d3FEE442285231BE1, fd401;
fma.rn.f64 fd406, fd104, 0d3FD4C7E04850CFAA, fd402;
fma.rn.f64 fd407, fd535, 0d3FEE442285231BE1, fd403;
fma.rn.f64 fd408, fd103, 0d3FD4C7E04850CFAA, fd404;
fma.rn.f64 fd409, fd105, 0dBFE5AC4A670A1CFF, fd405;
fma.rn.f64 fd410, fd108, 0dBFE78B0CDEE73E0F, fd406;
fma.rn.f64 fd411, fd532, 0dBFE5AC4A670A1CFF, fd407;
fma.rn.f64 fd412, fd107, 0dBFE78B0CDEE73E0F, fd408;
fma.rn.f64 fd413, fd109, 0d3FCF6C118574C83E, fd409;
fma.rn.f64 fd414, fd112, 0d3FEF0553B4DE2E18, fd410;
fma.rn.f64 fd415, fd530, 0d3FCF6C118574C83E, fd411;
fma.rn.f64 fd416, fd111, 0d3FEF0553B4DE2E18, fd412;
fma.rn.f64 fd417, fd77, 0dBFEF90459484F2B2, %38;
fma.rn.f64 fd418, fd80, 0dBFC5116F7F2D58C5, 0d0000000000000000;
fma.rn.f64 fd419, fd549, 0dBFEF90459484F2B2, %39;
fma.rn.f64 fd420, fd79, 0dBFC5116F7F2D58C5, 0d0000000000000000;
fma.rn.f64 fd421, fd81, 0d3FEE442285231BE1, fd417;
fma.rn.f64 fd422, fd84, 0d3FD4C7E04850CFAA, fd418;
fma.rn.f64 fd423, fd546, 0d3FEE442285231BE1, fd419;
fma.rn.f64 fd424, fd83, 0d3FD4C7E04850CFAA, fd420;
fma.rn.f64 fd425, fd85, 0dBFEC24A622E3E9F9, fd421;
fma.rn.f64 fd426, fd88, 0dBFDE75EC0DED7BEE, fd422;
fma.rn.f64 fd427, fd544, 0dBFEC24A622E3E9F9, fd423;
fma.rn.f64 fd428, fd87, 0dBFDE75EC0DED7BEE, fd424;
fma.rn.f64 fd429, fd89, 0d3FE940A398F9CD23, fd425;
fma.rn.f64 fd430, fd92, 0d3FE3A7A16B394423, fd426;
fma.rn.f64 fd431, fd542, 0d3FE940A398F9CD23, fd427;
fma.rn.f64 fd432, fd91, 0d3FE3A7A16B394423, fd428;
fma.rn.f64 fd433, fd93, 0dBFE5AC4A670A1CFF, fd429;
fma.rn.f64 fd434, fd96, 0dBFE78B0CDEE73E0F, fd430;
fma.rn.f64 fd435, fd539, 0dBFE5AC4A670A1CFF, fd431;
fma.rn.f64 fd436, fd95, 0dBFE78B0CDEE73E0F, fd432;
fma.rn.f64 fd437, fd97, 0d3FE180996C77C8CA, fd433;
fma.rn.f64 fd438, fd100, 0d3FEACA115AAE3DE4, fd434;
fma.rn.f64 fd439, fd537, 0d3FE180996C77C8CA, fd435;
fma.rn.f64 fd440, fd99, 0d3FEACA115AAE3DE4, fd436;
fma.rn.f64 fd441, fd101, 0dBFD9B560B9F596EA, fd437;
fma.rn.f64 fd442, fd104, 0dBFED4E03DD110B08, fd438;
fma.rn.f64 fd443, fd535, 0dBFD9B560B9F596EA, fd439;
fma.rn.f64 fd444, fd103, 0dBFED4E03DD110B08, fd440;
fma.rn.f64 fd445, fd105, 0d3FCF6C118574C83E, fd441;
fma.rn.f64 fd446, fd108, 0d3FEF0553B4DE2E18, fd442;
fma.rn.f64 fd447, fd532, 0d3FCF6C118574C83E, fd443;
fma.rn.f64 fd448, fd107, 0d3FEF0553B4DE2E18, fd444;
fma.rn.f64 fd449, fd109, 0dBFB523EB8420F5F5, fd445;
fma.rn.f64 fd450, fd112, 0dBFEFE40529A542AA, fd446;
fma.rn.f64 fd451, fd530, 0dBFB523EB8420F5F5, fd447;
fma.rn.f64 fd452, fd111, 0dBFEFE40529A542AA, fd448;
add.f64 %1, fd128, fd530;
add.f64 %0, fd127, fd109;
add.f64 %3, fd163, fd164;
sub.f64 %2, fd161, fd162;
add.f64 %5, fd199, fd200;
sub.f64 %4, fd197, fd198;
add.f64 %7, fd235, fd236;
sub.f64 %6, fd233, fd234;
sub.f64 %8, fd269, fd270;
add.f64 %9, fd271, fd272;
sub.f64 %10, fd305, fd306;
add.f64 %11, fd307, fd308;
sub.f64 %12, fd341, fd342;
add.f64 %13, fd343, fd344;
sub.f64 %14, fd377, fd378;
add.f64 %15, fd379, fd380;
add.f64 %17, fd415, fd416;
sub.f64 %16, fd413, fd414;
add.f64 %19, fd451, fd452;
sub.f64 %18, fd449, fd450;
sub.f64 %21, fd451, fd452;
add.f64 %20, fd449, fd450;
sub.f64 %23, fd415, fd416;
add.f64 %22, fd413, fd414;
sub.f64 %25, fd379, fd380;
add.f64 %24, fd377, fd378;
sub.f64 %27, fd343, fd344;
add.f64 %26, fd341, fd342;
sub.f64 %29, fd307, fd308;
add.f64 %28, fd305, fd306;
sub.f64 %31, fd271, fd272;
add.f64 %30, fd269, fd270;
sub.f64 %33, fd235, fd236;
add.f64 %32, fd233, fd234;
sub.f64 %35, fd199, fd200;
add.f64 %34, fd197, fd198;
sub.f64 %37, fd163, fd164;
add.f64 %36, fd161, fd162;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y), "=d"(rmem[10].x), "=d"(rmem[10].y), "=d"(rmem[11].x), "=d"(rmem[11].y), "=d"(rmem[12].x), "=d"(rmem[12].y), "=d"(rmem[13].x), "=d"(rmem[13].y), "=d"(rmem[14].x), "=d"(rmem[14].y), "=d"(rmem[15].x), "=d"(rmem[15].y), "=d"(rmem[16].x), "=d"(rmem[16].y), "=d"(rmem[17].x), "=d"(rmem[17].y), "=d"(rmem[18].x), "=d"(rmem[18].y): "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y), "d"(rmem[10].x), "d"(rmem[10].y), "d"(rmem[11].x), "d"(rmem[11].y), "d"(rmem[12].x), "d"(rmem[12].y), "d"(rmem[13].x), "d"(rmem[13].y), "d"(rmem[14].x), "d"(rmem[14].y), "d"(rmem[15].x), "d"(rmem[15].y), "d"(rmem[16].x), "d"(rmem[16].y), "d"(rmem[17].x), "d"(rmem[17].y), "d"(rmem[18].x), "d"(rmem[18].y), "d"(rmem[2].y), "d"(rmem[17].y), "d"(rmem[16].y), "d"(rmem[4].y), "d"(rmem[5].y), "d"(rmem[14].y), "d"(rmem[13].y), "d"(rmem[7].y), "d"(rmem[8].y), "d"(rmem[11].y), "d"(rmem[10].y));
};


#endif


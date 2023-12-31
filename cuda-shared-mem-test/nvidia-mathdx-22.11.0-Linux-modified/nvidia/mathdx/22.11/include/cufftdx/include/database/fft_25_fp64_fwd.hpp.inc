//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_25_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_25_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<533, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .f64 fd<621>;
.reg .b64 rd<2>;
add.f64 fd101, %63, %103;
add.f64 fd102, %50, fd101;
add.f64 fd103, %76, %90;
add.f64 fd104, fd103, fd102;
add.f64 fd105, %65, %105;
add.f64 fd106, %51, fd105;
add.f64 fd107, %78, %91;
add.f64 fd108, fd107, fd106;
fma.rn.f64 fd109, fd101, 0d3FD3C6EF372FE950, %50;
mul.f64 fd110, fd103, 0d3FE9E3779B97F4A8;
sub.f64 fd111, fd109, fd110;
sub.f64 fd112, %65, %105;
mul.f64 fd113, fd112, 0d3FEE6F0E134454FF;
sub.f64 fd114, %78, %91;
mul.f64 fd115, fd114, 0dBFE2CF2304755A5E;
sub.f64 fd116, fd115, fd113;
sub.f64 fd117, fd111, fd116;
add.f64 fd118, fd116, fd111;
mul.f64 fd119, fd101, 0d3FE9E3779B97F4A8;
sub.f64 fd120, %50, fd119;
fma.rn.f64 fd121, fd103, 0d3FD3C6EF372FE950, fd120;
mul.f64 fd122, fd112, 0d3FE2CF2304755A5E;
mul.f64 fd123, fd114, 0d3FEE6F0E134454FF;
sub.f64 fd124, fd123, fd122;
sub.f64 fd125, fd121, fd124;
add.f64 fd126, fd124, fd121;
fma.rn.f64 fd127, fd105, 0d3FD3C6EF372FE950, %51;
mul.f64 fd128, fd107, 0d3FE9E3779B97F4A8;
sub.f64 fd129, fd127, fd128;
sub.f64 fd130, %63, %103;
mul.f64 fd131, fd130, 0d3FEE6F0E134454FF;
sub.f64 fd132, %76, %90;
mul.f64 fd133, fd132, 0dBFE2CF2304755A5E;
sub.f64 fd134, fd133, fd131;
add.f64 fd135, fd134, fd129;
sub.f64 fd136, fd129, fd134;
mul.f64 fd137, fd105, 0d3FE9E3779B97F4A8;
sub.f64 fd138, %51, fd137;
fma.rn.f64 fd139, fd107, 0d3FD3C6EF372FE950, fd138;
mul.f64 fd140, fd130, 0d3FE2CF2304755A5E;
mul.f64 fd141, fd132, 0d3FEE6F0E134454FF;
sub.f64 fd142, fd141, fd140;
add.f64 fd143, fd142, fd139;
sub.f64 fd144, fd139, fd142;
add.f64 fd145, %66, %106;
add.f64 fd146, %52, fd145;
add.f64 fd147, %79, %92;
add.f64 fd148, fd147, fd146;
add.f64 fd149, %67, %107;
add.f64 fd150, %54, fd149;
add.f64 fd151, %81, %94;
add.f64 fd152, fd151, fd150;
fma.rn.f64 fd153, fd145, 0d3FD3C6EF372FE950, %52;
mul.f64 fd154, fd147, 0d3FE9E3779B97F4A8;
sub.f64 fd155, fd153, fd154;
sub.f64 fd156, %67, %107;
mul.f64 fd157, fd156, 0d3FEE6F0E134454FF;
sub.f64 fd158, %81, %94;
mul.f64 fd159, fd158, 0dBFE2CF2304755A5E;
sub.f64 fd160, fd159, fd157;
sub.f64 fd161, fd155, fd160;
add.f64 fd162, fd160, fd155;
mul.f64 fd163, fd145, 0d3FE9E3779B97F4A8;
sub.f64 fd164, %52, fd163;
fma.rn.f64 fd165, fd147, 0d3FD3C6EF372FE950, fd164;
mul.f64 fd166, fd156, 0d3FE2CF2304755A5E;
mul.f64 fd167, fd158, 0d3FEE6F0E134454FF;
sub.f64 fd168, fd167, fd166;
sub.f64 fd169, fd165, fd168;
add.f64 fd170, fd168, fd165;
fma.rn.f64 fd171, fd149, 0d3FD3C6EF372FE950, %54;
mul.f64 fd172, fd151, 0d3FE9E3779B97F4A8;
sub.f64 fd173, fd171, fd172;
sub.f64 fd174, %66, %106;
mul.f64 fd175, fd174, 0d3FEE6F0E134454FF;
sub.f64 fd176, %79, %92;
mul.f64 fd177, fd176, 0dBFE2CF2304755A5E;
sub.f64 fd178, fd177, fd175;
add.f64 fd179, fd178, fd173;
sub.f64 fd180, fd173, fd178;
mul.f64 fd181, fd149, 0d3FE9E3779B97F4A8;
sub.f64 fd182, %54, fd181;
fma.rn.f64 fd183, fd151, 0d3FD3C6EF372FE950, fd182;
mul.f64 fd184, fd174, 0d3FE2CF2304755A5E;
mul.f64 fd185, fd176, 0d3FEE6F0E134454FF;
sub.f64 fd186, fd185, fd184;
add.f64 fd187, fd186, fd183;
sub.f64 fd188, fd183, fd186;
add.f64 fd189, %68, %108;
add.f64 fd190, %55, fd189;
add.f64 fd191, %82, %95;
add.f64 fd192, fd191, fd190;
add.f64 fd193, %70, %110;
add.f64 fd194, %57, fd193;
add.f64 fd195, %83, %97;
add.f64 fd196, fd195, fd194;
fma.rn.f64 fd197, fd189, 0d3FD3C6EF372FE950, %55;
mul.f64 fd198, fd191, 0d3FE9E3779B97F4A8;
sub.f64 fd199, fd197, fd198;
sub.f64 fd200, %70, %110;
mul.f64 fd201, fd200, 0d3FEE6F0E134454FF;
sub.f64 fd202, %83, %97;
mul.f64 fd203, fd202, 0dBFE2CF2304755A5E;
sub.f64 fd204, fd203, fd201;
sub.f64 fd205, fd199, fd204;
add.f64 fd206, fd204, fd199;
mul.f64 fd207, fd189, 0d3FE9E3779B97F4A8;
sub.f64 fd208, %55, fd207;
fma.rn.f64 fd209, fd191, 0d3FD3C6EF372FE950, fd208;
mul.f64 fd210, fd200, 0d3FE2CF2304755A5E;
mul.f64 fd211, fd202, 0d3FEE6F0E134454FF;
sub.f64 fd212, fd211, fd210;
sub.f64 fd213, fd209, fd212;
add.f64 fd214, fd212, fd209;
fma.rn.f64 fd215, fd193, 0d3FD3C6EF372FE950, %57;
mul.f64 fd216, fd195, 0d3FE9E3779B97F4A8;
sub.f64 fd217, fd215, fd216;
sub.f64 fd218, %68, %108;
mul.f64 fd219, fd218, 0d3FEE6F0E134454FF;
sub.f64 fd220, %82, %95;
mul.f64 fd221, fd220, 0dBFE2CF2304755A5E;
sub.f64 fd222, fd221, fd219;
add.f64 fd223, fd222, fd217;
sub.f64 fd224, fd217, fd222;
mul.f64 fd225, fd193, 0d3FE9E3779B97F4A8;
sub.f64 fd226, %57, fd225;
fma.rn.f64 fd227, fd195, 0d3FD3C6EF372FE950, fd226;
mul.f64 fd228, fd218, 0d3FE2CF2304755A5E;
mul.f64 fd229, fd220, 0d3FEE6F0E134454FF;
sub.f64 fd230, fd229, fd228;
add.f64 fd231, fd230, fd227;
sub.f64 fd232, fd227, fd230;
add.f64 fd233, %71, %111;
add.f64 fd234, %58, fd233;
add.f64 fd235, %84, %98;
add.f64 fd236, fd235, fd234;
add.f64 fd237, %73, %113;
add.f64 fd238, %59, fd237;
add.f64 fd239, %86, %99;
add.f64 fd240, fd239, fd238;
fma.rn.f64 fd241, fd233, 0d3FD3C6EF372FE950, %58;
mul.f64 fd242, fd235, 0d3FE9E3779B97F4A8;
sub.f64 fd243, fd241, fd242;
sub.f64 fd244, %73, %113;
mul.f64 fd245, fd244, 0d3FEE6F0E134454FF;
sub.f64 fd246, %86, %99;
mul.f64 fd247, fd246, 0dBFE2CF2304755A5E;
sub.f64 fd248, fd247, fd245;
sub.f64 fd249, fd243, fd248;
add.f64 fd250, fd248, fd243;
mul.f64 fd251, fd233, 0d3FE9E3779B97F4A8;
sub.f64 fd252, %58, fd251;
fma.rn.f64 fd253, fd235, 0d3FD3C6EF372FE950, fd252;
mul.f64 fd254, fd244, 0d3FE2CF2304755A5E;
mul.f64 fd255, fd246, 0d3FEE6F0E134454FF;
sub.f64 fd256, fd255, fd254;
sub.f64 fd257, fd253, fd256;
add.f64 fd258, fd256, fd253;
fma.rn.f64 fd259, fd237, 0d3FD3C6EF372FE950, %59;
mul.f64 fd260, fd239, 0d3FE9E3779B97F4A8;
sub.f64 fd261, fd259, fd260;
sub.f64 fd262, %71, %111;
mul.f64 fd263, fd262, 0d3FEE6F0E134454FF;
sub.f64 fd264, %84, %98;
mul.f64 fd265, fd264, 0dBFE2CF2304755A5E;
sub.f64 fd266, fd265, fd263;
add.f64 fd267, fd266, fd261;
sub.f64 fd268, fd261, fd266;
mul.f64 fd269, fd237, 0d3FE9E3779B97F4A8;
sub.f64 fd270, %59, fd269;
fma.rn.f64 fd271, fd239, 0d3FD3C6EF372FE950, fd270;
mul.f64 fd272, fd262, 0d3FE2CF2304755A5E;
mul.f64 fd273, fd264, 0d3FEE6F0E134454FF;
sub.f64 fd274, fd273, fd272;
add.f64 fd275, fd274, fd271;
sub.f64 fd276, fd271, fd274;
add.f64 fd277, %74, %114;
add.f64 fd278, %60, fd277;
add.f64 fd279, %87, %100;
add.f64 fd280, fd279, fd278;
add.f64 fd281, %75, %115;
add.f64 fd282, %62, fd281;
add.f64 fd283, %89, %102;
add.f64 fd284, fd283, fd282;
fma.rn.f64 fd285, fd277, 0d3FD3C6EF372FE950, %60;
mul.f64 fd286, fd279, 0d3FE9E3779B97F4A8;
sub.f64 fd287, fd285, fd286;
sub.f64 fd288, %75, %115;
mul.f64 fd289, fd288, 0d3FEE6F0E134454FF;
sub.f64 fd290, %89, %102;
mul.f64 fd291, fd290, 0dBFE2CF2304755A5E;
sub.f64 fd292, fd291, fd289;
sub.f64 fd293, fd287, fd292;
add.f64 fd294, fd292, fd287;
mul.f64 fd295, fd277, 0d3FE9E3779B97F4A8;
sub.f64 fd296, %60, fd295;
fma.rn.f64 fd297, fd279, 0d3FD3C6EF372FE950, fd296;
mul.f64 fd298, fd288, 0d3FE2CF2304755A5E;
mul.f64 fd299, fd290, 0d3FEE6F0E134454FF;
sub.f64 fd300, fd299, fd298;
sub.f64 fd301, fd297, fd300;
add.f64 fd302, fd300, fd297;
fma.rn.f64 fd303, fd281, 0d3FD3C6EF372FE950, %62;
mul.f64 fd304, fd283, 0d3FE9E3779B97F4A8;
sub.f64 fd305, fd303, fd304;
sub.f64 fd306, %74, %114;
mul.f64 fd307, fd306, 0d3FEE6F0E134454FF;
sub.f64 fd308, %87, %100;
mul.f64 fd309, fd308, 0dBFE2CF2304755A5E;
sub.f64 fd310, fd309, fd307;
add.f64 fd311, fd310, fd305;
sub.f64 fd312, fd305, fd310;
mul.f64 fd313, fd281, 0d3FE9E3779B97F4A8;
sub.f64 fd314, %62, fd313;
fma.rn.f64 fd315, fd283, 0d3FD3C6EF372FE950, fd314;
mul.f64 fd316, fd306, 0d3FE2CF2304755A5E;
mul.f64 fd317, fd308, 0d3FEE6F0E134454FF;
sub.f64 fd318, fd317, fd316;
add.f64 fd319, fd318, fd315;
sub.f64 fd320, fd315, fd318;
mul.f64 fd321, fd161, 0d3FEEFEA21D101EE0;
mul.f64 fd322, fd179, 0dBFCFD511FA1C0796;
sub.f64 fd323, fd321, fd322;
mul.f64 fd324, fd179, 0d3FEEFEA21D101EE0;
fma.rn.f64 fd325, fd161, 0dBFCFD511FA1C0796, fd324;
mul.f64 fd326, fd205, 0d3FEC0AB44E81C059;
mul.f64 fd327, fd223, 0dBFDED50D5CBFA951;
sub.f64 fd328, fd326, fd327;
mul.f64 fd329, fd223, 0d3FEC0AB44E81C059;
fma.rn.f64 fd330, fd205, 0dBFDED50D5CBFA951, fd329;
mul.f64 fd331, fd249, 0d3FE753B603D2B816;
mul.f64 fd332, fd267, 0dBFE5E7CF55112014;
sub.f64 fd333, fd331, fd332;
mul.f64 fd334, fd267, 0d3FE753B603D2B816;
fma.rn.f64 fd335, fd249, 0dBFE5E7CF55112014, fd334;
mul.f64 fd336, fd293, 0d3FE1257E3C182B51;
mul.f64 fd337, fd311, 0dBFEB04BBFF642E86;
sub.f64 fd338, fd336, fd337;
mul.f64 fd339, fd311, 0d3FE1257E3C182B51;
fma.rn.f64 fd340, fd293, 0dBFEB04BBFF642E86, fd339;
mul.f64 fd341, fd169, 0d3FEC0AB44E81C059;
mul.f64 fd342, fd187, 0dBFDED50D5CBFA951;
sub.f64 fd343, fd341, fd342;
mul.f64 fd344, fd187, 0d3FEC0AB44E81C059;
fma.rn.f64 fd345, fd169, 0dBFDED50D5CBFA951, fd344;
mul.f64 fd346, fd213, 0d3FE1257E3C182B51;
mul.f64 fd347, fd231, 0dBFEB04BBFF642E86;
sub.f64 fd348, fd346, fd347;
mul.f64 fd349, fd231, 0d3FE1257E3C182B51;
fma.rn.f64 fd350, fd213, 0dBFEB04BBFF642E86, fd349;
mul.f64 fd351, fd257, 0d3FB0130A1BE09379;
mul.f64 fd352, fd275, 0dBFEFEFD5BFE443FE;
sub.f64 fd353, fd351, fd352;
mul.f64 fd354, fd275, 0d3FB0130A1BE09379;
fma.rn.f64 fd355, fd257, 0dBFEFEFD5BFE443FE, fd354;
mul.f64 fd356, fd301, 0dBFDB3FF7C925819C;
mul.f64 fd357, fd319, 0dBFECF457DCDC158C;
sub.f64 fd358, fd356, fd357;
mul.f64 fd359, fd319, 0dBFDB3FF7C925819C;
fma.rn.f64 fd360, fd301, 0dBFECF457DCDC158C, fd359;
mul.f64 fd361, fd170, 0d3FE753B603D2B816;
mul.f64 fd362, fd188, 0dBFE5E7CF55112014;
sub.f64 fd363, fd361, fd362;
mul.f64 fd364, fd188, 0d3FE753B603D2B816;
fma.rn.f64 fd365, fd170, 0dBFE5E7CF55112014, fd364;
mul.f64 fd366, fd214, 0d3FB0130A1BE09379;
mul.f64 fd367, fd232, 0dBFEFEFD5BFE443FE;
sub.f64 fd368, fd366, fd367;
mul.f64 fd369, fd232, 0d3FB0130A1BE09379;
fma.rn.f64 fd370, fd214, 0dBFEFEFD5BFE443FE, fd369;
mul.f64 fd371, fd258, 0dBFE465C6FEB501BC;
mul.f64 fd372, fd276, 0dBFE8A80B635B6BEA;
sub.f64 fd373, fd371, fd372;
mul.f64 fd374, fd276, 0dBFE465C6FEB501BC;
fma.rn.f64 fd375, fd258, 0dBFE8A80B635B6BEA, fd374;
mul.f64 fd376, fd302, 0dBFEFBF675480D903;
mul.f64 fd377, fd320, 0dBFC00AEB5DA15BE0;
sub.f64 fd378, fd376, fd377;
mul.f64 fd379, fd320, 0dBFEFBF675480D903;
fma.rn.f64 fd380, fd302, 0dBFC00AEB5DA15BE0, fd379;
mul.f64 fd381, fd162, 0d3FE1257E3C182B51;
mul.f64 fd382, fd180, 0dBFEB04BBFF642E86;
sub.f64 fd383, fd381, fd382;
mul.f64 fd384, fd180, 0d3FE1257E3C182B51;
fma.rn.f64 fd385, fd162, 0dBFEB04BBFF642E86, fd384;
mul.f64 fd386, fd206, 0dBFDB3FF7C925819C;
mul.f64 fd387, fd224, 0dBFECF457DCDC158C;
sub.f64 fd388, fd386, fd387;
mul.f64 fd389, fd224, 0dBFDB3FF7C925819C;
fma.rn.f64 fd390, fd206, 0dBFECF457DCDC158C, fd389;
mul.f64 fd391, fd250, 0dBFEFBF675480D903;
mul.f64 fd392, fd268, 0dBFC00AEB5DA15BE0;
sub.f64 fd393, fd391, fd392;
mul.f64 fd394, fd268, 0dBFEFBF675480D903;
fma.rn.f64 fd395, fd250, 0dBFC00AEB5DA15BE0, fd394;
mul.f64 fd396, fd294, 0dBFE465C6FEB501BC;
mul.f64 fd397, fd312, 0d3FE8A80B635B6BEA;
sub.f64 fd398, fd396, fd397;
mul.f64 fd399, fd312, 0dBFE465C6FEB501BC;
fma.rn.f64 fd400, fd294, 0d3FE8A80B635B6BEA, fd399;
add.f64 fd401, fd148, fd280;
add.f64 fd402, fd104, fd401;
add.f64 fd403, fd192, fd236;
add.f64 fd404, fd152, fd284;
add.f64 fd405, fd108, fd404;
add.f64 fd406, fd196, fd240;
fma.rn.f64 fd407, fd401, 0d3FD3C6EF372FE950, fd104;
mul.f64 fd408, fd403, 0d3FE9E3779B97F4A8;
sub.f64 fd409, fd407, fd408;
sub.f64 fd410, fd152, fd284;
mul.f64 fd411, fd410, 0d3FEE6F0E134454FF;
sub.f64 fd412, fd196, fd240;
mul.f64 fd413, fd412, 0dBFE2CF2304755A5E;
sub.f64 fd414, fd413, fd411;
mul.f64 fd415, fd401, 0d3FE9E3779B97F4A8;
sub.f64 fd416, fd104, fd415;
fma.rn.f64 fd417, fd403, 0d3FD3C6EF372FE950, fd416;
mul.f64 fd418, fd410, 0d3FE2CF2304755A5E;
mul.f64 fd419, fd412, 0d3FEE6F0E134454FF;
sub.f64 fd420, fd419, fd418;
fma.rn.f64 fd421, fd404, 0d3FD3C6EF372FE950, fd108;
mul.f64 fd422, fd406, 0d3FE9E3779B97F4A8;
sub.f64 fd423, fd421, fd422;
sub.f64 fd424, fd148, fd280;
mul.f64 fd425, fd424, 0d3FEE6F0E134454FF;
sub.f64 fd426, fd192, fd236;
mul.f64 fd427, fd426, 0dBFE2CF2304755A5E;
sub.f64 fd428, fd427, fd425;
mul.f64 fd429, fd404, 0d3FE9E3779B97F4A8;
sub.f64 fd430, fd108, fd429;
fma.rn.f64 fd431, fd406, 0d3FD3C6EF372FE950, fd430;
mul.f64 fd432, fd424, 0d3FE2CF2304755A5E;
mul.f64 fd433, fd426, 0d3FEE6F0E134454FF;
sub.f64 fd434, fd433, fd432;
add.f64 fd435, fd323, fd338;
add.f64 fd436, fd117, fd435;
add.f64 fd437, fd328, fd333;
add.f64 fd438, fd325, fd340;
add.f64 fd439, fd135, fd438;
add.f64 fd440, fd330, fd335;
fma.rn.f64 fd441, fd435, 0d3FD3C6EF372FE950, fd117;
mul.f64 fd442, fd437, 0d3FE9E3779B97F4A8;
sub.f64 fd443, fd441, fd442;
sub.f64 fd444, fd325, fd340;
mul.f64 fd445, fd444, 0d3FEE6F0E134454FF;
sub.f64 fd446, fd330, fd335;
mul.f64 fd447, fd446, 0dBFE2CF2304755A5E;
sub.f64 fd448, fd447, fd445;
mul.f64 fd449, fd435, 0d3FE9E3779B97F4A8;
sub.f64 fd450, fd117, fd449;
fma.rn.f64 fd451, fd437, 0d3FD3C6EF372FE950, fd450;
mul.f64 fd452, fd444, 0d3FE2CF2304755A5E;
mul.f64 fd453, fd446, 0d3FEE6F0E134454FF;
sub.f64 fd454, fd453, fd452;
fma.rn.f64 fd455, fd438, 0d3FD3C6EF372FE950, fd135;
mul.f64 fd456, fd440, 0d3FE9E3779B97F4A8;
sub.f64 fd457, fd455, fd456;
sub.f64 fd458, fd323, fd338;
mul.f64 fd459, fd458, 0d3FEE6F0E134454FF;
sub.f64 fd460, fd328, fd333;
mul.f64 fd461, fd460, 0dBFE2CF2304755A5E;
sub.f64 fd462, fd461, fd459;
mul.f64 fd463, fd438, 0d3FE9E3779B97F4A8;
sub.f64 fd464, fd135, fd463;
fma.rn.f64 fd465, fd440, 0d3FD3C6EF372FE950, fd464;
mul.f64 fd466, fd458, 0d3FE2CF2304755A5E;
mul.f64 fd467, fd460, 0d3FEE6F0E134454FF;
sub.f64 fd468, fd467, fd466;
add.f64 fd469, fd343, fd358;
add.f64 fd470, fd125, fd469;
add.f64 fd471, fd348, fd353;
add.f64 fd472, fd345, fd360;
add.f64 fd473, fd143, fd472;
add.f64 fd474, fd350, fd355;
fma.rn.f64 fd475, fd469, 0d3FD3C6EF372FE950, fd125;
mul.f64 fd476, fd471, 0d3FE9E3779B97F4A8;
sub.f64 fd477, fd475, fd476;
sub.f64 fd478, fd345, fd360;
mul.f64 fd479, fd478, 0d3FEE6F0E134454FF;
sub.f64 fd480, fd350, fd355;
mul.f64 fd481, fd480, 0dBFE2CF2304755A5E;
sub.f64 fd482, fd481, fd479;
mul.f64 fd483, fd469, 0d3FE9E3779B97F4A8;
sub.f64 fd484, fd125, fd483;
fma.rn.f64 fd485, fd471, 0d3FD3C6EF372FE950, fd484;
mul.f64 fd486, fd478, 0d3FE2CF2304755A5E;
mul.f64 fd487, fd480, 0d3FEE6F0E134454FF;
sub.f64 fd488, fd487, fd486;
fma.rn.f64 fd489, fd472, 0d3FD3C6EF372FE950, fd143;
mul.f64 fd490, fd474, 0d3FE9E3779B97F4A8;
sub.f64 fd491, fd489, fd490;
sub.f64 fd492, fd343, fd358;
mul.f64 fd493, fd492, 0d3FEE6F0E134454FF;
sub.f64 fd494, fd348, fd353;
mul.f64 fd495, fd494, 0dBFE2CF2304755A5E;
sub.f64 fd496, fd495, fd493;
mul.f64 fd497, fd472, 0d3FE9E3779B97F4A8;
sub.f64 fd498, fd143, fd497;
fma.rn.f64 fd499, fd474, 0d3FD3C6EF372FE950, fd498;
mul.f64 fd500, fd492, 0d3FE2CF2304755A5E;
mul.f64 fd501, fd494, 0d3FEE6F0E134454FF;
sub.f64 fd502, fd501, fd500;
add.f64 fd503, fd363, fd378;
add.f64 fd504, fd126, fd503;
add.f64 fd505, fd368, fd373;
add.f64 fd506, fd365, fd380;
add.f64 fd507, fd144, fd506;
add.f64 fd508, fd370, fd375;
fma.rn.f64 fd509, fd503, 0d3FD3C6EF372FE950, fd126;
mul.f64 fd510, fd505, 0d3FE9E3779B97F4A8;
sub.f64 fd511, fd509, fd510;
sub.f64 fd512, fd365, fd380;
mul.f64 fd513, fd512, 0d3FEE6F0E134454FF;
sub.f64 fd514, fd370, fd375;
mul.f64 fd515, fd514, 0dBFE2CF2304755A5E;
sub.f64 fd516, fd515, fd513;
mul.f64 fd517, fd503, 0d3FE9E3779B97F4A8;
sub.f64 fd518, fd126, fd517;
fma.rn.f64 fd519, fd505, 0d3FD3C6EF372FE950, fd518;
mul.f64 fd520, fd512, 0d3FE2CF2304755A5E;
mul.f64 fd521, fd514, 0d3FEE6F0E134454FF;
sub.f64 fd522, fd521, fd520;
fma.rn.f64 fd523, fd506, 0d3FD3C6EF372FE950, fd144;
mul.f64 fd524, fd508, 0d3FE9E3779B97F4A8;
sub.f64 fd525, fd523, fd524;
sub.f64 fd526, fd363, fd378;
mul.f64 fd527, fd526, 0d3FEE6F0E134454FF;
sub.f64 fd528, fd368, fd373;
mul.f64 fd529, fd528, 0dBFE2CF2304755A5E;
sub.f64 fd530, fd529, fd527;
mul.f64 fd531, fd506, 0d3FE9E3779B97F4A8;
sub.f64 fd532, fd144, fd531;
fma.rn.f64 fd533, fd508, 0d3FD3C6EF372FE950, fd532;
mul.f64 fd534, fd526, 0d3FE2CF2304755A5E;
mul.f64 fd535, fd528, 0d3FEE6F0E134454FF;
sub.f64 fd536, fd535, fd534;
add.f64 fd537, fd383, fd398;
add.f64 fd538, fd118, fd537;
add.f64 fd539, fd388, fd393;
add.f64 fd540, fd385, fd400;
add.f64 fd541, fd136, fd540;
add.f64 fd542, fd390, fd395;
fma.rn.f64 fd543, fd537, 0d3FD3C6EF372FE950, fd118;
mul.f64 fd544, fd539, 0d3FE9E3779B97F4A8;
sub.f64 fd545, fd543, fd544;
sub.f64 fd546, fd385, fd400;
mul.f64 fd547, fd546, 0d3FEE6F0E134454FF;
sub.f64 fd548, fd390, fd395;
mul.f64 fd549, fd548, 0dBFE2CF2304755A5E;
sub.f64 fd550, fd549, fd547;
mul.f64 fd551, fd537, 0d3FE9E3779B97F4A8;
sub.f64 fd552, fd118, fd551;
fma.rn.f64 fd553, fd539, 0d3FD3C6EF372FE950, fd552;
mul.f64 fd554, fd546, 0d3FE2CF2304755A5E;
mul.f64 fd555, fd548, 0d3FEE6F0E134454FF;
sub.f64 fd556, fd555, fd554;
fma.rn.f64 fd557, fd540, 0d3FD3C6EF372FE950, fd136;
mul.f64 fd558, fd542, 0d3FE9E3779B97F4A8;
sub.f64 fd559, fd557, fd558;
sub.f64 fd560, fd383, fd398;
mul.f64 fd561, fd560, 0d3FEE6F0E134454FF;
sub.f64 fd562, fd388, fd393;
mul.f64 fd563, fd562, 0dBFE2CF2304755A5E;
sub.f64 fd564, fd563, fd561;
mul.f64 fd565, fd540, 0d3FE9E3779B97F4A8;
sub.f64 fd566, fd136, fd565;
fma.rn.f64 fd567, fd542, 0d3FD3C6EF372FE950, fd566;
mul.f64 fd568, fd560, 0d3FE2CF2304755A5E;
mul.f64 fd569, fd562, 0d3FEE6F0E134454FF;
sub.f64 fd570, fd569, fd568;
add.f64 %1, fd406, fd405;
add.f64 %0, fd403, fd402;
add.f64 %3, fd440, fd439;
add.f64 %2, fd437, fd436;
add.f64 %5, fd474, fd473;
add.f64 %4, fd471, fd470;
add.f64 %7, fd508, fd507;
add.f64 %6, fd505, fd504;
add.f64 %9, fd542, fd541;
add.f64 %8, fd539, fd538;
add.f64 %11, fd428, fd423;
sub.f64 %10, fd409, fd414;
add.f64 %13, fd462, fd457;
sub.f64 %12, fd443, fd448;
add.f64 %15, fd496, fd491;
sub.f64 %14, fd477, fd482;
add.f64 %17, fd530, fd525;
sub.f64 %16, fd511, fd516;
add.f64 %19, fd564, fd559;
sub.f64 %18, fd545, fd550;
add.f64 %21, fd434, fd431;
sub.f64 %20, fd417, fd420;
add.f64 %23, fd468, fd465;
sub.f64 %22, fd451, fd454;
add.f64 %25, fd502, fd499;
sub.f64 %24, fd485, fd488;
add.f64 %27, fd536, fd533;
sub.f64 %26, fd519, fd522;
add.f64 %29, fd570, fd567;
sub.f64 %28, fd553, fd556;
sub.f64 %31, fd431, fd434;
add.f64 %30, fd420, fd417;
sub.f64 %33, fd465, fd468;
add.f64 %32, fd454, fd451;
sub.f64 %35, fd499, fd502;
add.f64 %34, fd488, fd485;
sub.f64 %37, fd533, fd536;
add.f64 %36, fd522, fd519;
sub.f64 %39, fd567, fd570;
add.f64 %38, fd556, fd553;
sub.f64 %41, fd423, fd428;
add.f64 %40, fd414, fd409;
sub.f64 %43, fd457, fd462;
add.f64 %42, fd448, fd443;
sub.f64 %45, fd491, fd496;
add.f64 %44, fd482, fd477;
sub.f64 %47, fd525, fd530;
add.f64 %46, fd516, fd511;
sub.f64 %49, fd559, fd564;
add.f64 %48, fd550, fd545;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y), "=d"(rmem[10].x), "=d"(rmem[10].y), "=d"(rmem[11].x), "=d"(rmem[11].y), "=d"(rmem[12].x), "=d"(rmem[12].y), "=d"(rmem[13].x), "=d"(rmem[13].y), "=d"(rmem[14].x), "=d"(rmem[14].y), "=d"(rmem[15].x), "=d"(rmem[15].y), "=d"(rmem[16].x), "=d"(rmem[16].y), "=d"(rmem[17].x), "=d"(rmem[17].y), "=d"(rmem[18].x), "=d"(rmem[18].y), "=d"(rmem[19].x), "=d"(rmem[19].y), "=d"(rmem[20].x), "=d"(rmem[20].y), "=d"(rmem[21].x), "=d"(rmem[21].y), "=d"(rmem[22].x), "=d"(rmem[22].y), "=d"(rmem[23].x), "=d"(rmem[23].y), "=d"(rmem[24].x), "=d"(rmem[24].y): "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y), "d"(rmem[10].x), "d"(rmem[10].y), "d"(rmem[10].y), "d"(rmem[11].x), "d"(rmem[11].y), "d"(rmem[11].y), "d"(rmem[12].x), "d"(rmem[12].y), "d"(rmem[13].x), "d"(rmem[13].y), "d"(rmem[13].y), "d"(rmem[14].x), "d"(rmem[14].y), "d"(rmem[14].y), "d"(rmem[15].x), "d"(rmem[15].y), "d"(rmem[16].x), "d"(rmem[16].y), "d"(rmem[16].y), "d"(rmem[17].x), "d"(rmem[17].y), "d"(rmem[17].y), "d"(rmem[18].x), "d"(rmem[18].y), "d"(rmem[19].x), "d"(rmem[19].y), "d"(rmem[19].y), "d"(rmem[20].x), "d"(rmem[20].y), "d"(rmem[20].y), "d"(rmem[21].x), "d"(rmem[21].y), "d"(rmem[22].x), "d"(rmem[22].y), "d"(rmem[22].y), "d"(rmem[23].x), "d"(rmem[23].y), "d"(rmem[23].y), "d"(rmem[24].x), "d"(rmem[24].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<534, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .b32 r<12>;
.reg .f64 fd<167>;
.reg .b64 rd<7>;
mov.u32 r1, %tid.y;
mov.u32 r2, %10;
mad.lo.s32 r3, r1, 400, r2;
add.f64 fd21, %14, %22;
add.f64 fd22, %12, fd21;
add.f64 fd23, %17, %20;
add.f64 fd24, %16, %23;
add.f64 fd25, %13, fd24;
add.f64 fd26, %19, %21;
fma.rn.f64 fd27, fd21, 0d3FD3C6EF372FE950, %12;
mul.f64 fd28, fd23, 0d3FE9E3779B97F4A8;
sub.f64 fd29, fd27, fd28;
sub.f64 fd30, %16, %23;
mul.f64 fd31, fd30, 0d3FEE6F0E134454FF;
sub.f64 fd32, %19, %21;
mul.f64 fd33, fd32, 0dBFE2CF2304755A5E;
sub.f64 fd34, fd33, fd31;
sub.f64 fd35, fd29, fd34;
add.f64 fd36, fd34, fd29;
mul.f64 fd37, fd21, 0d3FE9E3779B97F4A8;
sub.f64 fd38, %12, fd37;
fma.rn.f64 fd39, fd23, 0d3FD3C6EF372FE950, fd38;
mul.f64 fd40, fd30, 0d3FE2CF2304755A5E;
mul.f64 fd41, fd32, 0d3FEE6F0E134454FF;
sub.f64 fd42, fd41, fd40;
sub.f64 fd43, fd39, fd42;
add.f64 fd44, fd42, fd39;
fma.rn.f64 fd45, fd24, 0d3FD3C6EF372FE950, %13;
mul.f64 fd46, fd26, 0d3FE9E3779B97F4A8;
sub.f64 fd47, fd45, fd46;
sub.f64 fd48, %14, %22;
mul.f64 fd49, fd48, 0d3FEE6F0E134454FF;
sub.f64 fd50, %17, %20;
mul.f64 fd51, fd50, 0dBFE2CF2304755A5E;
sub.f64 fd52, fd51, fd49;
add.f64 fd53, fd52, fd47;
sub.f64 fd54, fd47, fd52;
mul.f64 fd55, fd24, 0d3FE9E3779B97F4A8;
sub.f64 fd56, %13, fd55;
fma.rn.f64 fd57, fd26, 0d3FD3C6EF372FE950, fd56;
mul.f64 fd58, fd48, 0d3FE2CF2304755A5E;
mul.f64 fd59, fd50, 0d3FEE6F0E134454FF;
sub.f64 fd60, fd59, fd58;
add.f64 fd61, fd60, fd57;
sub.f64 fd62, fd57, fd60;
mov.u32 r4, %tid.x;
mul.wide.u32 rd2, r4, -858993459;
shr.u64 rd3, rd2, 34;
cvt.u32.u64 r5, rd3;
mul.lo.s32 r6, r5, 5;
sub.s32 r7, r4, r6;
mad.lo.s32 r8, r5, 400, r3;
mul.wide.u32 rd4, r7, 16;
mov.u64 rd5, %11;
add.s64 rd6, rd5, rd4;
ld.global.v2.f64 {fd63, fd64}, [rd6];
mul.f64 fd67, fd63, fd35;
mul.f64 fd68, fd64, fd53;
mul.f64 fd69, fd63, fd53;
mul.f64 fd70, fd63, fd63;
mul.f64 fd71, fd64, fd64;
sub.f64 fd72, fd70, fd71;
mul.f64 fd73, fd64, fd63;
fma.rn.f64 fd74, fd64, fd63, fd73;
mul.f64 fd75, fd72, fd43;
mul.f64 fd76, fd74, fd61;
mul.f64 fd77, fd72, fd61;
ld.global.v2.f64 {fd78, fd79}, [rd6+80];
mul.f64 fd82, fd78, fd44;
mul.f64 fd83, fd79, fd62;
mul.f64 fd84, fd78, fd62;
mul.f64 fd85, fd63, fd78;
mul.f64 fd86, fd64, fd79;
sub.f64 fd87, fd85, fd86;
mul.f64 fd88, fd63, fd79;
fma.rn.f64 fd89, fd64, fd78, fd88;
mul.f64 fd90, fd87, fd36;
mul.f64 fd91, fd89, fd54;
mul.f64 fd92, fd87, fd54;
barrier.sync 0;
mad.lo.s32 r9, r7, 80, r8;
add.f64 fd93, fd26, fd25;
add.f64 fd94, fd23, fd22;
st.shared.v2.f64 [r9], {fd94, fd93};
fma.rn.f64 fd95, fd64, fd35, fd69;
sub.f64 fd96, fd67, fd68;
st.shared.v2.f64 [r9+16], {fd96, fd95};
fma.rn.f64 fd97, fd74, fd43, fd77;
sub.f64 fd98, fd75, fd76;
st.shared.v2.f64 [r9+32], {fd98, fd97};
fma.rn.f64 fd99, fd79, fd44, fd84;
sub.f64 fd100, fd82, fd83;
st.shared.v2.f64 [r9+48], {fd100, fd99};
fma.rn.f64 fd101, fd89, fd36, fd92;
sub.f64 fd102, fd90, fd91;
st.shared.v2.f64 [r9+64], {fd102, fd101};
barrier.sync 0;
shl.b32 r10, r7, 6;
sub.s32 r11, r9, r10;
ld.shared.v2.f64 {fd103, fd104}, [r11];
ld.shared.v2.f64 {fd107, fd108}, [r11+80];
ld.shared.v2.f64 {fd111, fd112}, [r11+160];
ld.shared.v2.f64 {fd115, fd116}, [r11+240];
ld.shared.v2.f64 {fd119, fd120}, [r11+320];
add.f64 fd123, fd107, fd119;
add.f64 fd124, fd103, fd123;
add.f64 fd125, fd111, fd115;
add.f64 fd126, fd108, fd120;
add.f64 fd127, fd104, fd126;
add.f64 fd128, fd112, fd116;
fma.rn.f64 fd129, fd123, 0d3FD3C6EF372FE950, fd103;
mul.f64 fd130, fd125, 0d3FE9E3779B97F4A8;
sub.f64 fd131, fd129, fd130;
sub.f64 fd132, fd108, fd120;
mul.f64 fd133, fd132, 0d3FEE6F0E134454FF;
sub.f64 fd134, fd112, fd116;
mul.f64 fd135, fd134, 0dBFE2CF2304755A5E;
sub.f64 fd136, fd135, fd133;
mul.f64 fd137, fd123, 0d3FE9E3779B97F4A8;
sub.f64 fd138, fd103, fd137;
fma.rn.f64 fd139, fd125, 0d3FD3C6EF372FE950, fd138;
mul.f64 fd140, fd132, 0d3FE2CF2304755A5E;
mul.f64 fd141, fd134, 0d3FEE6F0E134454FF;
sub.f64 fd142, fd141, fd140;
fma.rn.f64 fd143, fd126, 0d3FD3C6EF372FE950, fd104;
mul.f64 fd144, fd128, 0d3FE9E3779B97F4A8;
sub.f64 fd145, fd143, fd144;
sub.f64 fd146, fd107, fd119;
mul.f64 fd147, fd146, 0d3FEE6F0E134454FF;
sub.f64 fd148, fd111, fd115;
mul.f64 fd149, fd148, 0dBFE2CF2304755A5E;
sub.f64 fd150, fd149, fd147;
mul.f64 fd151, fd126, 0d3FE9E3779B97F4A8;
sub.f64 fd152, fd104, fd151;
fma.rn.f64 fd153, fd128, 0d3FD3C6EF372FE950, fd152;
mul.f64 fd154, fd146, 0d3FE2CF2304755A5E;
mul.f64 fd155, fd148, 0d3FEE6F0E134454FF;
sub.f64 fd156, fd155, fd154;
add.f64 %1, fd128, fd127;
add.f64 %0, fd125, fd124;
add.f64 %3, fd150, fd145;
sub.f64 %2, fd131, fd136;
add.f64 %5, fd156, fd153;
sub.f64 %4, fd139, fd142;
sub.f64 %7, fd153, fd156;
add.f64 %6, fd142, fd139;
sub.f64 %9, fd145, fd150;
add.f64 %8, fd136, fd131;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y): "r"(smem), "l"(lut_dp_5_25), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y));
};




template<> __forceinline__ __device__ void cufftdx_private_function<535, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .b32 r<12>;
.reg .f64 fd<157>;
.reg .b64 rd<7>;
mov.u32 r1, %tid.y;
mov.u32 r2, %10;
mad.lo.s32 r3, r1, 200, r2;
add.f64 fd21, %14, %22;
add.f64 fd22, %12, fd21;
add.f64 fd23, %17, %20;
add.f64 fd24, fd23, fd22;
add.f64 fd25, %16, %23;
add.f64 fd26, %13, fd25;
add.f64 fd27, %19, %21;
add.f64 fd28, fd27, fd26;
fma.rn.f64 fd29, fd21, 0d3FD3C6EF372FE950, %12;
mul.f64 fd30, fd23, 0d3FE9E3779B97F4A8;
sub.f64 fd31, fd29, fd30;
sub.f64 fd32, %16, %23;
mul.f64 fd33, fd32, 0d3FEE6F0E134454FF;
sub.f64 fd34, %19, %21;
mul.f64 fd35, fd34, 0dBFE2CF2304755A5E;
sub.f64 fd36, fd35, fd33;
sub.f64 fd37, fd31, fd36;
add.f64 fd38, fd36, fd31;
mul.f64 fd39, fd21, 0d3FE9E3779B97F4A8;
sub.f64 fd40, %12, fd39;
fma.rn.f64 fd41, fd23, 0d3FD3C6EF372FE950, fd40;
mul.f64 fd42, fd32, 0d3FE2CF2304755A5E;
mul.f64 fd43, fd34, 0d3FEE6F0E134454FF;
sub.f64 fd44, fd43, fd42;
sub.f64 fd45, fd41, fd44;
add.f64 fd46, fd44, fd41;
fma.rn.f64 fd47, fd25, 0d3FD3C6EF372FE950, %13;
mul.f64 fd48, fd27, 0d3FE9E3779B97F4A8;
sub.f64 fd49, fd47, fd48;
sub.f64 fd50, %14, %22;
mul.f64 fd51, fd50, 0d3FEE6F0E134454FF;
sub.f64 fd52, %17, %20;
mul.f64 fd53, fd52, 0dBFE2CF2304755A5E;
sub.f64 fd54, fd53, fd51;
add.f64 fd55, fd54, fd49;
sub.f64 fd56, fd49, fd54;
mul.f64 fd57, fd25, 0d3FE9E3779B97F4A8;
sub.f64 fd58, %13, fd57;
fma.rn.f64 fd59, fd27, 0d3FD3C6EF372FE950, fd58;
mul.f64 fd60, fd50, 0d3FE2CF2304755A5E;
mul.f64 fd61, fd52, 0d3FEE6F0E134454FF;
sub.f64 fd62, fd61, fd60;
add.f64 fd63, fd62, fd59;
sub.f64 fd64, fd59, fd62;
mov.u32 r4, %tid.x;
mul.wide.u32 rd2, r4, -858993459;
shr.u64 rd3, rd2, 34;
cvt.u32.u64 r5, rd3;
mul.lo.s32 r6, r5, 5;
sub.s32 r7, r4, r6;
mul.wide.u32 rd4, r7, 16;
mov.u64 rd5, %11;
add.s64 rd6, rd5, rd4;
ld.global.v2.f64 {fd65, fd66}, [rd6];
mul.f64 fd69, fd65, fd37;
mul.f64 fd70, fd66, fd55;
sub.f64 fd71, fd69, fd70;
mul.f64 fd72, fd65, fd55;
fma.rn.f64 fd73, fd66, fd37, fd72;
mul.f64 fd74, fd65, fd65;
mul.f64 fd75, fd66, fd66;
sub.f64 fd76, fd74, fd75;
mul.f64 fd77, fd66, fd65;
fma.rn.f64 fd78, fd66, fd65, fd77;
mul.f64 fd79, fd76, fd45;
mul.f64 fd80, fd78, fd63;
sub.f64 fd81, fd79, fd80;
mul.f64 fd82, fd76, fd63;
fma.rn.f64 fd83, fd78, fd45, fd82;
ld.global.v2.f64 {fd84, fd85}, [rd6+80];
mul.f64 fd88, fd84, fd46;
mul.f64 fd89, fd85, fd64;
sub.f64 fd90, fd88, fd89;
mul.f64 fd91, fd84, fd64;
fma.rn.f64 fd92, fd85, fd46, fd91;
mul.f64 fd93, fd65, fd84;
mul.f64 fd94, fd66, fd85;
sub.f64 fd95, fd93, fd94;
mul.f64 fd96, fd65, fd85;
fma.rn.f64 fd97, fd66, fd84, fd96;
mul.f64 fd98, fd95, fd38;
mul.f64 fd99, fd97, fd56;
sub.f64 fd100, fd98, fd99;
mul.f64 fd101, fd95, fd56;
fma.rn.f64 fd102, fd97, fd38, fd101;
mad.lo.s32 r8, r5, 200, r3;
barrier.sync 0;
mad.lo.s32 r9, r7, 40, r8;
st.shared.f64 [r9], fd24;
st.shared.f64 [r9+8], fd71;
st.shared.f64 [r9+16], fd81;
st.shared.f64 [r9+24], fd90;
st.shared.f64 [r9+32], fd100;
barrier.sync 0;
shl.b32 r10, r7, 5;
sub.s32 r11, r9, r10;
ld.shared.f64 fd103, [r11];
ld.shared.f64 fd104, [r11+40];
ld.shared.f64 fd105, [r11+80];
ld.shared.f64 fd106, [r11+120];
ld.shared.f64 fd107, [r11+160];
barrier.sync 0;
st.shared.f64 [r9], fd28;
st.shared.f64 [r9+8], fd73;
st.shared.f64 [r9+16], fd83;
st.shared.f64 [r9+24], fd92;
st.shared.f64 [r9+32], fd102;
barrier.sync 0;
ld.shared.f64 fd108, [r11];
ld.shared.f64 fd109, [r11+40];
ld.shared.f64 fd110, [r11+80];
ld.shared.f64 fd111, [r11+120];
ld.shared.f64 fd112, [r11+160];
add.f64 fd113, fd104, fd107;
add.f64 fd114, fd103, fd113;
add.f64 fd115, fd105, fd106;
add.f64 fd116, fd109, fd112;
add.f64 fd117, fd108, fd116;
add.f64 fd118, fd110, fd111;
fma.rn.f64 fd119, fd113, 0d3FD3C6EF372FE950, fd103;
mul.f64 fd120, fd115, 0d3FE9E3779B97F4A8;
sub.f64 fd121, fd119, fd120;
sub.f64 fd122, fd109, fd112;
mul.f64 fd123, fd122, 0d3FEE6F0E134454FF;
sub.f64 fd124, fd110, fd111;
mul.f64 fd125, fd124, 0dBFE2CF2304755A5E;
sub.f64 fd126, fd125, fd123;
mul.f64 fd127, fd113, 0d3FE9E3779B97F4A8;
sub.f64 fd128, fd103, fd127;
fma.rn.f64 fd129, fd115, 0d3FD3C6EF372FE950, fd128;
mul.f64 fd130, fd122, 0d3FE2CF2304755A5E;
mul.f64 fd131, fd124, 0d3FEE6F0E134454FF;
sub.f64 fd132, fd131, fd130;
fma.rn.f64 fd133, fd116, 0d3FD3C6EF372FE950, fd108;
mul.f64 fd134, fd118, 0d3FE9E3779B97F4A8;
sub.f64 fd135, fd133, fd134;
sub.f64 fd136, fd104, fd107;
mul.f64 fd137, fd136, 0d3FEE6F0E134454FF;
sub.f64 fd138, fd105, fd106;
mul.f64 fd139, fd138, 0dBFE2CF2304755A5E;
sub.f64 fd140, fd139, fd137;
mul.f64 fd141, fd116, 0d3FE9E3779B97F4A8;
sub.f64 fd142, fd108, fd141;
fma.rn.f64 fd143, fd118, 0d3FD3C6EF372FE950, fd142;
mul.f64 fd144, fd136, 0d3FE2CF2304755A5E;
mul.f64 fd145, fd138, 0d3FEE6F0E134454FF;
sub.f64 fd146, fd145, fd144;
add.f64 %0, fd115, fd114;
add.f64 %1, fd118, fd117;
add.f64 %3, fd140, fd135;
sub.f64 %2, fd121, fd126;
sub.f64 %4, fd129, fd132;
add.f64 %5, fd146, fd143;
add.f64 %6, fd132, fd129;
sub.f64 %7, fd143, fd146;
sub.f64 %9, fd135, fd140;
add.f64 %8, fd126, fd121;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y): "r"(smem), "l"(lut_dp_5_25), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y));
};


#endif


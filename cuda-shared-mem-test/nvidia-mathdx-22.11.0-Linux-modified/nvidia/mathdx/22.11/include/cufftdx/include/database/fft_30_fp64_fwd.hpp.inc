//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_30_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_30_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<418, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .f64 fd<755>;
.reg .b64 rd<2>;
add.f64 fd121, %76, %124;
add.f64 fd122, %60, fd121;
add.f64 fd123, %92, %108;
add.f64 fd124, fd123, fd122;
add.f64 fd125, %77, %125;
add.f64 fd126, %61, fd125;
add.f64 fd127, %93, %109;
add.f64 fd128, fd127, fd126;
fma.rn.f64 fd129, fd121, 0d3FD3C6EF372FE950, %60;
mul.f64 fd130, fd123, 0d3FE9E3779B97F4A8;
sub.f64 fd131, fd129, fd130;
sub.f64 fd132, %77, %125;
mul.f64 fd133, fd132, 0d3FEE6F0E134454FF;
sub.f64 fd134, %93, %109;
mul.f64 fd135, fd134, 0dBFE2CF2304755A5E;
sub.f64 fd136, fd135, fd133;
sub.f64 fd137, fd131, fd136;
add.f64 fd138, fd136, fd131;
mul.f64 fd139, fd121, 0d3FE9E3779B97F4A8;
sub.f64 fd140, %60, fd139;
fma.rn.f64 fd141, fd123, 0d3FD3C6EF372FE950, fd140;
mul.f64 fd142, fd132, 0d3FE2CF2304755A5E;
mul.f64 fd143, fd134, 0d3FEE6F0E134454FF;
sub.f64 fd144, fd143, fd142;
sub.f64 fd145, fd141, fd144;
add.f64 fd146, fd144, fd141;
fma.rn.f64 fd147, fd125, 0d3FD3C6EF372FE950, %61;
mul.f64 fd148, fd127, 0d3FE9E3779B97F4A8;
sub.f64 fd149, fd147, fd148;
sub.f64 fd150, %76, %124;
mul.f64 fd151, fd150, 0d3FEE6F0E134454FF;
sub.f64 fd152, %92, %108;
mul.f64 fd153, fd152, 0dBFE2CF2304755A5E;
sub.f64 fd154, fd153, fd151;
add.f64 fd155, fd154, fd149;
sub.f64 fd156, fd149, fd154;
mul.f64 fd157, fd125, 0d3FE9E3779B97F4A8;
sub.f64 fd158, %61, fd157;
fma.rn.f64 fd159, fd127, 0d3FD3C6EF372FE950, fd158;
mul.f64 fd160, fd150, 0d3FE2CF2304755A5E;
mul.f64 fd161, fd152, 0d3FEE6F0E134454FF;
sub.f64 fd162, fd161, fd160;
add.f64 fd163, fd162, fd159;
sub.f64 fd164, fd159, fd162;
add.f64 fd165, %81, %129;
add.f64 fd166, %65, fd165;
add.f64 fd167, %97, %113;
add.f64 fd168, fd167, fd166;
add.f64 fd169, %83, %131;
add.f64 fd170, %67, fd169;
add.f64 fd171, %99, %115;
add.f64 fd172, fd171, fd170;
fma.rn.f64 fd173, fd165, 0d3FD3C6EF372FE950, %65;
mul.f64 fd174, fd167, 0d3FE9E3779B97F4A8;
sub.f64 fd175, fd173, fd174;
sub.f64 fd176, %83, %131;
mul.f64 fd177, fd176, 0d3FEE6F0E134454FF;
sub.f64 fd178, %99, %115;
mul.f64 fd179, fd178, 0dBFE2CF2304755A5E;
sub.f64 fd180, fd179, fd177;
sub.f64 fd181, fd175, fd180;
add.f64 fd182, fd180, fd175;
mul.f64 fd183, fd165, 0d3FE9E3779B97F4A8;
sub.f64 fd184, %65, fd183;
fma.rn.f64 fd185, fd167, 0d3FD3C6EF372FE950, fd184;
mul.f64 fd186, fd176, 0d3FE2CF2304755A5E;
mul.f64 fd187, fd178, 0d3FEE6F0E134454FF;
sub.f64 fd188, fd187, fd186;
sub.f64 fd189, fd185, fd188;
add.f64 fd190, fd188, fd185;
fma.rn.f64 fd191, fd169, 0d3FD3C6EF372FE950, %67;
mul.f64 fd192, fd171, 0d3FE9E3779B97F4A8;
sub.f64 fd193, fd191, fd192;
sub.f64 fd194, %81, %129;
mul.f64 fd195, fd194, 0d3FEE6F0E134454FF;
sub.f64 fd196, %97, %113;
mul.f64 fd197, fd196, 0dBFE2CF2304755A5E;
sub.f64 fd198, fd197, fd195;
add.f64 fd199, fd198, fd193;
sub.f64 fd200, fd193, fd198;
mul.f64 fd201, fd169, 0d3FE9E3779B97F4A8;
sub.f64 fd202, %67, fd201;
fma.rn.f64 fd203, fd171, 0d3FD3C6EF372FE950, fd202;
mul.f64 fd204, fd194, 0d3FE2CF2304755A5E;
mul.f64 fd205, fd196, 0d3FEE6F0E134454FF;
sub.f64 fd206, fd205, fd204;
add.f64 fd207, fd206, fd203;
sub.f64 fd208, fd203, fd206;
add.f64 fd209, %86, %134;
add.f64 fd210, %70, fd209;
add.f64 fd211, %102, %118;
add.f64 fd212, fd211, fd210;
add.f64 fd213, %88, %136;
add.f64 fd214, %72, fd213;
add.f64 fd215, %104, %120;
add.f64 fd216, fd215, fd214;
fma.rn.f64 fd217, fd209, 0d3FD3C6EF372FE950, %70;
mul.f64 fd218, fd211, 0d3FE9E3779B97F4A8;
sub.f64 fd219, fd217, fd218;
sub.f64 fd220, %88, %136;
mul.f64 fd221, fd220, 0d3FEE6F0E134454FF;
sub.f64 fd222, %104, %120;
mul.f64 fd223, fd222, 0dBFE2CF2304755A5E;
sub.f64 fd224, fd223, fd221;
sub.f64 fd225, fd219, fd224;
add.f64 fd226, fd224, fd219;
mul.f64 fd227, fd209, 0d3FE9E3779B97F4A8;
sub.f64 fd228, %70, fd227;
fma.rn.f64 fd229, fd211, 0d3FD3C6EF372FE950, fd228;
mul.f64 fd230, fd220, 0d3FE2CF2304755A5E;
mul.f64 fd231, fd222, 0d3FEE6F0E134454FF;
sub.f64 fd232, fd231, fd230;
sub.f64 fd233, fd229, fd232;
add.f64 fd234, fd232, fd229;
fma.rn.f64 fd235, fd213, 0d3FD3C6EF372FE950, %72;
mul.f64 fd236, fd215, 0d3FE9E3779B97F4A8;
sub.f64 fd237, fd235, fd236;
sub.f64 fd238, %86, %134;
mul.f64 fd239, fd238, 0d3FEE6F0E134454FF;
sub.f64 fd240, %102, %118;
mul.f64 fd241, fd240, 0dBFE2CF2304755A5E;
sub.f64 fd242, fd241, fd239;
add.f64 fd243, fd242, fd237;
sub.f64 fd244, fd237, fd242;
mul.f64 fd245, fd213, 0d3FE9E3779B97F4A8;
sub.f64 fd246, %72, fd245;
fma.rn.f64 fd247, fd215, 0d3FD3C6EF372FE950, fd246;
mul.f64 fd248, fd238, 0d3FE2CF2304755A5E;
mul.f64 fd249, fd240, 0d3FEE6F0E134454FF;
sub.f64 fd250, fd249, fd248;
add.f64 fd251, fd250, fd247;
sub.f64 fd252, fd247, fd250;
mul.f64 fd253, fd181, 0d3FED3BC3AEFF7F95;
mul.f64 fd254, fd199, 0dBFDA07F921061AD1;
sub.f64 fd255, fd253, fd254;
mul.f64 fd256, fd199, 0d3FED3BC3AEFF7F95;
fma.rn.f64 fd257, fd181, 0dBFDA07F921061AD1, fd256;
mul.f64 fd258, fd225, 0d3FE5698496E20BD8;
mul.f64 fd259, fd243, 0dBFE7C7D7A833BEC2;
sub.f64 fd260, fd258, fd259;
mul.f64 fd261, fd243, 0d3FE5698496E20BD8;
fma.rn.f64 fd262, fd225, 0dBFE7C7D7A833BEC2, fd261;
mul.f64 fd263, fd189, 0d3FE5698496E20BD8;
mul.f64 fd264, fd207, 0dBFE7C7D7A833BEC2;
sub.f64 fd265, fd263, fd264;
mul.f64 fd266, fd207, 0d3FE5698496E20BD8;
fma.rn.f64 fd267, fd189, 0dBFE7C7D7A833BEC2, fd266;
mul.f64 fd268, fd233, 0dBFBAC2609B3C576C;
mul.f64 fd269, fd251, 0dBFEFD31F94F867C6;
sub.f64 fd270, fd268, fd269;
mul.f64 fd271, fd251, 0dBFBAC2609B3C576C;
fma.rn.f64 fd272, fd233, 0dBFEFD31F94F867C6, fd271;
mul.f64 fd273, fd190, 0d3FD3C6EF372FE950;
mul.f64 fd274, fd208, 0dBFEE6F0E134454FF;
sub.f64 fd275, fd273, fd274;
mul.f64 fd276, fd208, 0d3FD3C6EF372FE950;
fma.rn.f64 fd277, fd190, 0dBFEE6F0E134454FF, fd276;
mul.f64 fd278, fd234, 0dBFE9E3779B97F4A8;
mul.f64 fd279, fd252, 0dBFE2CF2304755A5E;
sub.f64 fd280, fd278, fd279;
mul.f64 fd281, fd252, 0dBFE9E3779B97F4A8;
fma.rn.f64 fd282, fd234, 0dBFE2CF2304755A5E, fd281;
mul.f64 fd283, fd182, 0dBFBAC2609B3C576C;
mul.f64 fd284, fd200, 0dBFEFD31F94F867C6;
sub.f64 fd285, fd283, fd284;
mul.f64 fd286, fd200, 0dBFBAC2609B3C576C;
fma.rn.f64 fd287, fd182, 0dBFEFD31F94F867C6, fd286;
mul.f64 fd288, fd226, 0dBFEF4CFC327A0080;
mul.f64 fd289, fd244, 0d3FCA9CD9AC4258F6;
sub.f64 fd290, fd288, fd289;
mul.f64 fd291, fd244, 0dBFEF4CFC327A0080;
fma.rn.f64 fd292, fd226, 0d3FCA9CD9AC4258F6, fd291;
add.f64 fd293, fd168, fd212;
add.f64 fd294, fd124, fd293;
add.f64 fd295, fd172, fd216;
add.f64 fd296, fd128, fd295;
mul.f64 fd297, fd293, 0d3FE0000000000000;
sub.f64 fd298, fd124, fd297;
sub.f64 fd299, fd172, fd216;
mul.f64 fd300, fd299, 0d3FEBB67AE8584CAA;
add.f64 fd301, fd300, fd298;
sub.f64 fd302, fd298, fd300;
mul.f64 fd303, fd295, 0d3FE0000000000000;
sub.f64 fd304, fd128, fd303;
sub.f64 fd305, fd168, fd212;
mul.f64 fd306, fd305, 0d3FEBB67AE8584CAA;
sub.f64 fd307, fd304, fd306;
add.f64 fd308, fd306, fd304;
add.f64 fd309, fd255, fd260;
add.f64 fd310, fd137, fd309;
add.f64 fd311, fd257, fd262;
add.f64 fd312, fd155, fd311;
mul.f64 fd313, fd309, 0d3FE0000000000000;
sub.f64 fd314, fd137, fd313;
sub.f64 fd315, fd257, fd262;
mul.f64 fd316, fd315, 0d3FEBB67AE8584CAA;
add.f64 fd317, fd316, fd314;
sub.f64 fd318, fd314, fd316;
mul.f64 fd319, fd311, 0d3FE0000000000000;
sub.f64 fd320, fd155, fd319;
sub.f64 fd321, fd255, fd260;
mul.f64 fd322, fd321, 0d3FEBB67AE8584CAA;
sub.f64 fd323, fd320, fd322;
add.f64 fd324, fd322, fd320;
add.f64 fd325, fd265, fd270;
add.f64 fd326, fd145, fd325;
add.f64 fd327, fd267, fd272;
add.f64 fd328, fd163, fd327;
mul.f64 fd329, fd325, 0d3FE0000000000000;
sub.f64 fd330, fd145, fd329;
sub.f64 fd331, fd267, fd272;
mul.f64 fd332, fd331, 0d3FEBB67AE8584CAA;
add.f64 fd333, fd332, fd330;
sub.f64 fd334, fd330, fd332;
mul.f64 fd335, fd327, 0d3FE0000000000000;
sub.f64 fd336, fd163, fd335;
sub.f64 fd337, fd265, fd270;
mul.f64 fd338, fd337, 0d3FEBB67AE8584CAA;
sub.f64 fd339, fd336, fd338;
add.f64 fd340, fd338, fd336;
add.f64 fd341, fd275, fd280;
add.f64 fd342, fd146, fd341;
add.f64 fd343, fd277, fd282;
add.f64 fd344, fd164, fd343;
mul.f64 fd345, fd341, 0d3FE0000000000000;
sub.f64 fd346, fd146, fd345;
sub.f64 fd347, fd277, fd282;
mul.f64 fd348, fd347, 0d3FEBB67AE8584CAA;
add.f64 fd349, fd348, fd346;
sub.f64 fd350, fd346, fd348;
mul.f64 fd351, fd343, 0d3FE0000000000000;
sub.f64 fd352, fd164, fd351;
sub.f64 fd353, fd275, fd280;
mul.f64 fd354, fd353, 0d3FEBB67AE8584CAA;
sub.f64 fd355, fd352, fd354;
add.f64 fd356, fd354, fd352;
add.f64 fd357, fd285, fd290;
add.f64 fd358, fd138, fd357;
add.f64 fd359, fd287, fd292;
add.f64 fd360, fd156, fd359;
mul.f64 fd361, fd357, 0d3FE0000000000000;
sub.f64 fd362, fd138, fd361;
sub.f64 fd363, fd287, fd292;
mul.f64 fd364, fd363, 0d3FEBB67AE8584CAA;
add.f64 fd365, fd364, fd362;
sub.f64 fd366, fd362, fd364;
mul.f64 fd367, fd359, 0d3FE0000000000000;
sub.f64 fd368, fd156, fd367;
sub.f64 fd369, fd285, fd290;
mul.f64 fd370, fd369, 0d3FEBB67AE8584CAA;
sub.f64 fd371, fd368, fd370;
add.f64 fd372, fd370, fd368;
add.f64 fd373, %78, %126;
add.f64 fd374, %62, fd373;
add.f64 fd375, %94, %110;
add.f64 fd376, fd375, fd374;
add.f64 fd377, %80, %128;
add.f64 fd378, %64, fd377;
add.f64 fd379, %96, %112;
add.f64 fd380, fd379, fd378;
fma.rn.f64 fd381, fd373, 0d3FD3C6EF372FE950, %62;
mul.f64 fd382, fd375, 0d3FE9E3779B97F4A8;
sub.f64 fd383, fd381, fd382;
sub.f64 fd384, %80, %128;
mul.f64 fd385, fd384, 0d3FEE6F0E134454FF;
sub.f64 fd386, %96, %112;
mul.f64 fd387, fd386, 0dBFE2CF2304755A5E;
sub.f64 fd388, fd387, fd385;
sub.f64 fd389, fd383, fd388;
add.f64 fd390, fd388, fd383;
mul.f64 fd391, fd373, 0d3FE9E3779B97F4A8;
sub.f64 fd392, %62, fd391;
fma.rn.f64 fd393, fd375, 0d3FD3C6EF372FE950, fd392;
mul.f64 fd394, fd384, 0d3FE2CF2304755A5E;
mul.f64 fd395, fd386, 0d3FEE6F0E134454FF;
sub.f64 fd396, fd395, fd394;
sub.f64 fd397, fd393, fd396;
add.f64 fd398, fd396, fd393;
fma.rn.f64 fd399, fd377, 0d3FD3C6EF372FE950, %64;
mul.f64 fd400, fd379, 0d3FE9E3779B97F4A8;
sub.f64 fd401, fd399, fd400;
sub.f64 fd402, %78, %126;
mul.f64 fd403, fd402, 0d3FEE6F0E134454FF;
sub.f64 fd404, %94, %110;
mul.f64 fd405, fd404, 0dBFE2CF2304755A5E;
sub.f64 fd406, fd405, fd403;
add.f64 fd407, fd406, fd401;
sub.f64 fd408, fd401, fd406;
mul.f64 fd409, fd377, 0d3FE9E3779B97F4A8;
sub.f64 fd410, %64, fd409;
fma.rn.f64 fd411, fd379, 0d3FD3C6EF372FE950, fd410;
mul.f64 fd412, fd402, 0d3FE2CF2304755A5E;
mul.f64 fd413, fd404, 0d3FEE6F0E134454FF;
sub.f64 fd414, fd413, fd412;
add.f64 fd415, fd414, fd411;
sub.f64 fd416, fd411, fd414;
add.f64 fd417, %84, %132;
add.f64 fd418, %68, fd417;
add.f64 fd419, %100, %116;
add.f64 fd420, fd419, fd418;
add.f64 fd421, %85, %133;
add.f64 fd422, %69, fd421;
add.f64 fd423, %101, %117;
add.f64 fd424, fd423, fd422;
fma.rn.f64 fd425, fd417, 0d3FD3C6EF372FE950, %68;
mul.f64 fd426, fd419, 0d3FE9E3779B97F4A8;
sub.f64 fd427, fd425, fd426;
sub.f64 fd428, %85, %133;
mul.f64 fd429, fd428, 0d3FEE6F0E134454FF;
sub.f64 fd430, %101, %117;
mul.f64 fd431, fd430, 0dBFE2CF2304755A5E;
sub.f64 fd432, fd431, fd429;
sub.f64 fd433, fd427, fd432;
add.f64 fd434, fd432, fd427;
mul.f64 fd435, fd417, 0d3FE9E3779B97F4A8;
sub.f64 fd436, %68, fd435;
fma.rn.f64 fd437, fd419, 0d3FD3C6EF372FE950, fd436;
mul.f64 fd438, fd428, 0d3FE2CF2304755A5E;
mul.f64 fd439, fd430, 0d3FEE6F0E134454FF;
sub.f64 fd440, fd439, fd438;
sub.f64 fd441, fd437, fd440;
add.f64 fd442, fd440, fd437;
fma.rn.f64 fd443, fd421, 0d3FD3C6EF372FE950, %69;
mul.f64 fd444, fd423, 0d3FE9E3779B97F4A8;
sub.f64 fd445, fd443, fd444;
sub.f64 fd446, %84, %132;
mul.f64 fd447, fd446, 0d3FEE6F0E134454FF;
sub.f64 fd448, %100, %116;
mul.f64 fd449, fd448, 0dBFE2CF2304755A5E;
sub.f64 fd450, fd449, fd447;
add.f64 fd451, fd450, fd445;
sub.f64 fd452, fd445, fd450;
mul.f64 fd453, fd421, 0d3FE9E3779B97F4A8;
sub.f64 fd454, %69, fd453;
fma.rn.f64 fd455, fd423, 0d3FD3C6EF372FE950, fd454;
mul.f64 fd456, fd446, 0d3FE2CF2304755A5E;
mul.f64 fd457, fd448, 0d3FEE6F0E134454FF;
sub.f64 fd458, fd457, fd456;
add.f64 fd459, fd458, fd455;
sub.f64 fd460, fd455, fd458;
add.f64 fd461, %89, %137;
add.f64 fd462, %73, fd461;
add.f64 fd463, %105, %121;
add.f64 fd464, fd463, fd462;
add.f64 fd465, %91, %138;
add.f64 fd466, %75, fd465;
add.f64 fd467, %107, %123;
add.f64 fd468, fd467, fd466;
fma.rn.f64 fd469, fd461, 0d3FD3C6EF372FE950, %73;
mul.f64 fd470, fd463, 0d3FE9E3779B97F4A8;
sub.f64 fd471, fd469, fd470;
sub.f64 fd472, %91, %138;
mul.f64 fd473, fd472, 0d3FEE6F0E134454FF;
sub.f64 fd474, %107, %123;
mul.f64 fd475, fd474, 0dBFE2CF2304755A5E;
sub.f64 fd476, fd475, fd473;
sub.f64 fd477, fd471, fd476;
add.f64 fd478, fd476, fd471;
mul.f64 fd479, fd461, 0d3FE9E3779B97F4A8;
sub.f64 fd480, %73, fd479;
fma.rn.f64 fd481, fd463, 0d3FD3C6EF372FE950, fd480;
mul.f64 fd482, fd472, 0d3FE2CF2304755A5E;
mul.f64 fd483, fd474, 0d3FEE6F0E134454FF;
sub.f64 fd484, fd483, fd482;
sub.f64 fd485, fd481, fd484;
add.f64 fd486, fd484, fd481;
fma.rn.f64 fd487, fd465, 0d3FD3C6EF372FE950, %75;
mul.f64 fd488, fd467, 0d3FE9E3779B97F4A8;
sub.f64 fd489, fd487, fd488;
sub.f64 fd490, %89, %137;
mul.f64 fd491, fd490, 0d3FEE6F0E134454FF;
sub.f64 fd492, %105, %121;
mul.f64 fd493, fd492, 0dBFE2CF2304755A5E;
sub.f64 fd494, fd493, fd491;
add.f64 fd495, fd494, fd489;
sub.f64 fd496, fd489, fd494;
mul.f64 fd497, fd465, 0d3FE9E3779B97F4A8;
sub.f64 fd498, %75, fd497;
fma.rn.f64 fd499, fd467, 0d3FD3C6EF372FE950, fd498;
mul.f64 fd500, fd490, 0d3FE2CF2304755A5E;
mul.f64 fd501, fd492, 0d3FEE6F0E134454FF;
sub.f64 fd502, fd501, fd500;
add.f64 fd503, fd502, fd499;
sub.f64 fd504, fd499, fd502;
mul.f64 fd505, fd433, 0d3FED3BC3AEFF7F95;
mul.f64 fd506, fd451, 0dBFDA07F921061AD1;
sub.f64 fd507, fd505, fd506;
mul.f64 fd508, fd451, 0d3FED3BC3AEFF7F95;
fma.rn.f64 fd509, fd433, 0dBFDA07F921061AD1, fd508;
mul.f64 fd510, fd477, 0d3FE5698496E20BD8;
mul.f64 fd511, fd495, 0dBFE7C7D7A833BEC2;
sub.f64 fd512, fd510, fd511;
mul.f64 fd513, fd495, 0d3FE5698496E20BD8;
fma.rn.f64 fd514, fd477, 0dBFE7C7D7A833BEC2, fd513;
mul.f64 fd515, fd441, 0d3FE5698496E20BD8;
mul.f64 fd516, fd459, 0dBFE7C7D7A833BEC2;
sub.f64 fd517, fd515, fd516;
mul.f64 fd518, fd459, 0d3FE5698496E20BD8;
fma.rn.f64 fd519, fd441, 0dBFE7C7D7A833BEC2, fd518;
mul.f64 fd520, fd485, 0dBFBAC2609B3C576C;
mul.f64 fd521, fd503, 0dBFEFD31F94F867C6;
sub.f64 fd522, fd520, fd521;
mul.f64 fd523, fd503, 0dBFBAC2609B3C576C;
fma.rn.f64 fd524, fd485, 0dBFEFD31F94F867C6, fd523;
mul.f64 fd525, fd442, 0d3FD3C6EF372FE950;
mul.f64 fd526, fd460, 0dBFEE6F0E134454FF;
sub.f64 fd527, fd525, fd526;
mul.f64 fd528, fd460, 0d3FD3C6EF372FE950;
fma.rn.f64 fd529, fd442, 0dBFEE6F0E134454FF, fd528;
mul.f64 fd530, fd486, 0dBFE9E3779B97F4A8;
mul.f64 fd531, fd504, 0dBFE2CF2304755A5E;
sub.f64 fd532, fd530, fd531;
mul.f64 fd533, fd504, 0dBFE9E3779B97F4A8;
fma.rn.f64 fd534, fd486, 0dBFE2CF2304755A5E, fd533;
mul.f64 fd535, fd434, 0dBFBAC2609B3C576C;
mul.f64 fd536, fd452, 0dBFEFD31F94F867C6;
sub.f64 fd537, fd535, fd536;
mul.f64 fd538, fd452, 0dBFBAC2609B3C576C;
fma.rn.f64 fd539, fd434, 0dBFEFD31F94F867C6, fd538;
mul.f64 fd540, fd478, 0dBFEF4CFC327A0080;
mul.f64 fd541, fd496, 0d3FCA9CD9AC4258F6;
sub.f64 fd542, fd540, fd541;
mul.f64 fd543, fd496, 0dBFEF4CFC327A0080;
fma.rn.f64 fd544, fd478, 0d3FCA9CD9AC4258F6, fd543;
add.f64 fd545, fd420, fd464;
add.f64 fd546, fd376, fd545;
add.f64 fd547, fd424, fd468;
add.f64 fd548, fd380, fd547;
mul.f64 fd549, fd545, 0d3FE0000000000000;
sub.f64 fd550, fd376, fd549;
sub.f64 fd551, fd424, fd468;
mul.f64 fd552, fd551, 0d3FEBB67AE8584CAA;
add.f64 fd553, fd552, fd550;
sub.f64 fd554, fd550, fd552;
mul.f64 fd555, fd547, 0d3FE0000000000000;
sub.f64 fd556, fd380, fd555;
sub.f64 fd557, fd420, fd464;
mul.f64 fd558, fd557, 0d3FEBB67AE8584CAA;
sub.f64 fd559, fd556, fd558;
add.f64 fd560, fd558, fd556;
add.f64 fd561, fd507, fd512;
add.f64 fd562, fd389, fd561;
add.f64 fd563, fd509, fd514;
add.f64 fd564, fd407, fd563;
mul.f64 fd565, fd561, 0d3FE0000000000000;
sub.f64 fd566, fd389, fd565;
sub.f64 fd567, fd509, fd514;
mul.f64 fd568, fd567, 0d3FEBB67AE8584CAA;
add.f64 fd569, fd568, fd566;
sub.f64 fd570, fd566, fd568;
mul.f64 fd571, fd563, 0d3FE0000000000000;
sub.f64 fd572, fd407, fd571;
sub.f64 fd573, fd507, fd512;
mul.f64 fd574, fd573, 0d3FEBB67AE8584CAA;
sub.f64 fd575, fd572, fd574;
add.f64 fd576, fd574, fd572;
add.f64 fd577, fd517, fd522;
add.f64 fd578, fd397, fd577;
add.f64 fd579, fd519, fd524;
add.f64 fd580, fd415, fd579;
mul.f64 fd581, fd577, 0d3FE0000000000000;
sub.f64 fd582, fd397, fd581;
sub.f64 fd583, fd519, fd524;
mul.f64 fd584, fd583, 0d3FEBB67AE8584CAA;
add.f64 fd585, fd584, fd582;
sub.f64 fd586, fd582, fd584;
mul.f64 fd587, fd579, 0d3FE0000000000000;
sub.f64 fd588, fd415, fd587;
sub.f64 fd589, fd517, fd522;
mul.f64 fd590, fd589, 0d3FEBB67AE8584CAA;
sub.f64 fd591, fd588, fd590;
add.f64 fd592, fd590, fd588;
add.f64 fd593, fd527, fd532;
add.f64 fd594, fd398, fd593;
add.f64 fd595, fd529, fd534;
add.f64 fd596, fd416, fd595;
mul.f64 fd597, fd593, 0d3FE0000000000000;
sub.f64 fd598, fd398, fd597;
sub.f64 fd599, fd529, fd534;
mul.f64 fd600, fd599, 0d3FEBB67AE8584CAA;
add.f64 fd601, fd600, fd598;
sub.f64 fd602, fd598, fd600;
mul.f64 fd603, fd595, 0d3FE0000000000000;
sub.f64 fd604, fd416, fd603;
sub.f64 fd605, fd527, fd532;
mul.f64 fd606, fd605, 0d3FEBB67AE8584CAA;
sub.f64 fd607, fd604, fd606;
add.f64 fd608, fd606, fd604;
add.f64 fd609, fd537, fd542;
add.f64 fd610, fd390, fd609;
add.f64 fd611, fd539, fd544;
add.f64 fd612, fd408, fd611;
mul.f64 fd613, fd609, 0d3FE0000000000000;
sub.f64 fd614, fd390, fd613;
sub.f64 fd615, fd539, fd544;
mul.f64 fd616, fd615, 0d3FEBB67AE8584CAA;
add.f64 fd617, fd616, fd614;
sub.f64 fd618, fd614, fd616;
mul.f64 fd619, fd611, 0d3FE0000000000000;
sub.f64 fd620, fd408, fd619;
sub.f64 fd621, fd537, fd542;
mul.f64 fd622, fd621, 0d3FEBB67AE8584CAA;
sub.f64 fd623, fd620, fd622;
add.f64 fd624, fd622, fd620;
mul.f64 fd625, fd562, 0d3FEF4CFC327A0080;
mul.f64 fd626, fd564, 0dBFCA9CD9AC4258F6;
sub.f64 fd627, fd625, fd626;
mul.f64 fd628, fd564, 0d3FEF4CFC327A0080;
fma.rn.f64 fd629, fd562, 0dBFCA9CD9AC4258F6, fd628;
mul.f64 fd630, fd578, 0d3FED3BC3AEFF7F95;
mul.f64 fd631, fd580, 0dBFDA07F921061AD1;
sub.f64 fd632, fd630, fd631;
mul.f64 fd633, fd580, 0d3FED3BC3AEFF7F95;
fma.rn.f64 fd634, fd578, 0dBFDA07F921061AD1, fd633;
mul.f64 fd635, fd594, 0d3FE9E3779B97F4A8;
mul.f64 fd636, fd596, 0dBFE2CF2304755A5E;
sub.f64 fd637, fd635, fd636;
mul.f64 fd638, fd596, 0d3FE9E3779B97F4A8;
fma.rn.f64 fd639, fd594, 0dBFE2CF2304755A5E, fd638;
mul.f64 fd640, fd610, 0d3FE5698496E20BD8;
mul.f64 fd641, fd612, 0dBFE7C7D7A833BEC2;
sub.f64 fd642, fd640, fd641;
mul.f64 fd643, fd612, 0d3FE5698496E20BD8;
fma.rn.f64 fd644, fd610, 0dBFE7C7D7A833BEC2, fd643;
mul.f64 fd645, fd553, 0d3FE0000000000000;
mul.f64 fd646, fd559, 0dBFEBB67AE8584CAA;
sub.f64 fd647, fd645, fd646;
mul.f64 fd648, fd559, 0d3FE0000000000000;
fma.rn.f64 fd649, fd553, 0dBFEBB67AE8584CAA, fd648;
mul.f64 fd650, fd569, 0d3FD3C6EF372FE950;
mul.f64 fd651, fd575, 0dBFEE6F0E134454FF;
sub.f64 fd652, fd650, fd651;
mul.f64 fd653, fd575, 0d3FD3C6EF372FE950;
fma.rn.f64 fd654, fd569, 0dBFEE6F0E134454FF, fd653;
mul.f64 fd655, fd585, 0d3FBAC2609B3C576C;
mul.f64 fd656, fd591, 0dBFEFD31F94F867C6;
sub.f64 fd657, fd655, fd656;
mul.f64 fd658, fd591, 0d3FBAC2609B3C576C;
fma.rn.f64 fd659, fd585, 0dBFEFD31F94F867C6, fd658;
mul.f64 fd660, fd601, 0dBFBAC2609B3C576C;
mul.f64 fd661, fd607, 0dBFEFD31F94F867C6;
sub.f64 fd662, fd660, fd661;
mul.f64 fd663, fd607, 0dBFBAC2609B3C576C;
fma.rn.f64 fd664, fd601, 0dBFEFD31F94F867C6, fd663;
mul.f64 fd665, fd617, 0dBFD3C6EF372FE950;
mul.f64 fd666, fd623, 0dBFEE6F0E134454FF;
sub.f64 fd667, fd665, fd666;
mul.f64 fd668, fd623, 0dBFD3C6EF372FE950;
fma.rn.f64 fd669, fd617, 0dBFEE6F0E134454FF, fd668;
mul.f64 fd670, fd554, 0dBFE0000000000000;
mul.f64 fd671, fd560, 0dBFEBB67AE8584CAA;
sub.f64 fd672, fd670, fd671;
mul.f64 fd673, fd560, 0dBFE0000000000000;
fma.rn.f64 fd674, fd554, 0dBFEBB67AE8584CAA, fd673;
mul.f64 fd675, fd570, 0dBFE5698496E20BD8;
mul.f64 fd676, fd576, 0dBFE7C7D7A833BEC2;
sub.f64 fd677, fd675, fd676;
mul.f64 fd678, fd576, 0dBFE5698496E20BD8;
fma.rn.f64 fd679, fd570, 0dBFE7C7D7A833BEC2, fd678;
mul.f64 fd680, fd586, 0dBFE9E3779B97F4A8;
mul.f64 fd681, fd592, 0dBFE2CF2304755A5E;
sub.f64 fd682, fd680, fd681;
mul.f64 fd683, fd592, 0dBFE9E3779B97F4A8;
fma.rn.f64 fd684, fd586, 0dBFE2CF2304755A5E, fd683;
mul.f64 fd685, fd602, 0dBFED3BC3AEFF7F95;
mul.f64 fd686, fd608, 0dBFDA07F921061AD1;
sub.f64 fd687, fd685, fd686;
mul.f64 fd688, fd608, 0dBFED3BC3AEFF7F95;
fma.rn.f64 fd689, fd602, 0dBFDA07F921061AD1, fd688;
mul.f64 fd690, fd618, 0dBFEF4CFC327A0080;
mul.f64 fd691, fd624, 0dBFCA9CD9AC4258F6;
sub.f64 fd692, fd690, fd691;
mul.f64 fd693, fd624, 0dBFEF4CFC327A0080;
fma.rn.f64 fd694, fd618, 0dBFCA9CD9AC4258F6, fd693;
add.f64 %1, fd296, fd548;
add.f64 %0, fd294, fd546;
add.f64 %3, fd312, fd629;
add.f64 %2, fd310, fd627;
add.f64 %5, fd328, fd634;
add.f64 %4, fd326, fd632;
add.f64 %7, fd344, fd639;
add.f64 %6, fd342, fd637;
add.f64 %9, fd360, fd644;
add.f64 %8, fd358, fd642;
add.f64 %11, fd307, fd649;
add.f64 %10, fd301, fd647;
add.f64 %13, fd323, fd654;
add.f64 %12, fd317, fd652;
add.f64 %15, fd339, fd659;
add.f64 %14, fd333, fd657;
add.f64 %17, fd355, fd664;
add.f64 %16, fd349, fd662;
add.f64 %19, fd371, fd669;
add.f64 %18, fd365, fd667;
add.f64 %21, fd308, fd674;
add.f64 %20, fd302, fd672;
add.f64 %23, fd324, fd679;
add.f64 %22, fd318, fd677;
add.f64 %25, fd340, fd684;
add.f64 %24, fd334, fd682;
add.f64 %27, fd356, fd689;
add.f64 %26, fd350, fd687;
add.f64 %29, fd372, fd694;
add.f64 %28, fd366, fd692;
sub.f64 %31, fd296, fd548;
sub.f64 %30, fd294, fd546;
sub.f64 %33, fd312, fd629;
sub.f64 %32, fd310, fd627;
sub.f64 %35, fd328, fd634;
sub.f64 %34, fd326, fd632;
sub.f64 %37, fd344, fd639;
sub.f64 %36, fd342, fd637;
sub.f64 %39, fd360, fd644;
sub.f64 %38, fd358, fd642;
sub.f64 %41, fd307, fd649;
sub.f64 %40, fd301, fd647;
sub.f64 %43, fd323, fd654;
sub.f64 %42, fd317, fd652;
sub.f64 %45, fd339, fd659;
sub.f64 %44, fd333, fd657;
sub.f64 %47, fd355, fd664;
sub.f64 %46, fd349, fd662;
sub.f64 %49, fd371, fd669;
sub.f64 %48, fd365, fd667;
sub.f64 %51, fd308, fd674;
sub.f64 %50, fd302, fd672;
sub.f64 %53, fd324, fd679;
sub.f64 %52, fd318, fd677;
sub.f64 %55, fd340, fd684;
sub.f64 %54, fd334, fd682;
sub.f64 %57, fd356, fd689;
sub.f64 %56, fd350, fd687;
sub.f64 %59, fd372, fd694;
sub.f64 %58, fd366, fd692;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y), "=d"(rmem[10].x), "=d"(rmem[10].y), "=d"(rmem[11].x), "=d"(rmem[11].y), "=d"(rmem[12].x), "=d"(rmem[12].y), "=d"(rmem[13].x), "=d"(rmem[13].y), "=d"(rmem[14].x), "=d"(rmem[14].y), "=d"(rmem[15].x), "=d"(rmem[15].y), "=d"(rmem[16].x), "=d"(rmem[16].y), "=d"(rmem[17].x), "=d"(rmem[17].y), "=d"(rmem[18].x), "=d"(rmem[18].y), "=d"(rmem[19].x), "=d"(rmem[19].y), "=d"(rmem[20].x), "=d"(rmem[20].y), "=d"(rmem[21].x), "=d"(rmem[21].y), "=d"(rmem[22].x), "=d"(rmem[22].y), "=d"(rmem[23].x), "=d"(rmem[23].y), "=d"(rmem[24].x), "=d"(rmem[24].y), "=d"(rmem[25].x), "=d"(rmem[25].y), "=d"(rmem[26].x), "=d"(rmem[26].y), "=d"(rmem[27].x), "=d"(rmem[27].y), "=d"(rmem[28].x), "=d"(rmem[28].y), "=d"(rmem[29].x), "=d"(rmem[29].y): "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y), "d"(rmem[10].x), "d"(rmem[10].y), "d"(rmem[10].y), "d"(rmem[11].x), "d"(rmem[11].y), "d"(rmem[11].y), "d"(rmem[12].x), "d"(rmem[12].y), "d"(rmem[13].x), "d"(rmem[13].y), "d"(rmem[13].y), "d"(rmem[14].x), "d"(rmem[14].y), "d"(rmem[14].y), "d"(rmem[15].x), "d"(rmem[15].y), "d"(rmem[16].x), "d"(rmem[16].y), "d"(rmem[16].y), "d"(rmem[17].x), "d"(rmem[17].y), "d"(rmem[17].y), "d"(rmem[18].x), "d"(rmem[18].y), "d"(rmem[19].x), "d"(rmem[19].y), "d"(rmem[19].y), "d"(rmem[20].x), "d"(rmem[20].y), "d"(rmem[20].y), "d"(rmem[21].x), "d"(rmem[21].y), "d"(rmem[22].x), "d"(rmem[22].y), "d"(rmem[22].y), "d"(rmem[23].x), "d"(rmem[23].y), "d"(rmem[23].y), "d"(rmem[24].x), "d"(rmem[24].y), "d"(rmem[25].x), "d"(rmem[25].y), "d"(rmem[25].y), "d"(rmem[26].x), "d"(rmem[26].y), "d"(rmem[26].y), "d"(rmem[27].x), "d"(rmem[27].y), "d"(rmem[28].x), "d"(rmem[28].y), "d"(rmem[28].y), "d"(rmem[29].x), "d"(rmem[29].y));
};


#endif


//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_21_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_21_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<411, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .f64 fd<521>;
.reg .b64 rd<2>;
add.f64 fd85, %50, %90;
add.f64 fd86, %42, fd85;
add.f64 fd87, %58, %82;
add.f64 fd88, fd87, fd86;
add.f64 fd89, %66, %74;
add.f64 fd90, fd89, fd88;
add.f64 fd91, %51, %91;
add.f64 fd92, %43, fd91;
add.f64 fd93, %59, %83;
add.f64 fd94, fd93, fd92;
add.f64 fd95, %67, %75;
add.f64 fd96, fd95, fd94;
fma.rn.f64 fd97, fd85, 0d3FE3F3A0E28BEDD1, %42;
mul.f64 fd98, fd87, 0d3FCC7B90E3024582;
sub.f64 fd99, fd97, fd98;
mul.f64 fd100, fd89, 0d3FECD4BCA9CB5C71;
sub.f64 fd101, fd99, fd100;
sub.f64 fd102, %51, %91;
mul.f64 fd103, fd102, 0d3FE904C37505DE4B;
sub.f64 fd104, %59, %83;
mul.f64 fd105, fd104, 0dBFEF329C0558E969;
sub.f64 fd106, fd105, fd103;
sub.f64 fd107, %67, %75;
mul.f64 fd108, fd107, 0d3FDBC4C04D71ABC1;
sub.f64 fd109, fd106, fd108;
sub.f64 fd110, fd101, fd109;
add.f64 fd111, fd109, fd101;
mul.f64 fd112, fd85, 0d3FCC7B90E3024582;
sub.f64 fd113, %42, fd112;
mul.f64 fd114, fd87, 0d3FECD4BCA9CB5C71;
sub.f64 fd115, fd113, fd114;
fma.rn.f64 fd116, fd89, 0d3FE3F3A0E28BEDD1, fd115;
mul.f64 fd117, fd102, 0d3FEF329C0558E969;
mul.f64 fd118, fd104, 0d3FDBC4C04D71ABC1;
sub.f64 fd119, fd118, fd117;
fma.rn.f64 fd120, fd107, 0d3FE904C37505DE4B, fd119;
sub.f64 fd121, fd116, fd120;
add.f64 fd122, fd120, fd116;
mul.f64 fd123, fd85, 0d3FECD4BCA9CB5C71;
sub.f64 fd124, %42, fd123;
fma.rn.f64 fd125, fd87, 0d3FE3F3A0E28BEDD1, fd124;
mul.f64 fd126, fd89, 0d3FCC7B90E3024582;
sub.f64 fd127, fd125, fd126;
mul.f64 fd128, fd102, 0d3FDBC4C04D71ABC1;
mul.f64 fd129, fd104, 0d3FE904C37505DE4B;
sub.f64 fd130, fd129, fd128;
mul.f64 fd131, fd107, 0d3FEF329C0558E969;
sub.f64 fd132, fd130, fd131;
sub.f64 fd133, fd127, fd132;
add.f64 fd134, fd132, fd127;
fma.rn.f64 fd135, fd91, 0d3FE3F3A0E28BEDD1, %43;
mul.f64 fd136, fd93, 0d3FCC7B90E3024582;
sub.f64 fd137, fd135, fd136;
mul.f64 fd138, fd95, 0d3FECD4BCA9CB5C71;
sub.f64 fd139, fd137, fd138;
sub.f64 fd140, %50, %90;
mul.f64 fd141, fd140, 0d3FE904C37505DE4B;
sub.f64 fd142, %58, %82;
mul.f64 fd143, fd142, 0dBFEF329C0558E969;
sub.f64 fd144, fd143, fd141;
sub.f64 fd145, %66, %74;
mul.f64 fd146, fd145, 0d3FDBC4C04D71ABC1;
sub.f64 fd147, fd144, fd146;
add.f64 fd148, fd147, fd139;
sub.f64 fd149, fd139, fd147;
mul.f64 fd150, fd91, 0d3FCC7B90E3024582;
sub.f64 fd151, %43, fd150;
mul.f64 fd152, fd93, 0d3FECD4BCA9CB5C71;
sub.f64 fd153, fd151, fd152;
fma.rn.f64 fd154, fd95, 0d3FE3F3A0E28BEDD1, fd153;
mul.f64 fd155, fd140, 0d3FEF329C0558E969;
mul.f64 fd156, fd142, 0d3FDBC4C04D71ABC1;
sub.f64 fd157, fd156, fd155;
fma.rn.f64 fd158, fd145, 0d3FE904C37505DE4B, fd157;
add.f64 fd159, fd158, fd154;
sub.f64 fd160, fd154, fd158;
mul.f64 fd161, fd91, 0d3FECD4BCA9CB5C71;
sub.f64 fd162, %43, fd161;
fma.rn.f64 fd163, fd93, 0d3FE3F3A0E28BEDD1, fd162;
mul.f64 fd164, fd95, 0d3FCC7B90E3024582;
sub.f64 fd165, fd163, fd164;
mul.f64 fd166, fd140, 0d3FDBC4C04D71ABC1;
mul.f64 fd167, fd142, 0d3FE904C37505DE4B;
sub.f64 fd168, fd167, fd166;
mul.f64 fd169, fd145, 0d3FEF329C0558E969;
sub.f64 fd170, fd168, fd169;
add.f64 fd171, fd170, fd165;
sub.f64 fd172, fd165, fd170;
add.f64 fd173, %52, %92;
add.f64 fd174, %44, fd173;
add.f64 fd175, %60, %84;
add.f64 fd176, fd175, fd174;
add.f64 fd177, %68, %76;
add.f64 fd178, fd177, fd176;
add.f64 fd179, %54, %94;
add.f64 fd180, %46, fd179;
add.f64 fd181, %62, %86;
add.f64 fd182, fd181, fd180;
add.f64 fd183, %70, %78;
add.f64 fd184, fd183, fd182;
fma.rn.f64 fd185, fd173, 0d3FE3F3A0E28BEDD1, %44;
mul.f64 fd186, fd175, 0d3FCC7B90E3024582;
sub.f64 fd187, fd185, fd186;
mul.f64 fd188, fd177, 0d3FECD4BCA9CB5C71;
sub.f64 fd189, fd187, fd188;
sub.f64 fd190, %54, %94;
mul.f64 fd191, fd190, 0d3FE904C37505DE4B;
sub.f64 fd192, %62, %86;
mul.f64 fd193, fd192, 0dBFEF329C0558E969;
sub.f64 fd194, fd193, fd191;
sub.f64 fd195, %70, %78;
mul.f64 fd196, fd195, 0d3FDBC4C04D71ABC1;
sub.f64 fd197, fd194, fd196;
sub.f64 fd198, fd189, fd197;
add.f64 fd199, fd197, fd189;
mul.f64 fd200, fd173, 0d3FCC7B90E3024582;
sub.f64 fd201, %44, fd200;
mul.f64 fd202, fd175, 0d3FECD4BCA9CB5C71;
sub.f64 fd203, fd201, fd202;
fma.rn.f64 fd204, fd177, 0d3FE3F3A0E28BEDD1, fd203;
mul.f64 fd205, fd190, 0d3FEF329C0558E969;
mul.f64 fd206, fd192, 0d3FDBC4C04D71ABC1;
sub.f64 fd207, fd206, fd205;
fma.rn.f64 fd208, fd195, 0d3FE904C37505DE4B, fd207;
sub.f64 fd209, fd204, fd208;
add.f64 fd210, fd208, fd204;
mul.f64 fd211, fd173, 0d3FECD4BCA9CB5C71;
sub.f64 fd212, %44, fd211;
fma.rn.f64 fd213, fd175, 0d3FE3F3A0E28BEDD1, fd212;
mul.f64 fd214, fd177, 0d3FCC7B90E3024582;
sub.f64 fd215, fd213, fd214;
mul.f64 fd216, fd190, 0d3FDBC4C04D71ABC1;
mul.f64 fd217, fd192, 0d3FE904C37505DE4B;
sub.f64 fd218, fd217, fd216;
mul.f64 fd219, fd195, 0d3FEF329C0558E969;
sub.f64 fd220, fd218, fd219;
sub.f64 fd221, fd215, fd220;
add.f64 fd222, fd220, fd215;
fma.rn.f64 fd223, fd179, 0d3FE3F3A0E28BEDD1, %46;
mul.f64 fd224, fd181, 0d3FCC7B90E3024582;
sub.f64 fd225, fd223, fd224;
mul.f64 fd226, fd183, 0d3FECD4BCA9CB5C71;
sub.f64 fd227, fd225, fd226;
sub.f64 fd228, %52, %92;
mul.f64 fd229, fd228, 0d3FE904C37505DE4B;
sub.f64 fd230, %60, %84;
mul.f64 fd231, fd230, 0dBFEF329C0558E969;
sub.f64 fd232, fd231, fd229;
sub.f64 fd233, %68, %76;
mul.f64 fd234, fd233, 0d3FDBC4C04D71ABC1;
sub.f64 fd235, fd232, fd234;
add.f64 fd236, fd235, fd227;
sub.f64 fd237, fd227, fd235;
mul.f64 fd238, fd179, 0d3FCC7B90E3024582;
sub.f64 fd239, %46, fd238;
mul.f64 fd240, fd181, 0d3FECD4BCA9CB5C71;
sub.f64 fd241, fd239, fd240;
fma.rn.f64 fd242, fd183, 0d3FE3F3A0E28BEDD1, fd241;
mul.f64 fd243, fd228, 0d3FEF329C0558E969;
mul.f64 fd244, fd230, 0d3FDBC4C04D71ABC1;
sub.f64 fd245, fd244, fd243;
fma.rn.f64 fd246, fd233, 0d3FE904C37505DE4B, fd245;
add.f64 fd247, fd246, fd242;
sub.f64 fd248, fd242, fd246;
mul.f64 fd249, fd179, 0d3FECD4BCA9CB5C71;
sub.f64 fd250, %46, fd249;
fma.rn.f64 fd251, fd181, 0d3FE3F3A0E28BEDD1, fd250;
mul.f64 fd252, fd183, 0d3FCC7B90E3024582;
sub.f64 fd253, fd251, fd252;
mul.f64 fd254, fd228, 0d3FDBC4C04D71ABC1;
mul.f64 fd255, fd230, 0d3FE904C37505DE4B;
sub.f64 fd256, fd255, fd254;
mul.f64 fd257, fd233, 0d3FEF329C0558E969;
sub.f64 fd258, fd256, fd257;
add.f64 fd259, fd258, fd253;
sub.f64 fd260, fd253, fd258;
add.f64 fd261, %55, %95;
add.f64 fd262, %47, fd261;
add.f64 fd263, %63, %87;
add.f64 fd264, fd263, fd262;
add.f64 fd265, %71, %79;
add.f64 fd266, fd265, fd264;
add.f64 fd267, %57, %96;
add.f64 fd268, %49, fd267;
add.f64 fd269, %65, %89;
add.f64 fd270, fd269, fd268;
add.f64 fd271, %73, %81;
add.f64 fd272, fd271, fd270;
fma.rn.f64 fd273, fd261, 0d3FE3F3A0E28BEDD1, %47;
mul.f64 fd274, fd263, 0d3FCC7B90E3024582;
sub.f64 fd275, fd273, fd274;
mul.f64 fd276, fd265, 0d3FECD4BCA9CB5C71;
sub.f64 fd277, fd275, fd276;
sub.f64 fd278, %57, %96;
mul.f64 fd279, fd278, 0d3FE904C37505DE4B;
sub.f64 fd280, %65, %89;
mul.f64 fd281, fd280, 0dBFEF329C0558E969;
sub.f64 fd282, fd281, fd279;
sub.f64 fd283, %73, %81;
mul.f64 fd284, fd283, 0d3FDBC4C04D71ABC1;
sub.f64 fd285, fd282, fd284;
sub.f64 fd286, fd277, fd285;
add.f64 fd287, fd285, fd277;
mul.f64 fd288, fd261, 0d3FCC7B90E3024582;
sub.f64 fd289, %47, fd288;
mul.f64 fd290, fd263, 0d3FECD4BCA9CB5C71;
sub.f64 fd291, fd289, fd290;
fma.rn.f64 fd292, fd265, 0d3FE3F3A0E28BEDD1, fd291;
mul.f64 fd293, fd278, 0d3FEF329C0558E969;
mul.f64 fd294, fd280, 0d3FDBC4C04D71ABC1;
sub.f64 fd295, fd294, fd293;
fma.rn.f64 fd296, fd283, 0d3FE904C37505DE4B, fd295;
sub.f64 fd297, fd292, fd296;
add.f64 fd298, fd296, fd292;
mul.f64 fd299, fd261, 0d3FECD4BCA9CB5C71;
sub.f64 fd300, %47, fd299;
fma.rn.f64 fd301, fd263, 0d3FE3F3A0E28BEDD1, fd300;
mul.f64 fd302, fd265, 0d3FCC7B90E3024582;
sub.f64 fd303, fd301, fd302;
mul.f64 fd304, fd278, 0d3FDBC4C04D71ABC1;
mul.f64 fd305, fd280, 0d3FE904C37505DE4B;
sub.f64 fd306, fd305, fd304;
mul.f64 fd307, fd283, 0d3FEF329C0558E969;
sub.f64 fd308, fd306, fd307;
sub.f64 fd309, fd303, fd308;
add.f64 fd310, fd308, fd303;
fma.rn.f64 fd311, fd267, 0d3FE3F3A0E28BEDD1, %49;
mul.f64 fd312, fd269, 0d3FCC7B90E3024582;
sub.f64 fd313, fd311, fd312;
mul.f64 fd314, fd271, 0d3FECD4BCA9CB5C71;
sub.f64 fd315, fd313, fd314;
sub.f64 fd316, %55, %95;
mul.f64 fd317, fd316, 0d3FE904C37505DE4B;
sub.f64 fd318, %63, %87;
mul.f64 fd319, fd318, 0dBFEF329C0558E969;
sub.f64 fd320, fd319, fd317;
sub.f64 fd321, %71, %79;
mul.f64 fd322, fd321, 0d3FDBC4C04D71ABC1;
sub.f64 fd323, fd320, fd322;
add.f64 fd324, fd323, fd315;
sub.f64 fd325, fd315, fd323;
mul.f64 fd326, fd267, 0d3FCC7B90E3024582;
sub.f64 fd327, %49, fd326;
mul.f64 fd328, fd269, 0d3FECD4BCA9CB5C71;
sub.f64 fd329, fd327, fd328;
fma.rn.f64 fd330, fd271, 0d3FE3F3A0E28BEDD1, fd329;
mul.f64 fd331, fd316, 0d3FEF329C0558E969;
mul.f64 fd332, fd318, 0d3FDBC4C04D71ABC1;
sub.f64 fd333, fd332, fd331;
fma.rn.f64 fd334, fd321, 0d3FE904C37505DE4B, fd333;
add.f64 fd335, fd334, fd330;
sub.f64 fd336, fd330, fd334;
mul.f64 fd337, fd267, 0d3FECD4BCA9CB5C71;
sub.f64 fd338, %49, fd337;
fma.rn.f64 fd339, fd269, 0d3FE3F3A0E28BEDD1, fd338;
mul.f64 fd340, fd271, 0d3FCC7B90E3024582;
sub.f64 fd341, fd339, fd340;
mul.f64 fd342, fd316, 0d3FDBC4C04D71ABC1;
mul.f64 fd343, fd318, 0d3FE904C37505DE4B;
sub.f64 fd344, fd343, fd342;
mul.f64 fd345, fd321, 0d3FEF329C0558E969;
sub.f64 fd346, fd344, fd345;
add.f64 fd347, fd346, fd341;
sub.f64 fd348, fd341, fd346;
mul.f64 fd349, fd198, 0d3FEE940D6BB98CC5;
mul.f64 fd350, fd236, 0dBFD2DD44CE9AFBA7;
sub.f64 fd351, fd349, fd350;
mul.f64 fd352, fd236, 0d3FEE940D6BB98CC5;
fma.rn.f64 fd353, fd198, 0dBFD2DD44CE9AFBA7, fd352;
mul.f64 fd354, fd286, 0d3FEA708C4C4BFA74;
mul.f64 fd355, fd324, 0dBFE206B7C9520CED;
sub.f64 fd356, fd354, fd355;
mul.f64 fd357, fd324, 0d3FEA708C4C4BFA74;
fma.rn.f64 fd358, fd286, 0dBFE206B7C9520CED, fd357;
mul.f64 fd359, fd209, 0d3FEA708C4C4BFA74;
mul.f64 fd360, fd247, 0dBFE206B7C9520CED;
sub.f64 fd361, fd359, fd360;
mul.f64 fd362, fd247, 0d3FEA708C4C4BFA74;
fma.rn.f64 fd363, fd209, 0dBFE206B7C9520CED, fd362;
mul.f64 fd364, fd297, 0d3FD761BF51E29C90;
mul.f64 fd365, fd335, 0dBFEDC9B7BE64378E;
sub.f64 fd366, fd364, fd365;
mul.f64 fd367, fd335, 0d3FD761BF51E29C90;
fma.rn.f64 fd368, fd297, 0dBFEDC9B7BE64378E, fd367;
mul.f64 fd369, fd221, 0d3FE3F3A0E28BEDD1;
mul.f64 fd370, fd259, 0dBFE904C37505DE4B;
sub.f64 fd371, fd369, fd370;
mul.f64 fd372, fd259, 0d3FE3F3A0E28BEDD1;
fma.rn.f64 fd373, fd221, 0dBFE904C37505DE4B, fd372;
mul.f64 fd374, fd309, 0dBFCC7B90E3024582;
mul.f64 fd375, fd347, 0dBFEF329C0558E969;
sub.f64 fd376, fd374, fd375;
mul.f64 fd377, fd347, 0dBFCC7B90E3024582;
fma.rn.f64 fd378, fd309, 0dBFEF329C0558E969, fd377;
mul.f64 fd379, fd222, 0d3FD761BF51E29C90;
mul.f64 fd380, fd260, 0dBFEDC9B7BE64378E;
sub.f64 fd381, fd379, fd380;
mul.f64 fd382, fd260, 0d3FD761BF51E29C90;
fma.rn.f64 fd383, fd222, 0dBFEDC9B7BE64378E, fd382;
mul.f64 fd384, fd310, 0dBFE7752932F8FB65;
mul.f64 fd385, fd348, 0dBFE5C3F99E0B6B95;
sub.f64 fd386, fd384, fd385;
mul.f64 fd387, fd348, 0dBFE7752932F8FB65;
fma.rn.f64 fd388, fd310, 0dBFE5C3F99E0B6B95, fd387;
mul.f64 fd389, fd210, 0d3FB32182EBFB0FE9;
mul.f64 fd390, fd248, 0dBFEFE917F00AE2CD;
sub.f64 fd391, fd389, fd390;
mul.f64 fd392, fd248, 0d3FB32182EBFB0FE9;
fma.rn.f64 fd393, fd210, 0dBFEFE917F00AE2CD, fd392;
mul.f64 fd394, fd298, 0dBFEFA4808B7D3C19;
mul.f64 fd395, fd336, 0dBFC313D12579650C;
sub.f64 fd396, fd394, fd395;
mul.f64 fd397, fd336, 0dBFEFA4808B7D3C19;
fma.rn.f64 fd398, fd298, 0dBFC313D12579650C, fd397;
mul.f64 fd399, fd199, 0dBFCC7B90E3024582;
mul.f64 fd400, fd237, 0dBFEF329C0558E969;
sub.f64 fd401, fd399, fd400;
mul.f64 fd402, fd237, 0dBFCC7B90E3024582;
fma.rn.f64 fd403, fd199, 0dBFEF329C0558E969, fd402;
mul.f64 fd404, fd287, 0dBFECD4BCA9CB5C71;
mul.f64 fd405, fd325, 0d3FDBC4C04D71ABC1;
sub.f64 fd406, fd404, fd405;
mul.f64 fd407, fd325, 0dBFECD4BCA9CB5C71;
fma.rn.f64 fd408, fd287, 0d3FDBC4C04D71ABC1, fd407;
add.f64 fd409, fd178, fd266;
add.f64 fd410, fd184, fd272;
mul.f64 fd411, fd409, 0d3FE0000000000000;
sub.f64 fd412, fd90, fd411;
sub.f64 fd413, fd184, fd272;
mul.f64 fd414, fd413, 0d3FEBB67AE8584CAA;
mul.f64 fd415, fd410, 0d3FE0000000000000;
sub.f64 fd416, fd96, fd415;
sub.f64 fd417, fd178, fd266;
mul.f64 fd418, fd417, 0d3FEBB67AE8584CAA;
add.f64 fd419, fd351, fd356;
add.f64 fd420, fd353, fd358;
mul.f64 fd421, fd419, 0d3FE0000000000000;
sub.f64 fd422, fd110, fd421;
sub.f64 fd423, fd353, fd358;
mul.f64 fd424, fd423, 0d3FEBB67AE8584CAA;
mul.f64 fd425, fd420, 0d3FE0000000000000;
sub.f64 fd426, fd148, fd425;
sub.f64 fd427, fd351, fd356;
mul.f64 fd428, fd427, 0d3FEBB67AE8584CAA;
add.f64 fd429, fd361, fd366;
add.f64 fd430, fd363, fd368;
mul.f64 fd431, fd429, 0d3FE0000000000000;
sub.f64 fd432, fd121, fd431;
sub.f64 fd433, fd363, fd368;
mul.f64 fd434, fd433, 0d3FEBB67AE8584CAA;
mul.f64 fd435, fd430, 0d3FE0000000000000;
sub.f64 fd436, fd159, fd435;
sub.f64 fd437, fd361, fd366;
mul.f64 fd438, fd437, 0d3FEBB67AE8584CAA;
add.f64 fd439, fd371, fd376;
add.f64 fd440, fd373, fd378;
mul.f64 fd441, fd439, 0d3FE0000000000000;
sub.f64 fd442, fd133, fd441;
sub.f64 fd443, fd373, fd378;
mul.f64 fd444, fd443, 0d3FEBB67AE8584CAA;
mul.f64 fd445, fd440, 0d3FE0000000000000;
sub.f64 fd446, fd171, fd445;
sub.f64 fd447, fd371, fd376;
mul.f64 fd448, fd447, 0d3FEBB67AE8584CAA;
add.f64 fd449, fd381, fd386;
add.f64 fd450, fd383, fd388;
mul.f64 fd451, fd449, 0d3FE0000000000000;
sub.f64 fd452, fd134, fd451;
sub.f64 fd453, fd383, fd388;
mul.f64 fd454, fd453, 0d3FEBB67AE8584CAA;
mul.f64 fd455, fd450, 0d3FE0000000000000;
sub.f64 fd456, fd172, fd455;
sub.f64 fd457, fd381, fd386;
mul.f64 fd458, fd457, 0d3FEBB67AE8584CAA;
add.f64 fd459, fd391, fd396;
add.f64 fd460, fd393, fd398;
mul.f64 fd461, fd459, 0d3FE0000000000000;
sub.f64 fd462, fd122, fd461;
sub.f64 fd463, fd393, fd398;
mul.f64 fd464, fd463, 0d3FEBB67AE8584CAA;
mul.f64 fd465, fd460, 0d3FE0000000000000;
sub.f64 fd466, fd160, fd465;
sub.f64 fd467, fd391, fd396;
mul.f64 fd468, fd467, 0d3FEBB67AE8584CAA;
add.f64 fd469, fd401, fd406;
add.f64 fd470, fd403, fd408;
mul.f64 fd471, fd469, 0d3FE0000000000000;
sub.f64 fd472, fd111, fd471;
sub.f64 fd473, fd403, fd408;
mul.f64 fd474, fd473, 0d3FEBB67AE8584CAA;
mul.f64 fd475, fd470, 0d3FE0000000000000;
sub.f64 fd476, fd149, fd475;
sub.f64 fd477, fd401, fd406;
mul.f64 fd478, fd477, 0d3FEBB67AE8584CAA;
add.f64 %1, fd96, fd410;
add.f64 %0, fd90, fd409;
add.f64 %3, fd148, fd420;
add.f64 %2, fd110, fd419;
add.f64 %5, fd159, fd430;
add.f64 %4, fd121, fd429;
add.f64 %7, fd171, fd440;
add.f64 %6, fd133, fd439;
add.f64 %9, fd172, fd450;
add.f64 %8, fd134, fd449;
add.f64 %11, fd160, fd460;
add.f64 %10, fd122, fd459;
add.f64 %13, fd149, fd470;
add.f64 %12, fd111, fd469;
sub.f64 %15, fd416, fd418;
add.f64 %14, fd414, fd412;
sub.f64 %17, fd426, fd428;
add.f64 %16, fd424, fd422;
sub.f64 %19, fd436, fd438;
add.f64 %18, fd434, fd432;
sub.f64 %21, fd446, fd448;
add.f64 %20, fd444, fd442;
sub.f64 %23, fd456, fd458;
add.f64 %22, fd454, fd452;
sub.f64 %25, fd466, fd468;
add.f64 %24, fd464, fd462;
sub.f64 %27, fd476, fd478;
add.f64 %26, fd474, fd472;
add.f64 %29, fd418, fd416;
sub.f64 %28, fd412, fd414;
add.f64 %31, fd428, fd426;
sub.f64 %30, fd422, fd424;
add.f64 %33, fd438, fd436;
sub.f64 %32, fd432, fd434;
add.f64 %35, fd448, fd446;
sub.f64 %34, fd442, fd444;
add.f64 %37, fd458, fd456;
sub.f64 %36, fd452, fd454;
add.f64 %39, fd468, fd466;
sub.f64 %38, fd462, fd464;
add.f64 %41, fd478, fd476;
sub.f64 %40, fd472, fd474;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y), "=d"(rmem[10].x), "=d"(rmem[10].y), "=d"(rmem[11].x), "=d"(rmem[11].y), "=d"(rmem[12].x), "=d"(rmem[12].y), "=d"(rmem[13].x), "=d"(rmem[13].y), "=d"(rmem[14].x), "=d"(rmem[14].y), "=d"(rmem[15].x), "=d"(rmem[15].y), "=d"(rmem[16].x), "=d"(rmem[16].y), "=d"(rmem[17].x), "=d"(rmem[17].y), "=d"(rmem[18].x), "=d"(rmem[18].y), "=d"(rmem[19].x), "=d"(rmem[19].y), "=d"(rmem[20].x), "=d"(rmem[20].y): "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y), "d"(rmem[10].x), "d"(rmem[10].y), "d"(rmem[10].y), "d"(rmem[11].x), "d"(rmem[11].y), "d"(rmem[11].y), "d"(rmem[12].x), "d"(rmem[12].y), "d"(rmem[13].x), "d"(rmem[13].y), "d"(rmem[13].y), "d"(rmem[14].x), "d"(rmem[14].y), "d"(rmem[14].y), "d"(rmem[15].x), "d"(rmem[15].y), "d"(rmem[16].x), "d"(rmem[16].y), "d"(rmem[16].y), "d"(rmem[17].x), "d"(rmem[17].y), "d"(rmem[17].y), "d"(rmem[18].x), "d"(rmem[18].y), "d"(rmem[19].x), "d"(rmem[19].y), "d"(rmem[19].y), "d"(rmem[20].x), "d"(rmem[20].y));
};


#endif

//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_28_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_28_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<416, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .f64 fd<697>;
.reg .b64 rd<2>;
add.f64 fd113, %66, %120;
add.f64 fd114, %56, fd113;
add.f64 fd115, %77, %109;
add.f64 fd116, fd115, fd114;
add.f64 fd117, %88, %98;
add.f64 fd118, fd117, fd116;
add.f64 fd119, %68, %121;
add.f64 fd120, %57, fd119;
add.f64 fd121, %79, %111;
add.f64 fd122, fd121, fd120;
add.f64 fd123, %89, %100;
add.f64 fd124, fd123, fd122;
fma.rn.f64 fd125, fd113, 0d3FE3F3A0E28BEDD1, %56;
mul.f64 fd126, fd115, 0d3FCC7B90E3024582;
sub.f64 fd127, fd125, fd126;
mul.f64 fd128, fd117, 0d3FECD4BCA9CB5C71;
sub.f64 fd129, fd127, fd128;
sub.f64 fd130, %68, %121;
mul.f64 fd131, fd130, 0d3FE904C37505DE4B;
sub.f64 fd132, %79, %111;
mul.f64 fd133, fd132, 0dBFEF329C0558E969;
sub.f64 fd134, fd133, fd131;
sub.f64 fd135, %89, %100;
mul.f64 fd136, fd135, 0d3FDBC4C04D71ABC1;
sub.f64 fd137, fd134, fd136;
sub.f64 fd138, fd129, fd137;
add.f64 fd139, fd137, fd129;
mul.f64 fd140, fd113, 0d3FCC7B90E3024582;
sub.f64 fd141, %56, fd140;
mul.f64 fd142, fd115, 0d3FECD4BCA9CB5C71;
sub.f64 fd143, fd141, fd142;
fma.rn.f64 fd144, fd117, 0d3FE3F3A0E28BEDD1, fd143;
mul.f64 fd145, fd130, 0d3FEF329C0558E969;
mul.f64 fd146, fd132, 0d3FDBC4C04D71ABC1;
sub.f64 fd147, fd146, fd145;
fma.rn.f64 fd148, fd135, 0d3FE904C37505DE4B, fd147;
sub.f64 fd149, fd144, fd148;
add.f64 fd150, fd148, fd144;
mul.f64 fd151, fd113, 0d3FECD4BCA9CB5C71;
sub.f64 fd152, %56, fd151;
fma.rn.f64 fd153, fd115, 0d3FE3F3A0E28BEDD1, fd152;
mul.f64 fd154, fd117, 0d3FCC7B90E3024582;
sub.f64 fd155, fd153, fd154;
mul.f64 fd156, fd130, 0d3FDBC4C04D71ABC1;
mul.f64 fd157, fd132, 0d3FE904C37505DE4B;
sub.f64 fd158, fd157, fd156;
mul.f64 fd159, fd135, 0d3FEF329C0558E969;
sub.f64 fd160, fd158, fd159;
sub.f64 fd161, fd155, fd160;
add.f64 fd162, fd160, fd155;
fma.rn.f64 fd163, fd119, 0d3FE3F3A0E28BEDD1, %57;
mul.f64 fd164, fd121, 0d3FCC7B90E3024582;
sub.f64 fd165, fd163, fd164;
mul.f64 fd166, fd123, 0d3FECD4BCA9CB5C71;
sub.f64 fd167, fd165, fd166;
sub.f64 fd168, %66, %120;
mul.f64 fd169, fd168, 0d3FE904C37505DE4B;
sub.f64 fd170, %77, %109;
mul.f64 fd171, fd170, 0dBFEF329C0558E969;
sub.f64 fd172, fd171, fd169;
sub.f64 fd173, %88, %98;
mul.f64 fd174, fd173, 0d3FDBC4C04D71ABC1;
sub.f64 fd175, fd172, fd174;
add.f64 fd176, fd175, fd167;
sub.f64 fd177, fd167, fd175;
mul.f64 fd178, fd119, 0d3FCC7B90E3024582;
sub.f64 fd179, %57, fd178;
mul.f64 fd180, fd121, 0d3FECD4BCA9CB5C71;
sub.f64 fd181, fd179, fd180;
fma.rn.f64 fd182, fd123, 0d3FE3F3A0E28BEDD1, fd181;
mul.f64 fd183, fd168, 0d3FEF329C0558E969;
mul.f64 fd184, fd170, 0d3FDBC4C04D71ABC1;
sub.f64 fd185, fd184, fd183;
fma.rn.f64 fd186, fd173, 0d3FE904C37505DE4B, fd185;
add.f64 fd187, fd186, fd182;
sub.f64 fd188, fd182, fd186;
mul.f64 fd189, fd119, 0d3FECD4BCA9CB5C71;
sub.f64 fd190, %57, fd189;
fma.rn.f64 fd191, fd121, 0d3FE3F3A0E28BEDD1, fd190;
mul.f64 fd192, fd123, 0d3FCC7B90E3024582;
sub.f64 fd193, fd191, fd192;
mul.f64 fd194, fd168, 0d3FDBC4C04D71ABC1;
mul.f64 fd195, fd170, 0d3FE904C37505DE4B;
sub.f64 fd196, fd195, fd194;
mul.f64 fd197, fd173, 0d3FEF329C0558E969;
sub.f64 fd198, fd196, fd197;
add.f64 fd199, fd198, fd193;
sub.f64 fd200, fd193, fd198;
add.f64 fd201, %72, %125;
add.f64 fd202, %61, fd201;
add.f64 fd203, %82, %114;
add.f64 fd204, fd203, fd202;
add.f64 fd205, %93, %104;
add.f64 fd206, fd205, fd204;
add.f64 fd207, %73, %127;
add.f64 fd208, %63, fd207;
add.f64 fd209, %84, %116;
add.f64 fd210, fd209, fd208;
add.f64 fd211, %95, %105;
add.f64 fd212, fd211, fd210;
fma.rn.f64 fd213, fd201, 0d3FE3F3A0E28BEDD1, %61;
mul.f64 fd214, fd203, 0d3FCC7B90E3024582;
sub.f64 fd215, fd213, fd214;
mul.f64 fd216, fd205, 0d3FECD4BCA9CB5C71;
sub.f64 fd217, fd215, fd216;
sub.f64 fd218, %73, %127;
mul.f64 fd219, fd218, 0d3FE904C37505DE4B;
sub.f64 fd220, %84, %116;
mul.f64 fd221, fd220, 0dBFEF329C0558E969;
sub.f64 fd222, fd221, fd219;
sub.f64 fd223, %95, %105;
mul.f64 fd224, fd223, 0d3FDBC4C04D71ABC1;
sub.f64 fd225, fd222, fd224;
sub.f64 fd226, fd217, fd225;
add.f64 fd227, fd225, fd217;
mul.f64 fd228, fd201, 0d3FCC7B90E3024582;
sub.f64 fd229, %61, fd228;
mul.f64 fd230, fd203, 0d3FECD4BCA9CB5C71;
sub.f64 fd231, fd229, fd230;
fma.rn.f64 fd232, fd205, 0d3FE3F3A0E28BEDD1, fd231;
mul.f64 fd233, fd218, 0d3FEF329C0558E969;
mul.f64 fd234, fd220, 0d3FDBC4C04D71ABC1;
sub.f64 fd235, fd234, fd233;
fma.rn.f64 fd236, fd223, 0d3FE904C37505DE4B, fd235;
sub.f64 fd237, fd232, fd236;
add.f64 fd238, fd236, fd232;
mul.f64 fd239, fd201, 0d3FECD4BCA9CB5C71;
sub.f64 fd240, %61, fd239;
fma.rn.f64 fd241, fd203, 0d3FE3F3A0E28BEDD1, fd240;
mul.f64 fd242, fd205, 0d3FCC7B90E3024582;
sub.f64 fd243, fd241, fd242;
mul.f64 fd244, fd218, 0d3FDBC4C04D71ABC1;
mul.f64 fd245, fd220, 0d3FE904C37505DE4B;
sub.f64 fd246, fd245, fd244;
mul.f64 fd247, fd223, 0d3FEF329C0558E969;
sub.f64 fd248, fd246, fd247;
sub.f64 fd249, fd243, fd248;
add.f64 fd250, fd248, fd243;
fma.rn.f64 fd251, fd207, 0d3FE3F3A0E28BEDD1, %63;
mul.f64 fd252, fd209, 0d3FCC7B90E3024582;
sub.f64 fd253, fd251, fd252;
mul.f64 fd254, fd211, 0d3FECD4BCA9CB5C71;
sub.f64 fd255, fd253, fd254;
sub.f64 fd256, %72, %125;
mul.f64 fd257, fd256, 0d3FE904C37505DE4B;
sub.f64 fd258, %82, %114;
mul.f64 fd259, fd258, 0dBFEF329C0558E969;
sub.f64 fd260, fd259, fd257;
sub.f64 fd261, %93, %104;
mul.f64 fd262, fd261, 0d3FDBC4C04D71ABC1;
sub.f64 fd263, fd260, fd262;
add.f64 fd264, fd263, fd255;
sub.f64 fd265, fd255, fd263;
mul.f64 fd266, fd207, 0d3FCC7B90E3024582;
sub.f64 fd267, %63, fd266;
mul.f64 fd268, fd209, 0d3FECD4BCA9CB5C71;
sub.f64 fd269, fd267, fd268;
fma.rn.f64 fd270, fd211, 0d3FE3F3A0E28BEDD1, fd269;
mul.f64 fd271, fd256, 0d3FEF329C0558E969;
mul.f64 fd272, fd258, 0d3FDBC4C04D71ABC1;
sub.f64 fd273, fd272, fd271;
fma.rn.f64 fd274, fd261, 0d3FE904C37505DE4B, fd273;
add.f64 fd275, fd274, fd270;
sub.f64 fd276, fd270, fd274;
mul.f64 fd277, fd207, 0d3FECD4BCA9CB5C71;
sub.f64 fd278, %63, fd277;
fma.rn.f64 fd279, fd209, 0d3FE3F3A0E28BEDD1, fd278;
mul.f64 fd280, fd211, 0d3FCC7B90E3024582;
sub.f64 fd281, fd279, fd280;
mul.f64 fd282, fd256, 0d3FDBC4C04D71ABC1;
mul.f64 fd283, fd258, 0d3FE904C37505DE4B;
sub.f64 fd284, fd283, fd282;
mul.f64 fd285, fd261, 0d3FEF329C0558E969;
sub.f64 fd286, fd284, fd285;
add.f64 fd287, fd286, fd281;
sub.f64 fd288, fd281, fd286;
mul.f64 fd289, fd226, 0d3FECD4BCA9CB5C71;
mul.f64 fd290, fd264, 0dBFDBC4C04D71ABC1;
sub.f64 fd291, fd289, fd290;
mul.f64 fd292, fd264, 0d3FECD4BCA9CB5C71;
fma.rn.f64 fd293, fd226, 0dBFDBC4C04D71ABC1, fd292;
mul.f64 fd294, fd237, 0d3FE3F3A0E28BEDD1;
mul.f64 fd295, fd275, 0dBFE904C37505DE4B;
sub.f64 fd296, fd294, fd295;
mul.f64 fd297, fd275, 0d3FE3F3A0E28BEDD1;
fma.rn.f64 fd298, fd237, 0dBFE904C37505DE4B, fd297;
mul.f64 fd299, fd249, 0d3FCC7B90E3024582;
mul.f64 fd300, fd287, 0dBFEF329C0558E969;
sub.f64 fd301, fd299, fd300;
mul.f64 fd302, fd287, 0d3FCC7B90E3024582;
fma.rn.f64 fd303, fd249, 0dBFEF329C0558E969, fd302;
mul.f64 fd304, fd250, 0dBFCC7B90E3024582;
mul.f64 fd305, fd288, 0dBFEF329C0558E969;
sub.f64 fd306, fd304, fd305;
mul.f64 fd307, fd288, 0dBFCC7B90E3024582;
fma.rn.f64 fd308, fd250, 0dBFEF329C0558E969, fd307;
mul.f64 fd309, fd238, 0dBFE3F3A0E28BEDD1;
mul.f64 fd310, fd276, 0dBFE904C37505DE4B;
sub.f64 fd311, fd309, fd310;
mul.f64 fd312, fd276, 0dBFE3F3A0E28BEDD1;
fma.rn.f64 fd313, fd238, 0dBFE904C37505DE4B, fd312;
mul.f64 fd314, fd227, 0dBFECD4BCA9CB5C71;
mul.f64 fd315, fd265, 0dBFDBC4C04D71ABC1;
sub.f64 fd316, fd314, fd315;
mul.f64 fd317, fd265, 0dBFECD4BCA9CB5C71;
fma.rn.f64 fd318, fd227, 0dBFDBC4C04D71ABC1, fd317;
add.f64 fd319, fd118, fd206;
add.f64 fd320, fd124, fd212;
sub.f64 fd321, fd118, fd206;
sub.f64 fd322, fd124, fd212;
add.f64 fd323, fd138, fd291;
add.f64 fd324, fd176, fd293;
sub.f64 fd325, fd138, fd291;
sub.f64 fd326, fd176, fd293;
add.f64 fd327, fd149, fd296;
add.f64 fd328, fd187, fd298;
sub.f64 fd329, fd149, fd296;
sub.f64 fd330, fd187, fd298;
add.f64 fd331, fd161, fd301;
add.f64 fd332, fd199, fd303;
sub.f64 fd333, fd161, fd301;
sub.f64 fd334, fd199, fd303;
add.f64 fd335, fd162, fd306;
add.f64 fd336, fd200, fd308;
sub.f64 fd337, fd162, fd306;
sub.f64 fd338, fd200, fd308;
add.f64 fd339, fd150, fd311;
add.f64 fd340, fd188, fd313;
sub.f64 fd341, fd150, fd311;
sub.f64 fd342, fd188, fd313;
add.f64 fd343, fd139, fd316;
add.f64 fd344, fd177, fd318;
sub.f64 fd345, fd139, fd316;
sub.f64 fd346, fd177, fd318;
add.f64 fd347, %69, %122;
add.f64 fd348, %58, fd347;
add.f64 fd349, %80, %112;
add.f64 fd350, fd349, fd348;
add.f64 fd351, %90, %101;
add.f64 fd352, fd351, fd350;
add.f64 fd353, %71, %124;
add.f64 fd354, %60, fd353;
add.f64 fd355, %81, %113;
add.f64 fd356, fd355, fd354;
add.f64 fd357, %92, %103;
add.f64 fd358, fd357, fd356;
fma.rn.f64 fd359, fd347, 0d3FE3F3A0E28BEDD1, %58;
mul.f64 fd360, fd349, 0d3FCC7B90E3024582;
sub.f64 fd361, fd359, fd360;
mul.f64 fd362, fd351, 0d3FECD4BCA9CB5C71;
sub.f64 fd363, fd361, fd362;
sub.f64 fd364, %71, %124;
mul.f64 fd365, fd364, 0d3FE904C37505DE4B;
sub.f64 fd366, %81, %113;
mul.f64 fd367, fd366, 0dBFEF329C0558E969;
sub.f64 fd368, fd367, fd365;
sub.f64 fd369, %92, %103;
mul.f64 fd370, fd369, 0d3FDBC4C04D71ABC1;
sub.f64 fd371, fd368, fd370;
sub.f64 fd372, fd363, fd371;
add.f64 fd373, fd371, fd363;
mul.f64 fd374, fd347, 0d3FCC7B90E3024582;
sub.f64 fd375, %58, fd374;
mul.f64 fd376, fd349, 0d3FECD4BCA9CB5C71;
sub.f64 fd377, fd375, fd376;
fma.rn.f64 fd378, fd351, 0d3FE3F3A0E28BEDD1, fd377;
mul.f64 fd379, fd364, 0d3FEF329C0558E969;
mul.f64 fd380, fd366, 0d3FDBC4C04D71ABC1;
sub.f64 fd381, fd380, fd379;
fma.rn.f64 fd382, fd369, 0d3FE904C37505DE4B, fd381;
sub.f64 fd383, fd378, fd382;
add.f64 fd384, fd382, fd378;
mul.f64 fd385, fd347, 0d3FECD4BCA9CB5C71;
sub.f64 fd386, %58, fd385;
fma.rn.f64 fd387, fd349, 0d3FE3F3A0E28BEDD1, fd386;
mul.f64 fd388, fd351, 0d3FCC7B90E3024582;
sub.f64 fd389, fd387, fd388;
mul.f64 fd390, fd364, 0d3FDBC4C04D71ABC1;
mul.f64 fd391, fd366, 0d3FE904C37505DE4B;
sub.f64 fd392, fd391, fd390;
mul.f64 fd393, fd369, 0d3FEF329C0558E969;
sub.f64 fd394, fd392, fd393;
sub.f64 fd395, fd389, fd394;
add.f64 fd396, fd394, fd389;
fma.rn.f64 fd397, fd353, 0d3FE3F3A0E28BEDD1, %60;
mul.f64 fd398, fd355, 0d3FCC7B90E3024582;
sub.f64 fd399, fd397, fd398;
mul.f64 fd400, fd357, 0d3FECD4BCA9CB5C71;
sub.f64 fd401, fd399, fd400;
sub.f64 fd402, %69, %122;
mul.f64 fd403, fd402, 0d3FE904C37505DE4B;
sub.f64 fd404, %80, %112;
mul.f64 fd405, fd404, 0dBFEF329C0558E969;
sub.f64 fd406, fd405, fd403;
sub.f64 fd407, %90, %101;
mul.f64 fd408, fd407, 0d3FDBC4C04D71ABC1;
sub.f64 fd409, fd406, fd408;
add.f64 fd410, fd409, fd401;
sub.f64 fd411, fd401, fd409;
mul.f64 fd412, fd353, 0d3FCC7B90E3024582;
sub.f64 fd413, %60, fd412;
mul.f64 fd414, fd355, 0d3FECD4BCA9CB5C71;
sub.f64 fd415, fd413, fd414;
fma.rn.f64 fd416, fd357, 0d3FE3F3A0E28BEDD1, fd415;
mul.f64 fd417, fd402, 0d3FEF329C0558E969;
mul.f64 fd418, fd404, 0d3FDBC4C04D71ABC1;
sub.f64 fd419, fd418, fd417;
fma.rn.f64 fd420, fd407, 0d3FE904C37505DE4B, fd419;
add.f64 fd421, fd420, fd416;
sub.f64 fd422, fd416, fd420;
mul.f64 fd423, fd353, 0d3FECD4BCA9CB5C71;
sub.f64 fd424, %60, fd423;
fma.rn.f64 fd425, fd355, 0d3FE3F3A0E28BEDD1, fd424;
mul.f64 fd426, fd357, 0d3FCC7B90E3024582;
sub.f64 fd427, fd425, fd426;
mul.f64 fd428, fd402, 0d3FDBC4C04D71ABC1;
mul.f64 fd429, fd404, 0d3FE904C37505DE4B;
sub.f64 fd430, fd429, fd428;
mul.f64 fd431, fd407, 0d3FEF329C0558E969;
sub.f64 fd432, fd430, fd431;
add.f64 fd433, fd432, fd427;
sub.f64 fd434, fd427, fd432;
add.f64 fd435, %74, %128;
add.f64 fd436, %64, fd435;
add.f64 fd437, %85, %117;
add.f64 fd438, fd437, fd436;
add.f64 fd439, %96, %106;
add.f64 fd440, fd439, fd438;
add.f64 fd441, %76, %129;
add.f64 fd442, %65, fd441;
add.f64 fd443, %87, %119;
add.f64 fd444, fd443, fd442;
add.f64 fd445, %97, %108;
add.f64 fd446, fd445, fd444;
fma.rn.f64 fd447, fd435, 0d3FE3F3A0E28BEDD1, %64;
mul.f64 fd448, fd437, 0d3FCC7B90E3024582;
sub.f64 fd449, fd447, fd448;
mul.f64 fd450, fd439, 0d3FECD4BCA9CB5C71;
sub.f64 fd451, fd449, fd450;
sub.f64 fd452, %76, %129;
mul.f64 fd453, fd452, 0d3FE904C37505DE4B;
sub.f64 fd454, %87, %119;
mul.f64 fd455, fd454, 0dBFEF329C0558E969;
sub.f64 fd456, fd455, fd453;
sub.f64 fd457, %97, %108;
mul.f64 fd458, fd457, 0d3FDBC4C04D71ABC1;
sub.f64 fd459, fd456, fd458;
sub.f64 fd460, fd451, fd459;
add.f64 fd461, fd459, fd451;
mul.f64 fd462, fd435, 0d3FCC7B90E3024582;
sub.f64 fd463, %64, fd462;
mul.f64 fd464, fd437, 0d3FECD4BCA9CB5C71;
sub.f64 fd465, fd463, fd464;
fma.rn.f64 fd466, fd439, 0d3FE3F3A0E28BEDD1, fd465;
mul.f64 fd467, fd452, 0d3FEF329C0558E969;
mul.f64 fd468, fd454, 0d3FDBC4C04D71ABC1;
sub.f64 fd469, fd468, fd467;
fma.rn.f64 fd470, fd457, 0d3FE904C37505DE4B, fd469;
sub.f64 fd471, fd466, fd470;
add.f64 fd472, fd470, fd466;
mul.f64 fd473, fd435, 0d3FECD4BCA9CB5C71;
sub.f64 fd474, %64, fd473;
fma.rn.f64 fd475, fd437, 0d3FE3F3A0E28BEDD1, fd474;
mul.f64 fd476, fd439, 0d3FCC7B90E3024582;
sub.f64 fd477, fd475, fd476;
mul.f64 fd478, fd452, 0d3FDBC4C04D71ABC1;
mul.f64 fd479, fd454, 0d3FE904C37505DE4B;
sub.f64 fd480, fd479, fd478;
mul.f64 fd481, fd457, 0d3FEF329C0558E969;
sub.f64 fd482, fd480, fd481;
sub.f64 fd483, fd477, fd482;
add.f64 fd484, fd482, fd477;
fma.rn.f64 fd485, fd441, 0d3FE3F3A0E28BEDD1, %65;
mul.f64 fd486, fd443, 0d3FCC7B90E3024582;
sub.f64 fd487, fd485, fd486;
mul.f64 fd488, fd445, 0d3FECD4BCA9CB5C71;
sub.f64 fd489, fd487, fd488;
sub.f64 fd490, %74, %128;
mul.f64 fd491, fd490, 0d3FE904C37505DE4B;
sub.f64 fd492, %85, %117;
mul.f64 fd493, fd492, 0dBFEF329C0558E969;
sub.f64 fd494, fd493, fd491;
sub.f64 fd495, %96, %106;
mul.f64 fd496, fd495, 0d3FDBC4C04D71ABC1;
sub.f64 fd497, fd494, fd496;
add.f64 fd498, fd497, fd489;
sub.f64 fd499, fd489, fd497;
mul.f64 fd500, fd441, 0d3FCC7B90E3024582;
sub.f64 fd501, %65, fd500;
mul.f64 fd502, fd443, 0d3FECD4BCA9CB5C71;
sub.f64 fd503, fd501, fd502;
fma.rn.f64 fd504, fd445, 0d3FE3F3A0E28BEDD1, fd503;
mul.f64 fd505, fd490, 0d3FEF329C0558E969;
mul.f64 fd506, fd492, 0d3FDBC4C04D71ABC1;
sub.f64 fd507, fd506, fd505;
fma.rn.f64 fd508, fd495, 0d3FE904C37505DE4B, fd507;
add.f64 fd509, fd508, fd504;
sub.f64 fd510, fd504, fd508;
mul.f64 fd511, fd441, 0d3FECD4BCA9CB5C71;
sub.f64 fd512, %65, fd511;
fma.rn.f64 fd513, fd443, 0d3FE3F3A0E28BEDD1, fd512;
mul.f64 fd514, fd445, 0d3FCC7B90E3024582;
sub.f64 fd515, fd513, fd514;
mul.f64 fd516, fd490, 0d3FDBC4C04D71ABC1;
mul.f64 fd517, fd492, 0d3FE904C37505DE4B;
sub.f64 fd518, fd517, fd516;
mul.f64 fd519, fd495, 0d3FEF329C0558E969;
sub.f64 fd520, fd518, fd519;
add.f64 fd521, fd520, fd515;
sub.f64 fd522, fd515, fd520;
mul.f64 fd523, fd460, 0d3FECD4BCA9CB5C71;
mul.f64 fd524, fd498, 0dBFDBC4C04D71ABC1;
sub.f64 fd525, fd523, fd524;
mul.f64 fd526, fd498, 0d3FECD4BCA9CB5C71;
fma.rn.f64 fd527, fd460, 0dBFDBC4C04D71ABC1, fd526;
mul.f64 fd528, fd471, 0d3FE3F3A0E28BEDD1;
mul.f64 fd529, fd509, 0dBFE904C37505DE4B;
sub.f64 fd530, fd528, fd529;
mul.f64 fd531, fd509, 0d3FE3F3A0E28BEDD1;
fma.rn.f64 fd532, fd471, 0dBFE904C37505DE4B, fd531;
mul.f64 fd533, fd483, 0d3FCC7B90E3024582;
mul.f64 fd534, fd521, 0dBFEF329C0558E969;
sub.f64 fd535, fd533, fd534;
mul.f64 fd536, fd521, 0d3FCC7B90E3024582;
fma.rn.f64 fd537, fd483, 0dBFEF329C0558E969, fd536;
mul.f64 fd538, fd484, 0dBFCC7B90E3024582;
mul.f64 fd539, fd522, 0dBFEF329C0558E969;
sub.f64 fd540, fd538, fd539;
mul.f64 fd541, fd522, 0dBFCC7B90E3024582;
fma.rn.f64 fd542, fd484, 0dBFEF329C0558E969, fd541;
mul.f64 fd543, fd472, 0dBFE3F3A0E28BEDD1;
mul.f64 fd544, fd510, 0dBFE904C37505DE4B;
sub.f64 fd545, fd543, fd544;
mul.f64 fd546, fd510, 0dBFE3F3A0E28BEDD1;
fma.rn.f64 fd547, fd472, 0dBFE904C37505DE4B, fd546;
mul.f64 fd548, fd461, 0dBFECD4BCA9CB5C71;
mul.f64 fd549, fd499, 0dBFDBC4C04D71ABC1;
sub.f64 fd550, fd548, fd549;
mul.f64 fd551, fd499, 0dBFECD4BCA9CB5C71;
fma.rn.f64 fd552, fd461, 0dBFDBC4C04D71ABC1, fd551;
add.f64 fd553, fd352, fd440;
add.f64 fd554, fd358, fd446;
sub.f64 fd555, fd352, fd440;
sub.f64 fd556, fd358, fd446;
add.f64 fd557, fd372, fd525;
add.f64 fd558, fd410, fd527;
sub.f64 fd559, fd372, fd525;
sub.f64 fd560, fd410, fd527;
add.f64 fd561, fd383, fd530;
add.f64 fd562, fd421, fd532;
sub.f64 fd563, fd383, fd530;
sub.f64 fd564, fd421, fd532;
add.f64 fd565, fd395, fd535;
add.f64 fd566, fd433, fd537;
sub.f64 fd567, fd395, fd535;
sub.f64 fd568, fd433, fd537;
add.f64 fd569, fd396, fd540;
add.f64 fd570, fd434, fd542;
sub.f64 fd571, fd396, fd540;
sub.f64 fd572, fd434, fd542;
add.f64 fd573, fd384, fd545;
add.f64 fd574, fd422, fd547;
sub.f64 fd575, fd384, fd545;
sub.f64 fd576, fd422, fd547;
add.f64 fd577, fd373, fd550;
add.f64 fd578, fd411, fd552;
sub.f64 fd579, fd373, fd550;
sub.f64 fd580, fd411, fd552;
mul.f64 fd581, fd557, 0d3FEF329C0558E969;
mul.f64 fd582, fd558, 0dBFCC7B90E3024582;
sub.f64 fd583, fd581, fd582;
mul.f64 fd584, fd558, 0d3FEF329C0558E969;
fma.rn.f64 fd585, fd557, 0dBFCC7B90E3024582, fd584;
mul.f64 fd586, fd561, 0d3FECD4BCA9CB5C71;
mul.f64 fd587, fd562, 0dBFDBC4C04D71ABC1;
sub.f64 fd588, fd586, fd587;
mul.f64 fd589, fd562, 0d3FECD4BCA9CB5C71;
fma.rn.f64 fd590, fd561, 0dBFDBC4C04D71ABC1, fd589;
mul.f64 fd591, fd565, 0d3FE904C37505DE4B;
mul.f64 fd592, fd566, 0dBFE3F3A0E28BEDD1;
sub.f64 fd593, fd591, fd592;
mul.f64 fd594, fd566, 0d3FE904C37505DE4B;
fma.rn.f64 fd595, fd565, 0dBFE3F3A0E28BEDD1, fd594;
mul.f64 fd596, fd569, 0d3FE3F3A0E28BEDD1;
mul.f64 fd597, fd570, 0dBFE904C37505DE4B;
sub.f64 fd598, fd596, fd597;
mul.f64 fd599, fd570, 0d3FE3F3A0E28BEDD1;
fma.rn.f64 fd600, fd569, 0dBFE904C37505DE4B, fd599;
mul.f64 fd601, fd573, 0d3FDBC4C04D71ABC1;
mul.f64 fd602, fd574, 0dBFECD4BCA9CB5C71;
sub.f64 fd603, fd601, fd602;
mul.f64 fd604, fd574, 0d3FDBC4C04D71ABC1;
fma.rn.f64 fd605, fd573, 0dBFECD4BCA9CB5C71, fd604;
mul.f64 fd606, fd577, 0d3FCC7B90E3024582;
mul.f64 fd607, fd578, 0dBFEF329C0558E969;
sub.f64 fd608, fd606, fd607;
mul.f64 fd609, fd578, 0d3FCC7B90E3024582;
fma.rn.f64 fd610, fd577, 0dBFEF329C0558E969, fd609;
mul.f64 fd611, fd559, 0dBFCC7B90E3024582;
mul.f64 fd612, fd560, 0dBFEF329C0558E969;
sub.f64 fd613, fd611, fd612;
mul.f64 fd614, fd560, 0dBFCC7B90E3024582;
fma.rn.f64 fd615, fd559, 0dBFEF329C0558E969, fd614;
mul.f64 fd616, fd563, 0dBFDBC4C04D71ABC1;
mul.f64 fd617, fd564, 0dBFECD4BCA9CB5C71;
sub.f64 fd618, fd616, fd617;
mul.f64 fd619, fd564, 0dBFDBC4C04D71ABC1;
fma.rn.f64 fd620, fd563, 0dBFECD4BCA9CB5C71, fd619;
mul.f64 fd621, fd567, 0dBFE3F3A0E28BEDD1;
mul.f64 fd622, fd568, 0dBFE904C37505DE4B;
sub.f64 fd623, fd621, fd622;
mul.f64 fd624, fd568, 0dBFE3F3A0E28BEDD1;
fma.rn.f64 fd625, fd567, 0dBFE904C37505DE4B, fd624;
mul.f64 fd626, fd571, 0dBFE904C37505DE4B;
mul.f64 fd627, fd572, 0dBFE3F3A0E28BEDD1;
sub.f64 fd628, fd626, fd627;
mul.f64 fd629, fd572, 0dBFE904C37505DE4B;
fma.rn.f64 fd630, fd571, 0dBFE3F3A0E28BEDD1, fd629;
mul.f64 fd631, fd575, 0dBFECD4BCA9CB5C71;
mul.f64 fd632, fd576, 0dBFDBC4C04D71ABC1;
sub.f64 fd633, fd631, fd632;
mul.f64 fd634, fd576, 0dBFECD4BCA9CB5C71;
fma.rn.f64 fd635, fd575, 0dBFDBC4C04D71ABC1, fd634;
mul.f64 fd636, fd579, 0dBFEF329C0558E969;
mul.f64 fd637, fd580, 0dBFCC7B90E3024582;
sub.f64 fd638, fd636, fd637;
mul.f64 fd639, fd580, 0dBFEF329C0558E969;
fma.rn.f64 fd640, fd579, 0dBFCC7B90E3024582, fd639;
add.f64 %1, fd320, fd554;
add.f64 %0, fd319, fd553;
add.f64 %3, fd324, fd585;
add.f64 %2, fd323, fd583;
add.f64 %5, fd328, fd590;
add.f64 %4, fd327, fd588;
add.f64 %7, fd332, fd595;
add.f64 %6, fd331, fd593;
add.f64 %9, fd336, fd600;
add.f64 %8, fd335, fd598;
add.f64 %11, fd340, fd605;
add.f64 %10, fd339, fd603;
add.f64 %13, fd344, fd610;
add.f64 %12, fd343, fd608;
sub.f64 %15, fd322, fd555;
add.f64 %14, fd321, fd556;
add.f64 %17, fd326, fd615;
add.f64 %16, fd325, fd613;
add.f64 %19, fd330, fd620;
add.f64 %18, fd329, fd618;
add.f64 %21, fd334, fd625;
add.f64 %20, fd333, fd623;
add.f64 %23, fd338, fd630;
add.f64 %22, fd337, fd628;
add.f64 %25, fd342, fd635;
add.f64 %24, fd341, fd633;
add.f64 %27, fd346, fd640;
add.f64 %26, fd345, fd638;
sub.f64 %29, fd320, fd554;
sub.f64 %28, fd319, fd553;
sub.f64 %31, fd324, fd585;
sub.f64 %30, fd323, fd583;
sub.f64 %33, fd328, fd590;
sub.f64 %32, fd327, fd588;
sub.f64 %35, fd332, fd595;
sub.f64 %34, fd331, fd593;
sub.f64 %37, fd336, fd600;
sub.f64 %36, fd335, fd598;
sub.f64 %39, fd340, fd605;
sub.f64 %38, fd339, fd603;
sub.f64 %41, fd344, fd610;
sub.f64 %40, fd343, fd608;
add.f64 %43, fd322, fd555;
sub.f64 %42, fd321, fd556;
sub.f64 %45, fd326, fd615;
sub.f64 %44, fd325, fd613;
sub.f64 %47, fd330, fd620;
sub.f64 %46, fd329, fd618;
sub.f64 %49, fd334, fd625;
sub.f64 %48, fd333, fd623;
sub.f64 %51, fd338, fd630;
sub.f64 %50, fd337, fd628;
sub.f64 %53, fd342, fd635;
sub.f64 %52, fd341, fd633;
sub.f64 %55, fd346, fd640;
sub.f64 %54, fd345, fd638;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y), "=d"(rmem[10].x), "=d"(rmem[10].y), "=d"(rmem[11].x), "=d"(rmem[11].y), "=d"(rmem[12].x), "=d"(rmem[12].y), "=d"(rmem[13].x), "=d"(rmem[13].y), "=d"(rmem[14].x), "=d"(rmem[14].y), "=d"(rmem[15].x), "=d"(rmem[15].y), "=d"(rmem[16].x), "=d"(rmem[16].y), "=d"(rmem[17].x), "=d"(rmem[17].y), "=d"(rmem[18].x), "=d"(rmem[18].y), "=d"(rmem[19].x), "=d"(rmem[19].y), "=d"(rmem[20].x), "=d"(rmem[20].y), "=d"(rmem[21].x), "=d"(rmem[21].y), "=d"(rmem[22].x), "=d"(rmem[22].y), "=d"(rmem[23].x), "=d"(rmem[23].y), "=d"(rmem[24].x), "=d"(rmem[24].y), "=d"(rmem[25].x), "=d"(rmem[25].y), "=d"(rmem[26].x), "=d"(rmem[26].y), "=d"(rmem[27].x), "=d"(rmem[27].y): "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y), "d"(rmem[10].x), "d"(rmem[10].y), "d"(rmem[10].y), "d"(rmem[11].x), "d"(rmem[11].y), "d"(rmem[11].y), "d"(rmem[12].x), "d"(rmem[12].y), "d"(rmem[13].x), "d"(rmem[13].y), "d"(rmem[13].y), "d"(rmem[14].x), "d"(rmem[14].y), "d"(rmem[14].y), "d"(rmem[15].x), "d"(rmem[15].y), "d"(rmem[16].x), "d"(rmem[16].y), "d"(rmem[16].y), "d"(rmem[17].x), "d"(rmem[17].y), "d"(rmem[17].y), "d"(rmem[18].x), "d"(rmem[18].y), "d"(rmem[19].x), "d"(rmem[19].y), "d"(rmem[19].y), "d"(rmem[20].x), "d"(rmem[20].y), "d"(rmem[20].y), "d"(rmem[21].x), "d"(rmem[21].y), "d"(rmem[22].x), "d"(rmem[22].y), "d"(rmem[22].y), "d"(rmem[23].x), "d"(rmem[23].y), "d"(rmem[23].y), "d"(rmem[24].x), "d"(rmem[24].y), "d"(rmem[25].x), "d"(rmem[25].y), "d"(rmem[25].y), "d"(rmem[26].x), "d"(rmem[26].y), "d"(rmem[26].y), "d"(rmem[27].x), "d"(rmem[27].y));
};


#endif


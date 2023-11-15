//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_22_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_22_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<412, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .f64 fd<483>;
.reg .b64 rd<2>;
add.f64 fd89, %49, %97;
add.f64 fd90, %51, %99;
sub.f64 fd91, %49, %97;
sub.f64 fd92, %51, %99;
add.f64 fd93, %54, %92;
add.f64 fd94, %56, %93;
sub.f64 fd95, %54, %92;
sub.f64 fd96, %56, %93;
add.f64 fd97, %60, %86;
add.f64 fd98, %61, %88;
sub.f64 fd99, %60, %86;
sub.f64 fd100, %61, %88;
add.f64 fd101, %65, %81;
add.f64 fd102, %67, %83;
sub.f64 fd103, %65, %81;
sub.f64 fd104, %67, %83;
add.f64 fd105, %70, %76;
add.f64 fd106, %72, %77;
sub.f64 fd107, %70, %76;
sub.f64 fd108, %72, %77;
add.f64 fd109, %44, fd89;
add.f64 fd110, %45, fd90;
add.f64 fd111, fd109, fd93;
add.f64 fd112, fd110, fd94;
add.f64 fd113, fd111, fd97;
add.f64 fd114, fd112, fd98;
add.f64 fd115, fd113, fd101;
add.f64 fd116, fd114, fd102;
add.f64 fd117, fd115, fd105;
add.f64 fd118, fd116, fd106;
fma.rn.f64 fd119, fd89, 0d3FEAEB8C8764F0BA, %44;
fma.rn.f64 fd120, fd92, 0dBFE14CEDF8BB580B, 0d0000000000000000;
fma.rn.f64 fd121, fd90, 0d3FEAEB8C8764F0BA, %45;
fma.rn.f64 fd122, fd91, 0dBFE14CEDF8BB580B, 0d0000000000000000;
fma.rn.f64 fd123, fd93, 0d3FDA9628D9C712B6, fd119;
fma.rn.f64 fd124, fd96, 0dBFED1BB48EEE2C13, fd120;
fma.rn.f64 fd125, fd94, 0d3FDA9628D9C712B6, fd121;
fma.rn.f64 fd126, fd95, 0dBFED1BB48EEE2C13, fd122;
fma.rn.f64 fd127, fd97, 0dBFC2375F640F44DB, fd123;
fma.rn.f64 fd128, fd100, 0dBFEFAC9E043842EF, fd124;
fma.rn.f64 fd129, fd98, 0dBFC2375F640F44DB, fd125;
fma.rn.f64 fd130, fd99, 0dBFEFAC9E043842EF, fd126;
fma.rn.f64 fd131, fd101, 0dBFE4F49E7F775887, fd127;
fma.rn.f64 fd132, fd104, 0dBFE82F19BB3A28A1, fd128;
fma.rn.f64 fd133, fd102, 0dBFE4F49E7F775887, fd129;
fma.rn.f64 fd134, fd103, 0dBFE82F19BB3A28A1, fd130;
fma.rn.f64 fd135, fd105, 0dBFEEB42A9BCD5057, fd131;
fma.rn.f64 fd136, fd108, 0dBFD207E7FD768DBF, fd132;
fma.rn.f64 fd137, fd106, 0dBFEEB42A9BCD5057, fd133;
fma.rn.f64 fd138, fd107, 0dBFD207E7FD768DBF, fd134;
sub.f64 fd139, fd135, fd136;
add.f64 fd140, fd138, fd137;
add.f64 fd141, fd136, fd135;
sub.f64 fd142, fd137, fd138;
fma.rn.f64 fd143, fd89, 0d3FDA9628D9C712B6, %44;
fma.rn.f64 fd144, fd92, 0dBFED1BB48EEE2C13, 0d0000000000000000;
fma.rn.f64 fd145, fd90, 0d3FDA9628D9C712B6, %45;
fma.rn.f64 fd146, fd91, 0dBFED1BB48EEE2C13, 0d0000000000000000;
fma.rn.f64 fd147, fd93, 0dBFE4F49E7F775887, fd143;
fma.rn.f64 fd148, fd96, 0dBFE82F19BB3A28A1, fd144;
fma.rn.f64 fd149, fd94, 0dBFE4F49E7F775887, fd145;
fma.rn.f64 fd150, fd95, 0dBFE82F19BB3A28A1, fd146;
fma.rn.f64 fd151, fd97, 0dBFEEB42A9BCD5057, fd147;
fma.rn.f64 fd152, fd100, 0d3FD207E7FD768DBF, fd148;
fma.rn.f64 fd153, fd98, 0dBFEEB42A9BCD5057, fd149;
fma.rn.f64 fd154, fd99, 0d3FD207E7FD768DBF, fd150;
fma.rn.f64 fd155, fd101, 0dBFC2375F640F44DB, fd151;
fma.rn.f64 fd156, fd104, 0d3FEFAC9E043842EF, fd152;
fma.rn.f64 fd157, fd102, 0dBFC2375F640F44DB, fd153;
fma.rn.f64 fd158, fd103, 0d3FEFAC9E043842EF, fd154;
fma.rn.f64 fd159, fd105, 0d3FEAEB8C8764F0BA, fd155;
fma.rn.f64 fd160, fd108, 0d3FE14CEDF8BB580B, fd156;
fma.rn.f64 fd161, fd106, 0d3FEAEB8C8764F0BA, fd157;
fma.rn.f64 fd162, fd107, 0d3FE14CEDF8BB580B, fd158;
sub.f64 fd163, fd159, fd160;
add.f64 fd164, fd162, fd161;
add.f64 fd165, fd160, fd159;
sub.f64 fd166, fd161, fd162;
fma.rn.f64 fd167, fd89, 0dBFC2375F640F44DB, %44;
fma.rn.f64 fd168, fd92, 0dBFEFAC9E043842EF, 0d0000000000000000;
fma.rn.f64 fd169, fd90, 0dBFC2375F640F44DB, %45;
fma.rn.f64 fd170, fd91, 0dBFEFAC9E043842EF, 0d0000000000000000;
fma.rn.f64 fd171, fd93, 0dBFEEB42A9BCD5057, fd167;
fma.rn.f64 fd172, fd96, 0d3FD207E7FD768DBF, fd168;
fma.rn.f64 fd173, fd94, 0dBFEEB42A9BCD5057, fd169;
fma.rn.f64 fd174, fd95, 0d3FD207E7FD768DBF, fd170;
fma.rn.f64 fd175, fd97, 0d3FDA9628D9C712B6, fd171;
fma.rn.f64 fd176, fd100, 0d3FED1BB48EEE2C13, fd172;
fma.rn.f64 fd177, fd98, 0d3FDA9628D9C712B6, fd173;
fma.rn.f64 fd178, fd99, 0d3FED1BB48EEE2C13, fd174;
fma.rn.f64 fd179, fd101, 0d3FEAEB8C8764F0BA, fd175;
fma.rn.f64 fd180, fd104, 0dBFE14CEDF8BB580B, fd176;
fma.rn.f64 fd181, fd102, 0d3FEAEB8C8764F0BA, fd177;
fma.rn.f64 fd182, fd103, 0dBFE14CEDF8BB580B, fd178;
fma.rn.f64 fd183, fd105, 0dBFE4F49E7F775887, fd179;
fma.rn.f64 fd184, fd108, 0dBFE82F19BB3A28A1, fd180;
fma.rn.f64 fd185, fd106, 0dBFE4F49E7F775887, fd181;
fma.rn.f64 fd186, fd107, 0dBFE82F19BB3A28A1, fd182;
sub.f64 fd187, fd183, fd184;
add.f64 fd188, fd186, fd185;
add.f64 fd189, fd184, fd183;
sub.f64 fd190, fd185, fd186;
fma.rn.f64 fd191, fd89, 0dBFE4F49E7F775887, %44;
fma.rn.f64 fd192, fd92, 0dBFE82F19BB3A28A1, 0d0000000000000000;
fma.rn.f64 fd193, fd90, 0dBFE4F49E7F775887, %45;
fma.rn.f64 fd194, fd91, 0dBFE82F19BB3A28A1, 0d0000000000000000;
fma.rn.f64 fd195, fd93, 0dBFC2375F640F44DB, fd191;
fma.rn.f64 fd196, fd96, 0d3FEFAC9E043842EF, fd192;
fma.rn.f64 fd197, fd94, 0dBFC2375F640F44DB, fd193;
fma.rn.f64 fd198, fd95, 0d3FEFAC9E043842EF, fd194;
fma.rn.f64 fd199, fd97, 0d3FEAEB8C8764F0BA, fd195;
fma.rn.f64 fd200, fd100, 0dBFE14CEDF8BB580B, fd196;
fma.rn.f64 fd201, fd98, 0d3FEAEB8C8764F0BA, fd197;
fma.rn.f64 fd202, fd99, 0dBFE14CEDF8BB580B, fd198;
fma.rn.f64 fd203, fd101, 0dBFEEB42A9BCD5057, fd199;
fma.rn.f64 fd204, fd104, 0dBFD207E7FD768DBF, fd200;
fma.rn.f64 fd205, fd102, 0dBFEEB42A9BCD5057, fd201;
fma.rn.f64 fd206, fd103, 0dBFD207E7FD768DBF, fd202;
fma.rn.f64 fd207, fd105, 0d3FDA9628D9C712B6, fd203;
fma.rn.f64 fd208, fd108, 0d3FED1BB48EEE2C13, fd204;
fma.rn.f64 fd209, fd106, 0d3FDA9628D9C712B6, fd205;
fma.rn.f64 fd210, fd107, 0d3FED1BB48EEE2C13, fd206;
sub.f64 fd211, fd207, fd208;
add.f64 fd212, fd210, fd209;
add.f64 fd213, fd208, fd207;
sub.f64 fd214, fd209, fd210;
fma.rn.f64 fd215, fd89, 0dBFEEB42A9BCD5057, %44;
fma.rn.f64 fd216, fd92, 0dBFD207E7FD768DBF, 0d0000000000000000;
fma.rn.f64 fd217, fd90, 0dBFEEB42A9BCD5057, %45;
fma.rn.f64 fd218, fd91, 0dBFD207E7FD768DBF, 0d0000000000000000;
fma.rn.f64 fd219, fd93, 0d3FEAEB8C8764F0BA, fd215;
fma.rn.f64 fd220, fd96, 0d3FE14CEDF8BB580B, fd216;
fma.rn.f64 fd221, fd94, 0d3FEAEB8C8764F0BA, fd217;
fma.rn.f64 fd222, fd95, 0d3FE14CEDF8BB580B, fd218;
fma.rn.f64 fd223, fd97, 0dBFE4F49E7F775887, fd219;
fma.rn.f64 fd224, fd100, 0dBFE82F19BB3A28A1, fd220;
fma.rn.f64 fd225, fd98, 0dBFE4F49E7F775887, fd221;
fma.rn.f64 fd226, fd99, 0dBFE82F19BB3A28A1, fd222;
fma.rn.f64 fd227, fd101, 0d3FDA9628D9C712B6, fd223;
fma.rn.f64 fd228, fd104, 0d3FED1BB48EEE2C13, fd224;
fma.rn.f64 fd229, fd102, 0d3FDA9628D9C712B6, fd225;
fma.rn.f64 fd230, fd103, 0d3FED1BB48EEE2C13, fd226;
fma.rn.f64 fd231, fd105, 0dBFC2375F640F44DB, fd227;
fma.rn.f64 fd232, fd108, 0dBFEFAC9E043842EF, fd228;
fma.rn.f64 fd233, fd106, 0dBFC2375F640F44DB, fd229;
fma.rn.f64 fd234, fd107, 0dBFEFAC9E043842EF, fd230;
sub.f64 fd235, fd231, fd232;
add.f64 fd236, fd234, fd233;
add.f64 fd237, fd232, fd231;
sub.f64 fd238, fd233, fd234;
add.f64 fd239, %52, %100;
add.f64 fd240, %53, %101;
sub.f64 fd241, %52, %100;
sub.f64 fd242, %53, %101;
add.f64 fd243, %57, %94;
add.f64 fd244, %59, %96;
sub.f64 fd245, %57, %94;
sub.f64 fd246, %59, %96;
add.f64 fd247, %62, %89;
add.f64 fd248, %64, %91;
sub.f64 fd249, %62, %89;
sub.f64 fd250, %64, %91;
add.f64 fd251, %68, %84;
add.f64 fd252, %69, %85;
sub.f64 fd253, %68, %84;
sub.f64 fd254, %69, %85;
add.f64 fd255, %73, %78;
add.f64 fd256, %75, %80;
sub.f64 fd257, %73, %78;
sub.f64 fd258, %75, %80;
add.f64 fd259, %46, fd239;
add.f64 fd260, %48, fd240;
add.f64 fd261, fd259, fd243;
add.f64 fd262, fd260, fd244;
add.f64 fd263, fd261, fd247;
add.f64 fd264, fd262, fd248;
add.f64 fd265, fd263, fd251;
add.f64 fd266, fd264, fd252;
add.f64 fd267, fd265, fd255;
add.f64 fd268, fd266, fd256;
fma.rn.f64 fd269, fd239, 0d3FEAEB8C8764F0BA, %46;
fma.rn.f64 fd270, fd242, 0dBFE14CEDF8BB580B, 0d0000000000000000;
fma.rn.f64 fd271, fd240, 0d3FEAEB8C8764F0BA, %48;
fma.rn.f64 fd272, fd241, 0dBFE14CEDF8BB580B, 0d0000000000000000;
fma.rn.f64 fd273, fd243, 0d3FDA9628D9C712B6, fd269;
fma.rn.f64 fd274, fd246, 0dBFED1BB48EEE2C13, fd270;
fma.rn.f64 fd275, fd244, 0d3FDA9628D9C712B6, fd271;
fma.rn.f64 fd276, fd245, 0dBFED1BB48EEE2C13, fd272;
fma.rn.f64 fd277, fd247, 0dBFC2375F640F44DB, fd273;
fma.rn.f64 fd278, fd250, 0dBFEFAC9E043842EF, fd274;
fma.rn.f64 fd279, fd248, 0dBFC2375F640F44DB, fd275;
fma.rn.f64 fd280, fd249, 0dBFEFAC9E043842EF, fd276;
fma.rn.f64 fd281, fd251, 0dBFE4F49E7F775887, fd277;
fma.rn.f64 fd282, fd254, 0dBFE82F19BB3A28A1, fd278;
fma.rn.f64 fd283, fd252, 0dBFE4F49E7F775887, fd279;
fma.rn.f64 fd284, fd253, 0dBFE82F19BB3A28A1, fd280;
fma.rn.f64 fd285, fd255, 0dBFEEB42A9BCD5057, fd281;
fma.rn.f64 fd286, fd258, 0dBFD207E7FD768DBF, fd282;
fma.rn.f64 fd287, fd256, 0dBFEEB42A9BCD5057, fd283;
fma.rn.f64 fd288, fd257, 0dBFD207E7FD768DBF, fd284;
sub.f64 fd289, fd285, fd286;
add.f64 fd290, fd288, fd287;
add.f64 fd291, fd286, fd285;
sub.f64 fd292, fd287, fd288;
fma.rn.f64 fd293, fd239, 0d3FDA9628D9C712B6, %46;
fma.rn.f64 fd294, fd242, 0dBFED1BB48EEE2C13, 0d0000000000000000;
fma.rn.f64 fd295, fd240, 0d3FDA9628D9C712B6, %48;
fma.rn.f64 fd296, fd241, 0dBFED1BB48EEE2C13, 0d0000000000000000;
fma.rn.f64 fd297, fd243, 0dBFE4F49E7F775887, fd293;
fma.rn.f64 fd298, fd246, 0dBFE82F19BB3A28A1, fd294;
fma.rn.f64 fd299, fd244, 0dBFE4F49E7F775887, fd295;
fma.rn.f64 fd300, fd245, 0dBFE82F19BB3A28A1, fd296;
fma.rn.f64 fd301, fd247, 0dBFEEB42A9BCD5057, fd297;
fma.rn.f64 fd302, fd250, 0d3FD207E7FD768DBF, fd298;
fma.rn.f64 fd303, fd248, 0dBFEEB42A9BCD5057, fd299;
fma.rn.f64 fd304, fd249, 0d3FD207E7FD768DBF, fd300;
fma.rn.f64 fd305, fd251, 0dBFC2375F640F44DB, fd301;
fma.rn.f64 fd306, fd254, 0d3FEFAC9E043842EF, fd302;
fma.rn.f64 fd307, fd252, 0dBFC2375F640F44DB, fd303;
fma.rn.f64 fd308, fd253, 0d3FEFAC9E043842EF, fd304;
fma.rn.f64 fd309, fd255, 0d3FEAEB8C8764F0BA, fd305;
fma.rn.f64 fd310, fd258, 0d3FE14CEDF8BB580B, fd306;
fma.rn.f64 fd311, fd256, 0d3FEAEB8C8764F0BA, fd307;
fma.rn.f64 fd312, fd257, 0d3FE14CEDF8BB580B, fd308;
sub.f64 fd313, fd309, fd310;
add.f64 fd314, fd312, fd311;
add.f64 fd315, fd310, fd309;
sub.f64 fd316, fd311, fd312;
fma.rn.f64 fd317, fd239, 0dBFC2375F640F44DB, %46;
fma.rn.f64 fd318, fd242, 0dBFEFAC9E043842EF, 0d0000000000000000;
fma.rn.f64 fd319, fd240, 0dBFC2375F640F44DB, %48;
fma.rn.f64 fd320, fd241, 0dBFEFAC9E043842EF, 0d0000000000000000;
fma.rn.f64 fd321, fd243, 0dBFEEB42A9BCD5057, fd317;
fma.rn.f64 fd322, fd246, 0d3FD207E7FD768DBF, fd318;
fma.rn.f64 fd323, fd244, 0dBFEEB42A9BCD5057, fd319;
fma.rn.f64 fd324, fd245, 0d3FD207E7FD768DBF, fd320;
fma.rn.f64 fd325, fd247, 0d3FDA9628D9C712B6, fd321;
fma.rn.f64 fd326, fd250, 0d3FED1BB48EEE2C13, fd322;
fma.rn.f64 fd327, fd248, 0d3FDA9628D9C712B6, fd323;
fma.rn.f64 fd328, fd249, 0d3FED1BB48EEE2C13, fd324;
fma.rn.f64 fd329, fd251, 0d3FEAEB8C8764F0BA, fd325;
fma.rn.f64 fd330, fd254, 0dBFE14CEDF8BB580B, fd326;
fma.rn.f64 fd331, fd252, 0d3FEAEB8C8764F0BA, fd327;
fma.rn.f64 fd332, fd253, 0dBFE14CEDF8BB580B, fd328;
fma.rn.f64 fd333, fd255, 0dBFE4F49E7F775887, fd329;
fma.rn.f64 fd334, fd258, 0dBFE82F19BB3A28A1, fd330;
fma.rn.f64 fd335, fd256, 0dBFE4F49E7F775887, fd331;
fma.rn.f64 fd336, fd257, 0dBFE82F19BB3A28A1, fd332;
sub.f64 fd337, fd333, fd334;
add.f64 fd338, fd336, fd335;
add.f64 fd339, fd334, fd333;
sub.f64 fd340, fd335, fd336;
fma.rn.f64 fd341, fd239, 0dBFE4F49E7F775887, %46;
fma.rn.f64 fd342, fd242, 0dBFE82F19BB3A28A1, 0d0000000000000000;
fma.rn.f64 fd343, fd240, 0dBFE4F49E7F775887, %48;
fma.rn.f64 fd344, fd241, 0dBFE82F19BB3A28A1, 0d0000000000000000;
fma.rn.f64 fd345, fd243, 0dBFC2375F640F44DB, fd341;
fma.rn.f64 fd346, fd246, 0d3FEFAC9E043842EF, fd342;
fma.rn.f64 fd347, fd244, 0dBFC2375F640F44DB, fd343;
fma.rn.f64 fd348, fd245, 0d3FEFAC9E043842EF, fd344;
fma.rn.f64 fd349, fd247, 0d3FEAEB8C8764F0BA, fd345;
fma.rn.f64 fd350, fd250, 0dBFE14CEDF8BB580B, fd346;
fma.rn.f64 fd351, fd248, 0d3FEAEB8C8764F0BA, fd347;
fma.rn.f64 fd352, fd249, 0dBFE14CEDF8BB580B, fd348;
fma.rn.f64 fd353, fd251, 0dBFEEB42A9BCD5057, fd349;
fma.rn.f64 fd354, fd254, 0dBFD207E7FD768DBF, fd350;
fma.rn.f64 fd355, fd252, 0dBFEEB42A9BCD5057, fd351;
fma.rn.f64 fd356, fd253, 0dBFD207E7FD768DBF, fd352;
fma.rn.f64 fd357, fd255, 0d3FDA9628D9C712B6, fd353;
fma.rn.f64 fd358, fd258, 0d3FED1BB48EEE2C13, fd354;
fma.rn.f64 fd359, fd256, 0d3FDA9628D9C712B6, fd355;
fma.rn.f64 fd360, fd257, 0d3FED1BB48EEE2C13, fd356;
sub.f64 fd361, fd357, fd358;
add.f64 fd362, fd360, fd359;
add.f64 fd363, fd358, fd357;
sub.f64 fd364, fd359, fd360;
fma.rn.f64 fd365, fd239, 0dBFEEB42A9BCD5057, %46;
fma.rn.f64 fd366, fd242, 0dBFD207E7FD768DBF, 0d0000000000000000;
fma.rn.f64 fd367, fd240, 0dBFEEB42A9BCD5057, %48;
fma.rn.f64 fd368, fd241, 0dBFD207E7FD768DBF, 0d0000000000000000;
fma.rn.f64 fd369, fd243, 0d3FEAEB8C8764F0BA, fd365;
fma.rn.f64 fd370, fd246, 0d3FE14CEDF8BB580B, fd366;
fma.rn.f64 fd371, fd244, 0d3FEAEB8C8764F0BA, fd367;
fma.rn.f64 fd372, fd245, 0d3FE14CEDF8BB580B, fd368;
fma.rn.f64 fd373, fd247, 0dBFE4F49E7F775887, fd369;
fma.rn.f64 fd374, fd250, 0dBFE82F19BB3A28A1, fd370;
fma.rn.f64 fd375, fd248, 0dBFE4F49E7F775887, fd371;
fma.rn.f64 fd376, fd249, 0dBFE82F19BB3A28A1, fd372;
fma.rn.f64 fd377, fd251, 0d3FDA9628D9C712B6, fd373;
fma.rn.f64 fd378, fd254, 0d3FED1BB48EEE2C13, fd374;
fma.rn.f64 fd379, fd252, 0d3FDA9628D9C712B6, fd375;
fma.rn.f64 fd380, fd253, 0d3FED1BB48EEE2C13, fd376;
fma.rn.f64 fd381, fd255, 0dBFC2375F640F44DB, fd377;
fma.rn.f64 fd382, fd258, 0dBFEFAC9E043842EF, fd378;
fma.rn.f64 fd383, fd256, 0dBFC2375F640F44DB, fd379;
fma.rn.f64 fd384, fd257, 0dBFEFAC9E043842EF, fd380;
sub.f64 fd385, fd381, fd382;
add.f64 fd386, fd384, fd383;
add.f64 fd387, fd382, fd381;
sub.f64 fd388, fd383, fd384;
mul.f64 fd389, fd289, 0d3FEEB42A9BCD5057;
mul.f64 fd390, fd290, 0dBFD207E7FD768DBF;
sub.f64 fd391, fd389, fd390;
mul.f64 fd392, fd290, 0d3FEEB42A9BCD5057;
fma.rn.f64 fd393, fd289, 0dBFD207E7FD768DBF, fd392;
mul.f64 fd394, fd313, 0d3FEAEB8C8764F0BA;
mul.f64 fd395, fd314, 0dBFE14CEDF8BB580B;
sub.f64 fd396, fd394, fd395;
mul.f64 fd397, fd314, 0d3FEAEB8C8764F0BA;
fma.rn.f64 fd398, fd313, 0dBFE14CEDF8BB580B, fd397;
mul.f64 fd399, fd337, 0d3FE4F49E7F775887;
mul.f64 fd400, fd338, 0dBFE82F19BB3A28A1;
sub.f64 fd401, fd399, fd400;
mul.f64 fd402, fd338, 0d3FE4F49E7F775887;
fma.rn.f64 fd403, fd337, 0dBFE82F19BB3A28A1, fd402;
mul.f64 fd404, fd361, 0d3FDA9628D9C712B6;
mul.f64 fd405, fd362, 0dBFED1BB48EEE2C13;
sub.f64 fd406, fd404, fd405;
mul.f64 fd407, fd362, 0d3FDA9628D9C712B6;
fma.rn.f64 fd408, fd361, 0dBFED1BB48EEE2C13, fd407;
mul.f64 fd409, fd385, 0d3FC2375F640F44DB;
mul.f64 fd410, fd386, 0dBFEFAC9E043842EF;
sub.f64 fd411, fd409, fd410;
mul.f64 fd412, fd386, 0d3FC2375F640F44DB;
fma.rn.f64 fd413, fd385, 0dBFEFAC9E043842EF, fd412;
mul.f64 fd414, fd387, 0dBFC2375F640F44DB;
mul.f64 fd415, fd388, 0dBFEFAC9E043842EF;
sub.f64 fd416, fd414, fd415;
mul.f64 fd417, fd388, 0dBFC2375F640F44DB;
fma.rn.f64 fd418, fd387, 0dBFEFAC9E043842EF, fd417;
mul.f64 fd419, fd363, 0dBFDA9628D9C712B6;
mul.f64 fd420, fd364, 0dBFED1BB48EEE2C13;
sub.f64 fd421, fd419, fd420;
mul.f64 fd422, fd364, 0dBFDA9628D9C712B6;
fma.rn.f64 fd423, fd363, 0dBFED1BB48EEE2C13, fd422;
mul.f64 fd424, fd339, 0dBFE4F49E7F775887;
mul.f64 fd425, fd340, 0dBFE82F19BB3A28A1;
sub.f64 fd426, fd424, fd425;
mul.f64 fd427, fd340, 0dBFE4F49E7F775887;
fma.rn.f64 fd428, fd339, 0dBFE82F19BB3A28A1, fd427;
mul.f64 fd429, fd315, 0dBFEAEB8C8764F0BA;
mul.f64 fd430, fd316, 0dBFE14CEDF8BB580B;
sub.f64 fd431, fd429, fd430;
mul.f64 fd432, fd316, 0dBFEAEB8C8764F0BA;
fma.rn.f64 fd433, fd315, 0dBFE14CEDF8BB580B, fd432;
mul.f64 fd434, fd291, 0dBFEEB42A9BCD5057;
mul.f64 fd435, fd292, 0dBFD207E7FD768DBF;
sub.f64 fd436, fd434, fd435;
mul.f64 fd437, fd292, 0dBFEEB42A9BCD5057;
fma.rn.f64 fd438, fd291, 0dBFD207E7FD768DBF, fd437;
add.f64 %1, fd118, fd268;
add.f64 %0, fd117, fd267;
add.f64 %3, fd140, fd393;
add.f64 %2, fd139, fd391;
add.f64 %5, fd164, fd398;
add.f64 %4, fd163, fd396;
add.f64 %7, fd188, fd403;
add.f64 %6, fd187, fd401;
add.f64 %9, fd212, fd408;
add.f64 %8, fd211, fd406;
add.f64 %11, fd236, fd413;
add.f64 %10, fd235, fd411;
add.f64 %13, fd238, fd418;
add.f64 %12, fd237, fd416;
add.f64 %15, fd214, fd423;
add.f64 %14, fd213, fd421;
add.f64 %17, fd190, fd428;
add.f64 %16, fd189, fd426;
add.f64 %19, fd166, fd433;
add.f64 %18, fd165, fd431;
add.f64 %21, fd142, fd438;
add.f64 %20, fd141, fd436;
sub.f64 %23, fd118, fd268;
sub.f64 %22, fd117, fd267;
sub.f64 %25, fd140, fd393;
sub.f64 %24, fd139, fd391;
sub.f64 %27, fd164, fd398;
sub.f64 %26, fd163, fd396;
sub.f64 %29, fd188, fd403;
sub.f64 %28, fd187, fd401;
sub.f64 %31, fd212, fd408;
sub.f64 %30, fd211, fd406;
sub.f64 %33, fd236, fd413;
sub.f64 %32, fd235, fd411;
sub.f64 %35, fd238, fd418;
sub.f64 %34, fd237, fd416;
sub.f64 %37, fd214, fd423;
sub.f64 %36, fd213, fd421;
sub.f64 %39, fd190, fd428;
sub.f64 %38, fd189, fd426;
sub.f64 %41, fd166, fd433;
sub.f64 %40, fd165, fd431;
sub.f64 %43, fd142, fd438;
sub.f64 %42, fd141, fd436;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y), "=d"(rmem[10].x), "=d"(rmem[10].y), "=d"(rmem[11].x), "=d"(rmem[11].y), "=d"(rmem[12].x), "=d"(rmem[12].y), "=d"(rmem[13].x), "=d"(rmem[13].y), "=d"(rmem[14].x), "=d"(rmem[14].y), "=d"(rmem[15].x), "=d"(rmem[15].y), "=d"(rmem[16].x), "=d"(rmem[16].y), "=d"(rmem[17].x), "=d"(rmem[17].y), "=d"(rmem[18].x), "=d"(rmem[18].y), "=d"(rmem[19].x), "=d"(rmem[19].y), "=d"(rmem[20].x), "=d"(rmem[20].y), "=d"(rmem[21].x), "=d"(rmem[21].y): "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y), "d"(rmem[10].x), "d"(rmem[10].y), "d"(rmem[10].y), "d"(rmem[11].x), "d"(rmem[11].y), "d"(rmem[11].y), "d"(rmem[12].x), "d"(rmem[12].y), "d"(rmem[13].x), "d"(rmem[13].y), "d"(rmem[13].y), "d"(rmem[14].x), "d"(rmem[14].y), "d"(rmem[14].y), "d"(rmem[15].x), "d"(rmem[15].y), "d"(rmem[16].x), "d"(rmem[16].y), "d"(rmem[16].y), "d"(rmem[17].x), "d"(rmem[17].y), "d"(rmem[17].y), "d"(rmem[18].x), "d"(rmem[18].y), "d"(rmem[19].x), "d"(rmem[19].y), "d"(rmem[19].y), "d"(rmem[20].x), "d"(rmem[20].y), "d"(rmem[20].y), "d"(rmem[21].x), "d"(rmem[21].y));
};


#endif

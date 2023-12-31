//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_11_FP64_INV_PTX_HPP
#define CUFFTDX_FFT_11_FP64_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<724, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .f64 fd<195>;
.reg .b64 rd<2>;
add.f64 fd45, %24, %48;
add.f64 fd46, %26, %49;
sub.f64 fd47, %24, %48;
sub.f64 fd48, %26, %49;
add.f64 fd49, %27, %46;
add.f64 fd50, %29, %47;
sub.f64 fd51, %27, %46;
sub.f64 fd52, %29, %47;
add.f64 fd53, %30, %43;
add.f64 fd54, %31, %45;
sub.f64 fd55, %30, %43;
sub.f64 fd56, %31, %45;
add.f64 fd57, %32, %40;
add.f64 fd58, %34, %42;
sub.f64 fd59, %32, %40;
sub.f64 fd60, %34, %42;
add.f64 fd61, %35, %38;
add.f64 fd62, %37, %39;
sub.f64 fd63, %35, %38;
sub.f64 fd64, %37, %39;
add.f64 fd65, %22, fd45;
add.f64 fd66, %23, fd46;
add.f64 fd67, fd65, fd49;
add.f64 fd68, fd66, fd50;
add.f64 fd69, fd67, fd53;
add.f64 fd70, fd68, fd54;
add.f64 fd71, fd69, fd57;
add.f64 fd72, fd70, fd58;
fma.rn.f64 fd73, fd45, 0d3FEAEB8C8764F0BA, %22;
fma.rn.f64 fd74, fd48, 0d3FE14CEDF8BB580B, 0d0000000000000000;
fma.rn.f64 fd75, fd46, 0d3FEAEB8C8764F0BA, %23;
fma.rn.f64 fd76, fd47, 0d3FE14CEDF8BB580B, 0d0000000000000000;
fma.rn.f64 fd77, fd49, 0d3FDA9628D9C712B6, fd73;
fma.rn.f64 fd78, fd52, 0d3FED1BB48EEE2C13, fd74;
fma.rn.f64 fd79, fd50, 0d3FDA9628D9C712B6, fd75;
fma.rn.f64 fd80, fd51, 0d3FED1BB48EEE2C13, fd76;
fma.rn.f64 fd81, fd53, 0dBFC2375F640F44DB, fd77;
fma.rn.f64 fd82, fd56, 0d3FEFAC9E043842EF, fd78;
fma.rn.f64 fd83, fd54, 0dBFC2375F640F44DB, fd79;
fma.rn.f64 fd84, fd55, 0d3FEFAC9E043842EF, fd80;
fma.rn.f64 fd85, fd57, 0dBFE4F49E7F775887, fd81;
fma.rn.f64 fd86, fd60, 0d3FE82F19BB3A28A1, fd82;
fma.rn.f64 fd87, fd58, 0dBFE4F49E7F775887, fd83;
fma.rn.f64 fd88, fd59, 0d3FE82F19BB3A28A1, fd84;
fma.rn.f64 fd89, fd61, 0dBFEEB42A9BCD5057, fd85;
fma.rn.f64 fd90, fd64, 0d3FD207E7FD768DBF, fd86;
fma.rn.f64 fd91, fd62, 0dBFEEB42A9BCD5057, fd87;
fma.rn.f64 fd92, fd63, 0d3FD207E7FD768DBF, fd88;
fma.rn.f64 fd93, fd45, 0d3FDA9628D9C712B6, %22;
fma.rn.f64 fd94, fd48, 0d3FED1BB48EEE2C13, 0d0000000000000000;
fma.rn.f64 fd95, fd46, 0d3FDA9628D9C712B6, %23;
fma.rn.f64 fd96, fd47, 0d3FED1BB48EEE2C13, 0d0000000000000000;
fma.rn.f64 fd97, fd49, 0dBFE4F49E7F775887, fd93;
fma.rn.f64 fd98, fd52, 0d3FE82F19BB3A28A1, fd94;
fma.rn.f64 fd99, fd50, 0dBFE4F49E7F775887, fd95;
fma.rn.f64 fd100, fd51, 0d3FE82F19BB3A28A1, fd96;
fma.rn.f64 fd101, fd53, 0dBFEEB42A9BCD5057, fd97;
fma.rn.f64 fd102, fd56, 0dBFD207E7FD768DBF, fd98;
fma.rn.f64 fd103, fd54, 0dBFEEB42A9BCD5057, fd99;
fma.rn.f64 fd104, fd55, 0dBFD207E7FD768DBF, fd100;
fma.rn.f64 fd105, fd57, 0dBFC2375F640F44DB, fd101;
fma.rn.f64 fd106, fd60, 0dBFEFAC9E043842EF, fd102;
fma.rn.f64 fd107, fd58, 0dBFC2375F640F44DB, fd103;
fma.rn.f64 fd108, fd59, 0dBFEFAC9E043842EF, fd104;
fma.rn.f64 fd109, fd61, 0d3FEAEB8C8764F0BA, fd105;
fma.rn.f64 fd110, fd64, 0dBFE14CEDF8BB580B, fd106;
fma.rn.f64 fd111, fd62, 0d3FEAEB8C8764F0BA, fd107;
fma.rn.f64 fd112, fd63, 0dBFE14CEDF8BB580B, fd108;
fma.rn.f64 fd113, fd45, 0dBFC2375F640F44DB, %22;
fma.rn.f64 fd114, fd48, 0d3FEFAC9E043842EF, 0d0000000000000000;
fma.rn.f64 fd115, fd46, 0dBFC2375F640F44DB, %23;
fma.rn.f64 fd116, fd47, 0d3FEFAC9E043842EF, 0d0000000000000000;
fma.rn.f64 fd117, fd49, 0dBFEEB42A9BCD5057, fd113;
fma.rn.f64 fd118, fd52, 0dBFD207E7FD768DBF, fd114;
fma.rn.f64 fd119, fd50, 0dBFEEB42A9BCD5057, fd115;
fma.rn.f64 fd120, fd51, 0dBFD207E7FD768DBF, fd116;
fma.rn.f64 fd121, fd53, 0d3FDA9628D9C712B6, fd117;
fma.rn.f64 fd122, fd56, 0dBFED1BB48EEE2C13, fd118;
fma.rn.f64 fd123, fd54, 0d3FDA9628D9C712B6, fd119;
fma.rn.f64 fd124, fd55, 0dBFED1BB48EEE2C13, fd120;
fma.rn.f64 fd125, fd57, 0d3FEAEB8C8764F0BA, fd121;
fma.rn.f64 fd126, fd60, 0d3FE14CEDF8BB580B, fd122;
fma.rn.f64 fd127, fd58, 0d3FEAEB8C8764F0BA, fd123;
fma.rn.f64 fd128, fd59, 0d3FE14CEDF8BB580B, fd124;
fma.rn.f64 fd129, fd61, 0dBFE4F49E7F775887, fd125;
fma.rn.f64 fd130, fd64, 0d3FE82F19BB3A28A1, fd126;
fma.rn.f64 fd131, fd62, 0dBFE4F49E7F775887, fd127;
fma.rn.f64 fd132, fd63, 0d3FE82F19BB3A28A1, fd128;
fma.rn.f64 fd133, fd45, 0dBFE4F49E7F775887, %22;
fma.rn.f64 fd134, fd48, 0d3FE82F19BB3A28A1, 0d0000000000000000;
fma.rn.f64 fd135, fd46, 0dBFE4F49E7F775887, %23;
fma.rn.f64 fd136, fd47, 0d3FE82F19BB3A28A1, 0d0000000000000000;
fma.rn.f64 fd137, fd49, 0dBFC2375F640F44DB, fd133;
fma.rn.f64 fd138, fd52, 0dBFEFAC9E043842EF, fd134;
fma.rn.f64 fd139, fd50, 0dBFC2375F640F44DB, fd135;
fma.rn.f64 fd140, fd51, 0dBFEFAC9E043842EF, fd136;
fma.rn.f64 fd141, fd53, 0d3FEAEB8C8764F0BA, fd137;
fma.rn.f64 fd142, fd56, 0d3FE14CEDF8BB580B, fd138;
fma.rn.f64 fd143, fd54, 0d3FEAEB8C8764F0BA, fd139;
fma.rn.f64 fd144, fd55, 0d3FE14CEDF8BB580B, fd140;
fma.rn.f64 fd145, fd57, 0dBFEEB42A9BCD5057, fd141;
fma.rn.f64 fd146, fd60, 0d3FD207E7FD768DBF, fd142;
fma.rn.f64 fd147, fd58, 0dBFEEB42A9BCD5057, fd143;
fma.rn.f64 fd148, fd59, 0d3FD207E7FD768DBF, fd144;
fma.rn.f64 fd149, fd61, 0d3FDA9628D9C712B6, fd145;
fma.rn.f64 fd150, fd64, 0dBFED1BB48EEE2C13, fd146;
fma.rn.f64 fd151, fd62, 0d3FDA9628D9C712B6, fd147;
fma.rn.f64 fd152, fd63, 0dBFED1BB48EEE2C13, fd148;
fma.rn.f64 fd153, fd45, 0dBFEEB42A9BCD5057, %22;
fma.rn.f64 fd154, fd48, 0d3FD207E7FD768DBF, 0d0000000000000000;
fma.rn.f64 fd155, fd46, 0dBFEEB42A9BCD5057, %23;
fma.rn.f64 fd156, fd47, 0d3FD207E7FD768DBF, 0d0000000000000000;
fma.rn.f64 fd157, fd49, 0d3FEAEB8C8764F0BA, fd153;
fma.rn.f64 fd158, fd52, 0dBFE14CEDF8BB580B, fd154;
fma.rn.f64 fd159, fd50, 0d3FEAEB8C8764F0BA, fd155;
fma.rn.f64 fd160, fd51, 0dBFE14CEDF8BB580B, fd156;
fma.rn.f64 fd161, fd53, 0dBFE4F49E7F775887, fd157;
fma.rn.f64 fd162, fd56, 0d3FE82F19BB3A28A1, fd158;
fma.rn.f64 fd163, fd54, 0dBFE4F49E7F775887, fd159;
fma.rn.f64 fd164, fd55, 0d3FE82F19BB3A28A1, fd160;
fma.rn.f64 fd165, fd57, 0d3FDA9628D9C712B6, fd161;
fma.rn.f64 fd166, fd60, 0dBFED1BB48EEE2C13, fd162;
fma.rn.f64 fd167, fd58, 0d3FDA9628D9C712B6, fd163;
fma.rn.f64 fd168, fd59, 0dBFED1BB48EEE2C13, fd164;
fma.rn.f64 fd169, fd61, 0dBFC2375F640F44DB, fd165;
fma.rn.f64 fd170, fd64, 0d3FEFAC9E043842EF, fd166;
fma.rn.f64 fd171, fd62, 0dBFC2375F640F44DB, fd167;
fma.rn.f64 fd172, fd63, 0d3FEFAC9E043842EF, fd168;
add.f64 %1, fd72, fd62;
add.f64 %0, fd71, fd61;
add.f64 %3, fd91, fd92;
sub.f64 %2, fd89, fd90;
add.f64 %5, fd111, fd112;
sub.f64 %4, fd109, fd110;
add.f64 %7, fd131, fd132;
sub.f64 %6, fd129, fd130;
add.f64 %9, fd151, fd152;
sub.f64 %8, fd149, fd150;
add.f64 %11, fd171, fd172;
sub.f64 %10, fd169, fd170;
sub.f64 %13, fd171, fd172;
add.f64 %12, fd169, fd170;
sub.f64 %15, fd151, fd152;
add.f64 %14, fd149, fd150;
sub.f64 %17, fd131, fd132;
add.f64 %16, fd129, fd130;
sub.f64 %19, fd111, fd112;
add.f64 %18, fd109, fd110;
sub.f64 %21, fd91, fd92;
add.f64 %20, fd89, fd90;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y), "=d"(rmem[10].x), "=d"(rmem[10].y): "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y), "d"(rmem[10].x), "d"(rmem[10].y));
};


#endif


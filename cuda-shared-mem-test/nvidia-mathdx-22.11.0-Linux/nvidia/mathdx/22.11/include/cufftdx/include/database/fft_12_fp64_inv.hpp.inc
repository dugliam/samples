//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_12_FP64_INV_PTX_HPP
#define CUFFTDX_FFT_12_FP64_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<741, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .f64 fd<201>;
.reg .b64 rd<2>;
add.f64 fd49, %34, %45;
add.f64 fd50, %24, fd49;
add.f64 fd51, %36, %47;
add.f64 fd52, %25, fd51;
mul.f64 fd53, fd49, 0d3FE0000000000000;
sub.f64 fd54, %24, fd53;
sub.f64 fd55, %36, %47;
mul.f64 fd56, fd55, 0dBFEBB67AE8584CAA;
add.f64 fd57, fd56, fd54;
sub.f64 fd58, fd54, fd56;
mul.f64 fd59, fd51, 0d3FE0000000000000;
sub.f64 fd60, %25, fd59;
sub.f64 fd61, %34, %45;
mul.f64 fd62, fd61, 0dBFEBB67AE8584CAA;
sub.f64 fd63, fd60, fd62;
add.f64 fd64, fd62, fd60;
add.f64 fd65, %40, %50;
add.f64 fd66, %29, fd65;
add.f64 fd67, %41, %52;
add.f64 fd68, %31, fd67;
mul.f64 fd69, fd65, 0d3FE0000000000000;
sub.f64 fd70, %29, fd69;
sub.f64 fd71, %41, %52;
mul.f64 fd72, fd71, 0dBFEBB67AE8584CAA;
add.f64 fd73, fd72, fd70;
sub.f64 fd74, fd70, fd72;
mul.f64 fd75, fd67, 0d3FE0000000000000;
sub.f64 fd76, %31, fd75;
sub.f64 fd77, %40, %50;
mul.f64 fd78, fd77, 0dBFEBB67AE8584CAA;
sub.f64 fd79, fd76, fd78;
add.f64 fd80, fd78, fd76;
mul.f64 fd81, fd73, 0d3FE0000000000000;
mul.f64 fd82, fd79, 0d3FEBB67AE8584CAA;
sub.f64 fd83, fd81, fd82;
mul.f64 fd84, fd79, 0d3FE0000000000000;
fma.rn.f64 fd85, fd73, 0d3FEBB67AE8584CAA, fd84;
mul.f64 fd86, fd74, 0dBFE0000000000000;
mul.f64 fd87, fd80, 0d3FEBB67AE8584CAA;
sub.f64 fd88, fd86, fd87;
mul.f64 fd89, fd80, 0dBFE0000000000000;
fma.rn.f64 fd90, fd74, 0d3FEBB67AE8584CAA, fd89;
add.f64 fd91, fd50, fd66;
add.f64 fd92, fd52, fd68;
sub.f64 fd93, fd50, fd66;
sub.f64 fd94, fd52, fd68;
add.f64 fd95, fd57, fd83;
add.f64 fd96, fd63, fd85;
sub.f64 fd97, fd57, fd83;
sub.f64 fd98, fd63, fd85;
add.f64 fd99, fd58, fd88;
add.f64 fd100, fd64, fd90;
sub.f64 fd101, fd58, fd88;
sub.f64 fd102, fd64, fd90;
add.f64 fd103, %37, %48;
add.f64 fd104, %26, fd103;
add.f64 fd105, %39, %49;
add.f64 fd106, %28, fd105;
mul.f64 fd107, fd103, 0d3FE0000000000000;
sub.f64 fd108, %26, fd107;
sub.f64 fd109, %39, %49;
mul.f64 fd110, fd109, 0dBFEBB67AE8584CAA;
add.f64 fd111, fd110, fd108;
sub.f64 fd112, fd108, fd110;
mul.f64 fd113, fd105, 0d3FE0000000000000;
sub.f64 fd114, %28, fd113;
sub.f64 fd115, %37, %48;
mul.f64 fd116, fd115, 0dBFEBB67AE8584CAA;
sub.f64 fd117, fd114, fd116;
add.f64 fd118, fd116, fd114;
add.f64 fd119, %42, %53;
add.f64 fd120, %32, fd119;
add.f64 fd121, %44, %54;
add.f64 fd122, %33, fd121;
mul.f64 fd123, fd119, 0d3FE0000000000000;
sub.f64 fd124, %32, fd123;
sub.f64 fd125, %44, %54;
mul.f64 fd126, fd125, 0dBFEBB67AE8584CAA;
add.f64 fd127, fd126, fd124;
sub.f64 fd128, fd124, fd126;
mul.f64 fd129, fd121, 0d3FE0000000000000;
sub.f64 fd130, %33, fd129;
sub.f64 fd131, %42, %53;
mul.f64 fd132, fd131, 0dBFEBB67AE8584CAA;
sub.f64 fd133, fd130, fd132;
add.f64 fd134, fd132, fd130;
mul.f64 fd135, fd127, 0d3FE0000000000000;
mul.f64 fd136, fd133, 0d3FEBB67AE8584CAA;
sub.f64 fd137, fd135, fd136;
mul.f64 fd138, fd133, 0d3FE0000000000000;
fma.rn.f64 fd139, fd127, 0d3FEBB67AE8584CAA, fd138;
mul.f64 fd140, fd128, 0dBFE0000000000000;
mul.f64 fd141, fd134, 0d3FEBB67AE8584CAA;
sub.f64 fd142, fd140, fd141;
mul.f64 fd143, fd134, 0dBFE0000000000000;
fma.rn.f64 fd144, fd128, 0d3FEBB67AE8584CAA, fd143;
add.f64 fd145, fd104, fd120;
add.f64 fd146, fd106, fd122;
sub.f64 fd147, fd104, fd120;
sub.f64 fd148, fd106, fd122;
add.f64 fd149, fd111, fd137;
add.f64 fd150, fd117, fd139;
sub.f64 fd151, fd111, fd137;
sub.f64 fd152, fd117, fd139;
add.f64 fd153, fd112, fd142;
add.f64 fd154, fd118, fd144;
sub.f64 fd155, fd112, fd142;
sub.f64 fd156, fd118, fd144;
mul.f64 fd157, fd149, 0d3FEBB67AE8584CAA;
mul.f64 fd158, fd150, 0d3FE0000000000000;
sub.f64 fd159, fd157, fd158;
mul.f64 fd160, fd150, 0d3FEBB67AE8584CAA;
fma.rn.f64 fd161, fd149, 0d3FE0000000000000, fd160;
mul.f64 fd162, fd153, 0d3FE0000000000000;
mul.f64 fd163, fd154, 0d3FEBB67AE8584CAA;
sub.f64 fd164, fd162, fd163;
mul.f64 fd165, fd154, 0d3FE0000000000000;
fma.rn.f64 fd166, fd153, 0d3FEBB67AE8584CAA, fd165;
mul.f64 fd167, fd151, 0dBFE0000000000000;
mul.f64 fd168, fd152, 0d3FEBB67AE8584CAA;
sub.f64 fd169, fd167, fd168;
mul.f64 fd170, fd152, 0dBFE0000000000000;
fma.rn.f64 fd171, fd151, 0d3FEBB67AE8584CAA, fd170;
mul.f64 fd172, fd155, 0dBFEBB67AE8584CAA;
mul.f64 fd173, fd156, 0d3FE0000000000000;
sub.f64 fd174, fd172, fd173;
mul.f64 fd175, fd156, 0dBFEBB67AE8584CAA;
fma.rn.f64 fd176, fd155, 0d3FE0000000000000, fd175;
add.f64 %1, fd92, fd146;
add.f64 %0, fd91, fd145;
add.f64 %3, fd96, fd161;
add.f64 %2, fd95, fd159;
add.f64 %5, fd100, fd166;
add.f64 %4, fd99, fd164;
add.f64 %7, fd94, fd147;
sub.f64 %6, fd93, fd148;
add.f64 %9, fd98, fd171;
add.f64 %8, fd97, fd169;
add.f64 %11, fd102, fd176;
add.f64 %10, fd101, fd174;
sub.f64 %13, fd92, fd146;
sub.f64 %12, fd91, fd145;
sub.f64 %15, fd96, fd161;
sub.f64 %14, fd95, fd159;
sub.f64 %17, fd100, fd166;
sub.f64 %16, fd99, fd164;
sub.f64 %19, fd94, fd147;
add.f64 %18, fd93, fd148;
sub.f64 %21, fd98, fd171;
sub.f64 %20, fd97, fd169;
sub.f64 %23, fd102, fd176;
sub.f64 %22, fd101, fd174;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y), "=d"(rmem[10].x), "=d"(rmem[10].y), "=d"(rmem[11].x), "=d"(rmem[11].y): "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y), "d"(rmem[10].x), "d"(rmem[10].y), "d"(rmem[10].y), "d"(rmem[11].x), "d"(rmem[11].y));
};


#endif


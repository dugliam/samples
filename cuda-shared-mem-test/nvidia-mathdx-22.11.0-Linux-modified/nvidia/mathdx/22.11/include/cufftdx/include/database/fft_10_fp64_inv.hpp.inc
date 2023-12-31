//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_10_FP64_INV_PTX_HPP
#define CUFFTDX_FFT_10_FP64_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<736, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .f64 fd<165>;
.reg .b64 rd<2>;
add.f64 fd41, %25, %41;
add.f64 fd42, %20, fd41;
add.f64 fd43, %30, %36;
add.f64 fd44, fd43, fd42;
add.f64 fd45, %27, %43;
add.f64 fd46, %21, fd45;
add.f64 fd47, %32, %37;
add.f64 fd48, fd47, fd46;
fma.rn.f64 fd49, fd41, 0d3FD3C6EF372FE950, %20;
mul.f64 fd50, fd43, 0d3FE9E3779B97F4A8;
sub.f64 fd51, fd49, fd50;
sub.f64 fd52, %27, %43;
mul.f64 fd53, fd52, 0d3FEE6F0E134454FF;
sub.f64 fd54, %32, %37;
fma.rn.f64 fd55, fd54, 0d3FE2CF2304755A5E, fd53;
sub.f64 fd56, fd51, fd55;
add.f64 fd57, fd55, fd51;
mul.f64 fd58, fd41, 0d3FE9E3779B97F4A8;
sub.f64 fd59, %20, fd58;
fma.rn.f64 fd60, fd43, 0d3FD3C6EF372FE950, fd59;
mul.f64 fd61, fd52, 0d3FE2CF2304755A5E;
mul.f64 fd62, fd54, 0d3FEE6F0E134454FF;
sub.f64 fd63, fd61, fd62;
sub.f64 fd64, fd60, fd63;
add.f64 fd65, fd63, fd60;
fma.rn.f64 fd66, fd45, 0d3FD3C6EF372FE950, %21;
mul.f64 fd67, fd47, 0d3FE9E3779B97F4A8;
sub.f64 fd68, fd66, fd67;
sub.f64 fd69, %25, %41;
mul.f64 fd70, fd69, 0d3FEE6F0E134454FF;
sub.f64 fd71, %30, %36;
fma.rn.f64 fd72, fd71, 0d3FE2CF2304755A5E, fd70;
add.f64 fd73, fd72, fd68;
sub.f64 fd74, fd68, fd72;
mul.f64 fd75, fd45, 0d3FE9E3779B97F4A8;
sub.f64 fd76, %21, fd75;
fma.rn.f64 fd77, fd47, 0d3FD3C6EF372FE950, fd76;
mul.f64 fd78, fd69, 0d3FE2CF2304755A5E;
mul.f64 fd79, fd71, 0d3FEE6F0E134454FF;
sub.f64 fd80, fd78, fd79;
add.f64 fd81, fd80, fd77;
sub.f64 fd82, fd77, fd80;
add.f64 fd83, %28, %44;
add.f64 fd84, %22, fd83;
add.f64 fd85, %33, %38;
add.f64 fd86, fd85, fd84;
add.f64 fd87, %29, %45;
add.f64 fd88, %24, fd87;
add.f64 fd89, %35, %40;
add.f64 fd90, fd89, fd88;
fma.rn.f64 fd91, fd83, 0d3FD3C6EF372FE950, %22;
mul.f64 fd92, fd85, 0d3FE9E3779B97F4A8;
sub.f64 fd93, fd91, fd92;
sub.f64 fd94, %29, %45;
mul.f64 fd95, fd94, 0d3FEE6F0E134454FF;
sub.f64 fd96, %35, %40;
fma.rn.f64 fd97, fd96, 0d3FE2CF2304755A5E, fd95;
sub.f64 fd98, fd93, fd97;
add.f64 fd99, fd97, fd93;
mul.f64 fd100, fd83, 0d3FE9E3779B97F4A8;
sub.f64 fd101, %22, fd100;
fma.rn.f64 fd102, fd85, 0d3FD3C6EF372FE950, fd101;
mul.f64 fd103, fd94, 0d3FE2CF2304755A5E;
mul.f64 fd104, fd96, 0d3FEE6F0E134454FF;
sub.f64 fd105, fd103, fd104;
sub.f64 fd106, fd102, fd105;
add.f64 fd107, fd105, fd102;
fma.rn.f64 fd108, fd87, 0d3FD3C6EF372FE950, %24;
mul.f64 fd109, fd89, 0d3FE9E3779B97F4A8;
sub.f64 fd110, fd108, fd109;
sub.f64 fd111, %28, %44;
mul.f64 fd112, fd111, 0d3FEE6F0E134454FF;
sub.f64 fd113, %33, %38;
fma.rn.f64 fd114, fd113, 0d3FE2CF2304755A5E, fd112;
add.f64 fd115, fd114, fd110;
sub.f64 fd116, fd110, fd114;
mul.f64 fd117, fd87, 0d3FE9E3779B97F4A8;
sub.f64 fd118, %24, fd117;
fma.rn.f64 fd119, fd89, 0d3FD3C6EF372FE950, fd118;
mul.f64 fd120, fd111, 0d3FE2CF2304755A5E;
mul.f64 fd121, fd113, 0d3FEE6F0E134454FF;
sub.f64 fd122, fd120, fd121;
add.f64 fd123, fd122, fd119;
sub.f64 fd124, fd119, fd122;
mul.f64 fd125, fd98, 0d3FE9E3779B97F4A8;
mul.f64 fd126, fd115, 0d3FE2CF2304755A5E;
sub.f64 fd127, fd125, fd126;
mul.f64 fd128, fd115, 0d3FE9E3779B97F4A8;
fma.rn.f64 fd129, fd98, 0d3FE2CF2304755A5E, fd128;
mul.f64 fd130, fd106, 0d3FD3C6EF372FE950;
mul.f64 fd131, fd123, 0d3FEE6F0E134454FF;
sub.f64 fd132, fd130, fd131;
mul.f64 fd133, fd123, 0d3FD3C6EF372FE950;
fma.rn.f64 fd134, fd106, 0d3FEE6F0E134454FF, fd133;
mul.f64 fd135, fd107, 0dBFD3C6EF372FE950;
mul.f64 fd136, fd124, 0d3FEE6F0E134454FF;
sub.f64 fd137, fd135, fd136;
mul.f64 fd138, fd124, 0dBFD3C6EF372FE950;
fma.rn.f64 fd139, fd107, 0d3FEE6F0E134454FF, fd138;
mul.f64 fd140, fd99, 0dBFE9E3779B97F4A8;
mul.f64 fd141, fd116, 0d3FE2CF2304755A5E;
sub.f64 fd142, fd140, fd141;
mul.f64 fd143, fd116, 0dBFE9E3779B97F4A8;
fma.rn.f64 fd144, fd99, 0d3FE2CF2304755A5E, fd143;
add.f64 %1, fd48, fd90;
add.f64 %0, fd44, fd86;
add.f64 %3, fd73, fd129;
add.f64 %2, fd56, fd127;
add.f64 %5, fd81, fd134;
add.f64 %4, fd64, fd132;
add.f64 %7, fd82, fd139;
add.f64 %6, fd65, fd137;
add.f64 %9, fd74, fd144;
add.f64 %8, fd57, fd142;
sub.f64 %11, fd48, fd90;
sub.f64 %10, fd44, fd86;
sub.f64 %13, fd73, fd129;
sub.f64 %12, fd56, fd127;
sub.f64 %15, fd81, fd134;
sub.f64 %14, fd64, fd132;
sub.f64 %17, fd82, fd139;
sub.f64 %16, fd65, fd137;
sub.f64 %19, fd74, fd144;
sub.f64 %18, fd57, fd142;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y): "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y));
};


#endif


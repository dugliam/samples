//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_10_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_10_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<565, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .f64 fd<169>;
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
mul.f64 fd55, fd54, 0dBFE2CF2304755A5E;
sub.f64 fd56, fd55, fd53;
sub.f64 fd57, fd51, fd56;
add.f64 fd58, fd56, fd51;
mul.f64 fd59, fd41, 0d3FE9E3779B97F4A8;
sub.f64 fd60, %20, fd59;
fma.rn.f64 fd61, fd43, 0d3FD3C6EF372FE950, fd60;
mul.f64 fd62, fd52, 0d3FE2CF2304755A5E;
mul.f64 fd63, fd54, 0d3FEE6F0E134454FF;
sub.f64 fd64, fd63, fd62;
sub.f64 fd65, fd61, fd64;
add.f64 fd66, fd64, fd61;
fma.rn.f64 fd67, fd45, 0d3FD3C6EF372FE950, %21;
mul.f64 fd68, fd47, 0d3FE9E3779B97F4A8;
sub.f64 fd69, fd67, fd68;
sub.f64 fd70, %25, %41;
mul.f64 fd71, fd70, 0d3FEE6F0E134454FF;
sub.f64 fd72, %30, %36;
mul.f64 fd73, fd72, 0dBFE2CF2304755A5E;
sub.f64 fd74, fd73, fd71;
add.f64 fd75, fd74, fd69;
sub.f64 fd76, fd69, fd74;
mul.f64 fd77, fd45, 0d3FE9E3779B97F4A8;
sub.f64 fd78, %21, fd77;
fma.rn.f64 fd79, fd47, 0d3FD3C6EF372FE950, fd78;
mul.f64 fd80, fd70, 0d3FE2CF2304755A5E;
mul.f64 fd81, fd72, 0d3FEE6F0E134454FF;
sub.f64 fd82, fd81, fd80;
add.f64 fd83, fd82, fd79;
sub.f64 fd84, fd79, fd82;
add.f64 fd85, %28, %44;
add.f64 fd86, %22, fd85;
add.f64 fd87, %33, %38;
add.f64 fd88, fd87, fd86;
add.f64 fd89, %29, %45;
add.f64 fd90, %24, fd89;
add.f64 fd91, %35, %40;
add.f64 fd92, fd91, fd90;
fma.rn.f64 fd93, fd85, 0d3FD3C6EF372FE950, %22;
mul.f64 fd94, fd87, 0d3FE9E3779B97F4A8;
sub.f64 fd95, fd93, fd94;
sub.f64 fd96, %29, %45;
mul.f64 fd97, fd96, 0d3FEE6F0E134454FF;
sub.f64 fd98, %35, %40;
mul.f64 fd99, fd98, 0dBFE2CF2304755A5E;
sub.f64 fd100, fd99, fd97;
sub.f64 fd101, fd95, fd100;
add.f64 fd102, fd100, fd95;
mul.f64 fd103, fd85, 0d3FE9E3779B97F4A8;
sub.f64 fd104, %22, fd103;
fma.rn.f64 fd105, fd87, 0d3FD3C6EF372FE950, fd104;
mul.f64 fd106, fd96, 0d3FE2CF2304755A5E;
mul.f64 fd107, fd98, 0d3FEE6F0E134454FF;
sub.f64 fd108, fd107, fd106;
sub.f64 fd109, fd105, fd108;
add.f64 fd110, fd108, fd105;
fma.rn.f64 fd111, fd89, 0d3FD3C6EF372FE950, %24;
mul.f64 fd112, fd91, 0d3FE9E3779B97F4A8;
sub.f64 fd113, fd111, fd112;
sub.f64 fd114, %28, %44;
mul.f64 fd115, fd114, 0d3FEE6F0E134454FF;
sub.f64 fd116, %33, %38;
mul.f64 fd117, fd116, 0dBFE2CF2304755A5E;
sub.f64 fd118, fd117, fd115;
add.f64 fd119, fd118, fd113;
sub.f64 fd120, fd113, fd118;
mul.f64 fd121, fd89, 0d3FE9E3779B97F4A8;
sub.f64 fd122, %24, fd121;
fma.rn.f64 fd123, fd91, 0d3FD3C6EF372FE950, fd122;
mul.f64 fd124, fd114, 0d3FE2CF2304755A5E;
mul.f64 fd125, fd116, 0d3FEE6F0E134454FF;
sub.f64 fd126, fd125, fd124;
add.f64 fd127, fd126, fd123;
sub.f64 fd128, fd123, fd126;
mul.f64 fd129, fd101, 0d3FE9E3779B97F4A8;
mul.f64 fd130, fd119, 0dBFE2CF2304755A5E;
sub.f64 fd131, fd129, fd130;
mul.f64 fd132, fd119, 0d3FE9E3779B97F4A8;
fma.rn.f64 fd133, fd101, 0dBFE2CF2304755A5E, fd132;
mul.f64 fd134, fd109, 0d3FD3C6EF372FE950;
mul.f64 fd135, fd127, 0dBFEE6F0E134454FF;
sub.f64 fd136, fd134, fd135;
mul.f64 fd137, fd127, 0d3FD3C6EF372FE950;
fma.rn.f64 fd138, fd109, 0dBFEE6F0E134454FF, fd137;
mul.f64 fd139, fd110, 0dBFD3C6EF372FE950;
mul.f64 fd140, fd128, 0dBFEE6F0E134454FF;
sub.f64 fd141, fd139, fd140;
mul.f64 fd142, fd128, 0dBFD3C6EF372FE950;
fma.rn.f64 fd143, fd110, 0dBFEE6F0E134454FF, fd142;
mul.f64 fd144, fd102, 0dBFE9E3779B97F4A8;
mul.f64 fd145, fd120, 0dBFE2CF2304755A5E;
sub.f64 fd146, fd144, fd145;
mul.f64 fd147, fd120, 0dBFE9E3779B97F4A8;
fma.rn.f64 fd148, fd102, 0dBFE2CF2304755A5E, fd147;
add.f64 %1, fd48, fd92;
add.f64 %0, fd44, fd88;
add.f64 %3, fd75, fd133;
add.f64 %2, fd57, fd131;
add.f64 %5, fd83, fd138;
add.f64 %4, fd65, fd136;
add.f64 %7, fd84, fd143;
add.f64 %6, fd66, fd141;
add.f64 %9, fd76, fd148;
add.f64 %8, fd58, fd146;
sub.f64 %11, fd48, fd92;
sub.f64 %10, fd44, fd88;
sub.f64 %13, fd75, fd133;
sub.f64 %12, fd57, fd131;
sub.f64 %15, fd83, fd138;
sub.f64 %14, fd65, fd136;
sub.f64 %17, fd84, fd143;
sub.f64 %16, fd66, fd141;
sub.f64 %19, fd76, fd148;
sub.f64 %18, fd58, fd146;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y): "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y));
};


#endif


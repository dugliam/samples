//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


#ifndef CUFFTDX_FFT_13_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_13_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<404, double, 1>(cufftdx::detail::complex<double> *rmem, unsigned smem){

asm volatile (R"({
.reg .f64 fd<257>;
.reg .b64 rd<2>;
add.f64 fd53, %28, %58;
add.f64 fd54, %30, %59;
sub.f64 fd55, %28, %58;
sub.f64 fd56, %30, %59;
add.f64 fd57, %31, %55;
add.f64 fd58, %33, %57;
sub.f64 fd59, %31, %55;
sub.f64 fd60, %33, %57;
add.f64 fd61, %34, %52;
add.f64 fd62, %35, %54;
sub.f64 fd63, %34, %52;
sub.f64 fd64, %35, %54;
add.f64 fd65, %36, %50;
add.f64 fd66, %38, %51;
sub.f64 fd67, %36, %50;
sub.f64 fd68, %38, %51;
add.f64 fd69, %39, %47;
add.f64 fd70, %41, %49;
sub.f64 fd71, %39, %47;
sub.f64 fd72, %41, %49;
add.f64 fd73, %42, %44;
add.f64 fd74, %43, %46;
sub.f64 fd75, %42, %44;
sub.f64 fd76, %43, %46;
add.f64 fd77, %26, fd53;
add.f64 fd78, %27, fd54;
add.f64 fd79, fd77, fd57;
add.f64 fd80, fd78, fd58;
add.f64 fd81, fd79, fd61;
add.f64 fd82, fd80, fd62;
add.f64 fd83, fd81, fd65;
add.f64 fd84, fd82, fd66;
add.f64 fd85, fd83, fd69;
add.f64 fd86, fd84, fd70;
fma.rn.f64 fd87, fd53, 0d3FEC55A7E00740E9, %26;
fma.rn.f64 fd88, fd56, 0dBFDDBE064267C47C, 0d0000000000000000;
fma.rn.f64 fd89, fd54, 0d3FEC55A7E00740E9, %27;
fma.rn.f64 fd90, fd55, 0dBFDDBE064267C47C, 0d0000000000000000;
fma.rn.f64 fd91, fd57, 0d3FE22D961EA71119, fd87;
fma.rn.f64 fd92, fd60, 0dBFEA55E242A4C3D2, fd88;
fma.rn.f64 fd93, fd58, 0d3FE22D961EA71119, fd89;
fma.rn.f64 fd94, fd59, 0dBFEA55E242A4C3D2, fd90;
fma.rn.f64 fd95, fd61, 0d3FBEDB7DEBAA3ED8, fd91;
fma.rn.f64 fd96, fd64, 0dBFEFC44566966769, fd92;
fma.rn.f64 fd97, fd62, 0d3FBEDB7DEBAA3ED8, fd93;
fma.rn.f64 fd98, fd63, 0dBFEFC44566966769, fd94;
fma.rn.f64 fd99, fd65, 0dBFD6B1D8B2365DA1, fd95;
fma.rn.f64 fd100, fd68, 0dBFEDEBA72EF20147, fd96;
fma.rn.f64 fd101, fd66, 0dBFD6B1D8B2365DA1, fd97;
fma.rn.f64 fd102, fd67, 0dBFEDEBA72EF20147, fd98;
fma.rn.f64 fd103, fd69, 0dBFE7F3CCD0032E0C, fd99;
fma.rn.f64 fd104, fd72, 0dBFE5384D024C2F84, fd100;
fma.rn.f64 fd105, fd70, 0dBFE7F3CCD0032E0C, fd101;
fma.rn.f64 fd106, fd71, 0dBFE5384D024C2F84, fd102;
fma.rn.f64 fd107, fd73, 0dBFEF11F493053D00, fd103;
fma.rn.f64 fd108, fd76, 0dBFCEA1E54BC48DBF, fd104;
fma.rn.f64 fd109, fd74, 0dBFEF11F493053D00, fd105;
fma.rn.f64 fd110, fd75, 0dBFCEA1E54BC48DBF, fd106;
fma.rn.f64 fd111, fd53, 0d3FE22D961EA71119, %26;
fma.rn.f64 fd112, fd56, 0dBFEA55E242A4C3D2, 0d0000000000000000;
fma.rn.f64 fd113, fd54, 0d3FE22D961EA71119, %27;
fma.rn.f64 fd114, fd55, 0dBFEA55E242A4C3D2, 0d0000000000000000;
fma.rn.f64 fd115, fd57, 0dBFD6B1D8B2365DA1, fd111;
fma.rn.f64 fd116, fd60, 0dBFEDEBA72EF20147, fd112;
fma.rn.f64 fd117, fd58, 0dBFD6B1D8B2365DA1, fd113;
fma.rn.f64 fd118, fd59, 0dBFEDEBA72EF20147, fd114;
fma.rn.f64 fd119, fd61, 0dBFEF11F493053D00, fd115;
fma.rn.f64 fd120, fd64, 0dBFCEA1E54BC48DBF, fd116;
fma.rn.f64 fd121, fd62, 0dBFEF11F493053D00, fd117;
fma.rn.f64 fd122, fd63, 0dBFCEA1E54BC48DBF, fd118;
fma.rn.f64 fd123, fd65, 0dBFE7F3CCD0032E0C, fd119;
fma.rn.f64 fd124, fd68, 0d3FE5384D024C2F84, fd120;
fma.rn.f64 fd125, fd66, 0dBFE7F3CCD0032E0C, fd121;
fma.rn.f64 fd126, fd67, 0d3FE5384D024C2F84, fd122;
fma.rn.f64 fd127, fd69, 0d3FBEDB7DEBAA3ED8, fd123;
fma.rn.f64 fd128, fd72, 0d3FEFC44566966769, fd124;
fma.rn.f64 fd129, fd70, 0d3FBEDB7DEBAA3ED8, fd125;
fma.rn.f64 fd130, fd71, 0d3FEFC44566966769, fd126;
fma.rn.f64 fd131, fd73, 0d3FEC55A7E00740E9, fd127;
fma.rn.f64 fd132, fd76, 0d3FDDBE064267C47C, fd128;
fma.rn.f64 fd133, fd74, 0d3FEC55A7E00740E9, fd129;
fma.rn.f64 fd134, fd75, 0d3FDDBE064267C47C, fd130;
fma.rn.f64 fd135, fd53, 0d3FBEDB7DEBAA3ED8, %26;
fma.rn.f64 fd136, fd56, 0dBFEFC44566966769, 0d0000000000000000;
fma.rn.f64 fd137, fd54, 0d3FBEDB7DEBAA3ED8, %27;
fma.rn.f64 fd138, fd55, 0dBFEFC44566966769, 0d0000000000000000;
fma.rn.f64 fd139, fd57, 0dBFEF11F493053D00, fd135;
fma.rn.f64 fd140, fd60, 0dBFCEA1E54BC48DBF, fd136;
fma.rn.f64 fd141, fd58, 0dBFEF11F493053D00, fd137;
fma.rn.f64 fd142, fd59, 0dBFCEA1E54BC48DBF, fd138;
fma.rn.f64 fd143, fd61, 0dBFD6B1D8B2365DA1, fd139;
fma.rn.f64 fd144, fd64, 0d3FEDEBA72EF20147, fd140;
fma.rn.f64 fd145, fd62, 0dBFD6B1D8B2365DA1, fd141;
fma.rn.f64 fd146, fd63, 0d3FEDEBA72EF20147, fd142;
fma.rn.f64 fd147, fd65, 0d3FEC55A7E00740E9, fd143;
fma.rn.f64 fd148, fd68, 0d3FDDBE064267C47C, fd144;
fma.rn.f64 fd149, fd66, 0d3FEC55A7E00740E9, fd145;
fma.rn.f64 fd150, fd67, 0d3FDDBE064267C47C, fd146;
fma.rn.f64 fd151, fd69, 0d3FE22D961EA71119, fd147;
fma.rn.f64 fd152, fd72, 0dBFEA55E242A4C3D2, fd148;
fma.rn.f64 fd153, fd70, 0d3FE22D961EA71119, fd149;
fma.rn.f64 fd154, fd71, 0dBFEA55E242A4C3D2, fd150;
fma.rn.f64 fd155, fd73, 0dBFE7F3CCD0032E0C, fd151;
fma.rn.f64 fd156, fd76, 0dBFE5384D024C2F84, fd152;
fma.rn.f64 fd157, fd74, 0dBFE7F3CCD0032E0C, fd153;
fma.rn.f64 fd158, fd75, 0dBFE5384D024C2F84, fd154;
fma.rn.f64 fd159, fd53, 0dBFD6B1D8B2365DA1, %26;
fma.rn.f64 fd160, fd56, 0dBFEDEBA72EF20147, 0d0000000000000000;
fma.rn.f64 fd161, fd54, 0dBFD6B1D8B2365DA1, %27;
fma.rn.f64 fd162, fd55, 0dBFEDEBA72EF20147, 0d0000000000000000;
fma.rn.f64 fd163, fd57, 0dBFE7F3CCD0032E0C, fd159;
fma.rn.f64 fd164, fd60, 0d3FE5384D024C2F84, fd160;
fma.rn.f64 fd165, fd58, 0dBFE7F3CCD0032E0C, fd161;
fma.rn.f64 fd166, fd59, 0d3FE5384D024C2F84, fd162;
fma.rn.f64 fd167, fd61, 0d3FEC55A7E00740E9, fd163;
fma.rn.f64 fd168, fd64, 0d3FDDBE064267C47C, fd164;
fma.rn.f64 fd169, fd62, 0d3FEC55A7E00740E9, fd165;
fma.rn.f64 fd170, fd63, 0d3FDDBE064267C47C, fd166;
fma.rn.f64 fd171, fd65, 0d3FBEDB7DEBAA3ED8, fd167;
fma.rn.f64 fd172, fd68, 0dBFEFC44566966769, fd168;
fma.rn.f64 fd173, fd66, 0d3FBEDB7DEBAA3ED8, fd169;
fma.rn.f64 fd174, fd67, 0dBFEFC44566966769, fd170;
fma.rn.f64 fd175, fd69, 0dBFEF11F493053D00, fd171;
fma.rn.f64 fd176, fd72, 0d3FCEA1E54BC48DBF, fd172;
fma.rn.f64 fd177, fd70, 0dBFEF11F493053D00, fd173;
fma.rn.f64 fd178, fd71, 0d3FCEA1E54BC48DBF, fd174;
fma.rn.f64 fd179, fd73, 0d3FE22D961EA71119, fd175;
fma.rn.f64 fd180, fd76, 0d3FEA55E242A4C3D2, fd176;
fma.rn.f64 fd181, fd74, 0d3FE22D961EA71119, fd177;
fma.rn.f64 fd182, fd75, 0d3FEA55E242A4C3D2, fd178;
fma.rn.f64 fd183, fd53, 0dBFE7F3CCD0032E0C, %26;
fma.rn.f64 fd184, fd56, 0dBFE5384D024C2F84, 0d0000000000000000;
fma.rn.f64 fd185, fd54, 0dBFE7F3CCD0032E0C, %27;
fma.rn.f64 fd186, fd55, 0dBFE5384D024C2F84, 0d0000000000000000;
fma.rn.f64 fd187, fd57, 0d3FBEDB7DEBAA3ED8, fd183;
fma.rn.f64 fd188, fd60, 0d3FEFC44566966769, fd184;
fma.rn.f64 fd189, fd58, 0d3FBEDB7DEBAA3ED8, fd185;
fma.rn.f64 fd190, fd59, 0d3FEFC44566966769, fd186;
fma.rn.f64 fd191, fd61, 0d3FE22D961EA71119, fd187;
fma.rn.f64 fd192, fd64, 0dBFEA55E242A4C3D2, fd188;
fma.rn.f64 fd193, fd62, 0d3FE22D961EA71119, fd189;
fma.rn.f64 fd194, fd63, 0dBFEA55E242A4C3D2, fd190;
fma.rn.f64 fd195, fd65, 0dBFEF11F493053D00, fd191;
fma.rn.f64 fd196, fd68, 0d3FCEA1E54BC48DBF, fd192;
fma.rn.f64 fd197, fd66, 0dBFEF11F493053D00, fd193;
fma.rn.f64 fd198, fd67, 0d3FCEA1E54BC48DBF, fd194;
fma.rn.f64 fd199, fd69, 0d3FEC55A7E00740E9, fd195;
fma.rn.f64 fd200, fd72, 0d3FDDBE064267C47C, fd196;
fma.rn.f64 fd201, fd70, 0d3FEC55A7E00740E9, fd197;
fma.rn.f64 fd202, fd71, 0d3FDDBE064267C47C, fd198;
fma.rn.f64 fd203, fd73, 0dBFD6B1D8B2365DA1, fd199;
fma.rn.f64 fd204, fd76, 0dBFEDEBA72EF20147, fd200;
fma.rn.f64 fd205, fd74, 0dBFD6B1D8B2365DA1, fd201;
fma.rn.f64 fd206, fd75, 0dBFEDEBA72EF20147, fd202;
fma.rn.f64 fd207, fd53, 0dBFEF11F493053D00, %26;
fma.rn.f64 fd208, fd56, 0dBFCEA1E54BC48DBF, 0d0000000000000000;
fma.rn.f64 fd209, fd54, 0dBFEF11F493053D00, %27;
fma.rn.f64 fd210, fd55, 0dBFCEA1E54BC48DBF, 0d0000000000000000;
fma.rn.f64 fd211, fd57, 0d3FEC55A7E00740E9, fd207;
fma.rn.f64 fd212, fd60, 0d3FDDBE064267C47C, fd208;
fma.rn.f64 fd213, fd58, 0d3FEC55A7E00740E9, fd209;
fma.rn.f64 fd214, fd59, 0d3FDDBE064267C47C, fd210;
fma.rn.f64 fd215, fd61, 0dBFE7F3CCD0032E0C, fd211;
fma.rn.f64 fd216, fd64, 0dBFE5384D024C2F84, fd212;
fma.rn.f64 fd217, fd62, 0dBFE7F3CCD0032E0C, fd213;
fma.rn.f64 fd218, fd63, 0dBFE5384D024C2F84, fd214;
fma.rn.f64 fd219, fd65, 0d3FE22D961EA71119, fd215;
fma.rn.f64 fd220, fd68, 0d3FEA55E242A4C3D2, fd216;
fma.rn.f64 fd221, fd66, 0d3FE22D961EA71119, fd217;
fma.rn.f64 fd222, fd67, 0d3FEA55E242A4C3D2, fd218;
fma.rn.f64 fd223, fd69, 0dBFD6B1D8B2365DA1, fd219;
fma.rn.f64 fd224, fd72, 0dBFEDEBA72EF20147, fd220;
fma.rn.f64 fd225, fd70, 0dBFD6B1D8B2365DA1, fd221;
fma.rn.f64 fd226, fd71, 0dBFEDEBA72EF20147, fd222;
fma.rn.f64 fd227, fd73, 0d3FBEDB7DEBAA3ED8, fd223;
fma.rn.f64 fd228, fd76, 0d3FEFC44566966769, fd224;
fma.rn.f64 fd229, fd74, 0d3FBEDB7DEBAA3ED8, fd225;
fma.rn.f64 fd230, fd75, 0d3FEFC44566966769, fd226;
add.f64 %1, fd86, fd74;
add.f64 %0, fd85, fd73;
add.f64 %3, fd109, fd110;
sub.f64 %2, fd107, fd108;
add.f64 %5, fd133, fd134;
sub.f64 %4, fd131, fd132;
add.f64 %7, fd157, fd158;
sub.f64 %6, fd155, fd156;
add.f64 %9, fd181, fd182;
sub.f64 %8, fd179, fd180;
add.f64 %11, fd205, fd206;
sub.f64 %10, fd203, fd204;
add.f64 %13, fd229, fd230;
sub.f64 %12, fd227, fd228;
sub.f64 %15, fd229, fd230;
add.f64 %14, fd227, fd228;
sub.f64 %17, fd205, fd206;
add.f64 %16, fd203, fd204;
sub.f64 %19, fd181, fd182;
add.f64 %18, fd179, fd180;
sub.f64 %21, fd157, fd158;
add.f64 %20, fd155, fd156;
sub.f64 %23, fd133, fd134;
add.f64 %22, fd131, fd132;
sub.f64 %25, fd109, fd110;
add.f64 %24, fd107, fd108;
})"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y), "=d"(rmem[10].x), "=d"(rmem[10].y), "=d"(rmem[11].x), "=d"(rmem[11].y), "=d"(rmem[12].x), "=d"(rmem[12].y): "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y), "d"(rmem[10].x), "d"(rmem[10].y), "d"(rmem[10].y), "d"(rmem[11].x), "d"(rmem[11].y), "d"(rmem[11].y), "d"(rmem[12].x), "d"(rmem[12].y));
};


#endif


#ifndef CUFFTDX_FFT_15_FP64_INV_PTX_HPP
#define CUFFTDX_FFT_15_FP64_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<594, double, 1>(cufftdx::detail::complex<double> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f64 fd<279>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "add.f64 fd61, %39, %63;\n\t"
    "add.f64 fd62, %31, fd61;\n\t"
    "add.f64 fd63, %47, %55;\n\t"
    "add.f64 fd64, fd63, fd62;\n\t"
    "add.f64 fd65, %40, %64;\n\t"
    "add.f64 fd66, %32, fd65;\n\t"
    "add.f64 fd67, %48, %56;\n\t"
    "add.f64 fd68, fd67, fd66;\n\t"
    "fma.rn.f64 fd69, fd61, 0d3FD3C6EF372FE950, %31;\n\t"
    "fma.rn.f64 fd70, fd63, 0dBFE9E3779B97F4A8, fd69;\n\t"
    "sub.f64 fd71, %40, %64;\n\t"
    "mul.f64 fd72, fd71, 0d3FEE6F0E134454FF;\n\t"
    "sub.f64 fd73, %48, %56;\n\t"
    "fma.rn.f64 fd74, fd73, 0d3FE2CF2304755A5E, fd72;\n\t"
    "sub.f64 fd75, fd70, fd74;\n\t"
    "add.f64 fd76, fd74, fd70;\n\t"
    "fma.rn.f64 fd77, fd61, 0dBFE9E3779B97F4A8, %31;\n\t"
    "fma.rn.f64 fd78, fd63, 0d3FD3C6EF372FE950, fd77;\n\t"
    "mul.f64 fd79, fd71, 0d3FE2CF2304755A5E;\n\t"
    "fma.rn.f64 fd80, fd73, 0dBFEE6F0E134454FF, fd79;\n\t"
    "sub.f64 fd81, fd78, fd80;\n\t"
    "add.f64 fd82, fd80, fd78;\n\t"
    "fma.rn.f64 fd83, fd65, 0d3FD3C6EF372FE950, %32;\n\t"
    "fma.rn.f64 fd84, fd67, 0dBFE9E3779B97F4A8, fd83;\n\t"
    "sub.f64 fd85, %39, %63;\n\t"
    "mul.f64 fd86, fd85, 0d3FEE6F0E134454FF;\n\t"
    "sub.f64 fd87, %47, %55;\n\t"
    "fma.rn.f64 fd88, fd87, 0d3FE2CF2304755A5E, fd86;\n\t"
    "add.f64 fd89, fd88, fd84;\n\t"
    "sub.f64 fd90, fd84, fd88;\n\t"
    "fma.rn.f64 fd91, fd65, 0dBFE9E3779B97F4A8, %32;\n\t"
    "fma.rn.f64 fd92, fd67, 0d3FD3C6EF372FE950, fd91;\n\t"
    "mul.f64 fd93, fd85, 0d3FE2CF2304755A5E;\n\t"
    "fma.rn.f64 fd94, fd87, 0dBFEE6F0E134454FF, fd93;\n\t"
    "add.f64 fd95, fd94, fd92;\n\t"
    "sub.f64 fd96, fd92, fd94;\n\t"
    "add.f64 fd97, %41, %65;\n\t"
    "add.f64 fd98, %33, fd97;\n\t"
    "add.f64 fd99, %49, %57;\n\t"
    "add.f64 fd100, fd99, fd98;\n\t"
    "add.f64 fd101, %43, %67;\n\t"
    "add.f64 fd102, %35, fd101;\n\t"
    "add.f64 fd103, %51, %59;\n\t"
    "add.f64 fd104, fd103, fd102;\n\t"
    "fma.rn.f64 fd105, fd97, 0d3FD3C6EF372FE950, %33;\n\t"
    "fma.rn.f64 fd106, fd99, 0dBFE9E3779B97F4A8, fd105;\n\t"
    "sub.f64 fd107, %43, %67;\n\t"
    "mul.f64 fd108, fd107, 0d3FEE6F0E134454FF;\n\t"
    "sub.f64 fd109, %51, %59;\n\t"
    "fma.rn.f64 fd110, fd109, 0d3FE2CF2304755A5E, fd108;\n\t"
    "sub.f64 fd111, fd106, fd110;\n\t"
    "add.f64 fd112, fd110, fd106;\n\t"
    "fma.rn.f64 fd113, fd97, 0dBFE9E3779B97F4A8, %33;\n\t"
    "fma.rn.f64 fd114, fd99, 0d3FD3C6EF372FE950, fd113;\n\t"
    "mul.f64 fd115, fd107, 0d3FE2CF2304755A5E;\n\t"
    "fma.rn.f64 fd116, fd109, 0dBFEE6F0E134454FF, fd115;\n\t"
    "sub.f64 fd117, fd114, fd116;\n\t"
    "add.f64 fd118, fd116, fd114;\n\t"
    "fma.rn.f64 fd119, fd101, 0d3FD3C6EF372FE950, %35;\n\t"
    "fma.rn.f64 fd120, fd103, 0dBFE9E3779B97F4A8, fd119;\n\t"
    "sub.f64 fd121, %41, %65;\n\t"
    "mul.f64 fd122, fd121, 0d3FEE6F0E134454FF;\n\t"
    "sub.f64 fd123, %49, %57;\n\t"
    "fma.rn.f64 fd124, fd123, 0d3FE2CF2304755A5E, fd122;\n\t"
    "add.f64 fd125, fd124, fd120;\n\t"
    "sub.f64 fd126, fd120, fd124;\n\t"
    "fma.rn.f64 fd127, fd101, 0dBFE9E3779B97F4A8, %35;\n\t"
    "fma.rn.f64 fd128, fd103, 0d3FD3C6EF372FE950, fd127;\n\t"
    "mul.f64 fd129, fd121, 0d3FE2CF2304755A5E;\n\t"
    "fma.rn.f64 fd130, fd123, 0dBFEE6F0E134454FF, fd129;\n\t"
    "add.f64 fd131, fd130, fd128;\n\t"
    "sub.f64 fd132, fd128, fd130;\n\t"
    "add.f64 fd133, %44, %68;\n\t"
    "add.f64 fd134, %36, fd133;\n\t"
    "add.f64 fd135, %52, %60;\n\t"
    "add.f64 fd136, fd135, fd134;\n\t"
    "add.f64 fd137, %46, %69;\n\t"
    "add.f64 fd138, %38, fd137;\n\t"
    "add.f64 fd139, %54, %62;\n\t"
    "add.f64 fd140, fd139, fd138;\n\t"
    "fma.rn.f64 fd141, fd133, 0d3FD3C6EF372FE950, %36;\n\t"
    "fma.rn.f64 fd142, fd135, 0dBFE9E3779B97F4A8, fd141;\n\t"
    "sub.f64 fd143, %46, %69;\n\t"
    "mul.f64 fd144, fd143, 0d3FEE6F0E134454FF;\n\t"
    "sub.f64 fd145, %54, %62;\n\t"
    "fma.rn.f64 fd146, fd145, 0d3FE2CF2304755A5E, fd144;\n\t"
    "sub.f64 fd147, fd142, fd146;\n\t"
    "add.f64 fd148, fd146, fd142;\n\t"
    "fma.rn.f64 fd149, fd133, 0dBFE9E3779B97F4A8, %36;\n\t"
    "fma.rn.f64 fd150, fd135, 0d3FD3C6EF372FE950, fd149;\n\t"
    "mul.f64 fd151, fd143, 0d3FE2CF2304755A5E;\n\t"
    "fma.rn.f64 fd152, fd145, 0dBFEE6F0E134454FF, fd151;\n\t"
    "sub.f64 fd153, fd150, fd152;\n\t"
    "add.f64 fd154, fd152, fd150;\n\t"
    "fma.rn.f64 fd155, fd137, 0d3FD3C6EF372FE950, %38;\n\t"
    "fma.rn.f64 fd156, fd139, 0dBFE9E3779B97F4A8, fd155;\n\t"
    "sub.f64 fd157, %44, %68;\n\t"
    "mul.f64 fd158, fd157, 0d3FEE6F0E134454FF;\n\t"
    "sub.f64 fd159, %52, %60;\n\t"
    "fma.rn.f64 fd160, fd159, 0d3FE2CF2304755A5E, fd158;\n\t"
    "add.f64 fd161, fd160, fd156;\n\t"
    "sub.f64 fd162, fd156, fd160;\n\t"
    "fma.rn.f64 fd163, fd137, 0dBFE9E3779B97F4A8, %38;\n\t"
    "fma.rn.f64 fd164, fd139, 0d3FD3C6EF372FE950, fd163;\n\t"
    "mul.f64 fd165, fd157, 0d3FE2CF2304755A5E;\n\t"
    "fma.rn.f64 fd166, fd159, 0dBFEE6F0E134454FF, fd165;\n\t"
    "add.f64 fd167, fd166, fd164;\n\t"
    "sub.f64 fd168, fd164, fd166;\n\t"
    "mul.f64 fd169, fd111, 0d3FED3BC3AEFF7F95;\n\t"
    "mul.f64 fd170, fd125, 0d3FDA07F921061AD1;\n\t"
    "sub.f64 fd171, fd169, fd170;\n\t"
    "mul.f64 fd172, fd125, 0d3FED3BC3AEFF7F95;\n\t"
    "fma.rn.f64 fd173, fd111, 0d3FDA07F921061AD1, fd172;\n\t"
    "mul.f64 fd174, fd147, 0d3FE5698496E20BD8;\n\t"
    "mul.f64 fd175, fd161, 0d3FE7C7D7A833BEC2;\n\t"
    "sub.f64 fd176, fd174, fd175;\n\t"
    "mul.f64 fd177, fd161, 0d3FE5698496E20BD8;\n\t"
    "fma.rn.f64 fd178, fd147, 0d3FE7C7D7A833BEC2, fd177;\n\t"
    "mul.f64 fd179, fd117, 0d3FE5698496E20BD8;\n\t"
    "mul.f64 fd180, fd131, 0d3FE7C7D7A833BEC2;\n\t"
    "sub.f64 fd181, fd179, fd180;\n\t"
    "mul.f64 fd182, fd131, 0d3FE5698496E20BD8;\n\t"
    "fma.rn.f64 fd183, fd117, 0d3FE7C7D7A833BEC2, fd182;\n\t"
    "mul.f64 fd184, fd153, 0dBFBAC2609B3C576C;\n\t"
    "mul.f64 fd185, fd167, 0d3FEFD31F94F867C6;\n\t"
    "sub.f64 fd186, fd184, fd185;\n\t"
    "mul.f64 fd187, fd167, 0dBFBAC2609B3C576C;\n\t"
    "fma.rn.f64 fd188, fd153, 0d3FEFD31F94F867C6, fd187;\n\t"
    "mul.f64 fd189, fd118, 0d3FD3C6EF372FE950;\n\t"
    "mul.f64 fd190, fd132, 0d3FEE6F0E134454FF;\n\t"
    "sub.f64 fd191, fd189, fd190;\n\t"
    "mul.f64 fd192, fd132, 0d3FD3C6EF372FE950;\n\t"
    "fma.rn.f64 fd193, fd118, 0d3FEE6F0E134454FF, fd192;\n\t"
    "mul.f64 fd194, fd154, 0dBFE9E3779B97F4A8;\n\t"
    "mul.f64 fd195, fd168, 0d3FE2CF2304755A5E;\n\t"
    "sub.f64 fd196, fd194, fd195;\n\t"
    "mul.f64 fd197, fd168, 0dBFE9E3779B97F4A8;\n\t"
    "fma.rn.f64 fd198, fd154, 0d3FE2CF2304755A5E, fd197;\n\t"
    "mul.f64 fd199, fd112, 0dBFBAC2609B3C576C;\n\t"
    "mul.f64 fd200, fd126, 0d3FEFD31F94F867C6;\n\t"
    "sub.f64 fd201, fd199, fd200;\n\t"
    "mul.f64 fd202, fd126, 0dBFBAC2609B3C576C;\n\t"
    "fma.rn.f64 fd203, fd112, 0d3FEFD31F94F867C6, fd202;\n\t"
    "mul.f64 fd204, fd148, 0dBFEF4CFC327A0080;\n\t"
    "mul.f64 fd205, fd162, 0dBFCA9CD9AC4258F6;\n\t"
    "sub.f64 fd206, fd204, fd205;\n\t"
    "mul.f64 fd207, fd162, 0dBFEF4CFC327A0080;\n\t"
    "fma.rn.f64 fd208, fd148, 0dBFCA9CD9AC4258F6, fd207;\n\t"
    "add.f64 fd209, fd100, fd136;\n\t"
    "add.f64 fd210, fd104, fd140;\n\t"
    "fma.rn.f64 fd211, fd209, 0dBFE0000000000000, fd64;\n\t"
    "sub.f64 fd212, fd104, fd140;\n\t"
    "mul.f64 fd213, fd212, 0dBFEBB67AE8584CAA;\n\t"
    "fma.rn.f64 fd214, fd210, 0dBFE0000000000000, fd68;\n\t"
    "sub.f64 fd215, fd100, fd136;\n\t"
    "mul.f64 fd216, fd215, 0dBFEBB67AE8584CAA;\n\t"
    "add.f64 fd217, fd171, fd176;\n\t"
    "add.f64 fd218, fd173, fd178;\n\t"
    "fma.rn.f64 fd219, fd217, 0dBFE0000000000000, fd75;\n\t"
    "sub.f64 fd220, fd173, fd178;\n\t"
    "mul.f64 fd221, fd220, 0dBFEBB67AE8584CAA;\n\t"
    "fma.rn.f64 fd222, fd218, 0dBFE0000000000000, fd89;\n\t"
    "sub.f64 fd223, fd171, fd176;\n\t"
    "mul.f64 fd224, fd223, 0dBFEBB67AE8584CAA;\n\t"
    "add.f64 fd225, fd181, fd186;\n\t"
    "add.f64 fd226, fd183, fd188;\n\t"
    "fma.rn.f64 fd227, fd225, 0dBFE0000000000000, fd81;\n\t"
    "sub.f64 fd228, fd183, fd188;\n\t"
    "mul.f64 fd229, fd228, 0dBFEBB67AE8584CAA;\n\t"
    "fma.rn.f64 fd230, fd226, 0dBFE0000000000000, fd95;\n\t"
    "sub.f64 fd231, fd181, fd186;\n\t"
    "mul.f64 fd232, fd231, 0dBFEBB67AE8584CAA;\n\t"
    "add.f64 fd233, fd191, fd196;\n\t"
    "add.f64 fd234, fd193, fd198;\n\t"
    "fma.rn.f64 fd235, fd233, 0dBFE0000000000000, fd82;\n\t"
    "sub.f64 fd236, fd193, fd198;\n\t"
    "mul.f64 fd237, fd236, 0dBFEBB67AE8584CAA;\n\t"
    "fma.rn.f64 fd238, fd234, 0dBFE0000000000000, fd96;\n\t"
    "sub.f64 fd239, fd191, fd196;\n\t"
    "mul.f64 fd240, fd239, 0dBFEBB67AE8584CAA;\n\t"
    "add.f64 fd241, fd201, fd206;\n\t"
    "add.f64 fd242, fd203, fd208;\n\t"
    "fma.rn.f64 fd243, fd241, 0dBFE0000000000000, fd76;\n\t"
    "sub.f64 fd244, fd203, fd208;\n\t"
    "mul.f64 fd245, fd244, 0dBFEBB67AE8584CAA;\n\t"
    "fma.rn.f64 fd246, fd242, 0dBFE0000000000000, fd90;\n\t"
    "sub.f64 fd247, fd201, fd206;\n\t"
    "mul.f64 fd248, fd247, 0dBFEBB67AE8584CAA;\n\t"
    "add.f64 %1, fd68, fd210;\n\t"
    "add.f64 %0, fd64, fd209;\n\t"
    "add.f64 %3, fd89, fd218;\n\t"
    "add.f64 %2, fd75, fd217;\n\t"
    "add.f64 %5, fd95, fd226;\n\t"
    "add.f64 %4, fd81, fd225;\n\t"
    "add.f64 %7, fd96, fd234;\n\t"
    "add.f64 %6, fd82, fd233;\n\t"
    "add.f64 %9, fd90, fd242;\n\t"
    "add.f64 %8, fd76, fd241;\n\t"
    "sub.f64 %11, fd214, fd216;\n\t"
    "add.f64 %10, fd213, fd211;\n\t"
    "sub.f64 %13, fd222, fd224;\n\t"
    "add.f64 %12, fd221, fd219;\n\t"
    "sub.f64 %15, fd230, fd232;\n\t"
    "add.f64 %14, fd229, fd227;\n\t"
    "sub.f64 %17, fd238, fd240;\n\t"
    "add.f64 %16, fd237, fd235;\n\t"
    "sub.f64 %19, fd246, fd248;\n\t"
    "add.f64 %18, fd245, fd243;\n\t"
    "add.f64 %21, fd216, fd214;\n\t"
    "sub.f64 %20, fd211, fd213;\n\t"
    "add.f64 %23, fd224, fd222;\n\t"
    "sub.f64 %22, fd219, fd221;\n\t"
    "add.f64 %25, fd232, fd230;\n\t"
    "sub.f64 %24, fd227, fd229;\n\t"
    "add.f64 %27, fd240, fd238;\n\t"
    "sub.f64 %26, fd235, fd237;\n\t"
    "add.f64 %29, fd248, fd246;\n\t"
    "sub.f64 %28, fd243, fd245;\n\t"
    "}"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y), "=d"(rmem[10].x), "=d"(rmem[10].y), "=d"(rmem[11].x), "=d"(rmem[11].y), "=d"(rmem[12].x), "=d"(rmem[12].y), "=d"(rmem[13].x), "=d"(rmem[13].y), "=d"(rmem[14].x), "=d"(rmem[14].y): "l"(smem), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y), "d"(rmem[10].x), "d"(rmem[10].y), "d"(rmem[10].y), "d"(rmem[11].x), "d"(rmem[11].y), "d"(rmem[11].y), "d"(rmem[12].x), "d"(rmem[12].y), "d"(rmem[13].x), "d"(rmem[13].y), "d"(rmem[13].y), "d"(rmem[14].x), "d"(rmem[14].y));
};


#endif

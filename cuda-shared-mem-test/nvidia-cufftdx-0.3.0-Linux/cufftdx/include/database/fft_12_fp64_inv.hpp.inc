#ifndef CUFFTDX_FFT_12_FP64_INV_PTX_HPP
#define CUFFTDX_FFT_12_FP64_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<756, double, 1>(cufftdx::detail::complex<double> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f64 fd<193>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "add.f64 fd49, %35, %46;\n\t"
    "add.f64 fd50, %25, fd49;\n\t"
    "add.f64 fd51, %37, %48;\n\t"
    "add.f64 fd52, %26, fd51;\n\t"
    "fma.rn.f64 fd53, fd49, 0dBFE0000000000000, %25;\n\t"
    "sub.f64 fd54, %37, %48;\n\t"
    "mul.f64 fd55, fd54, 0dBFEBB67AE8584CAA;\n\t"
    "add.f64 fd56, fd55, fd53;\n\t"
    "sub.f64 fd57, fd53, fd55;\n\t"
    "fma.rn.f64 fd58, fd51, 0dBFE0000000000000, %26;\n\t"
    "sub.f64 fd59, %35, %46;\n\t"
    "mul.f64 fd60, fd59, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd61, fd58, fd60;\n\t"
    "add.f64 fd62, fd60, fd58;\n\t"
    "add.f64 fd63, %41, %51;\n\t"
    "add.f64 fd64, %30, fd63;\n\t"
    "add.f64 fd65, %42, %53;\n\t"
    "add.f64 fd66, %32, fd65;\n\t"
    "fma.rn.f64 fd67, fd63, 0dBFE0000000000000, %30;\n\t"
    "sub.f64 fd68, %42, %53;\n\t"
    "mul.f64 fd69, fd68, 0dBFEBB67AE8584CAA;\n\t"
    "add.f64 fd70, fd69, fd67;\n\t"
    "sub.f64 fd71, fd67, fd69;\n\t"
    "fma.rn.f64 fd72, fd65, 0dBFE0000000000000, %32;\n\t"
    "sub.f64 fd73, %41, %51;\n\t"
    "mul.f64 fd74, fd73, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd75, fd72, fd74;\n\t"
    "add.f64 fd76, fd74, fd72;\n\t"
    "mul.f64 fd77, fd70, 0d3FE0000000000000;\n\t"
    "mul.f64 fd78, fd75, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd79, fd77, fd78;\n\t"
    "mul.f64 fd80, fd75, 0d3FE0000000000000;\n\t"
    "fma.rn.f64 fd81, fd70, 0d3FEBB67AE8584CAA, fd80;\n\t"
    "mul.f64 fd82, fd71, 0dBFE0000000000000;\n\t"
    "mul.f64 fd83, fd76, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd84, fd82, fd83;\n\t"
    "mul.f64 fd85, fd76, 0dBFE0000000000000;\n\t"
    "fma.rn.f64 fd86, fd71, 0d3FEBB67AE8584CAA, fd85;\n\t"
    "add.f64 fd87, fd50, fd64;\n\t"
    "add.f64 fd88, fd52, fd66;\n\t"
    "sub.f64 fd89, fd50, fd64;\n\t"
    "sub.f64 fd90, fd52, fd66;\n\t"
    "add.f64 fd91, fd56, fd79;\n\t"
    "add.f64 fd92, fd61, fd81;\n\t"
    "sub.f64 fd93, fd56, fd79;\n\t"
    "sub.f64 fd94, fd61, fd81;\n\t"
    "add.f64 fd95, fd57, fd84;\n\t"
    "add.f64 fd96, fd62, fd86;\n\t"
    "sub.f64 fd97, fd57, fd84;\n\t"
    "sub.f64 fd98, fd62, fd86;\n\t"
    "add.f64 fd99, %38, %49;\n\t"
    "add.f64 fd100, %27, fd99;\n\t"
    "add.f64 fd101, %40, %50;\n\t"
    "add.f64 fd102, %29, fd101;\n\t"
    "fma.rn.f64 fd103, fd99, 0dBFE0000000000000, %27;\n\t"
    "sub.f64 fd104, %40, %50;\n\t"
    "mul.f64 fd105, fd104, 0dBFEBB67AE8584CAA;\n\t"
    "add.f64 fd106, fd105, fd103;\n\t"
    "sub.f64 fd107, fd103, fd105;\n\t"
    "fma.rn.f64 fd108, fd101, 0dBFE0000000000000, %29;\n\t"
    "sub.f64 fd109, %38, %49;\n\t"
    "mul.f64 fd110, fd109, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd111, fd108, fd110;\n\t"
    "add.f64 fd112, fd110, fd108;\n\t"
    "add.f64 fd113, %43, %54;\n\t"
    "add.f64 fd114, %33, fd113;\n\t"
    "add.f64 fd115, %45, %55;\n\t"
    "add.f64 fd116, %34, fd115;\n\t"
    "fma.rn.f64 fd117, fd113, 0dBFE0000000000000, %33;\n\t"
    "sub.f64 fd118, %45, %55;\n\t"
    "mul.f64 fd119, fd118, 0dBFEBB67AE8584CAA;\n\t"
    "add.f64 fd120, fd119, fd117;\n\t"
    "sub.f64 fd121, fd117, fd119;\n\t"
    "fma.rn.f64 fd122, fd115, 0dBFE0000000000000, %34;\n\t"
    "sub.f64 fd123, %43, %54;\n\t"
    "mul.f64 fd124, fd123, 0dBFEBB67AE8584CAA;\n\t"
    "sub.f64 fd125, fd122, fd124;\n\t"
    "add.f64 fd126, fd124, fd122;\n\t"
    "mul.f64 fd127, fd120, 0d3FE0000000000000;\n\t"
    "mul.f64 fd128, fd125, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd129, fd127, fd128;\n\t"
    "mul.f64 fd130, fd125, 0d3FE0000000000000;\n\t"
    "fma.rn.f64 fd131, fd120, 0d3FEBB67AE8584CAA, fd130;\n\t"
    "mul.f64 fd132, fd121, 0dBFE0000000000000;\n\t"
    "mul.f64 fd133, fd126, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd134, fd132, fd133;\n\t"
    "mul.f64 fd135, fd126, 0dBFE0000000000000;\n\t"
    "fma.rn.f64 fd136, fd121, 0d3FEBB67AE8584CAA, fd135;\n\t"
    "add.f64 fd137, fd100, fd114;\n\t"
    "add.f64 fd138, fd102, fd116;\n\t"
    "sub.f64 fd139, fd100, fd114;\n\t"
    "sub.f64 fd140, fd102, fd116;\n\t"
    "add.f64 fd141, fd106, fd129;\n\t"
    "add.f64 fd142, fd111, fd131;\n\t"
    "sub.f64 fd143, fd106, fd129;\n\t"
    "sub.f64 fd144, fd111, fd131;\n\t"
    "add.f64 fd145, fd107, fd134;\n\t"
    "add.f64 fd146, fd112, fd136;\n\t"
    "sub.f64 fd147, fd107, fd134;\n\t"
    "sub.f64 fd148, fd112, fd136;\n\t"
    "mul.f64 fd149, fd141, 0d3FEBB67AE8584CAA;\n\t"
    "mul.f64 fd150, fd142, 0d3FE0000000000000;\n\t"
    "sub.f64 fd151, fd149, fd150;\n\t"
    "mul.f64 fd152, fd142, 0d3FEBB67AE8584CAA;\n\t"
    "fma.rn.f64 fd153, fd141, 0d3FE0000000000000, fd152;\n\t"
    "mul.f64 fd154, fd145, 0d3FE0000000000000;\n\t"
    "mul.f64 fd155, fd146, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd156, fd154, fd155;\n\t"
    "mul.f64 fd157, fd146, 0d3FE0000000000000;\n\t"
    "fma.rn.f64 fd158, fd145, 0d3FEBB67AE8584CAA, fd157;\n\t"
    "mul.f64 fd159, fd143, 0dBFE0000000000000;\n\t"
    "mul.f64 fd160, fd144, 0d3FEBB67AE8584CAA;\n\t"
    "sub.f64 fd161, fd159, fd160;\n\t"
    "mul.f64 fd162, fd144, 0dBFE0000000000000;\n\t"
    "fma.rn.f64 fd163, fd143, 0d3FEBB67AE8584CAA, fd162;\n\t"
    "mul.f64 fd164, fd147, 0dBFEBB67AE8584CAA;\n\t"
    "mul.f64 fd165, fd148, 0d3FE0000000000000;\n\t"
    "sub.f64 fd166, fd164, fd165;\n\t"
    "mul.f64 fd167, fd148, 0dBFEBB67AE8584CAA;\n\t"
    "fma.rn.f64 fd168, fd147, 0d3FE0000000000000, fd167;\n\t"
    "add.f64 %1, fd88, fd138;\n\t"
    "add.f64 %0, fd87, fd137;\n\t"
    "add.f64 %3, fd92, fd153;\n\t"
    "add.f64 %2, fd91, fd151;\n\t"
    "add.f64 %5, fd96, fd158;\n\t"
    "add.f64 %4, fd95, fd156;\n\t"
    "add.f64 %7, fd90, fd139;\n\t"
    "sub.f64 %6, fd89, fd140;\n\t"
    "add.f64 %9, fd94, fd163;\n\t"
    "add.f64 %8, fd93, fd161;\n\t"
    "add.f64 %11, fd98, fd168;\n\t"
    "add.f64 %10, fd97, fd166;\n\t"
    "sub.f64 %13, fd88, fd138;\n\t"
    "sub.f64 %12, fd87, fd137;\n\t"
    "sub.f64 %15, fd92, fd153;\n\t"
    "sub.f64 %14, fd91, fd151;\n\t"
    "sub.f64 %17, fd96, fd158;\n\t"
    "sub.f64 %16, fd95, fd156;\n\t"
    "sub.f64 %19, fd90, fd139;\n\t"
    "add.f64 %18, fd89, fd140;\n\t"
    "sub.f64 %21, fd94, fd163;\n\t"
    "sub.f64 %20, fd93, fd161;\n\t"
    "sub.f64 %23, fd98, fd168;\n\t"
    "sub.f64 %22, fd97, fd166;\n\t"
    "}"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y), "=d"(rmem[5].x), "=d"(rmem[5].y), "=d"(rmem[6].x), "=d"(rmem[6].y), "=d"(rmem[7].x), "=d"(rmem[7].y), "=d"(rmem[8].x), "=d"(rmem[8].y), "=d"(rmem[9].x), "=d"(rmem[9].y), "=d"(rmem[10].x), "=d"(rmem[10].y), "=d"(rmem[11].x), "=d"(rmem[11].y): "l"(smem), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y), "d"(rmem[4].y), "d"(rmem[5].x), "d"(rmem[5].y), "d"(rmem[5].y), "d"(rmem[6].x), "d"(rmem[6].y), "d"(rmem[7].x), "d"(rmem[7].y), "d"(rmem[7].y), "d"(rmem[8].x), "d"(rmem[8].y), "d"(rmem[8].y), "d"(rmem[9].x), "d"(rmem[9].y), "d"(rmem[10].x), "d"(rmem[10].y), "d"(rmem[10].y), "d"(rmem[11].x), "d"(rmem[11].y));
};


#endif

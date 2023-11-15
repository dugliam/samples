#ifndef CUFFTDX_FFT_5_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_5_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<552, double, 1>(cufftdx::detail::complex<double> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f64 fd<57>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "add.f64 fd21, %13, %21;\n\t"
    "add.f64 fd22, %11, fd21;\n\t"
    "add.f64 fd23, %16, %19;\n\t"
    "add.f64 fd24, %15, %22;\n\t"
    "add.f64 fd25, %12, fd24;\n\t"
    "add.f64 fd26, %18, %20;\n\t"
    "fma.rn.f64 fd27, fd21, 0d3FD3C6EF372FE950, %11;\n\t"
    "fma.rn.f64 fd28, fd23, 0dBFE9E3779B97F4A8, fd27;\n\t"
    "sub.f64 fd29, %15, %22;\n\t"
    "mul.f64 fd30, fd29, 0dBFEE6F0E134454FF;\n\t"
    "sub.f64 fd31, %18, %20;\n\t"
    "fma.rn.f64 fd32, fd31, 0dBFE2CF2304755A5E, fd30;\n\t"
    "fma.rn.f64 fd33, fd21, 0dBFE9E3779B97F4A8, %11;\n\t"
    "fma.rn.f64 fd34, fd23, 0d3FD3C6EF372FE950, fd33;\n\t"
    "mul.f64 fd35, fd29, 0dBFE2CF2304755A5E;\n\t"
    "fma.rn.f64 fd36, fd31, 0d3FEE6F0E134454FF, fd35;\n\t"
    "fma.rn.f64 fd37, fd24, 0d3FD3C6EF372FE950, %12;\n\t"
    "fma.rn.f64 fd38, fd26, 0dBFE9E3779B97F4A8, fd37;\n\t"
    "sub.f64 fd39, %13, %21;\n\t"
    "mul.f64 fd40, fd39, 0dBFEE6F0E134454FF;\n\t"
    "sub.f64 fd41, %16, %19;\n\t"
    "fma.rn.f64 fd42, fd41, 0dBFE2CF2304755A5E, fd40;\n\t"
    "fma.rn.f64 fd43, fd24, 0dBFE9E3779B97F4A8, %12;\n\t"
    "fma.rn.f64 fd44, fd26, 0d3FD3C6EF372FE950, fd43;\n\t"
    "mul.f64 fd45, fd39, 0dBFE2CF2304755A5E;\n\t"
    "fma.rn.f64 fd46, fd41, 0d3FEE6F0E134454FF, fd45;\n\t"
    "add.f64 %1, fd26, fd25;\n\t"
    "add.f64 %0, fd23, fd22;\n\t"
    "add.f64 %3, fd42, fd38;\n\t"
    "sub.f64 %2, fd28, fd32;\n\t"
    "add.f64 %5, fd46, fd44;\n\t"
    "sub.f64 %4, fd34, fd36;\n\t"
    "sub.f64 %7, fd44, fd46;\n\t"
    "add.f64 %6, fd36, fd34;\n\t"
    "sub.f64 %9, fd38, fd42;\n\t"
    "add.f64 %8, fd32, fd28;\n\t"
    "}"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y), "=d"(rmem[3].x), "=d"(rmem[3].y), "=d"(rmem[4].x), "=d"(rmem[4].y): "l"(smem), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y), "d"(rmem[2].y), "d"(rmem[3].x), "d"(rmem[3].y), "d"(rmem[4].x), "d"(rmem[4].y));
};


#endif

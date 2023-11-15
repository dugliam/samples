#ifndef CUFFTDX_FFT_3_FP64_INV_PTX_HPP
#define CUFFTDX_FFT_3_FP64_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<695, double, 1>(cufftdx::detail::complex<double> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f64 fd<27>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "add.f64 fd13, %9, %12;\n\t"
    "add.f64 fd14, %11, %13;\n\t"
    "fma.rn.f64 fd15, fd13, 0dBFE0000000000000, %7;\n\t"
    "sub.f64 fd16, %11, %13;\n\t"
    "mul.f64 fd17, fd16, 0dBFEBB67AE8584CAA;\n\t"
    "fma.rn.f64 fd18, fd14, 0dBFE0000000000000, %8;\n\t"
    "sub.f64 fd19, %9, %12;\n\t"
    "mul.f64 fd20, fd19, 0dBFEBB67AE8584CAA;\n\t"
    "add.f64 %1, %8, fd14;\n\t"
    "add.f64 %0, %7, fd13;\n\t"
    "sub.f64 %3, fd18, fd20;\n\t"
    "add.f64 %2, fd17, fd15;\n\t"
    "add.f64 %5, fd20, fd18;\n\t"
    "sub.f64 %4, fd15, fd17;\n\t"
    "}"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y), "=d"(rmem[2].x), "=d"(rmem[2].y): "l"(smem), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y), "d"(rmem[1].y), "d"(rmem[2].x), "d"(rmem[2].y));
};


#endif

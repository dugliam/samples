#ifndef CUFFTDX_FFT_2_FP64_FWD_PTX_HPP
#define CUFFTDX_FFT_2_FP64_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<437, double, 1>(cufftdx::detail::complex<double> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f64 fd<13>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "add.f64 %1, %6, %8;\n\t"
    "add.f64 %0, %5, %7;\n\t"
    "sub.f64 %3, %6, %8;\n\t"
    "sub.f64 %2, %5, %7;\n\t"
    "}"
     : "=d"(rmem[0].x), "=d"(rmem[0].y), "=d"(rmem[1].x), "=d"(rmem[1].y): "l"(smem), "d"(rmem[0].x), "d"(rmem[0].y), "d"(rmem[1].x), "d"(rmem[1].y));
};


#endif

#ifndef CUFFTDX_FFT_2_FP16_FWD_PTX_HPP
#define CUFFTDX_FFT_2_FP16_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<789, __half2, 1>(cufftdx::detail::complex<__half2> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .b32 r<13>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "{\n\t"
    "add.f16x2 %0, %5, %7;\n\t"
    "}\n\t"
    "{\n\t"
    "add.f16x2 %1, %6, %8;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %2, %5, %7;\n\t"
    "}\n\t"
    "{\n\t"
    "sub.f16x2 %3, %6, %8;\n\t"
    "}\n\t"
    "}"
     : "=r"(__HALF2_TO_UI(rmem[0].x)), "=r"(__HALF2_TO_UI(rmem[0].y)), "=r"(__HALF2_TO_UI(rmem[1].x)), "=r"(__HALF2_TO_UI(rmem[1].y)): "l"(smem), "r"(__HALF2_TO_UI(rmem[0].x)), "r"(__HALF2_TO_UI(rmem[0].y)), "r"(__HALF2_TO_UI(rmem[1].x)), "r"(__HALF2_TO_UI(rmem[1].y)));
};


#endif

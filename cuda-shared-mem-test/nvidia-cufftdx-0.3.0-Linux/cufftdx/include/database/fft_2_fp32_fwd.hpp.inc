#ifndef CUFFTDX_FFT_2_FP32_FWD_PTX_HPP
#define CUFFTDX_FFT_2_FP32_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<21, float, 1>(cufftdx::detail::complex<float> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<13>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "add.f32 %1, %6, %8;\n\t"
    "add.f32 %0, %5, %7;\n\t"
    "sub.f32 %3, %6, %8;\n\t"
    "sub.f32 %2, %5, %7;\n\t"
    "}"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y): "l"(smem), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y));
};


#endif

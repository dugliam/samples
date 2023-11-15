#ifndef CUFFTDX_FFT_3_FP32_FWD_PTX_HPP
#define CUFFTDX_FFT_3_FP32_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<125, float, 1>(cufftdx::detail::complex<float> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<27>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "add.f32 f13, %9, %12;\n\t"
    "add.f32 f14, %11, %13;\n\t"
    "fma.rn.f32 f15, f13, 0fBF000000, %7;\n\t"
    "sub.f32 f16, %11, %13;\n\t"
    "mul.f32 f17, f16, 0f3F5DB3D7;\n\t"
    "fma.rn.f32 f18, f14, 0fBF000000, %8;\n\t"
    "sub.f32 f19, %9, %12;\n\t"
    "mul.f32 f20, f19, 0f3F5DB3D7;\n\t"
    "add.f32 %1, %8, f14;\n\t"
    "add.f32 %0, %7, f13;\n\t"
    "sub.f32 %3, f18, f20;\n\t"
    "add.f32 %2, f17, f15;\n\t"
    "add.f32 %5, f20, f18;\n\t"
    "sub.f32 %4, f15, f17;\n\t"
    "}"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y): "l"(smem), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y));
};


#endif

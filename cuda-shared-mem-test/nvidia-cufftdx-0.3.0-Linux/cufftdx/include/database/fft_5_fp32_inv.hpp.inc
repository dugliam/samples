#ifndef CUFFTDX_FFT_5_FP32_INV_PTX_HPP
#define CUFFTDX_FFT_5_FP32_INV_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<372, float, 1>(cufftdx::detail::complex<float> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<57>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "add.f32 f21, %13, %21;\n\t"
    "add.f32 f22, %11, f21;\n\t"
    "add.f32 f23, %16, %19;\n\t"
    "add.f32 f24, %15, %22;\n\t"
    "add.f32 f25, %12, f24;\n\t"
    "add.f32 f26, %18, %20;\n\t"
    "fma.rn.f32 f27, f21, 0f3E9E377A, %11;\n\t"
    "fma.rn.f32 f28, f23, 0fBF4F1BBD, f27;\n\t"
    "sub.f32 f29, %15, %22;\n\t"
    "mul.f32 f30, f29, 0f3F737871;\n\t"
    "sub.f32 f31, %18, %20;\n\t"
    "fma.rn.f32 f32, f31, 0f3F167918, f30;\n\t"
    "fma.rn.f32 f33, f21, 0fBF4F1BBD, %11;\n\t"
    "fma.rn.f32 f34, f23, 0f3E9E377A, f33;\n\t"
    "mul.f32 f35, f29, 0f3F167918;\n\t"
    "fma.rn.f32 f36, f31, 0fBF737871, f35;\n\t"
    "fma.rn.f32 f37, f24, 0f3E9E377A, %12;\n\t"
    "fma.rn.f32 f38, f26, 0fBF4F1BBD, f37;\n\t"
    "sub.f32 f39, %13, %21;\n\t"
    "mul.f32 f40, f39, 0f3F737871;\n\t"
    "sub.f32 f41, %16, %19;\n\t"
    "fma.rn.f32 f42, f41, 0f3F167918, f40;\n\t"
    "fma.rn.f32 f43, f24, 0fBF4F1BBD, %12;\n\t"
    "fma.rn.f32 f44, f26, 0f3E9E377A, f43;\n\t"
    "mul.f32 f45, f39, 0f3F167918;\n\t"
    "fma.rn.f32 f46, f41, 0fBF737871, f45;\n\t"
    "add.f32 %1, f26, f25;\n\t"
    "add.f32 %0, f23, f22;\n\t"
    "add.f32 %3, f42, f38;\n\t"
    "sub.f32 %2, f28, f32;\n\t"
    "add.f32 %5, f46, f44;\n\t"
    "sub.f32 %4, f34, f36;\n\t"
    "sub.f32 %7, f44, f46;\n\t"
    "add.f32 %6, f36, f34;\n\t"
    "sub.f32 %9, f38, f42;\n\t"
    "add.f32 %8, f32, f28;\n\t"
    "}"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y): "l"(smem), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y));
};


#endif

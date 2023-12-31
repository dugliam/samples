#ifndef CUFFTDX_FFT_17_FP32_FWD_PTX_HPP
#define CUFFTDX_FFT_17_FP32_FWD_PTX_HPP



template<> __forceinline__ __device__ void cufftdx_private_function<3, float, 1>(cufftdx::detail::complex<float> *rmem, void *smem){

asm volatile ("{\n\t"
    ".reg .f32 f<405>;\n\t"
    ".reg .b64 rd<2>;\n\t"
    "add.f32 f69, %37, %77;\n\t"
    "add.f32 f70, %39, %78;\n\t"
    "sub.f32 f71, %37, %77;\n\t"
    "sub.f32 f72, %39, %78;\n\t"
    "add.f32 f73, %40, %75;\n\t"
    "add.f32 f74, %42, %76;\n\t"
    "sub.f32 f75, %40, %75;\n\t"
    "sub.f32 f76, %42, %76;\n\t"
    "add.f32 f77, %43, %72;\n\t"
    "add.f32 f78, %44, %74;\n\t"
    "sub.f32 f79, %43, %72;\n\t"
    "sub.f32 f80, %44, %74;\n\t"
    "add.f32 f81, %45, %69;\n\t"
    "add.f32 f82, %47, %71;\n\t"
    "sub.f32 f83, %45, %69;\n\t"
    "sub.f32 f84, %47, %71;\n\t"
    "add.f32 f85, %48, %67;\n\t"
    "add.f32 f86, %50, %68;\n\t"
    "sub.f32 f87, %48, %67;\n\t"
    "sub.f32 f88, %50, %68;\n\t"
    "add.f32 f89, %51, %64;\n\t"
    "add.f32 f90, %52, %66;\n\t"
    "sub.f32 f91, %51, %64;\n\t"
    "sub.f32 f92, %52, %66;\n\t"
    "add.f32 f93, %53, %61;\n\t"
    "add.f32 f94, %55, %63;\n\t"
    "sub.f32 f95, %53, %61;\n\t"
    "sub.f32 f96, %55, %63;\n\t"
    "add.f32 f97, %56, %59;\n\t"
    "add.f32 f98, %58, %60;\n\t"
    "sub.f32 f99, %56, %59;\n\t"
    "sub.f32 f100, %58, %60;\n\t"
    "add.f32 f101, %35, f69;\n\t"
    "add.f32 f102, %36, f70;\n\t"
    "add.f32 f103, f101, f73;\n\t"
    "add.f32 f104, f102, f74;\n\t"
    "add.f32 f105, f103, f77;\n\t"
    "add.f32 f106, f104, f78;\n\t"
    "add.f32 f107, f105, f81;\n\t"
    "add.f32 f108, f106, f82;\n\t"
    "add.f32 f109, f107, f85;\n\t"
    "add.f32 f110, f108, f86;\n\t"
    "add.f32 f111, f109, f89;\n\t"
    "add.f32 f112, f110, f90;\n\t"
    "add.f32 f113, f111, f93;\n\t"
    "add.f32 f114, f112, f94;\n\t"
    "fma.rn.f32 f115, f69, 0f3F6EB680, %35;\n\t"
    "fma.rn.f32 f116, f72, 0fBEB8F4AB, 0f00000000;\n\t"
    "fma.rn.f32 f117, f70, 0f3F6EB680, %36;\n\t"
    "fma.rn.f32 f118, f71, 0fBEB8F4AB, 0f00000000;\n\t"
    "fma.rn.f32 f119, f73, 0f3F3D2FB0, f115;\n\t"
    "fma.rn.f32 f120, f76, 0fBF2C7751, f116;\n\t"
    "fma.rn.f32 f121, f74, 0f3F3D2FB0, f117;\n\t"
    "fma.rn.f32 f122, f75, 0fBF2C7751, f118;\n\t"
    "fma.rn.f32 f123, f77, 0f3EE437D1, f119;\n\t"
    "fma.rn.f32 f124, f80, 0fBF65296C, f120;\n\t"
    "fma.rn.f32 f125, f78, 0f3EE437D1, f121;\n\t"
    "fma.rn.f32 f126, f79, 0fBF65296C, f122;\n\t"
    "fma.rn.f32 f127, f81, 0f3DBCF732, f123;\n\t"
    "fma.rn.f32 f128, f84, 0fBF7EE86F, f124;\n\t"
    "fma.rn.f32 f129, f82, 0f3DBCF732, f125;\n\t"
    "fma.rn.f32 f130, f83, 0fBF7EE86F, f126;\n\t"
    "fma.rn.f32 f131, f85, 0fBE8C1D8E, f127;\n\t"
    "fma.rn.f32 f132, f88, 0fBF763A35, f128;\n\t"
    "fma.rn.f32 f133, f86, 0fBE8C1D8E, f129;\n\t"
    "fma.rn.f32 f134, f87, 0fBF763A35, f130;\n\t"
    "fma.rn.f32 f135, f89, 0fBF1A4643, f131;\n\t"
    "fma.rn.f32 f136, f92, 0fBF4C4ADB, f132;\n\t"
    "fma.rn.f32 f137, f90, 0fBF1A4643, f133;\n\t"
    "fma.rn.f32 f138, f91, 0fBF4C4ADB, f134;\n\t"
    "fma.rn.f32 f139, f93, 0fBF59A7D5, f135;\n\t"
    "fma.rn.f32 f140, f96, 0fBF06C442, f136;\n\t"
    "fma.rn.f32 f141, f94, 0fBF59A7D5, f137;\n\t"
    "fma.rn.f32 f142, f95, 0fBF06C442, f138;\n\t"
    "fma.rn.f32 f143, f97, 0fBF7BA420, f139;\n\t"
    "fma.rn.f32 f144, f100, 0fBE3C28D5, f140;\n\t"
    "fma.rn.f32 f145, f98, 0fBF7BA420, f141;\n\t"
    "fma.rn.f32 f146, f99, 0fBE3C28D5, f142;\n\t"
    "fma.rn.f32 f147, f69, 0f3F3D2FB0, %35;\n\t"
    "fma.rn.f32 f148, f72, 0fBF2C7751, 0f00000000;\n\t"
    "fma.rn.f32 f149, f70, 0f3F3D2FB0, %36;\n\t"
    "fma.rn.f32 f150, f71, 0fBF2C7751, 0f00000000;\n\t"
    "fma.rn.f32 f151, f73, 0f3DBCF732, f147;\n\t"
    "fma.rn.f32 f152, f76, 0fBF7EE86F, f148;\n\t"
    "fma.rn.f32 f153, f74, 0f3DBCF732, f149;\n\t"
    "fma.rn.f32 f154, f75, 0fBF7EE86F, f150;\n\t"
    "fma.rn.f32 f155, f77, 0fBF1A4643, f151;\n\t"
    "fma.rn.f32 f156, f80, 0fBF4C4ADB, f152;\n\t"
    "fma.rn.f32 f157, f78, 0fBF1A4643, f153;\n\t"
    "fma.rn.f32 f158, f79, 0fBF4C4ADB, f154;\n\t"
    "fma.rn.f32 f159, f81, 0fBF7BA420, f155;\n\t"
    "fma.rn.f32 f160, f84, 0fBE3C28D5, f156;\n\t"
    "fma.rn.f32 f161, f82, 0fBF7BA420, f157;\n\t"
    "fma.rn.f32 f162, f83, 0fBE3C28D5, f158;\n\t"
    "fma.rn.f32 f163, f85, 0fBF59A7D5, f159;\n\t"
    "fma.rn.f32 f164, f88, 0f3F06C442, f160;\n\t"
    "fma.rn.f32 f165, f86, 0fBF59A7D5, f161;\n\t"
    "fma.rn.f32 f166, f87, 0f3F06C442, f162;\n\t"
    "fma.rn.f32 f167, f89, 0fBE8C1D8E, f163;\n\t"
    "fma.rn.f32 f168, f92, 0f3F763A35, f164;\n\t"
    "fma.rn.f32 f169, f90, 0fBE8C1D8E, f165;\n\t"
    "fma.rn.f32 f170, f91, 0f3F763A35, f166;\n\t"
    "fma.rn.f32 f171, f93, 0f3EE437D1, f167;\n\t"
    "fma.rn.f32 f172, f96, 0f3F65296C, f168;\n\t"
    "fma.rn.f32 f173, f94, 0f3EE437D1, f169;\n\t"
    "fma.rn.f32 f174, f95, 0f3F65296C, f170;\n\t"
    "fma.rn.f32 f175, f97, 0f3F6EB680, f171;\n\t"
    "fma.rn.f32 f176, f100, 0f3EB8F4AB, f172;\n\t"
    "fma.rn.f32 f177, f98, 0f3F6EB680, f173;\n\t"
    "fma.rn.f32 f178, f99, 0f3EB8F4AB, f174;\n\t"
    "fma.rn.f32 f179, f69, 0f3EE437D1, %35;\n\t"
    "fma.rn.f32 f180, f72, 0fBF65296C, 0f00000000;\n\t"
    "fma.rn.f32 f181, f70, 0f3EE437D1, %36;\n\t"
    "fma.rn.f32 f182, f71, 0fBF65296C, 0f00000000;\n\t"
    "fma.rn.f32 f183, f73, 0fBF1A4643, f179;\n\t"
    "fma.rn.f32 f184, f76, 0fBF4C4ADB, f180;\n\t"
    "fma.rn.f32 f185, f74, 0fBF1A4643, f181;\n\t"
    "fma.rn.f32 f186, f75, 0fBF4C4ADB, f182;\n\t"
    "fma.rn.f32 f187, f77, 0fBF7BA420, f183;\n\t"
    "fma.rn.f32 f188, f80, 0f3E3C28D5, f184;\n\t"
    "fma.rn.f32 f189, f78, 0fBF7BA420, f185;\n\t"
    "fma.rn.f32 f190, f79, 0f3E3C28D5, f186;\n\t"
    "fma.rn.f32 f191, f81, 0fBE8C1D8E, f187;\n\t"
    "fma.rn.f32 f192, f84, 0f3F763A35, f188;\n\t"
    "fma.rn.f32 f193, f82, 0fBE8C1D8E, f189;\n\t"
    "fma.rn.f32 f194, f83, 0f3F763A35, f190;\n\t"
    "fma.rn.f32 f195, f85, 0f3F3D2FB0, f191;\n\t"
    "fma.rn.f32 f196, f88, 0f3F2C7751, f192;\n\t"
    "fma.rn.f32 f197, f86, 0f3F3D2FB0, f193;\n\t"
    "fma.rn.f32 f198, f87, 0f3F2C7751, f194;\n\t"
    "fma.rn.f32 f199, f89, 0f3F6EB680, f195;\n\t"
    "fma.rn.f32 f200, f92, 0fBEB8F4AB, f196;\n\t"
    "fma.rn.f32 f201, f90, 0f3F6EB680, f197;\n\t"
    "fma.rn.f32 f202, f91, 0fBEB8F4AB, f198;\n\t"
    "fma.rn.f32 f203, f93, 0f3DBCF732, f199;\n\t"
    "fma.rn.f32 f204, f96, 0fBF7EE86F, f200;\n\t"
    "fma.rn.f32 f205, f94, 0f3DBCF732, f201;\n\t"
    "fma.rn.f32 f206, f95, 0fBF7EE86F, f202;\n\t"
    "fma.rn.f32 f207, f97, 0fBF59A7D5, f203;\n\t"
    "fma.rn.f32 f208, f100, 0fBF06C442, f204;\n\t"
    "fma.rn.f32 f209, f98, 0fBF59A7D5, f205;\n\t"
    "fma.rn.f32 f210, f99, 0fBF06C442, f206;\n\t"
    "fma.rn.f32 f211, f69, 0f3DBCF732, %35;\n\t"
    "fma.rn.f32 f212, f72, 0fBF7EE86F, 0f00000000;\n\t"
    "fma.rn.f32 f213, f70, 0f3DBCF732, %36;\n\t"
    "fma.rn.f32 f214, f71, 0fBF7EE86F, 0f00000000;\n\t"
    "fma.rn.f32 f215, f73, 0fBF7BA420, f211;\n\t"
    "fma.rn.f32 f216, f76, 0fBE3C28D5, f212;\n\t"
    "fma.rn.f32 f217, f74, 0fBF7BA420, f213;\n\t"
    "fma.rn.f32 f218, f75, 0fBE3C28D5, f214;\n\t"
    "fma.rn.f32 f219, f77, 0fBE8C1D8E, f215;\n\t"
    "fma.rn.f32 f220, f80, 0f3F763A35, f216;\n\t"
    "fma.rn.f32 f221, f78, 0fBE8C1D8E, f217;\n\t"
    "fma.rn.f32 f222, f79, 0f3F763A35, f218;\n\t"
    "fma.rn.f32 f223, f81, 0f3F6EB680, f219;\n\t"
    "fma.rn.f32 f224, f84, 0f3EB8F4AB, f220;\n\t"
    "fma.rn.f32 f225, f82, 0f3F6EB680, f221;\n\t"
    "fma.rn.f32 f226, f83, 0f3EB8F4AB, f222;\n\t"
    "fma.rn.f32 f227, f85, 0f3EE437D1, f223;\n\t"
    "fma.rn.f32 f228, f88, 0fBF65296C, f224;\n\t"
    "fma.rn.f32 f229, f86, 0f3EE437D1, f225;\n\t"
    "fma.rn.f32 f230, f87, 0fBF65296C, f226;\n\t"
    "fma.rn.f32 f231, f89, 0fBF59A7D5, f227;\n\t"
    "fma.rn.f32 f232, f92, 0fBF06C442, f228;\n\t"
    "fma.rn.f32 f233, f90, 0fBF59A7D5, f229;\n\t"
    "fma.rn.f32 f234, f91, 0fBF06C442, f230;\n\t"
    "fma.rn.f32 f235, f93, 0fBF1A4643, f231;\n\t"
    "fma.rn.f32 f236, f96, 0f3F4C4ADB, f232;\n\t"
    "fma.rn.f32 f237, f94, 0fBF1A4643, f233;\n\t"
    "fma.rn.f32 f238, f95, 0f3F4C4ADB, f234;\n\t"
    "fma.rn.f32 f239, f97, 0f3F3D2FB0, f235;\n\t"
    "fma.rn.f32 f240, f100, 0f3F2C7751, f236;\n\t"
    "fma.rn.f32 f241, f98, 0f3F3D2FB0, f237;\n\t"
    "fma.rn.f32 f242, f99, 0f3F2C7751, f238;\n\t"
    "fma.rn.f32 f243, f69, 0fBE8C1D8E, %35;\n\t"
    "fma.rn.f32 f244, f72, 0fBF763A35, 0f00000000;\n\t"
    "fma.rn.f32 f245, f70, 0fBE8C1D8E, %36;\n\t"
    "fma.rn.f32 f246, f71, 0fBF763A35, 0f00000000;\n\t"
    "fma.rn.f32 f247, f73, 0fBF59A7D5, f243;\n\t"
    "fma.rn.f32 f248, f76, 0f3F06C442, f244;\n\t"
    "fma.rn.f32 f249, f74, 0fBF59A7D5, f245;\n\t"
    "fma.rn.f32 f250, f75, 0f3F06C442, f246;\n\t"
    "fma.rn.f32 f251, f77, 0f3F3D2FB0, f247;\n\t"
    "fma.rn.f32 f252, f80, 0f3F2C7751, f248;\n\t"
    "fma.rn.f32 f253, f78, 0f3F3D2FB0, f249;\n\t"
    "fma.rn.f32 f254, f79, 0f3F2C7751, f250;\n\t"
    "fma.rn.f32 f255, f81, 0f3EE437D1, f251;\n\t"
    "fma.rn.f32 f256, f84, 0fBF65296C, f252;\n\t"
    "fma.rn.f32 f257, f82, 0f3EE437D1, f253;\n\t"
    "fma.rn.f32 f258, f83, 0fBF65296C, f254;\n\t"
    "fma.rn.f32 f259, f85, 0fBF7BA420, f255;\n\t"
    "fma.rn.f32 f260, f88, 0fBE3C28D5, f256;\n\t"
    "fma.rn.f32 f261, f86, 0fBF7BA420, f257;\n\t"
    "fma.rn.f32 f262, f87, 0fBE3C28D5, f258;\n\t"
    "fma.rn.f32 f263, f89, 0f3DBCF732, f259;\n\t"
    "fma.rn.f32 f264, f92, 0f3F7EE86F, f260;\n\t"
    "fma.rn.f32 f265, f90, 0f3DBCF732, f261;\n\t"
    "fma.rn.f32 f266, f91, 0f3F7EE86F, f262;\n\t"
    "fma.rn.f32 f267, f93, 0f3F6EB680, f263;\n\t"
    "fma.rn.f32 f268, f96, 0fBEB8F4AB, f264;\n\t"
    "fma.rn.f32 f269, f94, 0f3F6EB680, f265;\n\t"
    "fma.rn.f32 f270, f95, 0fBEB8F4AB, f266;\n\t"
    "fma.rn.f32 f271, f97, 0fBF1A4643, f267;\n\t"
    "fma.rn.f32 f272, f100, 0fBF4C4ADB, f268;\n\t"
    "fma.rn.f32 f273, f98, 0fBF1A4643, f269;\n\t"
    "fma.rn.f32 f274, f99, 0fBF4C4ADB, f270;\n\t"
    "fma.rn.f32 f275, f69, 0fBF1A4643, %35;\n\t"
    "fma.rn.f32 f276, f72, 0fBF4C4ADB, 0f00000000;\n\t"
    "fma.rn.f32 f277, f70, 0fBF1A4643, %36;\n\t"
    "fma.rn.f32 f278, f71, 0fBF4C4ADB, 0f00000000;\n\t"
    "fma.rn.f32 f279, f73, 0fBE8C1D8E, f275;\n\t"
    "fma.rn.f32 f280, f76, 0f3F763A35, f276;\n\t"
    "fma.rn.f32 f281, f74, 0fBE8C1D8E, f277;\n\t"
    "fma.rn.f32 f282, f75, 0f3F763A35, f278;\n\t"
    "fma.rn.f32 f283, f77, 0f3F6EB680, f279;\n\t"
    "fma.rn.f32 f284, f80, 0fBEB8F4AB, f280;\n\t"
    "fma.rn.f32 f285, f78, 0f3F6EB680, f281;\n\t"
    "fma.rn.f32 f286, f79, 0fBEB8F4AB, f282;\n\t"
    "fma.rn.f32 f287, f81, 0fBF59A7D5, f283;\n\t"
    "fma.rn.f32 f288, f84, 0fBF06C442, f284;\n\t"
    "fma.rn.f32 f289, f82, 0fBF59A7D5, f285;\n\t"
    "fma.rn.f32 f290, f83, 0fBF06C442, f286;\n\t"
    "fma.rn.f32 f291, f85, 0f3DBCF732, f287;\n\t"
    "fma.rn.f32 f292, f88, 0f3F7EE86F, f288;\n\t"
    "fma.rn.f32 f293, f86, 0f3DBCF732, f289;\n\t"
    "fma.rn.f32 f294, f87, 0f3F7EE86F, f290;\n\t"
    "fma.rn.f32 f295, f89, 0f3F3D2FB0, f291;\n\t"
    "fma.rn.f32 f296, f92, 0fBF2C7751, f292;\n\t"
    "fma.rn.f32 f297, f90, 0f3F3D2FB0, f293;\n\t"
    "fma.rn.f32 f298, f91, 0fBF2C7751, f294;\n\t"
    "fma.rn.f32 f299, f93, 0fBF7BA420, f295;\n\t"
    "fma.rn.f32 f300, f96, 0fBE3C28D5, f296;\n\t"
    "fma.rn.f32 f301, f94, 0fBF7BA420, f297;\n\t"
    "fma.rn.f32 f302, f95, 0fBE3C28D5, f298;\n\t"
    "fma.rn.f32 f303, f97, 0f3EE437D1, f299;\n\t"
    "fma.rn.f32 f304, f100, 0f3F65296C, f300;\n\t"
    "fma.rn.f32 f305, f98, 0f3EE437D1, f301;\n\t"
    "fma.rn.f32 f306, f99, 0f3F65296C, f302;\n\t"
    "fma.rn.f32 f307, f69, 0fBF59A7D5, %35;\n\t"
    "fma.rn.f32 f308, f72, 0fBF06C442, 0f00000000;\n\t"
    "fma.rn.f32 f309, f70, 0fBF59A7D5, %36;\n\t"
    "fma.rn.f32 f310, f71, 0fBF06C442, 0f00000000;\n\t"
    "fma.rn.f32 f311, f73, 0f3EE437D1, f307;\n\t"
    "fma.rn.f32 f312, f76, 0f3F65296C, f308;\n\t"
    "fma.rn.f32 f313, f74, 0f3EE437D1, f309;\n\t"
    "fma.rn.f32 f314, f75, 0f3F65296C, f310;\n\t"
    "fma.rn.f32 f315, f77, 0f3DBCF732, f311;\n\t"
    "fma.rn.f32 f316, f80, 0fBF7EE86F, f312;\n\t"
    "fma.rn.f32 f317, f78, 0f3DBCF732, f313;\n\t"
    "fma.rn.f32 f318, f79, 0fBF7EE86F, f314;\n\t"
    "fma.rn.f32 f319, f81, 0fBF1A4643, f315;\n\t"
    "fma.rn.f32 f320, f84, 0f3F4C4ADB, f316;\n\t"
    "fma.rn.f32 f321, f82, 0fBF1A4643, f317;\n\t"
    "fma.rn.f32 f322, f83, 0f3F4C4ADB, f318;\n\t"
    "fma.rn.f32 f323, f85, 0f3F6EB680, f319;\n\t"
    "fma.rn.f32 f324, f88, 0fBEB8F4AB, f320;\n\t"
    "fma.rn.f32 f325, f86, 0f3F6EB680, f321;\n\t"
    "fma.rn.f32 f326, f87, 0fBEB8F4AB, f322;\n\t"
    "fma.rn.f32 f327, f89, 0fBF7BA420, f323;\n\t"
    "fma.rn.f32 f328, f92, 0fBE3C28D5, f324;\n\t"
    "fma.rn.f32 f329, f90, 0fBF7BA420, f325;\n\t"
    "fma.rn.f32 f330, f91, 0fBE3C28D5, f326;\n\t"
    "fma.rn.f32 f331, f93, 0f3F3D2FB0, f327;\n\t"
    "fma.rn.f32 f332, f96, 0f3F2C7751, f328;\n\t"
    "fma.rn.f32 f333, f94, 0f3F3D2FB0, f329;\n\t"
    "fma.rn.f32 f334, f95, 0f3F2C7751, f330;\n\t"
    "fma.rn.f32 f335, f97, 0fBE8C1D8E, f331;\n\t"
    "fma.rn.f32 f336, f100, 0fBF763A35, f332;\n\t"
    "fma.rn.f32 f337, f98, 0fBE8C1D8E, f333;\n\t"
    "fma.rn.f32 f338, f99, 0fBF763A35, f334;\n\t"
    "fma.rn.f32 f339, f69, 0fBF7BA420, %35;\n\t"
    "fma.rn.f32 f340, f72, 0fBE3C28D5, 0f00000000;\n\t"
    "fma.rn.f32 f341, f70, 0fBF7BA420, %36;\n\t"
    "fma.rn.f32 f342, f71, 0fBE3C28D5, 0f00000000;\n\t"
    "fma.rn.f32 f343, f73, 0f3F6EB680, f339;\n\t"
    "fma.rn.f32 f344, f76, 0f3EB8F4AB, f340;\n\t"
    "fma.rn.f32 f345, f74, 0f3F6EB680, f341;\n\t"
    "fma.rn.f32 f346, f75, 0f3EB8F4AB, f342;\n\t"
    "fma.rn.f32 f347, f77, 0fBF59A7D5, f343;\n\t"
    "fma.rn.f32 f348, f80, 0fBF06C442, f344;\n\t"
    "fma.rn.f32 f349, f78, 0fBF59A7D5, f345;\n\t"
    "fma.rn.f32 f350, f79, 0fBF06C442, f346;\n\t"
    "fma.rn.f32 f351, f81, 0f3F3D2FB0, f347;\n\t"
    "fma.rn.f32 f352, f84, 0f3F2C7751, f348;\n\t"
    "fma.rn.f32 f353, f82, 0f3F3D2FB0, f349;\n\t"
    "fma.rn.f32 f354, f83, 0f3F2C7751, f350;\n\t"
    "fma.rn.f32 f355, f85, 0fBF1A4643, f351;\n\t"
    "fma.rn.f32 f356, f88, 0fBF4C4ADB, f352;\n\t"
    "fma.rn.f32 f357, f86, 0fBF1A4643, f353;\n\t"
    "fma.rn.f32 f358, f87, 0fBF4C4ADB, f354;\n\t"
    "fma.rn.f32 f359, f89, 0f3EE437D1, f355;\n\t"
    "fma.rn.f32 f360, f92, 0f3F65296C, f356;\n\t"
    "fma.rn.f32 f361, f90, 0f3EE437D1, f357;\n\t"
    "fma.rn.f32 f362, f91, 0f3F65296C, f358;\n\t"
    "fma.rn.f32 f363, f93, 0fBE8C1D8E, f359;\n\t"
    "fma.rn.f32 f364, f96, 0fBF763A35, f360;\n\t"
    "fma.rn.f32 f365, f94, 0fBE8C1D8E, f361;\n\t"
    "fma.rn.f32 f366, f95, 0fBF763A35, f362;\n\t"
    "fma.rn.f32 f367, f97, 0f3DBCF732, f363;\n\t"
    "fma.rn.f32 f368, f100, 0f3F7EE86F, f364;\n\t"
    "fma.rn.f32 f369, f98, 0f3DBCF732, f365;\n\t"
    "fma.rn.f32 f370, f99, 0f3F7EE86F, f366;\n\t"
    "add.f32 %1, f114, f98;\n\t"
    "add.f32 %0, f113, f97;\n\t"
    "add.f32 %3, f145, f146;\n\t"
    "sub.f32 %2, f143, f144;\n\t"
    "add.f32 %5, f177, f178;\n\t"
    "sub.f32 %4, f175, f176;\n\t"
    "add.f32 %7, f209, f210;\n\t"
    "sub.f32 %6, f207, f208;\n\t"
    "add.f32 %9, f241, f242;\n\t"
    "sub.f32 %8, f239, f240;\n\t"
    "add.f32 %11, f273, f274;\n\t"
    "sub.f32 %10, f271, f272;\n\t"
    "add.f32 %13, f305, f306;\n\t"
    "sub.f32 %12, f303, f304;\n\t"
    "add.f32 %15, f337, f338;\n\t"
    "sub.f32 %14, f335, f336;\n\t"
    "add.f32 %17, f369, f370;\n\t"
    "sub.f32 %16, f367, f368;\n\t"
    "sub.f32 %19, f369, f370;\n\t"
    "add.f32 %18, f367, f368;\n\t"
    "sub.f32 %21, f337, f338;\n\t"
    "add.f32 %20, f335, f336;\n\t"
    "sub.f32 %23, f305, f306;\n\t"
    "add.f32 %22, f303, f304;\n\t"
    "sub.f32 %25, f273, f274;\n\t"
    "add.f32 %24, f271, f272;\n\t"
    "sub.f32 %27, f241, f242;\n\t"
    "add.f32 %26, f239, f240;\n\t"
    "sub.f32 %29, f209, f210;\n\t"
    "add.f32 %28, f207, f208;\n\t"
    "sub.f32 %31, f177, f178;\n\t"
    "add.f32 %30, f175, f176;\n\t"
    "sub.f32 %33, f145, f146;\n\t"
    "add.f32 %32, f143, f144;\n\t"
    "}"
     : "=f"(rmem[0].x), "=f"(rmem[0].y), "=f"(rmem[1].x), "=f"(rmem[1].y), "=f"(rmem[2].x), "=f"(rmem[2].y), "=f"(rmem[3].x), "=f"(rmem[3].y), "=f"(rmem[4].x), "=f"(rmem[4].y), "=f"(rmem[5].x), "=f"(rmem[5].y), "=f"(rmem[6].x), "=f"(rmem[6].y), "=f"(rmem[7].x), "=f"(rmem[7].y), "=f"(rmem[8].x), "=f"(rmem[8].y), "=f"(rmem[9].x), "=f"(rmem[9].y), "=f"(rmem[10].x), "=f"(rmem[10].y), "=f"(rmem[11].x), "=f"(rmem[11].y), "=f"(rmem[12].x), "=f"(rmem[12].y), "=f"(rmem[13].x), "=f"(rmem[13].y), "=f"(rmem[14].x), "=f"(rmem[14].y), "=f"(rmem[15].x), "=f"(rmem[15].y), "=f"(rmem[16].x), "=f"(rmem[16].y): "l"(smem), "f"(rmem[0].x), "f"(rmem[0].y), "f"(rmem[1].x), "f"(rmem[1].y), "f"(rmem[1].y), "f"(rmem[2].x), "f"(rmem[2].y), "f"(rmem[2].y), "f"(rmem[3].x), "f"(rmem[3].y), "f"(rmem[4].x), "f"(rmem[4].y), "f"(rmem[4].y), "f"(rmem[5].x), "f"(rmem[5].y), "f"(rmem[5].y), "f"(rmem[6].x), "f"(rmem[6].y), "f"(rmem[7].x), "f"(rmem[7].y), "f"(rmem[7].y), "f"(rmem[8].x), "f"(rmem[8].y), "f"(rmem[8].y), "f"(rmem[9].x), "f"(rmem[9].y), "f"(rmem[10].x), "f"(rmem[10].y), "f"(rmem[10].y), "f"(rmem[11].x), "f"(rmem[11].y), "f"(rmem[11].y), "f"(rmem[12].x), "f"(rmem[12].y), "f"(rmem[13].x), "f"(rmem[13].y), "f"(rmem[13].y), "f"(rmem[14].x), "f"(rmem[14].y), "f"(rmem[14].y), "f"(rmem[15].x), "f"(rmem[15].y), "f"(rmem[16].x), "f"(rmem[16].y));
};


#endif

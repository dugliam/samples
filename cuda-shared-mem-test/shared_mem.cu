// #include <cuComplex.h>
#include <cufftdx.hpp>
#include <stdio.h>

using namespace cufftdx;

int main() { 
	// base FFT for comparison
	using FFT = decltype(Size<8192>() + Precision<float>() + Type<fft_type::r2c>() 
		+ Direction<fft_direction::forward>() + FFTsPerBlock<1>() + ElementsPerThread<32>()
		+ SM<700>() + Block());

	printf("Reference memory usage (SM<700>, Size<8192>, ElementsPerThread<32>, Type<fft_type::r2c>)\n");
	printf("\t%d\n", FFT::shared_memory_size);

	// ElementsPerThread = 16 vs ElementsPerThread = 32
	using FFT1_1 = decltype(Size<8192>() + Precision<float>() + Type<fft_type::c2c>() 
		+ Direction<fft_direction::forward>() + FFTsPerBlock<1>() + ElementsPerThread<16>()
		+ SM<700>() + Block());

	// ElementsPerThread = 8 vs ElementsPerThread = 32
	using FFT1_2 = decltype(Size<8192>() + Precision<float>() + Type<fft_type::r2c>() 
		+ Direction<fft_direction::forward>() + FFTsPerBlock<1>() + ElementsPerThread<8>()
		+ SM<700>() + Block());

	printf("ElementsPerThread<x> (SM<700>, Size<8192>, Type<fft_type::r2c>)\n");
	printf("\tElementsPerThread<32>: %d\n", FFT::shared_memory_size);
	printf("\tElementsPerThread<16>: %d\n", FFT1_1::shared_memory_size);
	printf("\tElementsPerThread<8> : %d\n", FFT1_2::shared_memory_size);

	using FFT2_1 = decltype(Size<2048>() + Precision<float>() + Type<fft_type::r2c>() 
		+ Direction<fft_direction::forward>() + FFTsPerBlock<1>() + ElementsPerThread<32>()
		+ SM<700>() + Block());

	using FFT2_2 = decltype(Size<4096>() + Precision<float>() + Type<fft_type::r2c>() 
		+ Direction<fft_direction::forward>() + FFTsPerBlock<1>() + ElementsPerThread<32>()
		+ SM<700>() + Block());

	using FFT2_3 = decltype(Size<16384>() + Precision<float>() + Type<fft_type::r2c>() 
		+ Direction<fft_direction::forward>() + FFTsPerBlock<1>() + ElementsPerThread<32>()
		+ SM<700>() + Block());


	printf("Size<x> (SM<700>, ElementsPerThread<32>, Type<fft_type::r2c>\n");
	printf("\tSize<2048> : %d\n", FFT2_1::shared_memory_size);
	printf("\tSize<4096> : %d\n", FFT2_2::shared_memory_size);
	printf("\tSize<8192> : %d\n", FFT::shared_memory_size);
	printf("\tSize<16384>: %d\n", FFT2_3::shared_memory_size);

	using FFT3_1 = decltype(Size<2048>() + Precision<float>() + Type<fft_type::r2c>() 
		+ Direction<fft_direction::forward>() + FFTsPerBlock<1>() + ElementsPerThread<32>()
		+ SM<800>() + Block());

	using FFT3_2 = decltype(Size<4096>() + Precision<float>() + Type<fft_type::r2c>() 
		+ Direction<fft_direction::forward>() + FFTsPerBlock<1>() + ElementsPerThread<32>()
		+ SM<800>() + Block());

	using FFT3_3 = decltype(Size<8192>() + Precision<float>() + Type<fft_type::r2c>() 
		+ Direction<fft_direction::forward>() + FFTsPerBlock<1>() + ElementsPerThread<32>()
		+ SM<800>() + Block());

	using FFT3_4 = decltype(Size<16384>() + Precision<float>() + Type<fft_type::r2c>() 
		+ Direction<fft_direction::forward>() + FFTsPerBlock<1>() + ElementsPerThread<32>()
		+ SM<800>() + Block());

	using FFT3_5 = decltype(Size<32768>() + Precision<float>() + Type<fft_type::r2c>() 
		+ Direction<fft_direction::forward>() + FFTsPerBlock<1>() + ElementsPerThread<32>()
		+ SM<800>() + Block());

	printf("Size<x> (SM<800>, ElementsPerThread<32>, Type<fft_type::r2c>\n");
	printf("\tSize<2048> : %d\n", FFT3_1::shared_memory_size);
	printf("\tSize<4096> : %d\n", FFT3_2::shared_memory_size);
	printf("\tSize<8192> : %d\n", FFT3_3::shared_memory_size);
	printf("\tSize<16384>: %d\n", FFT3_4::shared_memory_size);
	printf("\tSize<32768>: %d\n", FFT3_5::shared_memory_size);
	
	return 0;
}


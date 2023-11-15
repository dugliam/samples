// Copyright (c) 2019, NVIDIA CORPORATION.  All rights reserved.
//
// NVIDIA CORPORATION and its licensors retain all intellectual property
// and proprietary rights in and to this software, related documentation
// and any modifications thereto.  Any use, reproduction, disclosure or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA CORPORATION is strictly prohibited.

#ifndef CUFFTDX_DATABASE_DETAIL_BLOCK_FFT_HPP
#define CUFFTDX_DATABASE_DETAIL_BLOCK_FFT_HPP

#include "cuda_fp16.h"

#include "../../operators.hpp"
#include "../../traits/detail/make_complex_type.hpp"
#include "type_list.hpp"

namespace cufftdx {
    namespace database {
        namespace detail {
            template<unsigned int Size /* FFT size */,
                     class Precision,
                     fft_type      Type,
                     fft_direction Direction,
                     unsigned int  Architecture>
            struct block_fft_record {
                static constexpr bool defined = false;
            };

            // Forward SM61 records to SM80 records
            template<unsigned int Size /* FFT size */, class Precision, fft_type Type, fft_direction Direction>
            struct block_fft_record<Size, Precision, Type, Direction, 600>:
                public block_fft_record<Size, Precision, Type, Direction, 800> {};

            // Forward SM61 records to SM80 records
            template<unsigned int Size /* FFT size */, class Precision, fft_type Type, fft_direction Direction>
            struct block_fft_record<Size, Precision, Type, Direction, 610>:
                public block_fft_record<Size, Precision, Type, Direction, 800> {};

            // Forward SM61 records to SM80 records
            template<unsigned int Size /* FFT size */, class Precision, fft_type Type, fft_direction Direction>
            struct block_fft_record<Size, Precision, Type, Direction, 620>:
                public block_fft_record<Size, Precision, Type, Direction, 800> {};

            // Forward SM75 records to SM80 records
            template<unsigned int Size /* FFT size */, class Precision, fft_type Type, fft_direction Direction>
            struct block_fft_record<Size, Precision, Type, Direction, 700>:
                public block_fft_record<Size, Precision, Type, Direction, 800> {};

            // Forward SM75 records to SM80 records
            template<unsigned int Size /* FFT size */, class Precision, fft_type Type, fft_direction Direction>
            struct block_fft_record<Size, Precision, Type, Direction, 750>:
                public block_fft_record<Size, Precision, Type, Direction, 800> {};

            // Forward R2C records to C2C records
            template<unsigned int Size /* FFT size */, class Precision>
            struct block_fft_record<Size, Precision, fft_type::r2c, fft_direction::forward, 800>:
                public block_fft_record<Size, Precision, fft_type::c2c, fft_direction::forward, 800> {};

            // Forward C2R records to C2C records
            template<unsigned int Size /* FFT size */, class Precision>
            struct block_fft_record<Size, Precision, fft_type::c2r, fft_direction::inverse, 800>:
                public block_fft_record<Size, Precision, fft_type::c2c, fft_direction::inverse, 800> {};

            template<unsigned int ElementsPerThread /* Number of elements processed per thread */,
                     unsigned int StorageSize /* Storage size, number of elements in input/output array */,
                     unsigned int ThreadsPerFFT,
                     unsigned int FFTsPerBlock,
                     unsigned int SharedMemorySize /* Size of shared mem. required by one FFT */,
                     unsigned int FunctionId>
            struct block_fft_implementation {
                static constexpr unsigned int elements_per_thread = ElementsPerThread;
                static constexpr unsigned int storage_size        = StorageSize;
                static constexpr unsigned int threads_per_fft     = ThreadsPerFFT;
                static constexpr unsigned int ffts_per_block      = FFTsPerBlock;
                static constexpr unsigned int shared_memory_size  = SharedMemorySize;
                static constexpr unsigned int function_id         = FunctionId;
            };

            // Selects block_fft_implementation from type_list based on ElementsPerThread,
            // if there is no such implementation in list search_by_ept::type is set to void.
            template<unsigned int ElementsPerThread, class ImplementationList>
            struct search_by_ept;

            template<unsigned int ElementsPerThread, class Implementation>
            struct search_by_ept<ElementsPerThread, type_list<Implementation>> {
                using type = typename CUFFTDX_STD::
                    conditional<(Implementation::elements_per_thread == ElementsPerThread), Implementation, void>::type;
            };

            template<unsigned int ElementsPerThread, class Head, class... Tail>
            struct search_by_ept<ElementsPerThread, type_list<Head, Tail...>> {
                using type = typename CUFFTDX_STD::conditional<
                    (Head::elements_per_thread == ElementsPerThread),
                    Head,
                    typename search_by_ept<ElementsPerThread, type_list<Tail...>>::type>::type;
            };

            // TODO: rename to block_fft
            template<unsigned int FunctionID, typename T, unsigned int FFTsPerBlock>
            __device__ void cufftdx_private_function(typename cufftdx::detail::make_complex_type<T>::cufftdx_type* rmem,
                                                     void* smem);
        } // namespace detail
    }     // namespace database
} // namespace cufftdx

#endif // CUFFTDX_DATABASE_DETAIL_BLOCK_FFT_HPP

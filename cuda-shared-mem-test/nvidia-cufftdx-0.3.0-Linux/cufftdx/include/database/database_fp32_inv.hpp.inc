//Copyright (c) 2019, NVIDIA CORPORATION.  All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


template<> struct block_fft_record<13, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,    1,     1,     0,   208>
    >;
};

template<> struct block_fft_record<14, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,    1,     1,     0,   209>
    >;
};

template<> struct block_fft_record<15, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,    1,     1,     0,   210>
    >;
};

template<> struct block_fft_record<17, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,    1,     1,     0,   211>
    >;
};

template<> struct block_fft_record<18, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,    1,     1,     0,   212>
    >;
};

template<> struct block_fft_record<19, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,    1,     1,     0,   213>
    >;
};

template<> struct block_fft_record<20, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,    1,     1,     0,   214>
    >;
};

template<> struct block_fft_record<21, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,    1,     1,     0,   215>
    >;
};

template<> struct block_fft_record<22, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,    1,     1,     0,   216>
    >;
};

template<> struct block_fft_record<23, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,    1,     1,     0,   217>
    >;
};

template<> struct block_fft_record<24, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,    1,     1,     0,   218>
    >;
};

template<> struct block_fft_record<26, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,    1,     1,     0,   219>
    >;
};

template<> struct block_fft_record<28, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,    1,     1,     0,   220>
    >;
};

template<> struct block_fft_record<29, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,    1,     1,     0,   221>
    >;
};

template<> struct block_fft_record<30, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,    1,     1,     0,   222>
    >;
};

template<> struct block_fft_record<31, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,    1,     1,     0,   223>
    >;
};

template<> struct block_fft_record<11, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,    1,     4,     0,   224>
    >;
};

template<> struct block_fft_record<121, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,    32,   484,   225>,
        block_fft_implementation<11,   11,   11,    32,   968,   226>
    >;
};

template<> struct block_fft_record<1331, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,  121,     1, 10648,   227>,
        block_fft_implementation<11,   11,  121,     1,  5324,   228>
    >;
};

template<> struct block_fft_record<2, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,    1,    64,     0,   229>
    >;
};

template<> struct block_fft_record<4, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 4,    4,    1,   192,     0,   230>,
        block_fft_implementation< 2,    2,    2,    96,    32,   231>,
        block_fft_implementation< 2,    2,    2,   192,    16,   232>
    >;
};

template<> struct block_fft_record<8, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    1,   128,     0,   233>,
        block_fft_implementation< 4,    4,    2,   192,    32,   234>,
        block_fft_implementation< 4,    4,    2,   192,    64,   235>,
        block_fft_implementation< 2,    2,    4,    93,    64,   236>,
        block_fft_implementation< 2,    2,    4,    96,    32,   237>
    >;
};

template<> struct block_fft_record<16, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    1,    32,     0,   238>,
        block_fft_implementation< 4,    4,    4,    96,    64,   239>,
        block_fft_implementation< 4,    4,    4,    64,   128,   240>,
        block_fft_implementation< 8,    8,    2,     3,   128,   241>,
        block_fft_implementation< 8,    8,    2,   128,    64,   242>,
        block_fft_implementation< 2,    2,    8,    93,    64,   243>,
        block_fft_implementation< 2,    2,    8,    48,   128,   244>
    >;
};

template<> struct block_fft_record<32, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,    1,    64,     0,   245>,
        block_fft_implementation< 8,    8,    4,    48,   256,   246>,
        block_fft_implementation< 8,    8,    4,    64,   128,   247>,
        block_fft_implementation< 4,    4,    8,    32,   256,   248>,
        block_fft_implementation< 2,    2,   16,    48,   128,   249>,
        block_fft_implementation< 2,    2,   16,    24,   256,   250>,
        block_fft_implementation< 4,    4,    8,    32,   128,   251>,
        block_fft_implementation<16,   16,    2,    64,   256,   252>,
        block_fft_implementation<16,   16,    2,     3,   128,   253>
    >;
};

template<> struct block_fft_record<64, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    16,   512,   254>,
        block_fft_implementation< 8,    8,    8,    16,   256,   255>,
        block_fft_implementation< 4,    4,   16,    12,   512,   256>,
        block_fft_implementation< 4,    4,   16,    16,   256,   257>,
        block_fft_implementation<16,   16,    4,    32,   256,   258>,
        block_fft_implementation<16,   16,    4,    32,   512,   259>,
        block_fft_implementation< 2,    2,   32,     2,   512,   260>,
        block_fft_implementation<32,   32,    2,    32,   512,   261>,
        block_fft_implementation< 2,    2,   32,     8,   256,   262>,
        block_fft_implementation<32,   32,    2,     2,   256,   263>
    >;
};

template<> struct block_fft_record<128, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    8,     8,   512,   264>,
        block_fft_implementation< 8,    8,   16,     8,  1024,   265>,
        block_fft_implementation< 8,    8,   16,     8,   512,   266>,
        block_fft_implementation<16,   16,    8,     8,  1024,   267>,
        block_fft_implementation< 4,    4,   32,     5,  1024,   268>,
        block_fft_implementation< 4,    4,   32,     8,   512,   269>,
        block_fft_implementation<32,   32,    4,     8,  1024,   270>,
        block_fft_implementation<32,   32,    4,    16,   512,   271>,
        block_fft_implementation< 2,    2,   64,    12,  1024,   272>,
        block_fft_implementation< 2,    2,   64,     8,   512,   273>
    >;
};

template<> struct block_fft_record<256, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,     2,  1024,   274>,
        block_fft_implementation< 8,    8,   32,     2,  2048,   275>,
        block_fft_implementation< 8,    8,   32,     4,  1024,   276>,
        block_fft_implementation<16,   16,   16,     2,  2048,   277>,
        block_fft_implementation<32,   32,    8,     4,  2048,   278>,
        block_fft_implementation< 4,    4,   64,     2,  2048,   279>,
        block_fft_implementation< 4,    4,   64,     4,  1024,   280>,
        block_fft_implementation<32,   32,    8,     8,  1024,   281>,
        block_fft_implementation< 2,    2,  128,     2,  2048,   282>,
        block_fft_implementation< 2,    2,  128,     4,  1024,   283>
    >;
};

template<> struct block_fft_record<512, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,   64,     1,  4096,   284>,
        block_fft_implementation< 8,    8,   64,     2,  2048,   285>,
        block_fft_implementation<16,   16,   32,     2,  2048,   286>,
        block_fft_implementation<16,   16,   32,     2,  4096,   287>,
        block_fft_implementation< 4,    4,  128,     1,  4096,   288>,
        block_fft_implementation< 4,    4,  128,     1,  2048,   289>,
        block_fft_implementation< 2,    2,  256,     3,  4096,   290>,
        block_fft_implementation< 2,    2,  256,     1,  2048,   291>,
        block_fft_implementation<32,   32,   16,     4,  2048,   292>,
        block_fft_implementation<32,   32,   16,     4,  4096,   293>
    >;
};

template<> struct block_fft_record<1024, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   64,     1,  4096,   294>,
        block_fft_implementation< 8,    8,  128,     1,  8192,   295>,
        block_fft_implementation< 8,    8,  128,     1,  4096,   296>,
        block_fft_implementation<32,   32,   32,     2,  4096,   297>,
        block_fft_implementation<32,   32,   32,     2,  8192,   298>,
        block_fft_implementation<16,   16,   64,     1,  8192,   299>,
        block_fft_implementation< 4,    4,  256,     1,  8192,   300>,
        block_fft_implementation< 4,    4,  256,     1,  4096,   301>,
        block_fft_implementation< 2,    2,  512,     1,  8192,   302>,
        block_fft_implementation< 2,    2,  512,     1,  4096,   303>
    >;
};

template<> struct block_fft_record<2048, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  128,     1,  8192,   304>,
        block_fft_implementation< 8,    8,  256,     1, 16384,   305>,
        block_fft_implementation< 8,    8,  256,     1,  8192,   306>,
        block_fft_implementation<16,   16,  128,     1, 16384,   307>,
        block_fft_implementation<32,   32,   64,     1, 16384,   308>,
        block_fft_implementation<32,   32,   64,     1,  8192,   309>,
        block_fft_implementation< 4,    4,  512,     1, 16384,   310>,
        block_fft_implementation< 4,    4,  512,     1,  8192,   311>,
        block_fft_implementation< 2,    2, 1024,     1, 16384,   312>,
        block_fft_implementation< 2,    2, 1024,     1,  8192,   313>
    >;
};

template<> struct block_fft_record<4096, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  256,     1, 16384,   314>,
        block_fft_implementation< 8,    8,  512,     1, 16384,   315>,
        block_fft_implementation< 8,    8,  512,     1, 32768,   316>,
        block_fft_implementation<32,   32,  128,     1, 16384,   317>,
        block_fft_implementation<32,   32,  128,     1, 32768,   318>,
        block_fft_implementation<16,   16,  256,     1, 32768,   319>,
        block_fft_implementation< 4,    4, 1024,     1, 32768,   320>,
        block_fft_implementation< 4,    4, 1024,     1, 16384,   321>
    >;
};

template<> struct block_fft_record<8192, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  512,     1, 32768,   322>,
        block_fft_implementation< 8,    8, 1024,     1, 32768,   323>,
        block_fft_implementation< 8,    8, 1024,     1, 65536,   324>,
        block_fft_implementation<32,   32,  256,     1, 32768,   325>,
        block_fft_implementation<32,   32,  256,     1, 65536,   326>,
        block_fft_implementation<16,   16,  512,     1, 65536,   327>
    >;
};

template<> struct block_fft_record<16384, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,  512,     1, 65536,   328>,
        block_fft_implementation<16,   16, 1024,     1, 65536,   329>,
        block_fft_implementation<32,   32,  512,     1, 131072,   330>,
        block_fft_implementation<16,   16, 1024,     1, 131072,   331>
    >;
};

template<> struct block_fft_record<32768, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32, 1024,     1, 131072,   332>
    >;
};

template<> struct block_fft_record<3, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 3,    3,    1,    64,     0,   333>
    >;
};

template<> struct block_fft_record<9, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    1,    32,     0,   334>,
        block_fft_implementation< 3,    3,    3,    64,    72,   335>,
        block_fft_implementation< 3,    3,    3,   128,    36,   336>
    >;
};

template<> struct block_fft_record<27, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    1,    64,     0,   337>,
        block_fft_implementation< 9,    9,    3,    64,   216,   338>,
        block_fft_implementation< 9,    9,    3,    64,   108,   339>,
        block_fft_implementation< 3,    3,    9,    32,   216,   340>,
        block_fft_implementation< 3,    3,    9,    32,   108,   341>
    >;
};

template<> struct block_fft_record<81, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    16,   648,   342>,
        block_fft_implementation< 9,    9,    9,    16,   324,   343>,
        block_fft_implementation<27,   27,    3,    16,   648,   344>,
        block_fft_implementation<27,   27,    3,    16,   324,   345>,
        block_fft_implementation< 3,    3,   27,     8,   648,   346>,
        block_fft_implementation< 3,    3,   27,    12,   324,   347>
    >;
};

template<> struct block_fft_record<243, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    9,     3,  1944,   348>,
        block_fft_implementation<27,   27,    9,     3,   972,   349>,
        block_fft_implementation< 9,    9,   27,     4,  1944,   350>,
        block_fft_implementation< 9,    9,   27,     4,   972,   351>,
        block_fft_implementation< 3,    3,   81,     8,  1944,   352>,
        block_fft_implementation< 3,    3,   81,     3,   972,   353>
    >;
};

template<> struct block_fft_record<729, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,     2,  5832,   354>,
        block_fft_implementation< 9,    9,   81,     3,  5832,   355>,
        block_fft_implementation<27,   27,   27,     2,  2916,   356>,
        block_fft_implementation< 9,    9,   81,     3,  2916,   357>,
        block_fft_implementation< 3,    3,  243,     1,  5832,   358>,
        block_fft_implementation< 3,    3,  243,     1,  2916,   359>
    >;
};

template<> struct block_fft_record<2187, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,  243,     1, 17496,   360>,
        block_fft_implementation< 9,    9,  243,     1,  8748,   361>,
        block_fft_implementation<27,   27,   81,     1, 17496,   362>,
        block_fft_implementation<27,   27,   81,     1,  8748,   363>,
        block_fft_implementation< 3,    3,  729,     1, 17496,   364>,
        block_fft_implementation< 3,    3,  729,     1,  8748,   365>
    >;
};

template<> struct block_fft_record<6561, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,  729,     1, 26244,   366>,
        block_fft_implementation< 9,    9,  729,     1, 52488,   367>,
        block_fft_implementation<27,   27,  243,     1, 26244,   368>,
        block_fft_implementation<27,   27,  243,     1, 52488,   369>
    >;
};

template<> struct block_fft_record<19683, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,  729,     1, 78732,   370>,
        block_fft_implementation<27,   27,  729,     1, 157464,   371>
    >;
};

template<> struct block_fft_record<5, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    1,   768,     0,   372>
    >;
};

template<> struct block_fft_record<25, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    1,    32,     0,   373>,
        block_fft_implementation< 5,    5,    5,    24,   200,   374>,
        block_fft_implementation< 5,    5,    5,    12,   100,   375>
    >;
};

template<> struct block_fft_record<125, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    5,    12,  1000,   376>,
        block_fft_implementation<25,   25,    5,    12,   500,   377>,
        block_fft_implementation< 5,    5,   25,     5,  1000,   378>,
        block_fft_implementation< 5,    5,   25,     5,   500,   379>
    >;
};

template<> struct block_fft_record<625, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,     5,  2500,   380>,
        block_fft_implementation<25,   25,   25,     5,  5000,   381>,
        block_fft_implementation< 5,    5,  125,     1,  5000,   382>,
        block_fft_implementation< 5,    5,  125,     1,  2500,   383>
    >;
};

template<> struct block_fft_record<3125, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,  125,     1, 12500,   384>,
        block_fft_implementation<25,   25,  125,     1, 25000,   385>,
        block_fft_implementation< 5,    5,  625,     1, 25000,   386>,
        block_fft_implementation< 5,    5,  625,     1, 12500,   387>
    >;
};

template<> struct block_fft_record<15625, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,  625,     1, 62500,   388>,
        block_fft_implementation<25,   25,  625,     1, 125000,   389>
    >;
};

template<> struct block_fft_record<7, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    1,   768,     0,   390>
    >;
};

template<> struct block_fft_record<49, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,    16,   392,   391>,
        block_fft_implementation< 7,    7,    7,    16,   196,   392>
    >;
};

template<> struct block_fft_record<343, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,   49,     5,  2744,   393>,
        block_fft_implementation< 7,    7,   49,     5,  1372,   394>
    >;
};

template<> struct block_fft_record<2401, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,  343,     1,  9604,   395>,
        block_fft_implementation< 7,    7,  343,     1, 19208,   396>
    >;
};

template<> struct block_fft_record<10, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,    1,   128,     0,   397>
    >;
};

template<> struct block_fft_record<100, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,    12,   800,   398>,
        block_fft_implementation<10,   10,   10,     3,   400,   399>
    >;
};

template<> struct block_fft_record<1000, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,  100,     5,  8000,   400>,
        block_fft_implementation<10,   10,  100,     2,  4000,   401>
    >;
};

template<> struct block_fft_record<10000, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10, 1000,     1, 40000,   402>,
        block_fft_implementation<10,   10, 1000,     1, 80000,   403>
    >;
};

template<> struct block_fft_record<12, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,    1,  1024,     0,   404>
    >;
};

template<> struct block_fft_record<144, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,     5,  1152,   405>,
        block_fft_implementation<12,   12,   12,     5,   576,   406>
    >;
};

template<> struct block_fft_record<1728, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,  144,     1, 13824,   407>,
        block_fft_implementation<12,   12,  144,     1,  6912,   408>
    >;
};

template<> struct block_fft_record<6, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    1,   768,     0,   409>
    >;
};

template<> struct block_fft_record<36, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,    64,   288,   410>,
        block_fft_implementation< 6,    6,    6,    32,   144,   411>
    >;
};

template<> struct block_fft_record<216, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,   36,     4,  1728,   412>,
        block_fft_implementation< 6,    6,   36,     8,   864,   413>
    >;
};

template<> struct block_fft_record<1296, float, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,  216,     1, 10368,   414>,
        block_fft_implementation< 6,    6,  216,     1,  5184,   415>
    >;
};

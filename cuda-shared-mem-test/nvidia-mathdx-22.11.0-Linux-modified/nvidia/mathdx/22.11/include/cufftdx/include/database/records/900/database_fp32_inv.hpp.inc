//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


template<> struct block_fft_record<13, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,    1,    32,     0,   202>
    >;
};

template<> struct block_fft_record<14, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,    1,    32,     0,   203>
    >;
};

template<> struct block_fft_record<15, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,    1,    32,     0,   204>
    >;
};

template<> struct block_fft_record<17, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,    1,    32,     0,   205>
    >;
};

template<> struct block_fft_record<18, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,    1,    32,     0,   206>
    >;
};

template<> struct block_fft_record<19, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,    1,    32,     0,   207>
    >;
};

template<> struct block_fft_record<20, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,    1,    32,     0,   208>
    >;
};

template<> struct block_fft_record<21, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,    1,    32,     0,   209>
    >;
};

template<> struct block_fft_record<22, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,    1,    32,     0,   210>
    >;
};

template<> struct block_fft_record<23, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,    1,    32,     0,   211>
    >;
};

template<> struct block_fft_record<24, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,    1,    32,     0,   212>
    >;
};

template<> struct block_fft_record<26, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,    1,    32,     0,   213>
    >;
};

template<> struct block_fft_record<28, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,    1,    32,     0,   214>
    >;
};

template<> struct block_fft_record<29, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,    1,    32,     0,   215>
    >;
};

template<> struct block_fft_record<30, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,    1,    32,     0,   216>
    >;
};

template<> struct block_fft_record<31, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,    1,    32,     0,   217>
    >;
};

template<> struct block_fft_record<2, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,    1,    32,     0,   218>
    >;
};

template<> struct block_fft_record<4, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 4,    4,    1,   128,     0,   219>,
        block_fft_implementation< 2,    2,    2,   128,    32,   221>,
        block_fft_implementation< 2,    2,    2,   128,    16,   220>
    >;
};

template<> struct block_fft_record<8, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    1,   128,     0,   222>,
        block_fft_implementation< 4,    4,    2,   112,    32,   223>,
        block_fft_implementation< 4,    4,    2,   128,    64,   224>,
        block_fft_implementation< 2,    2,    4,   128,    32,   225>,
        block_fft_implementation< 2,    2,    4,   112,    64,   226>
    >;
};

template<> struct block_fft_record<16, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    1,    32,     0,   227>,
        block_fft_implementation< 4,    4,    4,    64,    64,   228>,
        block_fft_implementation< 4,    4,    4,    64,   128,   229>,
        block_fft_implementation< 8,    8,    2,   112,    64,   230>,
        block_fft_implementation< 8,    8,    2,   112,   128,   231>,
        block_fft_implementation< 2,    2,    8,   128,    64,   232>,
        block_fft_implementation< 2,    2,    8,    80,   128,   233>
    >;
};

template<> struct block_fft_record<32, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,    1,    32,     0,   234>,
        block_fft_implementation< 8,    8,    4,    64,   256,   235>,
        block_fft_implementation< 8,    8,    4,    96,   128,   236>,
        block_fft_implementation< 4,    4,    8,   112,   256,   237>,
        block_fft_implementation< 2,    2,   16,    64,   256,   239>,
        block_fft_implementation< 4,    4,    8,    64,   128,   238>,
        block_fft_implementation<16,   16,    2,    96,   256,   240>,
        block_fft_implementation< 2,    2,   16,    48,   128,   241>,
        block_fft_implementation<16,   16,    2,    96,   128,   242>
    >;
};

template<> struct block_fft_record<64, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    32,   512,   243>,
        block_fft_implementation< 8,    8,    8,    24,   256,   244>,
        block_fft_implementation< 4,    4,   16,    15,   512,   245>,
        block_fft_implementation< 4,    4,   16,    24,   256,   246>,
        block_fft_implementation<16,   16,    4,    28,   512,   247>,
        block_fft_implementation<16,   16,    4,    16,   256,   248>,
        block_fft_implementation<32,   32,    2,    64,   512,   249>,
        block_fft_implementation< 2,    2,   32,    12,   512,   250>,
        block_fft_implementation< 2,    2,   32,    23,   256,   251>,
        block_fft_implementation<32,   32,    2,    32,   256,   252>
    >;
};

template<> struct block_fft_record<128, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,   16,    12,  1024,   254>,
        block_fft_implementation<16,   16,    8,    16,   512,   253>,
        block_fft_implementation<16,   16,    8,    15,  1024,   255>,
        block_fft_implementation< 8,    8,   16,    16,   512,   256>,
        block_fft_implementation< 4,    4,   32,     8,  1024,   257>,
        block_fft_implementation< 4,    4,   32,    12,   512,   258>,
        block_fft_implementation<32,   32,    4,    15,  1024,   259>,
        block_fft_implementation<32,   32,    4,    32,   512,   260>,
        block_fft_implementation< 2,    2,   64,    11,  1024,   261>,
        block_fft_implementation< 2,    2,   64,    11,   512,   262>
    >;
};

template<> struct block_fft_record<256, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,     8,  1024,   263>,
        block_fft_implementation< 8,    8,   32,     8,  2048,   264>,
        block_fft_implementation< 8,    8,   32,     4,  1024,   265>,
        block_fft_implementation<16,   16,   16,     8,  2048,   266>,
        block_fft_implementation<32,   32,    8,     8,  2048,   267>,
        block_fft_implementation< 4,    4,   64,     6,  2048,   268>,
        block_fft_implementation< 4,    4,   64,     6,  1024,   269>,
        block_fft_implementation<32,   32,    8,    16,  1024,   270>,
        block_fft_implementation< 2,    2,  128,     3,  2048,   271>,
        block_fft_implementation< 2,    2,  128,     5,  1024,   272>
    >;
};

template<> struct block_fft_record<512, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,   64,     3,  4096,   273>,
        block_fft_implementation< 8,    8,   64,     2,  2048,   274>,
        block_fft_implementation<32,   32,   16,     4,  4096,   276>,
        block_fft_implementation<16,   16,   32,     2,  2048,   275>,
        block_fft_implementation<32,   32,   16,     8,  2048,   277>,
        block_fft_implementation<16,   16,   32,     4,  4096,   278>,
        block_fft_implementation< 4,    4,  128,     2,  4096,   279>,
        block_fft_implementation< 4,    4,  128,     2,  2048,   280>,
        block_fft_implementation< 2,    2,  256,     2,  4096,   281>,
        block_fft_implementation< 2,    2,  256,     4,  2048,   282>
    >;
};

template<> struct block_fft_record<1024, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,   32,     2,  8192,   285>,
        block_fft_implementation<16,   16,   64,     1,  4096,   283>,
        block_fft_implementation< 8,    8,  128,     1,  8192,   284>,
        block_fft_implementation<32,   32,   32,     4,  4096,   287>,
        block_fft_implementation< 8,    8,  128,     1,  4096,   286>,
        block_fft_implementation<16,   16,   64,     2,  8192,   288>,
        block_fft_implementation< 4,    4,  256,     1,  8192,   289>,
        block_fft_implementation< 4,    4,  256,     1,  4096,   290>,
        block_fft_implementation< 2,    2,  512,     1,  8192,   291>,
        block_fft_implementation< 2,    2,  512,     2,  4096,   292>
    >;
};

template<> struct block_fft_record<2048, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  128,     1,  8192,   293>,
        block_fft_implementation< 8,    8,  256,     1, 16384,   294>,
        block_fft_implementation<16,   16,  128,     1, 16384,   296>,
        block_fft_implementation< 8,    8,  256,     1,  8192,   295>,
        block_fft_implementation<32,   32,   64,     1, 16384,   297>,
        block_fft_implementation<32,   32,   64,     1,  8192,   298>,
        block_fft_implementation< 4,    4,  512,     1, 16384,   299>,
        block_fft_implementation< 4,    4,  512,     1,  8192,   300>,
        block_fft_implementation< 2,    2, 1024,     1,  8192,   302>,
        block_fft_implementation< 2,    2, 1024,     1, 16384,   301>
    >;
};

template<> struct block_fft_record<4096, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  256,     1, 16384,   303>,
        block_fft_implementation< 8,    8,  512,     1, 32768,   304>,
        block_fft_implementation<16,   16,  256,     1, 32768,   306>,
        block_fft_implementation< 8,    8,  512,     1, 16384,   305>,
        block_fft_implementation<32,   32,  128,     1, 32768,   307>,
        block_fft_implementation<32,   32,  128,     1, 16384,   308>,
        block_fft_implementation< 4,    4, 1024,     1, 32768,   309>,
        block_fft_implementation< 4,    4, 1024,     1, 16384,   310>
    >;
};

template<> struct block_fft_record<8192, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,  256,     1, 65536,   312>,
        block_fft_implementation<16,   16,  512,     1, 32768,   311>,
        block_fft_implementation<32,   32,  256,     1, 32768,   313>,
        block_fft_implementation< 8,    8, 1024,     1, 65536,   314>,
        block_fft_implementation<16,   16,  512,     1, 65536,   315>,
        block_fft_implementation< 8,    8, 1024,     1, 32768,   316>
    >;
};

template<> struct block_fft_record<16384, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,  512,     1, 131072,  1156>,
        block_fft_implementation<16,   16, 1024,     1, 65536,   317>,
        block_fft_implementation<32,   32,  512,     1, 65536,   318>,
        block_fft_implementation<16,   16, 1024,     1, 131072,  1157>
    >;
};

template<> struct block_fft_record<32768, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32, 1024,     1, 131072,  1158>
    >;
};

template<> struct block_fft_record<3, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 3,    3,    1,   128,     0,   319>
    >;
};

template<> struct block_fft_record<9, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    1,    32,     0,   320>,
        block_fft_implementation< 3,    3,    3,   128,    72,   321>,
        block_fft_implementation< 3,    3,    3,   128,    36,   322>
    >;
};

template<> struct block_fft_record<27, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    1,    32,     0,   323>,
        block_fft_implementation< 9,    9,    3,    21,   216,   325>,
        block_fft_implementation< 9,    9,    3,    21,   108,   324>,
        block_fft_implementation< 3,    3,    9,   112,   216,   326>,
        block_fft_implementation< 3,    3,    9,   112,   108,   327>
    >;
};

template<> struct block_fft_record<81, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,     7,   648,   328>,
        block_fft_implementation< 9,    9,    9,     7,   324,   329>,
        block_fft_implementation<27,   27,    3,    21,   324,   330>,
        block_fft_implementation<27,   27,    3,    21,   648,   331>,
        block_fft_implementation< 3,    3,   27,    17,   648,   332>,
        block_fft_implementation< 3,    3,   27,    27,   324,   333>
    >;
};

template<> struct block_fft_record<243, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    9,     7,  1944,   334>,
        block_fft_implementation<27,   27,    9,     7,   972,   335>,
        block_fft_implementation< 9,    9,   27,     7,  1944,   336>,
        block_fft_implementation< 9,    9,   27,     2,   972,   337>,
        block_fft_implementation< 3,    3,   81,     6,  1944,   338>,
        block_fft_implementation< 3,    3,   81,    11,   972,   339>
    >;
};

template<> struct block_fft_record<729, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,    14,  5832,   340>,
        block_fft_implementation<27,   27,   27,     9,  2916,   341>,
        block_fft_implementation< 9,    9,   81,     3,  5832,   342>,
        block_fft_implementation< 9,    9,   81,     3,  2916,   343>,
        block_fft_implementation< 3,    3,  243,     3,  5832,   344>,
        block_fft_implementation< 3,    3,  243,     1,  2916,   345>
    >;
};

template<> struct block_fft_record<2187, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   81,     3, 17496,   347>,
        block_fft_implementation< 9,    9,  243,     1, 17496,   346>,
        block_fft_implementation<27,   27,   81,     3,  8748,   349>,
        block_fft_implementation< 9,    9,  243,     1,  8748,   348>,
        block_fft_implementation< 3,    3,  729,     1, 17496,   350>,
        block_fft_implementation< 3,    3,  729,     1,  8748,   351>
    >;
};

template<> struct block_fft_record<6561, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,  243,     2, 52488,   353>,
        block_fft_implementation<27,   27,  243,     1, 26244,   352>,
        block_fft_implementation< 9,    9,  729,     1, 52488,   355>,
        block_fft_implementation< 9,    9,  729,     1, 26244,   354>
    >;
};

template<> struct block_fft_record<19683, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,  729,     1, 157464,  1159>,
        block_fft_implementation<27,   27,  729,     1, 78732,  1160>
    >;
};

template<> struct block_fft_record<5, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    1,    64,     0,   356>
    >;
};

template<> struct block_fft_record<25, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    1,    32,     0,   357>,
        block_fft_implementation< 5,    5,    5,    25,   200,   358>,
        block_fft_implementation< 5,    5,    5,    25,   100,   359>
    >;
};

template<> struct block_fft_record<125, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    5,     6,  1000,   361>,
        block_fft_implementation<25,   25,    5,    25,   500,   360>,
        block_fft_implementation< 5,    5,   25,     5,  1000,   362>,
        block_fft_implementation< 5,    5,   25,     5,   500,   363>
    >;
};

template<> struct block_fft_record<625, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,     5,  5000,   365>,
        block_fft_implementation<25,   25,   25,     5,  2500,   364>,
        block_fft_implementation< 5,    5,  125,     1,  5000,   366>,
        block_fft_implementation< 5,    5,  125,     1,  2500,   367>
    >;
};

template<> struct block_fft_record<3125, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,  125,     2, 25000,   369>,
        block_fft_implementation<25,   25,  125,     1, 12500,   368>,
        block_fft_implementation< 5,    5,  625,     1, 25000,   370>,
        block_fft_implementation< 5,    5,  625,     1, 12500,   371>
    >;
};

template<> struct block_fft_record<15625, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,  625,     1, 125000,  1161>,
        block_fft_implementation<25,   25,  625,     1, 62500,   372>
    >;
};

template<> struct block_fft_record<7, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    1,    32,     0,   373>
    >;
};

template<> struct block_fft_record<49, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,    18,   392,   374>,
        block_fft_implementation< 7,    7,    7,     9,   196,   375>
    >;
};

template<> struct block_fft_record<343, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,   49,     5,  2744,   376>,
        block_fft_implementation< 7,    7,   49,     5,  1372,   377>
    >;
};

template<> struct block_fft_record<2401, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,  343,     1, 19208,   378>,
        block_fft_implementation< 7,    7,  343,     1,  9604,   379>
    >;
};

template<> struct block_fft_record<11, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,    1,    64,     0,   380>
    >;
};

template<> struct block_fft_record<121, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,    23,   968,   381>,
        block_fft_implementation<11,   11,   11,    23,   484,   382>
    >;
};

template<> struct block_fft_record<1331, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,  121,     1, 10648,   384>,
        block_fft_implementation<11,   11,  121,     1,  5324,   383>
    >;
};

template<> struct block_fft_record<6, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    1,    32,     0,   385>
    >;
};

template<> struct block_fft_record<36, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,    21,   288,   387>,
        block_fft_implementation< 6,    6,    6,    21,   144,   386>
    >;
};

template<> struct block_fft_record<216, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,   36,     7,  1728,   388>,
        block_fft_implementation< 6,    6,   36,     7,   864,   389>
    >;
};

template<> struct block_fft_record<1296, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,  216,     1, 10368,   390>,
        block_fft_implementation< 6,    6,  216,     1,  5184,   391>
    >;
};

template<> struct block_fft_record<10, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,    1,    32,     0,   392>
    >;
};

template<> struct block_fft_record<100, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,     3,   800,   394>,
        block_fft_implementation<10,   10,   10,     6,   400,   393>
    >;
};

template<> struct block_fft_record<1000, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,  100,     5,  8000,   395>,
        block_fft_implementation<10,   10,  100,     5,  4000,   396>
    >;
};

template<> struct block_fft_record<10000, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10, 1000,     1, 80000,   397>,
        block_fft_implementation<10,   10, 1000,     1, 40000,   398>
    >;
};

template<> struct block_fft_record<12, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,    1,    32,     0,   399>
    >;
};

template<> struct block_fft_record<144, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,     5,  1152,   400>,
        block_fft_implementation<12,   12,   12,     5,   576,   401>
    >;
};

template<> struct block_fft_record<1728, float, fft_type::c2c, fft_direction::inverse, 900> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,  144,     2, 13824,   402>,
        block_fft_implementation<12,   12,  144,     2,  6912,   403>
    >;
};

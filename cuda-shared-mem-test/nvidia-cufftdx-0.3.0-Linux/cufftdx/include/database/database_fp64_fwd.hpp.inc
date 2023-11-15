//Copyright (c) 2019, NVIDIA CORPORATION.  All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


template<> struct block_fft_record<13, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,    1,    32,     0,   416>
    >;
};

template<> struct block_fft_record<14, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,    1,   512,     0,   417>
    >;
};

template<> struct block_fft_record<15, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,    1,    64,     0,   418>
    >;
};

template<> struct block_fft_record<17, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,    1,   512,     0,   419>
    >;
};

template<> struct block_fft_record<18, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,    1,    64,     0,   420>
    >;
};

template<> struct block_fft_record<19, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,    1,   512,     0,   421>
    >;
};

template<> struct block_fft_record<20, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,    1,    32,     0,   422>
    >;
};

template<> struct block_fft_record<21, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,    1,   256,     0,   423>
    >;
};

template<> struct block_fft_record<22, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,    1,   256,     0,   424>
    >;
};

template<> struct block_fft_record<23, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,    1,    64,     0,   425>
    >;
};

template<> struct block_fft_record<24, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,    1,     4,     0,   426>
    >;
};

template<> struct block_fft_record<26, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,    1,   256,     0,   427>
    >;
};

template<> struct block_fft_record<28, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,    1,    32,     0,   428>
    >;
};

template<> struct block_fft_record<29, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,    1,   256,     0,   429>
    >;
};

template<> struct block_fft_record<30, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,    1,   128,     0,   430>
    >;
};

template<> struct block_fft_record<31, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,    1,    64,     0,   431>
    >;
};

template<> struct block_fft_record<11, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,    1,   512,     0,   432>
    >;
};

template<> struct block_fft_record<121, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,    32,   968,   433>,
        block_fft_implementation<11,   11,   11,    16,  1936,   434>
    >;
};

template<> struct block_fft_record<1331, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,  121,     1, 21296,   435>,
        block_fft_implementation<11,   11,  121,     1, 10648,   436>
    >;
};

template<> struct block_fft_record<2, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,    1,   512,     0,   437>
    >;
};

template<> struct block_fft_record<4, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 4,    4,    1,   512,     0,   438>,
        block_fft_implementation< 2,    2,    2,   256,    32,   439>,
        block_fft_implementation< 2,    2,    2,   512,    64,   440>
    >;
};

template<> struct block_fft_record<8, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    1,    32,     0,   441>,
        block_fft_implementation< 4,    4,    2,   128,    64,   442>,
        block_fft_implementation< 2,    2,    4,   128,    64,   443>,
        block_fft_implementation< 4,    4,    2,   128,   128,   444>,
        block_fft_implementation< 2,    2,    4,   256,   128,   445>
    >;
};

template<> struct block_fft_record<16, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    1,     1,     0,   446>,
        block_fft_implementation< 4,    4,    4,     4,   256,   447>,
        block_fft_implementation< 8,    8,    2,     4,   128,   448>,
        block_fft_implementation< 4,    4,    4,    64,   128,   449>,
        block_fft_implementation< 2,    2,    8,    32,   256,   450>,
        block_fft_implementation< 2,    2,    8,    32,   128,   451>,
        block_fft_implementation< 8,    8,    2,    64,   256,   452>
    >;
};

template<> struct block_fft_record<32, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    4,    32,   256,   453>,
        block_fft_implementation< 4,    4,    8,    16,   512,   454>,
        block_fft_implementation< 8,    8,    4,    32,   512,   455>,
        block_fft_implementation< 4,    4,    8,    32,   256,   456>,
        block_fft_implementation<16,   16,    2,    32,   512,   457>,
        block_fft_implementation< 2,    2,   16,     1,   512,   458>,
        block_fft_implementation< 2,    2,   16,    64,   256,   459>,
        block_fft_implementation<16,   16,    2,    64,   256,   460>
    >;
};

template<> struct block_fft_record<64, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    16,   512,   461>,
        block_fft_implementation< 8,    8,    8,     1,  1024,   462>,
        block_fft_implementation< 4,    4,   16,     8,  1024,   463>,
        block_fft_implementation< 4,    4,   16,    16,   512,   464>,
        block_fft_implementation<16,   16,    4,    16,  1024,   465>,
        block_fft_implementation<16,   16,    4,    16,   512,   466>,
        block_fft_implementation< 2,    2,   32,    16,   512,   467>,
        block_fft_implementation< 2,    2,   32,     8,  1024,   468>
    >;
};

template<> struct block_fft_record<128, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,   16,     8,  1024,   469>,
        block_fft_implementation<16,   16,    8,     8,  2048,   470>,
        block_fft_implementation<16,   16,    8,     8,  1024,   471>,
        block_fft_implementation< 4,    4,   32,     8,  1024,   472>,
        block_fft_implementation< 4,    4,   32,     4,  2048,   473>,
        block_fft_implementation< 8,    8,   16,     4,  2048,   474>,
        block_fft_implementation< 2,    2,   64,     8,  1024,   475>,
        block_fft_implementation< 2,    2,   64,     4,  2048,   476>
    >;
};

template<> struct block_fft_record<256, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,  128,     4,  2048,   477>,
        block_fft_implementation< 8,    8,   32,     4,  2048,   478>,
        block_fft_implementation<16,   16,   16,     4,  2048,   479>,
        block_fft_implementation<16,   16,   16,     4,  4096,   480>,
        block_fft_implementation< 4,    4,   64,     4,  4096,   481>,
        block_fft_implementation< 4,    4,   64,     4,  2048,   482>,
        block_fft_implementation< 8,    8,   32,     4,  4096,   483>,
        block_fft_implementation< 2,    2,  128,     1,  4096,   484>
    >;
};

template<> struct block_fft_record<512, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,   64,     1,  4096,   485>,
        block_fft_implementation< 8,    8,   64,     1,  8192,   486>,
        block_fft_implementation<16,   16,   32,     1,  8192,   487>,
        block_fft_implementation<16,   16,   32,     4,  4096,   488>,
        block_fft_implementation< 4,    4,  128,     1,  8192,   489>,
        block_fft_implementation< 4,    4,  128,     1,  4096,   490>,
        block_fft_implementation< 2,    2,  256,     1,  8192,   491>,
        block_fft_implementation< 2,    2,  256,     1,  4096,   492>
    >;
};

template<> struct block_fft_record<1024, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,  128,     1,  8192,   493>,
        block_fft_implementation<16,   16,   64,     1,  8192,   494>,
        block_fft_implementation<16,   16,   64,     1, 16384,   495>,
        block_fft_implementation< 4,    4,  256,     1, 16384,   496>,
        block_fft_implementation< 8,    8,  128,     1, 16384,   497>,
        block_fft_implementation< 4,    4,  256,     1,  8192,   498>,
        block_fft_implementation< 2,    2,  512,     1, 16384,   499>,
        block_fft_implementation< 2,    2,  512,     1,  8192,   500>
    >;
};

template<> struct block_fft_record<2048, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,  256,     1, 16384,   501>,
        block_fft_implementation<16,   16,  128,     1, 32768,   502>,
        block_fft_implementation< 8,    8,  256,     1, 32768,   503>,
        block_fft_implementation< 4,    4,  512,     1, 32768,   504>,
        block_fft_implementation< 4,    4,  512,     1, 16384,   505>,
        block_fft_implementation< 2,    2, 1024,     1, 32768,   506>,
        block_fft_implementation< 2,    2, 1024,     1, 16384,   507>
    >;
};

template<> struct block_fft_record<4096, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  256,     1, 32768,   508>,
        block_fft_implementation< 8,    8,  512,     1, 32768,   509>,
        block_fft_implementation< 8,    8,  512,     1, 65536,   510>,
        block_fft_implementation<16,   16,  256,     1, 65536,   511>,
        block_fft_implementation< 4,    4, 1024,     1, 65536,   512>,
        block_fft_implementation< 4,    4, 1024,     1, 32768,   513>
    >;
};

template<> struct block_fft_record<8192, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  512,     1, 65536,   514>,
        block_fft_implementation< 8,    8, 1024,     1, 65536,   515>,
        block_fft_implementation< 8,    8, 1024,     1, 131072,   516>,
        block_fft_implementation<16,   16,  512,     1, 131072,   517>
    >;
};

template<> struct block_fft_record<16384, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16, 1024,     1, 131072,   518>
    >;
};

template<> struct block_fft_record<3, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 3,    3,    1,    64,     0,   519>
    >;
};

template<> struct block_fft_record<9, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    1,   128,     0,   520>,
        block_fft_implementation< 3,    3,    3,    64,    72,   521>,
        block_fft_implementation< 3,    3,    3,    64,   144,   522>
    >;
};

template<> struct block_fft_record<27, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    1,    32,     0,   523>,
        block_fft_implementation< 9,    9,    3,    64,   432,   524>,
        block_fft_implementation< 9,    9,    3,    64,   216,   525>,
        block_fft_implementation< 3,    3,    9,     4,   216,   526>,
        block_fft_implementation< 3,    3,    9,    32,   432,   527>
    >;
};

template<> struct block_fft_record<81, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    32,  1296,   528>,
        block_fft_implementation< 9,    9,    9,    32,   648,   529>,
        block_fft_implementation<27,   27,    3,    16,  1296,   530>,
        block_fft_implementation<27,   27,    3,    16,   648,   531>,
        block_fft_implementation< 3,    3,   27,     8,  1296,   532>,
        block_fft_implementation< 3,    3,   27,     8,   648,   533>
    >;
};

template<> struct block_fft_record<243, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,   27,     1,  3888,   534>,
        block_fft_implementation< 9,    9,   27,     1,  1944,   535>,
        block_fft_implementation< 3,    3,   81,     4,  1944,   536>,
        block_fft_implementation<27,   27,    9,     4,  3888,   537>,
        block_fft_implementation<27,   27,    9,     4,  1944,   538>,
        block_fft_implementation< 3,    3,   81,     1,  3888,   539>
    >;
};

template<> struct block_fft_record<729, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,     1,  5832,   540>,
        block_fft_implementation<27,   27,   27,     1, 11664,   541>,
        block_fft_implementation< 9,    9,   81,     4, 11664,   542>,
        block_fft_implementation< 9,    9,   81,     4,  5832,   543>,
        block_fft_implementation< 3,    3,  243,     1,  5832,   544>,
        block_fft_implementation< 3,    3,  243,     1, 11664,   545>
    >;
};

template<> struct block_fft_record<2187, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,  243,     1, 34992,   546>,
        block_fft_implementation< 9,    9,  243,     1, 17496,   547>,
        block_fft_implementation< 3,    3,  729,     1, 34992,   548>,
        block_fft_implementation< 3,    3,  729,     1, 17496,   549>
    >;
};

template<> struct block_fft_record<6561, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,  729,     1, 52488,   550>,
        block_fft_implementation< 9,    9,  729,     1, 104976,   551>
    >;
};

template<> struct block_fft_record<5, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    1,   512,     0,   552>
    >;
};

template<> struct block_fft_record<25, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    1,     4,     0,   553>,
        block_fft_implementation< 5,    5,    5,    32,   400,   554>,
        block_fft_implementation< 5,    5,    5,    64,   200,   555>
    >;
};

template<> struct block_fft_record<125, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,   25,     8,  2000,   556>,
        block_fft_implementation< 5,    5,   25,     4,  1000,   557>,
        block_fft_implementation<25,   25,    5,     4,  2000,   558>,
        block_fft_implementation<25,   25,    5,     4,  1000,   559>
    >;
};

template<> struct block_fft_record<625, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,  125,     1, 10000,   560>,
        block_fft_implementation< 5,    5,  125,     1,  5000,   561>,
        block_fft_implementation<25,   25,   25,     1, 10000,   562>,
        block_fft_implementation<25,   25,   25,     1,  5000,   563>
    >;
};

template<> struct block_fft_record<3125, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,  625,     1, 50000,   564>,
        block_fft_implementation< 5,    5,  625,     1, 25000,   565>
    >;
};

template<> struct block_fft_record<7, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    1,   512,     0,   566>
    >;
};

template<> struct block_fft_record<49, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,     8,   784,   567>,
        block_fft_implementation< 7,    7,    7,     4,   392,   568>
    >;
};

template<> struct block_fft_record<343, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,   49,     1,  5488,   569>,
        block_fft_implementation< 7,    7,   49,     1,  2744,   570>
    >;
};

template<> struct block_fft_record<2401, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,  343,     1, 19208,   571>,
        block_fft_implementation< 7,    7,  343,     1, 38416,   572>
    >;
};

template<> struct block_fft_record<10, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,    1,   512,     0,   573>
    >;
};

template<> struct block_fft_record<100, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,    16,  1600,   574>,
        block_fft_implementation<10,   10,   10,    16,   800,   575>
    >;
};

template<> struct block_fft_record<1000, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,  100,     1, 16000,   576>,
        block_fft_implementation<10,   10,  100,     1,  8000,   577>
    >;
};

template<> struct block_fft_record<10000, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10, 1000,     1, 80000,   578>,
        block_fft_implementation<10,   10, 1000,     1, 160000,   579>
    >;
};

template<> struct block_fft_record<12, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,    1,     4,     0,   580>
    >;
};

template<> struct block_fft_record<144, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,     4,  2304,   581>,
        block_fft_implementation<12,   12,   12,     4,  1152,   582>
    >;
};

template<> struct block_fft_record<1728, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,  144,     1, 13824,   583>,
        block_fft_implementation<12,   12,  144,     1, 27648,   584>
    >;
};

template<> struct block_fft_record<6, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    1,   512,     0,   585>
    >;
};

template<> struct block_fft_record<36, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,    32,   576,   586>,
        block_fft_implementation< 6,    6,    6,    32,   288,   587>
    >;
};

template<> struct block_fft_record<216, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,   36,     8,  3456,   588>,
        block_fft_implementation< 6,    6,   36,     4,  1728,   589>
    >;
};

template<> struct block_fft_record<1296, double, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,  216,     1, 10368,   590>,
        block_fft_implementation< 6,    6,  216,     1, 20736,   591>
    >;
};

//Copyright (c) 2019, NVIDIA CORPORATION.  All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


template<> struct block_fft_record<13, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,    1,    32,     0,   592>
    >;
};

template<> struct block_fft_record<14, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,    1,   512,     0,   593>
    >;
};

template<> struct block_fft_record<15, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,    1,    64,     0,   594>
    >;
};

template<> struct block_fft_record<17, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,    1,   512,     0,   595>
    >;
};

template<> struct block_fft_record<18, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,    1,    64,     0,   596>
    >;
};

template<> struct block_fft_record<19, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,    1,   512,     0,   597>
    >;
};

template<> struct block_fft_record<20, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,    1,    32,     0,   598>
    >;
};

template<> struct block_fft_record<21, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,    1,   256,     0,   599>
    >;
};

template<> struct block_fft_record<22, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,    1,   256,     0,   600>
    >;
};

template<> struct block_fft_record<23, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,    1,    64,     0,   601>
    >;
};

template<> struct block_fft_record<24, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,    1,     4,     0,   602>
    >;
};

template<> struct block_fft_record<26, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,    1,   256,     0,   603>
    >;
};

template<> struct block_fft_record<28, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,    1,    32,     0,   604>
    >;
};

template<> struct block_fft_record<29, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,    1,   256,     0,   605>
    >;
};

template<> struct block_fft_record<30, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,    1,   128,     0,   606>
    >;
};

template<> struct block_fft_record<31, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,    1,    64,     0,   607>
    >;
};

template<> struct block_fft_record<11, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,    1,   512,     0,   608>
    >;
};

template<> struct block_fft_record<121, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,    32,   968,   609>,
        block_fft_implementation<11,   11,   11,    16,  1936,   610>
    >;
};

template<> struct block_fft_record<1331, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,  121,     1, 21296,   611>,
        block_fft_implementation<11,   11,  121,     1, 10648,   612>
    >;
};

template<> struct block_fft_record<2, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,    1,   512,     0,   613>
    >;
};

template<> struct block_fft_record<4, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 4,    4,    1,   512,     0,   614>,
        block_fft_implementation< 2,    2,    2,   256,    32,   615>,
        block_fft_implementation< 2,    2,    2,   512,    64,   616>
    >;
};

template<> struct block_fft_record<8, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    1,    32,     0,   617>,
        block_fft_implementation< 4,    4,    2,   128,    64,   618>,
        block_fft_implementation< 2,    2,    4,   128,    64,   619>,
        block_fft_implementation< 4,    4,    2,   128,   128,   620>,
        block_fft_implementation< 2,    2,    4,   256,   128,   621>
    >;
};

template<> struct block_fft_record<16, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    1,     1,     0,   622>,
        block_fft_implementation< 4,    4,    4,     4,   256,   623>,
        block_fft_implementation< 8,    8,    2,     4,   128,   624>,
        block_fft_implementation< 4,    4,    4,    64,   128,   625>,
        block_fft_implementation< 2,    2,    8,    32,   256,   626>,
        block_fft_implementation< 2,    2,    8,    32,   128,   627>,
        block_fft_implementation< 8,    8,    2,    64,   256,   628>
    >;
};

template<> struct block_fft_record<32, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    4,    32,   256,   629>,
        block_fft_implementation< 4,    4,    8,    16,   512,   630>,
        block_fft_implementation< 8,    8,    4,    32,   512,   631>,
        block_fft_implementation< 4,    4,    8,    32,   256,   632>,
        block_fft_implementation<16,   16,    2,    32,   512,   633>,
        block_fft_implementation< 2,    2,   16,     1,   512,   634>,
        block_fft_implementation< 2,    2,   16,    64,   256,   635>,
        block_fft_implementation<16,   16,    2,    64,   256,   636>
    >;
};

template<> struct block_fft_record<64, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    16,   512,   637>,
        block_fft_implementation< 8,    8,    8,     1,  1024,   638>,
        block_fft_implementation< 4,    4,   16,     8,  1024,   639>,
        block_fft_implementation< 4,    4,   16,    16,   512,   640>,
        block_fft_implementation<16,   16,    4,    16,  1024,   641>,
        block_fft_implementation<16,   16,    4,    16,   512,   642>,
        block_fft_implementation< 2,    2,   32,    16,   512,   643>,
        block_fft_implementation< 2,    2,   32,     8,  1024,   644>
    >;
};

template<> struct block_fft_record<128, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,   16,     8,  1024,   645>,
        block_fft_implementation<16,   16,    8,     8,  2048,   646>,
        block_fft_implementation<16,   16,    8,     8,  1024,   647>,
        block_fft_implementation< 4,    4,   32,     8,  1024,   648>,
        block_fft_implementation< 4,    4,   32,     4,  2048,   649>,
        block_fft_implementation< 8,    8,   16,     4,  2048,   650>,
        block_fft_implementation< 2,    2,   64,     8,  1024,   651>,
        block_fft_implementation< 2,    2,   64,     4,  2048,   652>
    >;
};

template<> struct block_fft_record<256, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,  128,     4,  2048,   653>,
        block_fft_implementation< 8,    8,   32,     4,  2048,   654>,
        block_fft_implementation<16,   16,   16,     4,  2048,   655>,
        block_fft_implementation<16,   16,   16,     4,  4096,   656>,
        block_fft_implementation< 4,    4,   64,     4,  4096,   657>,
        block_fft_implementation< 4,    4,   64,     4,  2048,   658>,
        block_fft_implementation< 8,    8,   32,     4,  4096,   659>,
        block_fft_implementation< 2,    2,  128,     1,  4096,   660>
    >;
};

template<> struct block_fft_record<512, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,   64,     1,  4096,   661>,
        block_fft_implementation< 8,    8,   64,     1,  8192,   662>,
        block_fft_implementation<16,   16,   32,     1,  8192,   663>,
        block_fft_implementation<16,   16,   32,     4,  4096,   664>,
        block_fft_implementation< 4,    4,  128,     1,  8192,   665>,
        block_fft_implementation< 4,    4,  128,     1,  4096,   666>,
        block_fft_implementation< 2,    2,  256,     1,  8192,   667>,
        block_fft_implementation< 2,    2,  256,     1,  4096,   668>
    >;
};

template<> struct block_fft_record<1024, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,  128,     1,  8192,   669>,
        block_fft_implementation<16,   16,   64,     1,  8192,   670>,
        block_fft_implementation<16,   16,   64,     1, 16384,   671>,
        block_fft_implementation< 4,    4,  256,     1, 16384,   672>,
        block_fft_implementation< 8,    8,  128,     1, 16384,   673>,
        block_fft_implementation< 4,    4,  256,     1,  8192,   674>,
        block_fft_implementation< 2,    2,  512,     1, 16384,   675>,
        block_fft_implementation< 2,    2,  512,     1,  8192,   676>
    >;
};

template<> struct block_fft_record<2048, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,  256,     1, 16384,   677>,
        block_fft_implementation<16,   16,  128,     1, 32768,   678>,
        block_fft_implementation< 8,    8,  256,     1, 32768,   679>,
        block_fft_implementation< 4,    4,  512,     1, 32768,   680>,
        block_fft_implementation< 4,    4,  512,     1, 16384,   681>,
        block_fft_implementation< 2,    2, 1024,     1, 32768,   682>,
        block_fft_implementation< 2,    2, 1024,     1, 16384,   683>
    >;
};

template<> struct block_fft_record<4096, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  256,     1, 32768,   684>,
        block_fft_implementation< 8,    8,  512,     1, 32768,   685>,
        block_fft_implementation< 8,    8,  512,     1, 65536,   686>,
        block_fft_implementation<16,   16,  256,     1, 65536,   687>,
        block_fft_implementation< 4,    4, 1024,     1, 65536,   688>,
        block_fft_implementation< 4,    4, 1024,     1, 32768,   689>
    >;
};

template<> struct block_fft_record<8192, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  512,     1, 65536,   690>,
        block_fft_implementation< 8,    8, 1024,     1, 65536,   691>,
        block_fft_implementation< 8,    8, 1024,     1, 131072,   692>,
        block_fft_implementation<16,   16,  512,     1, 131072,   693>
    >;
};

template<> struct block_fft_record<16384, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16, 1024,     1, 131072,   694>
    >;
};

template<> struct block_fft_record<3, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 3,    3,    1,    64,     0,   695>
    >;
};

template<> struct block_fft_record<9, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    1,   128,     0,   696>,
        block_fft_implementation< 3,    3,    3,    64,    72,   697>,
        block_fft_implementation< 3,    3,    3,    64,   144,   698>
    >;
};

template<> struct block_fft_record<27, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    1,    32,     0,   699>,
        block_fft_implementation< 9,    9,    3,    64,   432,   700>,
        block_fft_implementation< 9,    9,    3,    64,   216,   701>,
        block_fft_implementation< 3,    3,    9,     4,   216,   702>,
        block_fft_implementation< 3,    3,    9,    32,   432,   703>
    >;
};

template<> struct block_fft_record<81, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    32,  1296,   704>,
        block_fft_implementation< 9,    9,    9,    32,   648,   705>,
        block_fft_implementation<27,   27,    3,    16,  1296,   706>,
        block_fft_implementation<27,   27,    3,    16,   648,   707>,
        block_fft_implementation< 3,    3,   27,     8,  1296,   708>,
        block_fft_implementation< 3,    3,   27,     8,   648,   709>
    >;
};

template<> struct block_fft_record<243, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,   27,     1,  3888,   710>,
        block_fft_implementation< 9,    9,   27,     1,  1944,   711>,
        block_fft_implementation< 3,    3,   81,     4,  1944,   712>,
        block_fft_implementation<27,   27,    9,     4,  3888,   713>,
        block_fft_implementation<27,   27,    9,     4,  1944,   714>,
        block_fft_implementation< 3,    3,   81,     1,  3888,   715>
    >;
};

template<> struct block_fft_record<729, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,     1,  5832,   716>,
        block_fft_implementation<27,   27,   27,     1, 11664,   717>,
        block_fft_implementation< 9,    9,   81,     4, 11664,   718>,
        block_fft_implementation< 9,    9,   81,     4,  5832,   719>,
        block_fft_implementation< 3,    3,  243,     1,  5832,   720>,
        block_fft_implementation< 3,    3,  243,     1, 11664,   721>
    >;
};

template<> struct block_fft_record<2187, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,  243,     1, 34992,   722>,
        block_fft_implementation< 9,    9,  243,     1, 17496,   723>,
        block_fft_implementation< 3,    3,  729,     1, 34992,   724>,
        block_fft_implementation< 3,    3,  729,     1, 17496,   725>
    >;
};

template<> struct block_fft_record<6561, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,  729,     1, 52488,   726>,
        block_fft_implementation< 9,    9,  729,     1, 104976,   727>
    >;
};

template<> struct block_fft_record<5, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    1,   512,     0,   728>
    >;
};

template<> struct block_fft_record<25, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    1,     4,     0,   729>,
        block_fft_implementation< 5,    5,    5,    32,   400,   730>,
        block_fft_implementation< 5,    5,    5,    64,   200,   731>
    >;
};

template<> struct block_fft_record<125, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,   25,     8,  2000,   732>,
        block_fft_implementation< 5,    5,   25,     4,  1000,   733>,
        block_fft_implementation<25,   25,    5,     4,  2000,   734>,
        block_fft_implementation<25,   25,    5,     4,  1000,   735>
    >;
};

template<> struct block_fft_record<625, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,  125,     1, 10000,   736>,
        block_fft_implementation< 5,    5,  125,     1,  5000,   737>,
        block_fft_implementation<25,   25,   25,     1, 10000,   738>,
        block_fft_implementation<25,   25,   25,     1,  5000,   739>
    >;
};

template<> struct block_fft_record<3125, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,  625,     1, 50000,   740>,
        block_fft_implementation< 5,    5,  625,     1, 25000,   741>
    >;
};

template<> struct block_fft_record<7, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    1,   512,     0,   742>
    >;
};

template<> struct block_fft_record<49, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,     8,   784,   743>,
        block_fft_implementation< 7,    7,    7,     4,   392,   744>
    >;
};

template<> struct block_fft_record<343, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,   49,     1,  5488,   745>,
        block_fft_implementation< 7,    7,   49,     1,  2744,   746>
    >;
};

template<> struct block_fft_record<2401, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,  343,     1, 19208,   747>,
        block_fft_implementation< 7,    7,  343,     1, 38416,   748>
    >;
};

template<> struct block_fft_record<10, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,    1,   512,     0,   749>
    >;
};

template<> struct block_fft_record<100, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,    16,  1600,   750>,
        block_fft_implementation<10,   10,   10,    16,   800,   751>
    >;
};

template<> struct block_fft_record<1000, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,  100,     1, 16000,   752>,
        block_fft_implementation<10,   10,  100,     1,  8000,   753>
    >;
};

template<> struct block_fft_record<10000, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10, 1000,     1, 80000,   754>,
        block_fft_implementation<10,   10, 1000,     1, 160000,   755>
    >;
};

template<> struct block_fft_record<12, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,    1,     4,     0,   756>
    >;
};

template<> struct block_fft_record<144, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,     4,  2304,   757>,
        block_fft_implementation<12,   12,   12,     4,  1152,   758>
    >;
};

template<> struct block_fft_record<1728, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,  144,     1, 13824,   759>,
        block_fft_implementation<12,   12,  144,     1, 27648,   760>
    >;
};

template<> struct block_fft_record<6, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    1,   512,     0,   761>
    >;
};

template<> struct block_fft_record<36, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,    32,   576,   762>,
        block_fft_implementation< 6,    6,    6,    32,   288,   763>
    >;
};

template<> struct block_fft_record<216, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,   36,     8,  3456,   764>,
        block_fft_implementation< 6,    6,   36,     4,  1728,   765>
    >;
};

template<> struct block_fft_record<1296, double, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,  216,     1, 10368,   766>,
        block_fft_implementation< 6,    6,  216,     1, 20736,   767>
    >;
};

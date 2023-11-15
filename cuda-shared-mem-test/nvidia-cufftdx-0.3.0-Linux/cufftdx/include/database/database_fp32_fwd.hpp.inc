//Copyright (c) 2019, NVIDIA CORPORATION.  All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


template<> struct block_fft_record<13, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,    1,     1,     0,     0>
    >;
};

template<> struct block_fft_record<14, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,    1,     1,     0,     1>
    >;
};

template<> struct block_fft_record<15, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,    1,     1,     0,     2>
    >;
};

template<> struct block_fft_record<17, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,    1,     1,     0,     3>
    >;
};

template<> struct block_fft_record<18, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,    1,     1,     0,     4>
    >;
};

template<> struct block_fft_record<19, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,    1,     1,     0,     5>
    >;
};

template<> struct block_fft_record<20, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,    1,     1,     0,     6>
    >;
};

template<> struct block_fft_record<21, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,    1,     1,     0,     7>
    >;
};

template<> struct block_fft_record<22, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,    1,     1,     0,     8>
    >;
};

template<> struct block_fft_record<23, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,    1,     1,     0,     9>
    >;
};

template<> struct block_fft_record<24, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,    1,     1,     0,    10>
    >;
};

template<> struct block_fft_record<26, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,    1,     1,     0,    11>
    >;
};

template<> struct block_fft_record<28, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,    1,     1,     0,    12>
    >;
};

template<> struct block_fft_record<29, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,    1,     1,     0,    13>
    >;
};

template<> struct block_fft_record<30, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,    1,     1,     0,    14>
    >;
};

template<> struct block_fft_record<31, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,    1,     1,     0,    15>
    >;
};

template<> struct block_fft_record<11, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,    1,     4,     0,    16>
    >;
};

template<> struct block_fft_record<121, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,    32,   484,    17>,
        block_fft_implementation<11,   11,   11,    32,   968,    18>
    >;
};

template<> struct block_fft_record<1331, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,  121,     1, 10648,    19>,
        block_fft_implementation<11,   11,  121,     1,  5324,    20>
    >;
};

template<> struct block_fft_record<2, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,    1,    64,     0,    21>
    >;
};

template<> struct block_fft_record<4, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 4,    4,    1,   192,     0,    22>,
        block_fft_implementation< 2,    2,    2,    96,    32,    23>,
        block_fft_implementation< 2,    2,    2,   192,    16,    24>
    >;
};

template<> struct block_fft_record<8, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    1,   128,     0,    25>,
        block_fft_implementation< 4,    4,    2,   192,    32,    26>,
        block_fft_implementation< 4,    4,    2,   192,    64,    27>,
        block_fft_implementation< 2,    2,    4,    93,    64,    28>,
        block_fft_implementation< 2,    2,    4,    96,    32,    29>
    >;
};

template<> struct block_fft_record<16, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    1,    32,     0,    30>,
        block_fft_implementation< 4,    4,    4,    96,    64,    31>,
        block_fft_implementation< 4,    4,    4,    64,   128,    32>,
        block_fft_implementation< 8,    8,    2,     3,   128,    33>,
        block_fft_implementation< 8,    8,    2,   128,    64,    34>,
        block_fft_implementation< 2,    2,    8,    93,    64,    35>,
        block_fft_implementation< 2,    2,    8,    48,   128,    36>
    >;
};

template<> struct block_fft_record<32, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,    1,    64,     0,    37>,
        block_fft_implementation< 8,    8,    4,    48,   256,    38>,
        block_fft_implementation< 8,    8,    4,    64,   128,    39>,
        block_fft_implementation< 4,    4,    8,    32,   256,    40>,
        block_fft_implementation< 2,    2,   16,    48,   128,    41>,
        block_fft_implementation< 2,    2,   16,    24,   256,    42>,
        block_fft_implementation< 4,    4,    8,    32,   128,    43>,
        block_fft_implementation<16,   16,    2,    64,   256,    44>,
        block_fft_implementation<16,   16,    2,     3,   128,    45>
    >;
};

template<> struct block_fft_record<64, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    16,   512,    46>,
        block_fft_implementation< 8,    8,    8,    16,   256,    47>,
        block_fft_implementation< 4,    4,   16,    12,   512,    48>,
        block_fft_implementation< 4,    4,   16,    16,   256,    49>,
        block_fft_implementation<16,   16,    4,    32,   256,    50>,
        block_fft_implementation<16,   16,    4,    32,   512,    51>,
        block_fft_implementation< 2,    2,   32,     2,   512,    52>,
        block_fft_implementation<32,   32,    2,    32,   512,    53>,
        block_fft_implementation< 2,    2,   32,     8,   256,    54>,
        block_fft_implementation<32,   32,    2,     2,   256,    55>
    >;
};

template<> struct block_fft_record<128, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    8,     8,   512,    56>,
        block_fft_implementation< 8,    8,   16,     8,  1024,    57>,
        block_fft_implementation< 8,    8,   16,     8,   512,    58>,
        block_fft_implementation<16,   16,    8,     8,  1024,    59>,
        block_fft_implementation< 4,    4,   32,     5,  1024,    60>,
        block_fft_implementation< 4,    4,   32,     8,   512,    61>,
        block_fft_implementation<32,   32,    4,     8,  1024,    62>,
        block_fft_implementation<32,   32,    4,    16,   512,    63>,
        block_fft_implementation< 2,    2,   64,    12,  1024,    64>,
        block_fft_implementation< 2,    2,   64,     8,   512,    65>
    >;
};

template<> struct block_fft_record<256, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,     2,  1024,    66>,
        block_fft_implementation< 8,    8,   32,     2,  2048,    67>,
        block_fft_implementation< 8,    8,   32,     4,  1024,    68>,
        block_fft_implementation<16,   16,   16,     2,  2048,    69>,
        block_fft_implementation<32,   32,    8,     4,  2048,    70>,
        block_fft_implementation< 4,    4,   64,     2,  2048,    71>,
        block_fft_implementation< 4,    4,   64,     4,  1024,    72>,
        block_fft_implementation<32,   32,    8,     8,  1024,    73>,
        block_fft_implementation< 2,    2,  128,     2,  2048,    74>,
        block_fft_implementation< 2,    2,  128,     4,  1024,    75>
    >;
};

template<> struct block_fft_record<512, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,   64,     1,  4096,    76>,
        block_fft_implementation< 8,    8,   64,     2,  2048,    77>,
        block_fft_implementation<16,   16,   32,     2,  2048,    78>,
        block_fft_implementation<16,   16,   32,     2,  4096,    79>,
        block_fft_implementation< 4,    4,  128,     1,  4096,    80>,
        block_fft_implementation< 4,    4,  128,     1,  2048,    81>,
        block_fft_implementation< 2,    2,  256,     3,  4096,    82>,
        block_fft_implementation< 2,    2,  256,     1,  2048,    83>,
        block_fft_implementation<32,   32,   16,     4,  2048,    84>,
        block_fft_implementation<32,   32,   16,     4,  4096,    85>
    >;
};

template<> struct block_fft_record<1024, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   64,     1,  4096,    86>,
        block_fft_implementation< 8,    8,  128,     1,  8192,    87>,
        block_fft_implementation< 8,    8,  128,     1,  4096,    88>,
        block_fft_implementation<32,   32,   32,     2,  4096,    89>,
        block_fft_implementation<32,   32,   32,     2,  8192,    90>,
        block_fft_implementation<16,   16,   64,     1,  8192,    91>,
        block_fft_implementation< 4,    4,  256,     1,  8192,    92>,
        block_fft_implementation< 4,    4,  256,     1,  4096,    93>,
        block_fft_implementation< 2,    2,  512,     1,  8192,    94>,
        block_fft_implementation< 2,    2,  512,     1,  4096,    95>
    >;
};

template<> struct block_fft_record<2048, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  128,     1,  8192,    96>,
        block_fft_implementation< 8,    8,  256,     1, 16384,    97>,
        block_fft_implementation< 8,    8,  256,     1,  8192,    98>,
        block_fft_implementation<16,   16,  128,     1, 16384,    99>,
        block_fft_implementation<32,   32,   64,     1, 16384,   100>,
        block_fft_implementation<32,   32,   64,     1,  8192,   101>,
        block_fft_implementation< 4,    4,  512,     1, 16384,   102>,
        block_fft_implementation< 4,    4,  512,     1,  8192,   103>,
        block_fft_implementation< 2,    2, 1024,     1, 16384,   104>,
        block_fft_implementation< 2,    2, 1024,     1,  8192,   105>
    >;
};

template<> struct block_fft_record<4096, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  256,     1, 16384,   106>,
        block_fft_implementation< 8,    8,  512,     1, 16384,   107>,
        block_fft_implementation< 8,    8,  512,     1, 32768,   108>,
        block_fft_implementation<32,   32,  128,     1, 16384,   109>,
        block_fft_implementation<32,   32,  128,     1, 32768,   110>,
        block_fft_implementation<16,   16,  256,     1, 32768,   111>,
        block_fft_implementation< 4,    4, 1024,     1, 32768,   112>,
        block_fft_implementation< 4,    4, 1024,     1, 16384,   113>
    >;
};

template<> struct block_fft_record<8192, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  512,     1, 32768,   114>,
        block_fft_implementation< 8,    8, 1024,     1, 32768,   115>,
        block_fft_implementation< 8,    8, 1024,     1, 65536,   116>,
        block_fft_implementation<32,   32,  256,     1, 32768,   117>,
        block_fft_implementation<32,   32,  256,     1, 65536,   118>,
        block_fft_implementation<16,   16,  512,     1, 65536,   119>
    >;
};

template<> struct block_fft_record<16384, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,  512,     1, 65536,   120>,
        block_fft_implementation<16,   16, 1024,     1, 65536,   121>,
        block_fft_implementation<32,   32,  512,     1, 131072,   122>,
        block_fft_implementation<16,   16, 1024,     1, 131072,   123>
    >;
};

template<> struct block_fft_record<32768, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32, 1024,     1, 131072,   124>
    >;
};

template<> struct block_fft_record<3, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 3,    3,    1,    64,     0,   125>
    >;
};

template<> struct block_fft_record<9, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    1,    32,     0,   126>,
        block_fft_implementation< 3,    3,    3,    64,    72,   127>,
        block_fft_implementation< 3,    3,    3,   128,    36,   128>
    >;
};

template<> struct block_fft_record<27, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    1,    64,     0,   129>,
        block_fft_implementation< 9,    9,    3,    64,   216,   130>,
        block_fft_implementation< 9,    9,    3,    64,   108,   131>,
        block_fft_implementation< 3,    3,    9,    32,   216,   132>,
        block_fft_implementation< 3,    3,    9,    32,   108,   133>
    >;
};

template<> struct block_fft_record<81, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    16,   648,   134>,
        block_fft_implementation< 9,    9,    9,    16,   324,   135>,
        block_fft_implementation<27,   27,    3,    16,   648,   136>,
        block_fft_implementation<27,   27,    3,    16,   324,   137>,
        block_fft_implementation< 3,    3,   27,     8,   648,   138>,
        block_fft_implementation< 3,    3,   27,    12,   324,   139>
    >;
};

template<> struct block_fft_record<243, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    9,     3,  1944,   140>,
        block_fft_implementation<27,   27,    9,     3,   972,   141>,
        block_fft_implementation< 9,    9,   27,     4,  1944,   142>,
        block_fft_implementation< 9,    9,   27,     4,   972,   143>,
        block_fft_implementation< 3,    3,   81,     8,  1944,   144>,
        block_fft_implementation< 3,    3,   81,     3,   972,   145>
    >;
};

template<> struct block_fft_record<729, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,     2,  5832,   146>,
        block_fft_implementation< 9,    9,   81,     3,  5832,   147>,
        block_fft_implementation<27,   27,   27,     2,  2916,   148>,
        block_fft_implementation< 9,    9,   81,     3,  2916,   149>,
        block_fft_implementation< 3,    3,  243,     1,  5832,   150>,
        block_fft_implementation< 3,    3,  243,     1,  2916,   151>
    >;
};

template<> struct block_fft_record<2187, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,  243,     1, 17496,   152>,
        block_fft_implementation< 9,    9,  243,     1,  8748,   153>,
        block_fft_implementation<27,   27,   81,     1, 17496,   154>,
        block_fft_implementation<27,   27,   81,     1,  8748,   155>,
        block_fft_implementation< 3,    3,  729,     1, 17496,   156>,
        block_fft_implementation< 3,    3,  729,     1,  8748,   157>
    >;
};

template<> struct block_fft_record<6561, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,  729,     1, 26244,   158>,
        block_fft_implementation< 9,    9,  729,     1, 52488,   159>,
        block_fft_implementation<27,   27,  243,     1, 26244,   160>,
        block_fft_implementation<27,   27,  243,     1, 52488,   161>
    >;
};

template<> struct block_fft_record<19683, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,  729,     1, 78732,   162>,
        block_fft_implementation<27,   27,  729,     1, 157464,   163>
    >;
};

template<> struct block_fft_record<5, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    1,   768,     0,   164>
    >;
};

template<> struct block_fft_record<25, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    1,    32,     0,   165>,
        block_fft_implementation< 5,    5,    5,    24,   200,   166>,
        block_fft_implementation< 5,    5,    5,    12,   100,   167>
    >;
};

template<> struct block_fft_record<125, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    5,    12,  1000,   168>,
        block_fft_implementation<25,   25,    5,    12,   500,   169>,
        block_fft_implementation< 5,    5,   25,     5,  1000,   170>,
        block_fft_implementation< 5,    5,   25,     5,   500,   171>
    >;
};

template<> struct block_fft_record<625, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,     5,  2500,   172>,
        block_fft_implementation<25,   25,   25,     5,  5000,   173>,
        block_fft_implementation< 5,    5,  125,     1,  5000,   174>,
        block_fft_implementation< 5,    5,  125,     1,  2500,   175>
    >;
};

template<> struct block_fft_record<3125, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,  125,     1, 12500,   176>,
        block_fft_implementation<25,   25,  125,     1, 25000,   177>,
        block_fft_implementation< 5,    5,  625,     1, 25000,   178>,
        block_fft_implementation< 5,    5,  625,     1, 12500,   179>
    >;
};

template<> struct block_fft_record<15625, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,  625,     1, 62500,   180>,
        block_fft_implementation<25,   25,  625,     1, 125000,   181>
    >;
};

template<> struct block_fft_record<7, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    1,   768,     0,   182>
    >;
};

template<> struct block_fft_record<49, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,    16,   392,   183>,
        block_fft_implementation< 7,    7,    7,    16,   196,   184>
    >;
};

template<> struct block_fft_record<343, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,   49,     5,  2744,   185>,
        block_fft_implementation< 7,    7,   49,     5,  1372,   186>
    >;
};

template<> struct block_fft_record<2401, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,  343,     1,  9604,   187>,
        block_fft_implementation< 7,    7,  343,     1, 19208,   188>
    >;
};

template<> struct block_fft_record<10, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,    1,   128,     0,   189>
    >;
};

template<> struct block_fft_record<100, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,    12,   800,   190>,
        block_fft_implementation<10,   10,   10,     3,   400,   191>
    >;
};

template<> struct block_fft_record<1000, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,  100,     5,  8000,   192>,
        block_fft_implementation<10,   10,  100,     2,  4000,   193>
    >;
};

template<> struct block_fft_record<10000, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10, 1000,     1, 40000,   194>,
        block_fft_implementation<10,   10, 1000,     1, 80000,   195>
    >;
};

template<> struct block_fft_record<12, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,    1,  1024,     0,   196>
    >;
};

template<> struct block_fft_record<144, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,     5,  1152,   197>,
        block_fft_implementation<12,   12,   12,     5,   576,   198>
    >;
};

template<> struct block_fft_record<1728, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,  144,     1, 13824,   199>,
        block_fft_implementation<12,   12,  144,     1,  6912,   200>
    >;
};

template<> struct block_fft_record<6, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    1,   768,     0,   201>
    >;
};

template<> struct block_fft_record<36, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,    64,   288,   202>,
        block_fft_implementation< 6,    6,    6,    32,   144,   203>
    >;
};

template<> struct block_fft_record<216, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,   36,     4,  1728,   204>,
        block_fft_implementation< 6,    6,   36,     8,   864,   205>
    >;
};

template<> struct block_fft_record<1296, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,  216,     1, 10368,   206>,
        block_fft_implementation< 6,    6,  216,     1,  5184,   207>
    >;
};

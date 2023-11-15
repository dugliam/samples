//Copyright (c) 2019, NVIDIA CORPORATION.  All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


template<> struct block_fft_record<13, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,    1,     2,     0,   768>
    >;
};

template<> struct block_fft_record<14, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,    1,     2,     0,   769>
    >;
};

template<> struct block_fft_record<15, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,    1,     2,     0,   770>
    >;
};

template<> struct block_fft_record<17, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,    1,     2,     0,   771>
    >;
};

template<> struct block_fft_record<18, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,    1,     2,     0,   772>
    >;
};

template<> struct block_fft_record<19, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,    1,     2,     0,   773>
    >;
};

template<> struct block_fft_record<20, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,    1,     2,     0,   774>
    >;
};

template<> struct block_fft_record<21, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,    1,     2,     0,   775>
    >;
};

template<> struct block_fft_record<22, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,    1,     2,     0,   776>
    >;
};

template<> struct block_fft_record<23, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,    1,     2,     0,   777>
    >;
};

template<> struct block_fft_record<24, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,    1,     2,     0,   778>
    >;
};

template<> struct block_fft_record<26, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,    1,     2,     0,   779>
    >;
};

template<> struct block_fft_record<28, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,    1,     2,     0,   780>
    >;
};

template<> struct block_fft_record<29, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,    1,     2,     0,   781>
    >;
};

template<> struct block_fft_record<30, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,    1,     2,     0,   782>
    >;
};

template<> struct block_fft_record<31, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,    1,     2,     0,   783>
    >;
};

template<> struct block_fft_record<11, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,    1,     8,     0,   784>
    >;
};

template<> struct block_fft_record<121, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,    64,   242,   785>,
        block_fft_implementation<11,   11,   11,    64,   484,   786>
    >;
};

template<> struct block_fft_record<1331, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,  121,     2,  5324,   787>,
        block_fft_implementation<11,   11,  121,     2,  2662,   788>
    >;
};

template<> struct block_fft_record<2, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,    1,   128,     0,   789>
    >;
};

template<> struct block_fft_record<4, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 4,    4,    1,   384,     0,   790>,
        block_fft_implementation< 2,    2,    2,   192,    16,   791>,
        block_fft_implementation< 2,    2,    2,   384,     8,   792>
    >;
};

template<> struct block_fft_record<8, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    1,   256,     0,   793>,
        block_fft_implementation< 4,    4,    2,   384,    16,   794>,
        block_fft_implementation< 4,    4,    2,   384,    32,   795>,
        block_fft_implementation< 2,    2,    4,   186,    32,   796>,
        block_fft_implementation< 2,    2,    4,   192,    16,   797>
    >;
};

template<> struct block_fft_record<16, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    1,    64,     0,   798>,
        block_fft_implementation< 4,    4,    4,   192,    32,   799>,
        block_fft_implementation< 4,    4,    4,   128,    64,   800>,
        block_fft_implementation< 8,    8,    2,     6,    64,   801>,
        block_fft_implementation< 8,    8,    2,   256,    32,   802>,
        block_fft_implementation< 2,    2,    8,   186,    32,   803>,
        block_fft_implementation< 2,    2,    8,    96,    64,   804>
    >;
};

template<> struct block_fft_record<32, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,    1,   128,     0,   805>,
        block_fft_implementation< 8,    8,    4,    96,   128,   806>,
        block_fft_implementation< 8,    8,    4,   128,    64,   807>,
        block_fft_implementation< 4,    4,    8,    64,   128,   808>,
        block_fft_implementation< 2,    2,   16,    96,    64,   809>,
        block_fft_implementation< 2,    2,   16,    48,   128,   810>,
        block_fft_implementation< 4,    4,    8,    64,    64,   811>,
        block_fft_implementation<16,   16,    2,   128,   128,   812>,
        block_fft_implementation<16,   16,    2,     6,    64,   813>
    >;
};

template<> struct block_fft_record<64, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    32,   256,   814>,
        block_fft_implementation< 8,    8,    8,    32,   128,   815>,
        block_fft_implementation< 4,    4,   16,    24,   256,   816>,
        block_fft_implementation< 4,    4,   16,    32,   128,   817>,
        block_fft_implementation<16,   16,    4,    64,   128,   818>,
        block_fft_implementation<16,   16,    4,    64,   256,   819>,
        block_fft_implementation< 2,    2,   32,     4,   256,   820>,
        block_fft_implementation<32,   32,    2,    64,   256,   821>,
        block_fft_implementation< 2,    2,   32,    16,   128,   822>,
        block_fft_implementation<32,   32,    2,     4,   128,   823>
    >;
};

template<> struct block_fft_record<128, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    8,    16,   256,   824>,
        block_fft_implementation< 8,    8,   16,    16,   512,   825>,
        block_fft_implementation< 8,    8,   16,    16,   256,   826>,
        block_fft_implementation<16,   16,    8,    16,   512,   827>,
        block_fft_implementation< 4,    4,   32,    10,   512,   828>,
        block_fft_implementation< 4,    4,   32,    16,   256,   829>,
        block_fft_implementation<32,   32,    4,    16,   512,   830>,
        block_fft_implementation<32,   32,    4,    32,   256,   831>,
        block_fft_implementation< 2,    2,   64,    24,   512,   832>,
        block_fft_implementation< 2,    2,   64,    16,   256,   833>
    >;
};

template<> struct block_fft_record<256, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,     4,   512,   834>,
        block_fft_implementation< 8,    8,   32,     4,  1024,   835>,
        block_fft_implementation< 8,    8,   32,     8,   512,   836>,
        block_fft_implementation<16,   16,   16,     4,  1024,   837>,
        block_fft_implementation<32,   32,    8,     8,  1024,   838>,
        block_fft_implementation< 4,    4,   64,     4,  1024,   839>,
        block_fft_implementation< 4,    4,   64,     8,   512,   840>,
        block_fft_implementation<32,   32,    8,    16,   512,   841>,
        block_fft_implementation< 2,    2,  128,     4,  1024,   842>,
        block_fft_implementation< 2,    2,  128,     8,   512,   843>
    >;
};

template<> struct block_fft_record<512, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,   64,     2,  2048,   844>,
        block_fft_implementation< 8,    8,   64,     4,  1024,   845>,
        block_fft_implementation<16,   16,   32,     4,  1024,   846>,
        block_fft_implementation<16,   16,   32,     4,  2048,   847>,
        block_fft_implementation< 4,    4,  128,     2,  2048,   848>,
        block_fft_implementation< 4,    4,  128,     2,  1024,   849>,
        block_fft_implementation< 2,    2,  256,     6,  2048,   850>,
        block_fft_implementation< 2,    2,  256,     2,  1024,   851>,
        block_fft_implementation<32,   32,   16,     8,  1024,   852>,
        block_fft_implementation<32,   32,   16,     8,  2048,   853>
    >;
};

template<> struct block_fft_record<1024, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   64,     2,  2048,   854>,
        block_fft_implementation< 8,    8,  128,     2,  4096,   855>,
        block_fft_implementation< 8,    8,  128,     2,  2048,   856>,
        block_fft_implementation<32,   32,   32,     4,  2048,   857>,
        block_fft_implementation<32,   32,   32,     4,  4096,   858>,
        block_fft_implementation<16,   16,   64,     2,  4096,   859>,
        block_fft_implementation< 4,    4,  256,     2,  4096,   860>,
        block_fft_implementation< 4,    4,  256,     2,  2048,   861>,
        block_fft_implementation< 2,    2,  512,     2,  4096,   862>,
        block_fft_implementation< 2,    2,  512,     2,  2048,   863>
    >;
};

template<> struct block_fft_record<2048, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  128,     2,  4096,   864>,
        block_fft_implementation< 8,    8,  256,     2,  8192,   865>,
        block_fft_implementation< 8,    8,  256,     2,  4096,   866>,
        block_fft_implementation<16,   16,  128,     2,  8192,   867>,
        block_fft_implementation<32,   32,   64,     2,  8192,   868>,
        block_fft_implementation<32,   32,   64,     2,  4096,   869>,
        block_fft_implementation< 4,    4,  512,     2,  8192,   870>,
        block_fft_implementation< 4,    4,  512,     2,  4096,   871>,
        block_fft_implementation< 2,    2, 1024,     2,  8192,   872>,
        block_fft_implementation< 2,    2, 1024,     2,  4096,   873>
    >;
};

template<> struct block_fft_record<4096, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  256,     2,  8192,   874>,
        block_fft_implementation< 8,    8,  512,     2,  8192,   875>,
        block_fft_implementation< 8,    8,  512,     2, 16384,   876>,
        block_fft_implementation<32,   32,  128,     2,  8192,   877>,
        block_fft_implementation<32,   32,  128,     2, 16384,   878>,
        block_fft_implementation<16,   16,  256,     2, 16384,   879>,
        block_fft_implementation< 4,    4, 1024,     2, 16384,   880>,
        block_fft_implementation< 4,    4, 1024,     2,  8192,   881>
    >;
};

template<> struct block_fft_record<8192, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  512,     2, 16384,   882>,
        block_fft_implementation< 8,    8, 1024,     2, 16384,   883>,
        block_fft_implementation< 8,    8, 1024,     2, 32768,   884>,
        block_fft_implementation<32,   32,  256,     2, 16384,   885>,
        block_fft_implementation<32,   32,  256,     2, 32768,   886>,
        block_fft_implementation<16,   16,  512,     2, 32768,   887>
    >;
};

template<> struct block_fft_record<16384, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,  512,     2, 32768,   888>,
        block_fft_implementation<16,   16, 1024,     2, 32768,   889>,
        block_fft_implementation<32,   32,  512,     2, 65536,   890>,
        block_fft_implementation<16,   16, 1024,     2, 65536,   891>
    >;
};

template<> struct block_fft_record<32768, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32, 1024,     2, 65536,   892>,
        block_fft_implementation<32,   32, 1024,     2, 131072,   893>
    >;
};

template<> struct block_fft_record<3, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 3,    3,    1,   128,     0,   894>
    >;
};

template<> struct block_fft_record<9, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    1,    64,     0,   895>,
        block_fft_implementation< 3,    3,    3,   128,    36,   896>,
        block_fft_implementation< 3,    3,    3,   256,    18,   897>
    >;
};

template<> struct block_fft_record<27, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    1,   128,     0,   898>,
        block_fft_implementation< 9,    9,    3,   128,   108,   899>,
        block_fft_implementation< 9,    9,    3,   128,    54,   900>,
        block_fft_implementation< 3,    3,    9,    64,   108,   901>,
        block_fft_implementation< 3,    3,    9,    64,    54,   902>
    >;
};

template<> struct block_fft_record<81, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    32,   324,   903>,
        block_fft_implementation< 9,    9,    9,    32,   162,   904>,
        block_fft_implementation<27,   27,    3,    32,   324,   905>,
        block_fft_implementation<27,   27,    3,    32,   162,   906>,
        block_fft_implementation< 3,    3,   27,    16,   324,   907>,
        block_fft_implementation< 3,    3,   27,    24,   162,   908>
    >;
};

template<> struct block_fft_record<243, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    9,     6,   972,   909>,
        block_fft_implementation<27,   27,    9,     6,   486,   910>,
        block_fft_implementation< 9,    9,   27,     8,   972,   911>,
        block_fft_implementation< 9,    9,   27,     8,   486,   912>,
        block_fft_implementation< 3,    3,   81,    16,   972,   913>,
        block_fft_implementation< 3,    3,   81,     6,   486,   914>
    >;
};

template<> struct block_fft_record<729, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,     4,  2916,   915>,
        block_fft_implementation< 9,    9,   81,     6,  2916,   916>,
        block_fft_implementation<27,   27,   27,     4,  1458,   917>,
        block_fft_implementation< 9,    9,   81,     6,  1458,   918>,
        block_fft_implementation< 3,    3,  243,     2,  2916,   919>,
        block_fft_implementation< 3,    3,  243,     2,  1458,   920>
    >;
};

template<> struct block_fft_record<2187, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,  243,     2,  8748,   921>,
        block_fft_implementation< 9,    9,  243,     2,  4374,   922>,
        block_fft_implementation<27,   27,   81,     2,  8748,   923>,
        block_fft_implementation<27,   27,   81,     2,  4374,   924>,
        block_fft_implementation< 3,    3,  729,     2,  8748,   925>,
        block_fft_implementation< 3,    3,  729,     2,  4374,   926>
    >;
};

template<> struct block_fft_record<6561, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,  729,     2, 13122,   927>,
        block_fft_implementation< 9,    9,  729,     2, 26244,   928>,
        block_fft_implementation<27,   27,  243,     2, 13122,   929>,
        block_fft_implementation<27,   27,  243,     2, 26244,   930>
    >;
};

template<> struct block_fft_record<19683, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,  729,     2, 39366,   931>,
        block_fft_implementation<27,   27,  729,     2, 78732,   932>
    >;
};

template<> struct block_fft_record<5, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    1,  1536,     0,   933>
    >;
};

template<> struct block_fft_record<25, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    1,    64,     0,   934>,
        block_fft_implementation< 5,    5,    5,    48,   100,   935>,
        block_fft_implementation< 5,    5,    5,    24,    50,   936>
    >;
};

template<> struct block_fft_record<125, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    5,    24,   500,   937>,
        block_fft_implementation<25,   25,    5,    24,   250,   938>,
        block_fft_implementation< 5,    5,   25,    10,   500,   939>,
        block_fft_implementation< 5,    5,   25,    10,   250,   940>
    >;
};

template<> struct block_fft_record<625, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,    10,  1250,   941>,
        block_fft_implementation<25,   25,   25,    10,  2500,   942>,
        block_fft_implementation< 5,    5,  125,     2,  2500,   943>,
        block_fft_implementation< 5,    5,  125,     2,  1250,   944>
    >;
};

template<> struct block_fft_record<3125, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,  125,     2,  6250,   945>,
        block_fft_implementation<25,   25,  125,     2, 12500,   946>,
        block_fft_implementation< 5,    5,  625,     2, 12500,   947>,
        block_fft_implementation< 5,    5,  625,     2,  6250,   948>
    >;
};

template<> struct block_fft_record<15625, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,  625,     2, 31250,   949>,
        block_fft_implementation<25,   25,  625,     2, 62500,   950>
    >;
};

template<> struct block_fft_record<7, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    1,  1536,     0,   951>
    >;
};

template<> struct block_fft_record<49, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,    32,   196,   952>,
        block_fft_implementation< 7,    7,    7,    32,    98,   953>
    >;
};

template<> struct block_fft_record<343, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,   49,    10,  1372,   954>,
        block_fft_implementation< 7,    7,   49,    10,   686,   955>
    >;
};

template<> struct block_fft_record<2401, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,  343,     2,  4802,   956>,
        block_fft_implementation< 7,    7,  343,     2,  9604,   957>
    >;
};

template<> struct block_fft_record<10, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,    1,   256,     0,   958>
    >;
};

template<> struct block_fft_record<100, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,    24,   400,   959>,
        block_fft_implementation<10,   10,   10,     6,   200,   960>
    >;
};

template<> struct block_fft_record<1000, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,  100,    10,  4000,   961>,
        block_fft_implementation<10,   10,  100,     4,  2000,   962>
    >;
};

template<> struct block_fft_record<10000, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10, 1000,     2, 20000,   963>,
        block_fft_implementation<10,   10, 1000,     2, 40000,   964>
    >;
};

template<> struct block_fft_record<12, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,    1,  2048,     0,   965>
    >;
};

template<> struct block_fft_record<144, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,    10,   576,   966>,
        block_fft_implementation<12,   12,   12,    10,   288,   967>
    >;
};

template<> struct block_fft_record<1728, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,  144,     2,  6912,   968>,
        block_fft_implementation<12,   12,  144,     2,  3456,   969>
    >;
};

template<> struct block_fft_record<6, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    1,  1536,     0,   970>
    >;
};

template<> struct block_fft_record<36, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,   128,   144,   971>,
        block_fft_implementation< 6,    6,    6,    64,    72,   972>
    >;
};

template<> struct block_fft_record<216, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,   36,     8,   864,   973>,
        block_fft_implementation< 6,    6,   36,    16,   432,   974>
    >;
};

template<> struct block_fft_record<1296, half, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,  216,     2,  5184,   975>,
        block_fft_implementation< 6,    6,  216,     2,  2592,   976>
    >;
};

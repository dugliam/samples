//Copyright (c) 2019-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


template<> struct block_fft_record<13, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,    1,    64,     0,   746>
    >;
};

template<> struct block_fft_record<14, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,    1,    64,     0,   747>
    >;
};

template<> struct block_fft_record<15, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,    1,    64,     0,   748>
    >;
};

template<> struct block_fft_record<17, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,    1,    64,     0,   749>
    >;
};

template<> struct block_fft_record<18, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,    1,    64,     0,   750>
    >;
};

template<> struct block_fft_record<19, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,    1,    64,     0,   751>
    >;
};

template<> struct block_fft_record<20, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,    1,    64,     0,   752>
    >;
};

template<> struct block_fft_record<21, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,    1,    64,     0,   753>
    >;
};

template<> struct block_fft_record<22, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,    1,    64,     0,   754>
    >;
};

template<> struct block_fft_record<23, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,    1,    64,     0,   755>
    >;
};

template<> struct block_fft_record<24, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,    1,    64,     0,   756>
    >;
};

template<> struct block_fft_record<26, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,    1,    64,     0,   757>
    >;
};

template<> struct block_fft_record<28, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,    1,    64,     0,   758>
    >;
};

template<> struct block_fft_record<29, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,    1,    64,     0,   759>
    >;
};

template<> struct block_fft_record<30, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,    1,    64,     0,   760>
    >;
};

template<> struct block_fft_record<31, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,    1,    64,     0,   761>
    >;
};

template<> struct block_fft_record<2, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,    1,    64,     0,   762>
    >;
};

template<> struct block_fft_record<4, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 4,    4,    1,    64,     0,   763>,
        block_fft_implementation< 2,    2,    2,    64,    16,   765>,
        block_fft_implementation< 2,    2,    2,    64,     8,   764>
    >;
};

template<> struct block_fft_record<8, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    1,    64,     0,   766>,
        block_fft_implementation< 4,    4,    2,    64,    16,   767>,
        block_fft_implementation< 4,    4,    2,    64,    32,   768>,
        block_fft_implementation< 2,    2,    4,    64,    32,   770>,
        block_fft_implementation< 2,    2,    4,    64,    16,   769>
    >;
};

template<> struct block_fft_record<16, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    1,    64,     0,   771>,
        block_fft_implementation< 4,    4,    4,    64,    32,   772>,
        block_fft_implementation< 4,    4,    4,    64,    64,   773>,
        block_fft_implementation< 8,    8,    2,    64,    32,   774>,
        block_fft_implementation< 8,    8,    2,    64,    64,   775>,
        block_fft_implementation< 2,    2,    8,    64,    64,   777>,
        block_fft_implementation< 2,    2,    8,    64,    32,   776>
    >;
};

template<> struct block_fft_record<32, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,    1,    64,     0,   778>,
        block_fft_implementation< 8,    8,    4,    58,   128,   779>,
        block_fft_implementation< 8,    8,    4,    60,    64,   780>,
        block_fft_implementation< 4,    4,    8,    48,   128,   781>,
        block_fft_implementation< 4,    4,    8,    64,    64,   782>,
        block_fft_implementation< 2,    2,   16,    32,   128,   783>,
        block_fft_implementation<16,   16,    2,    54,   128,   784>,
        block_fft_implementation< 2,    2,   16,    48,    64,   785>,
        block_fft_implementation<16,   16,    2,    60,    64,   786>
    >;
};

template<> struct block_fft_record<64, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    32,   256,   787>,
        block_fft_implementation< 8,    8,    8,    32,   128,   788>,
        block_fft_implementation< 4,    4,   16,    16,   256,   789>,
        block_fft_implementation< 4,    4,   16,    24,   128,   790>,
        block_fft_implementation<16,   16,    4,    52,   256,   791>,
        block_fft_implementation<16,   16,    4,    64,   128,   792>,
        block_fft_implementation<32,   32,    2,    56,   256,   793>,
        block_fft_implementation< 2,    2,   32,    24,   256,   794>,
        block_fft_implementation<32,   32,    2,    58,   128,   796>,
        block_fft_implementation< 2,    2,   32,    16,   128,   795>
    >;
};

template<> struct block_fft_record<128, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    8,    32,   256,   797>,
        block_fft_implementation< 8,    8,   16,    16,   512,   798>,
        block_fft_implementation<16,   16,    8,    28,   512,   799>,
        block_fft_implementation< 8,    8,   16,    16,   256,   800>,
        block_fft_implementation< 4,    4,   32,     8,   512,   801>,
        block_fft_implementation<32,   32,    4,    30,   512,   803>,
        block_fft_implementation< 4,    4,   32,     8,   256,   802>,
        block_fft_implementation<32,   32,    4,    32,   256,   804>,
        block_fft_implementation< 2,    2,   64,    12,   512,   805>,
        block_fft_implementation< 2,    2,   64,     8,   256,   806>
    >;
};

template<> struct block_fft_record<256, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,     8,   512,   807>,
        block_fft_implementation< 8,    8,   32,     8,  1024,   808>,
        block_fft_implementation<16,   16,   16,    16,  1024,   810>,
        block_fft_implementation< 8,    8,   32,     4,   512,   809>,
        block_fft_implementation<32,   32,    8,    24,  1024,   811>,
        block_fft_implementation< 4,    4,   64,     4,  1024,   812>,
        block_fft_implementation<32,   32,    8,    16,   512,   814>,
        block_fft_implementation< 4,    4,   64,     4,   512,   813>,
        block_fft_implementation< 2,    2,  128,     4,  1024,   815>,
        block_fft_implementation< 2,    2,  128,     4,   512,   816>
    >;
};

template<> struct block_fft_record<512, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,   64,     4,  2048,   817>,
        block_fft_implementation<32,   32,   16,    16,  2048,   820>,
        block_fft_implementation< 8,    8,   64,     2,  1024,   818>,
        block_fft_implementation<16,   16,   32,     4,  1024,   819>,
        block_fft_implementation<32,   32,   16,     8,  1024,   821>,
        block_fft_implementation<16,   16,   32,     8,  2048,   822>,
        block_fft_implementation< 4,    4,  128,     2,  2048,   823>,
        block_fft_implementation< 4,    4,  128,     2,  1024,   824>,
        block_fft_implementation< 2,    2,  256,     2,  2048,   825>,
        block_fft_implementation< 2,    2,  256,     2,  1024,   826>
    >;
};

template<> struct block_fft_record<1024, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,   32,     8,  4096,   829>,
        block_fft_implementation<16,   16,   64,     2,  2048,   827>,
        block_fft_implementation<32,   32,   32,     4,  2048,   831>,
        block_fft_implementation< 8,    8,  128,     2,  4096,   828>,
        block_fft_implementation<16,   16,   64,     4,  4096,   832>,
        block_fft_implementation< 8,    8,  128,     2,  2048,   830>,
        block_fft_implementation< 4,    4,  256,     2,  4096,   833>,
        block_fft_implementation< 4,    4,  256,     2,  2048,   834>,
        block_fft_implementation< 2,    2,  512,     2,  4096,   835>,
        block_fft_implementation< 2,    2,  512,     2,  2048,   836>
    >;
};

template<> struct block_fft_record<2048, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  128,     2,  4096,   837>,
        block_fft_implementation< 8,    8,  256,     2,  8192,   838>,
        block_fft_implementation<16,   16,  128,     2,  8192,   840>,
        block_fft_implementation<32,   32,   64,     4,  8192,   841>,
        block_fft_implementation<32,   32,   64,     2,  4096,   842>,
        block_fft_implementation< 8,    8,  256,     2,  4096,   839>,
        block_fft_implementation< 4,    4,  512,     2,  8192,   843>,
        block_fft_implementation< 4,    4,  512,     2,  4096,   844>,
        block_fft_implementation< 2,    2, 1024,     2,  8192,   845>,
        block_fft_implementation< 2,    2, 1024,     2,  4096,   846>
    >;
};

template<> struct block_fft_record<4096, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  256,     2,  8192,   847>,
        block_fft_implementation< 8,    8,  512,     2, 16384,   848>,
        block_fft_implementation<16,   16,  256,     2, 16384,   850>,
        block_fft_implementation<32,   32,  128,     2, 16384,   851>,
        block_fft_implementation<32,   32,  128,     2,  8192,   852>,
        block_fft_implementation< 8,    8,  512,     2,  8192,   849>,
        block_fft_implementation< 4,    4, 1024,     2, 16384,   853>,
        block_fft_implementation< 4,    4, 1024,     2,  8192,   854>
    >;
};

template<> struct block_fft_record<8192, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,  256,     2, 32768,   856>,
        block_fft_implementation<16,   16,  512,     2, 32768,   859>,
        block_fft_implementation< 8,    8, 1024,     2, 32768,   858>,
        block_fft_implementation<32,   32,  256,     2, 16384,   857>,
        block_fft_implementation<16,   16,  512,     2, 16384,   855>,
        block_fft_implementation< 8,    8, 1024,     2, 16384,   860>
    >;
};

template<> struct block_fft_record<16384, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,  512,     2, 32768,   862>,
        block_fft_implementation<16,   16, 1024,     2, 32768,   861>
    >;
};

template<> struct block_fft_record<3, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 3,    3,    1,    64,     0,   863>
    >;
};

template<> struct block_fft_record<9, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    1,    64,     0,   864>,
        block_fft_implementation< 3,    3,    3,    64,    36,   865>,
        block_fft_implementation< 3,    3,    3,    64,    18,   866>
    >;
};

template<> struct block_fft_record<27, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    1,    64,     0,   867>,
        block_fft_implementation< 9,    9,    3,    42,   108,   869>,
        block_fft_implementation< 9,    9,    3,    42,    54,   868>,
        block_fft_implementation< 3,    3,    9,    42,   108,   870>,
        block_fft_implementation< 3,    3,    9,    42,    54,   871>
    >;
};

template<> struct block_fft_record<81, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    14,   324,   872>,
        block_fft_implementation<27,   27,    3,    42,   324,   875>,
        block_fft_implementation< 9,    9,    9,    14,   162,   873>,
        block_fft_implementation<27,   27,    3,    42,   162,   874>,
        block_fft_implementation< 3,    3,   27,    14,   324,   876>,
        block_fft_implementation< 3,    3,   27,    14,   162,   877>
    >;
};

template<> struct block_fft_record<243, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    9,    14,   972,   878>,
        block_fft_implementation<27,   27,    9,    14,   486,   879>,
        block_fft_implementation< 9,    9,   27,    14,   972,   880>,
        block_fft_implementation< 9,    9,   27,    14,   486,   881>,
        block_fft_implementation< 3,    3,   81,     6,   972,   882>,
        block_fft_implementation< 3,    3,   81,     6,   486,   883>
    >;
};

template<> struct block_fft_record<729, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,    28,  2916,   884>,
        block_fft_implementation<27,   27,   27,     2,  1458,   885>,
        block_fft_implementation< 9,    9,   81,     6,  2916,   886>,
        block_fft_implementation< 9,    9,   81,     6,  1458,   887>,
        block_fft_implementation< 3,    3,  243,     2,  2916,   888>,
        block_fft_implementation< 3,    3,  243,     2,  1458,   889>
    >;
};

template<> struct block_fft_record<2187, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   81,     6,  8748,   891>,
        block_fft_implementation< 9,    9,  243,     2,  8748,   890>,
        block_fft_implementation<27,   27,   81,     6,  4374,   893>,
        block_fft_implementation< 9,    9,  243,     2,  4374,   892>,
        block_fft_implementation< 3,    3,  729,     2,  8748,   894>,
        block_fft_implementation< 3,    3,  729,     2,  4374,   895>
    >;
};

template<> struct block_fft_record<6561, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,  243,     2, 26244,   897>,
        block_fft_implementation< 9,    9,  729,     2, 26244,   899>,
        block_fft_implementation<27,   27,  243,     2, 13122,   896>,
        block_fft_implementation< 9,    9,  729,     2, 13122,   898>
    >;
};

template<> struct block_fft_record<5, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    1,    64,     0,   900>
    >;
};

template<> struct block_fft_record<25, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    1,    64,     0,   901>,
        block_fft_implementation< 5,    5,    5,    50,   100,   902>,
        block_fft_implementation< 5,    5,    5,    50,    50,   903>
    >;
};

template<> struct block_fft_record<125, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    5,    50,   500,   905>,
        block_fft_implementation<25,   25,    5,    12,   250,   904>,
        block_fft_implementation< 5,    5,   25,    10,   500,   906>,
        block_fft_implementation< 5,    5,   25,    10,   250,   907>
    >;
};

template<> struct block_fft_record<625, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,    10,  2500,   909>,
        block_fft_implementation<25,   25,   25,    10,  1250,   908>,
        block_fft_implementation< 5,    5,  125,     2,  2500,   910>,
        block_fft_implementation< 5,    5,  125,     2,  1250,   911>
    >;
};

template<> struct block_fft_record<3125, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,  125,     2, 12500,   913>,
        block_fft_implementation<25,   25,  125,     2,  6250,   912>,
        block_fft_implementation< 5,    5,  625,     2, 12500,   914>,
        block_fft_implementation< 5,    5,  625,     2,  6250,   915>
    >;
};

template<> struct block_fft_record<15625, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,  625,     2, 31250,   916>
    >;
};

template<> struct block_fft_record<7, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    1,    64,     0,   917>
    >;
};

template<> struct block_fft_record<49, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,    18,   196,   918>,
        block_fft_implementation< 7,    7,    7,    18,    98,   919>
    >;
};

template<> struct block_fft_record<343, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,   49,    10,  1372,   920>,
        block_fft_implementation< 7,    7,   49,    10,   686,   921>
    >;
};

template<> struct block_fft_record<2401, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,  343,     2,  9604,   922>,
        block_fft_implementation< 7,    7,  343,     2,  4802,   923>
    >;
};

template<> struct block_fft_record<11, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,    1,    64,     0,   924>
    >;
};

template<> struct block_fft_record<121, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,    22,   484,   925>,
        block_fft_implementation<11,   11,   11,    22,   242,   926>
    >;
};

template<> struct block_fft_record<1331, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,  121,     2,  5324,   928>,
        block_fft_implementation<11,   11,  121,     2,  2662,   927>
    >;
};

template<> struct block_fft_record<6, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    1,    64,     0,   929>
    >;
};

template<> struct block_fft_record<36, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,    42,   144,   931>,
        block_fft_implementation< 6,    6,    6,    42,    72,   930>
    >;
};

template<> struct block_fft_record<216, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,   36,    14,   864,   932>,
        block_fft_implementation< 6,    6,   36,    14,   432,   933>
    >;
};

template<> struct block_fft_record<1296, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,  216,     4,  5184,   934>,
        block_fft_implementation< 6,    6,  216,     2,  2592,   935>
    >;
};

template<> struct block_fft_record<10, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,    1,    64,     0,   936>
    >;
};

template<> struct block_fft_record<100, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,     6,   400,   938>,
        block_fft_implementation<10,   10,   10,    12,   200,   937>
    >;
};

template<> struct block_fft_record<1000, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,  100,    10,  4000,   939>,
        block_fft_implementation<10,   10,  100,    10,  2000,   940>
    >;
};

template<> struct block_fft_record<10000, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10, 1000,     2, 40000,   941>,
        block_fft_implementation<10,   10, 1000,     2, 20000,   942>
    >;
};

template<> struct block_fft_record<12, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,    1,    64,     0,   943>
    >;
};

template<> struct block_fft_record<144, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,    10,   288,   945>,
        block_fft_implementation<12,   12,   12,    16,   576,   944>
    >;
};

template<> struct block_fft_record<1728, half, fft_type::c2c, fft_direction::forward, 890> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,  144,     6,  6912,   946>,
        block_fft_implementation<12,   12,  144,     4,  3456,   947>
    >;
};

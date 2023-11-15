//Copyright (c) 2019, NVIDIA CORPORATION.  All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


template<> struct block_fft_record<13, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,    1,     2,     0,   977>
    >;
};

template<> struct block_fft_record<14, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,    1,     2,     0,   978>
    >;
};

template<> struct block_fft_record<15, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,    1,     2,     0,   979>
    >;
};

template<> struct block_fft_record<17, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,    1,     2,     0,   980>
    >;
};

template<> struct block_fft_record<18, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,    1,     2,     0,   981>
    >;
};

template<> struct block_fft_record<19, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,    1,     2,     0,   982>
    >;
};

template<> struct block_fft_record<20, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,    1,     2,     0,   983>
    >;
};

template<> struct block_fft_record<21, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,    1,     2,     0,   984>
    >;
};

template<> struct block_fft_record<22, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,    1,     2,     0,   985>
    >;
};

template<> struct block_fft_record<23, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,    1,     2,     0,   986>
    >;
};

template<> struct block_fft_record<24, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,    1,     2,     0,   987>
    >;
};

template<> struct block_fft_record<26, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,    1,     2,     0,   988>
    >;
};

template<> struct block_fft_record<28, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,    1,     2,     0,   989>
    >;
};

template<> struct block_fft_record<29, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,    1,     2,     0,   990>
    >;
};

template<> struct block_fft_record<30, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,    1,     2,     0,   991>
    >;
};

template<> struct block_fft_record<31, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,    1,     2,     0,   992>
    >;
};

template<> struct block_fft_record<11, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,    1,     8,     0,   993>
    >;
};

template<> struct block_fft_record<121, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,    64,   242,   994>,
        block_fft_implementation<11,   11,   11,    64,   484,   995>
    >;
};

template<> struct block_fft_record<1331, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,  121,     2,  5324,   996>,
        block_fft_implementation<11,   11,  121,     2,  2662,   997>
    >;
};

template<> struct block_fft_record<2, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,    1,   128,     0,   998>
    >;
};

template<> struct block_fft_record<4, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 4,    4,    1,   384,     0,   999>,
        block_fft_implementation< 2,    2,    2,   192,    16,  1000>,
        block_fft_implementation< 2,    2,    2,   384,     8,  1001>
    >;
};

template<> struct block_fft_record<8, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    1,   256,     0,  1002>,
        block_fft_implementation< 4,    4,    2,   384,    16,  1003>,
        block_fft_implementation< 4,    4,    2,   384,    32,  1004>,
        block_fft_implementation< 2,    2,    4,   186,    32,  1005>,
        block_fft_implementation< 2,    2,    4,   192,    16,  1006>
    >;
};

template<> struct block_fft_record<16, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    1,    64,     0,  1007>,
        block_fft_implementation< 4,    4,    4,   192,    32,  1008>,
        block_fft_implementation< 4,    4,    4,   128,    64,  1009>,
        block_fft_implementation< 8,    8,    2,     6,    64,  1010>,
        block_fft_implementation< 8,    8,    2,   256,    32,  1011>,
        block_fft_implementation< 2,    2,    8,   186,    32,  1012>,
        block_fft_implementation< 2,    2,    8,    96,    64,  1013>
    >;
};

template<> struct block_fft_record<32, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,    1,   128,     0,  1014>,
        block_fft_implementation< 8,    8,    4,    96,   128,  1015>,
        block_fft_implementation< 8,    8,    4,   128,    64,  1016>,
        block_fft_implementation< 4,    4,    8,    64,   128,  1017>,
        block_fft_implementation< 2,    2,   16,    96,    64,  1018>,
        block_fft_implementation< 2,    2,   16,    48,   128,  1019>,
        block_fft_implementation< 4,    4,    8,    64,    64,  1020>,
        block_fft_implementation<16,   16,    2,   128,   128,  1021>,
        block_fft_implementation<16,   16,    2,     6,    64,  1022>
    >;
};

template<> struct block_fft_record<64, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    32,   256,  1023>,
        block_fft_implementation< 8,    8,    8,    32,   128,  1024>,
        block_fft_implementation< 4,    4,   16,    24,   256,  1025>,
        block_fft_implementation< 4,    4,   16,    32,   128,  1026>,
        block_fft_implementation<16,   16,    4,    64,   128,  1027>,
        block_fft_implementation<16,   16,    4,    64,   256,  1028>,
        block_fft_implementation< 2,    2,   32,     4,   256,  1029>,
        block_fft_implementation<32,   32,    2,    64,   256,  1030>,
        block_fft_implementation< 2,    2,   32,    16,   128,  1031>,
        block_fft_implementation<32,   32,    2,     4,   128,  1032>
    >;
};

template<> struct block_fft_record<128, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,    8,    16,   256,  1033>,
        block_fft_implementation< 8,    8,   16,    16,   512,  1034>,
        block_fft_implementation< 8,    8,   16,    16,   256,  1035>,
        block_fft_implementation<16,   16,    8,    16,   512,  1036>,
        block_fft_implementation< 4,    4,   32,    10,   512,  1037>,
        block_fft_implementation< 4,    4,   32,    16,   256,  1038>,
        block_fft_implementation<32,   32,    4,    16,   512,  1039>,
        block_fft_implementation<32,   32,    4,    32,   256,  1040>,
        block_fft_implementation< 2,    2,   64,    24,   512,  1041>,
        block_fft_implementation< 2,    2,   64,    16,   256,  1042>
    >;
};

template<> struct block_fft_record<256, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,     4,   512,  1043>,
        block_fft_implementation< 8,    8,   32,     4,  1024,  1044>,
        block_fft_implementation< 8,    8,   32,     8,   512,  1045>,
        block_fft_implementation<16,   16,   16,     4,  1024,  1046>,
        block_fft_implementation<32,   32,    8,     8,  1024,  1047>,
        block_fft_implementation< 4,    4,   64,     4,  1024,  1048>,
        block_fft_implementation< 4,    4,   64,     8,   512,  1049>,
        block_fft_implementation<32,   32,    8,    16,   512,  1050>,
        block_fft_implementation< 2,    2,  128,     4,  1024,  1051>,
        block_fft_implementation< 2,    2,  128,     8,   512,  1052>
    >;
};

template<> struct block_fft_record<512, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,   64,     2,  2048,  1053>,
        block_fft_implementation< 8,    8,   64,     4,  1024,  1054>,
        block_fft_implementation<16,   16,   32,     4,  1024,  1055>,
        block_fft_implementation<16,   16,   32,     4,  2048,  1056>,
        block_fft_implementation< 4,    4,  128,     2,  2048,  1057>,
        block_fft_implementation< 4,    4,  128,     2,  1024,  1058>,
        block_fft_implementation< 2,    2,  256,     6,  2048,  1059>,
        block_fft_implementation< 2,    2,  256,     2,  1024,  1060>,
        block_fft_implementation<32,   32,   16,     8,  1024,  1061>,
        block_fft_implementation<32,   32,   16,     8,  2048,  1062>
    >;
};

template<> struct block_fft_record<1024, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   64,     2,  2048,  1063>,
        block_fft_implementation< 8,    8,  128,     2,  4096,  1064>,
        block_fft_implementation< 8,    8,  128,     2,  2048,  1065>,
        block_fft_implementation<32,   32,   32,     4,  2048,  1066>,
        block_fft_implementation<32,   32,   32,     4,  4096,  1067>,
        block_fft_implementation<16,   16,   64,     2,  4096,  1068>,
        block_fft_implementation< 4,    4,  256,     2,  4096,  1069>,
        block_fft_implementation< 4,    4,  256,     2,  2048,  1070>,
        block_fft_implementation< 2,    2,  512,     2,  4096,  1071>,
        block_fft_implementation< 2,    2,  512,     2,  2048,  1072>
    >;
};

template<> struct block_fft_record<2048, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  128,     2,  4096,  1073>,
        block_fft_implementation< 8,    8,  256,     2,  8192,  1074>,
        block_fft_implementation< 8,    8,  256,     2,  4096,  1075>,
        block_fft_implementation<16,   16,  128,     2,  8192,  1076>,
        block_fft_implementation<32,   32,   64,     2,  8192,  1077>,
        block_fft_implementation<32,   32,   64,     2,  4096,  1078>,
        block_fft_implementation< 4,    4,  512,     2,  8192,  1079>,
        block_fft_implementation< 4,    4,  512,     2,  4096,  1080>,
        block_fft_implementation< 2,    2, 1024,     2,  8192,  1081>,
        block_fft_implementation< 2,    2, 1024,     2,  4096,  1082>
    >;
};

template<> struct block_fft_record<4096, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  256,     2,  8192,  1083>,
        block_fft_implementation< 8,    8,  512,     2,  8192,  1084>,
        block_fft_implementation< 8,    8,  512,     2, 16384,  1085>,
        block_fft_implementation<32,   32,  128,     2,  8192,  1086>,
        block_fft_implementation<32,   32,  128,     2, 16384,  1087>,
        block_fft_implementation<16,   16,  256,     2, 16384,  1088>,
        block_fft_implementation< 4,    4, 1024,     2, 16384,  1089>,
        block_fft_implementation< 4,    4, 1024,     2,  8192,  1090>
    >;
};

template<> struct block_fft_record<8192, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,  512,     2, 16384,  1091>,
        block_fft_implementation< 8,    8, 1024,     2, 16384,  1092>,
        block_fft_implementation< 8,    8, 1024,     2, 32768,  1093>,
        block_fft_implementation<32,   32,  256,     2, 16384,  1094>,
        block_fft_implementation<32,   32,  256,     2, 32768,  1095>,
        block_fft_implementation<16,   16,  512,     2, 32768,  1096>
    >;
};

template<> struct block_fft_record<16384, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,  512,     2, 32768,  1097>,
        block_fft_implementation<16,   16, 1024,     2, 32768,  1098>,
        block_fft_implementation<32,   32,  512,     2, 65536,  1099>,
        block_fft_implementation<16,   16, 1024,     2, 65536,  1100>
    >;
};

template<> struct block_fft_record<32768, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32, 1024,     2, 65536,  1101>,
        block_fft_implementation<32,   32, 1024,     2, 131072,  1102>
    >;
};

template<> struct block_fft_record<3, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 3,    3,    1,   128,     0,  1103>
    >;
};

template<> struct block_fft_record<9, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    1,    64,     0,  1104>,
        block_fft_implementation< 3,    3,    3,   128,    36,  1105>,
        block_fft_implementation< 3,    3,    3,   256,    18,  1106>
    >;
};

template<> struct block_fft_record<27, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    1,   128,     0,  1107>,
        block_fft_implementation< 9,    9,    3,   128,   108,  1108>,
        block_fft_implementation< 9,    9,    3,   128,    54,  1109>,
        block_fft_implementation< 3,    3,    9,    64,   108,  1110>,
        block_fft_implementation< 3,    3,    9,    64,    54,  1111>
    >;
};

template<> struct block_fft_record<81, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    32,   324,  1112>,
        block_fft_implementation< 9,    9,    9,    32,   162,  1113>,
        block_fft_implementation<27,   27,    3,    32,   324,  1114>,
        block_fft_implementation<27,   27,    3,    32,   162,  1115>,
        block_fft_implementation< 3,    3,   27,    16,   324,  1116>,
        block_fft_implementation< 3,    3,   27,    24,   162,  1117>
    >;
};

template<> struct block_fft_record<243, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,    9,     6,   972,  1118>,
        block_fft_implementation<27,   27,    9,     6,   486,  1119>,
        block_fft_implementation< 9,    9,   27,     8,   972,  1120>,
        block_fft_implementation< 9,    9,   27,     8,   486,  1121>,
        block_fft_implementation< 3,    3,   81,    16,   972,  1122>,
        block_fft_implementation< 3,    3,   81,     6,   486,  1123>
    >;
};

template<> struct block_fft_record<729, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,     4,  2916,  1124>,
        block_fft_implementation< 9,    9,   81,     6,  2916,  1125>,
        block_fft_implementation<27,   27,   27,     4,  1458,  1126>,
        block_fft_implementation< 9,    9,   81,     6,  1458,  1127>,
        block_fft_implementation< 3,    3,  243,     2,  2916,  1128>,
        block_fft_implementation< 3,    3,  243,     2,  1458,  1129>
    >;
};

template<> struct block_fft_record<2187, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,  243,     2,  8748,  1130>,
        block_fft_implementation< 9,    9,  243,     2,  4374,  1131>,
        block_fft_implementation<27,   27,   81,     2,  8748,  1132>,
        block_fft_implementation<27,   27,   81,     2,  4374,  1133>,
        block_fft_implementation< 3,    3,  729,     2,  8748,  1134>,
        block_fft_implementation< 3,    3,  729,     2,  4374,  1135>
    >;
};

template<> struct block_fft_record<6561, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,  729,     2, 13122,  1136>,
        block_fft_implementation< 9,    9,  729,     2, 26244,  1137>,
        block_fft_implementation<27,   27,  243,     2, 13122,  1138>,
        block_fft_implementation<27,   27,  243,     2, 26244,  1139>
    >;
};

template<> struct block_fft_record<19683, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,  729,     2, 39366,  1140>,
        block_fft_implementation<27,   27,  729,     2, 78732,  1141>
    >;
};

template<> struct block_fft_record<5, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    1,  1536,     0,  1142>
    >;
};

template<> struct block_fft_record<25, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    1,    64,     0,  1143>,
        block_fft_implementation< 5,    5,    5,    48,   100,  1144>,
        block_fft_implementation< 5,    5,    5,    24,    50,  1145>
    >;
};

template<> struct block_fft_record<125, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,    5,    24,   500,  1146>,
        block_fft_implementation<25,   25,    5,    24,   250,  1147>,
        block_fft_implementation< 5,    5,   25,    10,   500,  1148>,
        block_fft_implementation< 5,    5,   25,    10,   250,  1149>
    >;
};

template<> struct block_fft_record<625, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,    10,  1250,  1150>,
        block_fft_implementation<25,   25,   25,    10,  2500,  1151>,
        block_fft_implementation< 5,    5,  125,     2,  2500,  1152>,
        block_fft_implementation< 5,    5,  125,     2,  1250,  1153>
    >;
};

template<> struct block_fft_record<3125, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,  125,     2,  6250,  1154>,
        block_fft_implementation<25,   25,  125,     2, 12500,  1155>,
        block_fft_implementation< 5,    5,  625,     2, 12500,  1156>,
        block_fft_implementation< 5,    5,  625,     2,  6250,  1157>
    >;
};

template<> struct block_fft_record<15625, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,  625,     2, 31250,  1158>,
        block_fft_implementation<25,   25,  625,     2, 62500,  1159>
    >;
};

template<> struct block_fft_record<7, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    1,  1536,     0,  1160>
    >;
};

template<> struct block_fft_record<49, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,    32,   196,  1161>,
        block_fft_implementation< 7,    7,    7,    32,    98,  1162>
    >;
};

template<> struct block_fft_record<343, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,   49,    10,  1372,  1163>,
        block_fft_implementation< 7,    7,   49,    10,   686,  1164>
    >;
};

template<> struct block_fft_record<2401, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,  343,     2,  4802,  1165>,
        block_fft_implementation< 7,    7,  343,     2,  9604,  1166>
    >;
};

template<> struct block_fft_record<10, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,    1,   256,     0,  1167>
    >;
};

template<> struct block_fft_record<100, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,    24,   400,  1168>,
        block_fft_implementation<10,   10,   10,     6,   200,  1169>
    >;
};

template<> struct block_fft_record<1000, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,  100,    10,  4000,  1170>,
        block_fft_implementation<10,   10,  100,     4,  2000,  1171>
    >;
};

template<> struct block_fft_record<10000, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10, 1000,     2, 20000,  1172>,
        block_fft_implementation<10,   10, 1000,     2, 40000,  1173>
    >;
};

template<> struct block_fft_record<12, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,    1,  2048,     0,  1174>
    >;
};

template<> struct block_fft_record<144, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,    10,   576,  1175>,
        block_fft_implementation<12,   12,   12,    10,   288,  1176>
    >;
};

template<> struct block_fft_record<1728, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,  144,     2,  6912,  1177>,
        block_fft_implementation<12,   12,  144,     2,  3456,  1178>
    >;
};

template<> struct block_fft_record<6, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    1,  1536,     0,  1179>
    >;
};

template<> struct block_fft_record<36, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,   128,   144,  1180>,
        block_fft_implementation< 6,    6,    6,    64,    72,  1181>
    >;
};

template<> struct block_fft_record<216, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,   36,     8,   864,  1182>,
        block_fft_implementation< 6,    6,   36,    16,   432,  1183>
    >;
};

template<> struct block_fft_record<1296, half, fft_type::c2c, fft_direction::inverse, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,  216,     2,  5184,  1184>,
        block_fft_implementation< 6,    6,  216,     2,  2592,  1185>
    >;
};

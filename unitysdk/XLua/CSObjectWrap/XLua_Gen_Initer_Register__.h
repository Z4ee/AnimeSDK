#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class LuaEnv; }
namespace XLua { class ObjectTranslator; }

#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INIT_OFFSET UNITYSDK_OFFSET(0xFE7B4F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT0_OFFSET UNITYSDK_OFFSET(0xFD10E50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT100_OFFSET UNITYSDK_OFFSET(0xFDE5CD0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT101_OFFSET UNITYSDK_OFFSET(0xFDE7EE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT102_OFFSET UNITYSDK_OFFSET(0xFDEA0F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT103_OFFSET UNITYSDK_OFFSET(0xFDEC300)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT104_OFFSET UNITYSDK_OFFSET(0xFDEE510)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT105_OFFSET UNITYSDK_OFFSET(0xFDF0720)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT106_OFFSET UNITYSDK_OFFSET(0xFDF2930)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT107_OFFSET UNITYSDK_OFFSET(0xFDF4B40)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT108_OFFSET UNITYSDK_OFFSET(0xFDF6D50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT109_OFFSET UNITYSDK_OFFSET(0xFDF8F60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT10_OFFSET UNITYSDK_OFFSET(0xFD262F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT110_OFFSET UNITYSDK_OFFSET(0xFDFB170)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT111_OFFSET UNITYSDK_OFFSET(0xFDFD380)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT112_OFFSET UNITYSDK_OFFSET(0xFDFF590)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT113_OFFSET UNITYSDK_OFFSET(0xFE017A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT114_OFFSET UNITYSDK_OFFSET(0xFE039B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT115_OFFSET UNITYSDK_OFFSET(0xFE05B10)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT116_OFFSET UNITYSDK_OFFSET(0xFE07D20)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT117_OFFSET UNITYSDK_OFFSET(0xFE09F30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT118_OFFSET UNITYSDK_OFFSET(0xFE0C140)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT119_OFFSET UNITYSDK_OFFSET(0xFE0E350)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT11_OFFSET UNITYSDK_OFFSET(0xFD28500)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT120_OFFSET UNITYSDK_OFFSET(0xFE10560)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT121_OFFSET UNITYSDK_OFFSET(0xFE12770)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT122_OFFSET UNITYSDK_OFFSET(0xFE14980)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT123_OFFSET UNITYSDK_OFFSET(0xFE16B90)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT124_OFFSET UNITYSDK_OFFSET(0xFE18DA0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT125_OFFSET UNITYSDK_OFFSET(0xFE1AFB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT126_OFFSET UNITYSDK_OFFSET(0xFE1D1C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT127_OFFSET UNITYSDK_OFFSET(0xFE1F3D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT128_OFFSET UNITYSDK_OFFSET(0xFE215E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT129_OFFSET UNITYSDK_OFFSET(0xFE237F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT12_OFFSET UNITYSDK_OFFSET(0xFD2A710)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT130_OFFSET UNITYSDK_OFFSET(0xFE25A00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT131_OFFSET UNITYSDK_OFFSET(0xFE27C10)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT132_OFFSET UNITYSDK_OFFSET(0xFE29E20)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT133_OFFSET UNITYSDK_OFFSET(0xFE2C030)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT134_OFFSET UNITYSDK_OFFSET(0xFE2E240)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT135_OFFSET UNITYSDK_OFFSET(0xFE30450)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT136_OFFSET UNITYSDK_OFFSET(0xFE32660)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT137_OFFSET UNITYSDK_OFFSET(0xFE34870)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT138_OFFSET UNITYSDK_OFFSET(0xFE36A80)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT139_OFFSET UNITYSDK_OFFSET(0xFE38C90)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT13_OFFSET UNITYSDK_OFFSET(0xFD2C940)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT140_OFFSET UNITYSDK_OFFSET(0xFE3AEA0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT141_OFFSET UNITYSDK_OFFSET(0xFE3D0B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT142_OFFSET UNITYSDK_OFFSET(0xFE3F2C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT143_OFFSET UNITYSDK_OFFSET(0xFE414D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT144_OFFSET UNITYSDK_OFFSET(0xFE436E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT145_OFFSET UNITYSDK_OFFSET(0xFE458F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT146_OFFSET UNITYSDK_OFFSET(0xFE47B00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT147_OFFSET UNITYSDK_OFFSET(0xFE49D10)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT148_OFFSET UNITYSDK_OFFSET(0xFE4BF20)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT149_OFFSET UNITYSDK_OFFSET(0xFE4E130)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT14_OFFSET UNITYSDK_OFFSET(0xFD2EB50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT150_OFFSET UNITYSDK_OFFSET(0xFE50340)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT151_OFFSET UNITYSDK_OFFSET(0xFE52550)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT152_OFFSET UNITYSDK_OFFSET(0xFE54760)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT153_OFFSET UNITYSDK_OFFSET(0xFE56970)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT154_OFFSET UNITYSDK_OFFSET(0xFE58B80)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT155_OFFSET UNITYSDK_OFFSET(0xFE5ADB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT156_OFFSET UNITYSDK_OFFSET(0xFE5CFC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT157_OFFSET UNITYSDK_OFFSET(0xFE5F1D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT158_OFFSET UNITYSDK_OFFSET(0xFE613E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT159_OFFSET UNITYSDK_OFFSET(0xFE635F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT15_OFFSET UNITYSDK_OFFSET(0xFD30D60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT160_OFFSET UNITYSDK_OFFSET(0xFE65800)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT161_OFFSET UNITYSDK_OFFSET(0xFE67A10)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT162_OFFSET UNITYSDK_OFFSET(0xFE69C20)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT163_OFFSET UNITYSDK_OFFSET(0xFE6BE30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT164_OFFSET UNITYSDK_OFFSET(0xFE6E040)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT165_OFFSET UNITYSDK_OFFSET(0xFE70250)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT166_OFFSET UNITYSDK_OFFSET(0xFE72460)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT167_OFFSET UNITYSDK_OFFSET(0xFE74670)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT168_OFFSET UNITYSDK_OFFSET(0xFE76880)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT169_OFFSET UNITYSDK_OFFSET(0xFE78AB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT16_OFFSET UNITYSDK_OFFSET(0xFD32F70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT170_OFFSET UNITYSDK_OFFSET(0xFE7ACC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT17_OFFSET UNITYSDK_OFFSET(0xFD35180)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT18_OFFSET UNITYSDK_OFFSET(0xFD37390)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT19_OFFSET UNITYSDK_OFFSET(0xFD395A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT1_OFFSET UNITYSDK_OFFSET(0xFD13060)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT20_OFFSET UNITYSDK_OFFSET(0xFD3B7B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT21_OFFSET UNITYSDK_OFFSET(0xFD3D9C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT22_OFFSET UNITYSDK_OFFSET(0xFD3FBF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT23_OFFSET UNITYSDK_OFFSET(0xFD41E00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT24_OFFSET UNITYSDK_OFFSET(0xFD44010)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT25_OFFSET UNITYSDK_OFFSET(0xFD46220)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT26_OFFSET UNITYSDK_OFFSET(0xFD48430)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT27_OFFSET UNITYSDK_OFFSET(0xFD4A640)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT28_OFFSET UNITYSDK_OFFSET(0xFD4C850)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT29_OFFSET UNITYSDK_OFFSET(0xFD4EA60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT2_OFFSET UNITYSDK_OFFSET(0xFD15270)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT30_OFFSET UNITYSDK_OFFSET(0xFD50C70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT31_OFFSET UNITYSDK_OFFSET(0xFD52E80)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT32_OFFSET UNITYSDK_OFFSET(0xFD55090)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT33_OFFSET UNITYSDK_OFFSET(0xFD572A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT34_OFFSET UNITYSDK_OFFSET(0xFD594B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT35_OFFSET UNITYSDK_OFFSET(0xFD5B6C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT36_OFFSET UNITYSDK_OFFSET(0xFD5D8D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT37_OFFSET UNITYSDK_OFFSET(0xFD5FAE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT38_OFFSET UNITYSDK_OFFSET(0xFD61CF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT39_OFFSET UNITYSDK_OFFSET(0xFD63F00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT3_OFFSET UNITYSDK_OFFSET(0xFD17480)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT40_OFFSET UNITYSDK_OFFSET(0xFD66110)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT41_OFFSET UNITYSDK_OFFSET(0xFD68320)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT42_OFFSET UNITYSDK_OFFSET(0xFD6A530)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT43_OFFSET UNITYSDK_OFFSET(0xFD6C740)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT44_OFFSET UNITYSDK_OFFSET(0xFD6E950)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT45_OFFSET UNITYSDK_OFFSET(0xFD70B60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT46_OFFSET UNITYSDK_OFFSET(0xFD72D70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT47_OFFSET UNITYSDK_OFFSET(0xFD74F80)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT48_OFFSET UNITYSDK_OFFSET(0xFD77190)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT49_OFFSET UNITYSDK_OFFSET(0xFD793A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT4_OFFSET UNITYSDK_OFFSET(0xFD19690)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT50_OFFSET UNITYSDK_OFFSET(0xFD7B5B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT51_OFFSET UNITYSDK_OFFSET(0xFD7D7C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT52_OFFSET UNITYSDK_OFFSET(0xFD7F9D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT53_OFFSET UNITYSDK_OFFSET(0xFD81BE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT54_OFFSET UNITYSDK_OFFSET(0xFD83DF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT55_OFFSET UNITYSDK_OFFSET(0xFD86000)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT56_OFFSET UNITYSDK_OFFSET(0xFD88210)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT57_OFFSET UNITYSDK_OFFSET(0xFD8A420)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT58_OFFSET UNITYSDK_OFFSET(0xFD8C630)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT59_OFFSET UNITYSDK_OFFSET(0xFD8E840)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT5_OFFSET UNITYSDK_OFFSET(0xFD1B8A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT60_OFFSET UNITYSDK_OFFSET(0xFD90A50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT61_OFFSET UNITYSDK_OFFSET(0xFD92C60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT62_OFFSET UNITYSDK_OFFSET(0xFD94E70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT63_OFFSET UNITYSDK_OFFSET(0xFD97080)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT64_OFFSET UNITYSDK_OFFSET(0xFD99290)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT65_OFFSET UNITYSDK_OFFSET(0xFD9B4A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT66_OFFSET UNITYSDK_OFFSET(0xFD9D6B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT67_OFFSET UNITYSDK_OFFSET(0xFD9F8C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT68_OFFSET UNITYSDK_OFFSET(0xFDA1AD0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT69_OFFSET UNITYSDK_OFFSET(0xFDA3CE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT6_OFFSET UNITYSDK_OFFSET(0xFD1DAB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT70_OFFSET UNITYSDK_OFFSET(0xFDA5EF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT71_OFFSET UNITYSDK_OFFSET(0xFDA8100)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT72_OFFSET UNITYSDK_OFFSET(0xFDAA310)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT73_OFFSET UNITYSDK_OFFSET(0xFDAC520)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT74_OFFSET UNITYSDK_OFFSET(0xFDAE730)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT75_OFFSET UNITYSDK_OFFSET(0xFDB0940)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT76_OFFSET UNITYSDK_OFFSET(0xFDB2B50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT77_OFFSET UNITYSDK_OFFSET(0xFDB4D60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT78_OFFSET UNITYSDK_OFFSET(0xFDB6F70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT79_OFFSET UNITYSDK_OFFSET(0xFDB9180)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT7_OFFSET UNITYSDK_OFFSET(0xFD1FCC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT80_OFFSET UNITYSDK_OFFSET(0xFDBB390)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT81_OFFSET UNITYSDK_OFFSET(0xFDBD5A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT82_OFFSET UNITYSDK_OFFSET(0xFDBF7B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT83_OFFSET UNITYSDK_OFFSET(0xFDC19C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT84_OFFSET UNITYSDK_OFFSET(0xFDC3BD0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT85_OFFSET UNITYSDK_OFFSET(0xFDC5DE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT86_OFFSET UNITYSDK_OFFSET(0xFDC7FF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT87_OFFSET UNITYSDK_OFFSET(0xFDCA200)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT88_OFFSET UNITYSDK_OFFSET(0xFDCC410)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT89_OFFSET UNITYSDK_OFFSET(0xFDCE620)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT8_OFFSET UNITYSDK_OFFSET(0xFD21ED0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT90_OFFSET UNITYSDK_OFFSET(0xFDD0830)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT91_OFFSET UNITYSDK_OFFSET(0xFDD2A40)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT92_OFFSET UNITYSDK_OFFSET(0xFDD4C50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT93_OFFSET UNITYSDK_OFFSET(0xFDD6E60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT94_OFFSET UNITYSDK_OFFSET(0xFDD9070)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT95_OFFSET UNITYSDK_OFFSET(0xFDDB280)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT96_OFFSET UNITYSDK_OFFSET(0xFDDD490)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT97_OFFSET UNITYSDK_OFFSET(0xFDDF6A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT98_OFFSET UNITYSDK_OFFSET(0xFDE18B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT99_OFFSET UNITYSDK_OFFSET(0xFDE3AC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT9_OFFSET UNITYSDK_OFFSET(0xFD240E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CCTOR_OFFSET UNITYSDK_OFFSET(0xFE7C110)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CTOR_OFFSET UNITYSDK_OFFSET(0xFE7C170)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int XLua_Gen_Initer_Register___TypeDefinitionIndex = 41800;

	class XLua_Gen_Initer_Register__ : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CTOR_OFFSET))(this);
		}

		static ::System::Void wrapInit0(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT0_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit1(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT1_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit2(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT2_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit3(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT3_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit4(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT4_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit5(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT5_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit6(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT6_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit7(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT7_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit8(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT8_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit9(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT9_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit10(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT10_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit11(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT11_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit12(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT12_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit13(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT13_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit14(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT14_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit15(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT15_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit16(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT16_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit17(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT17_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit18(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT18_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit19(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT19_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit20(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT20_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit21(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT21_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit22(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT22_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit23(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT23_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit24(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT24_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit25(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT25_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit26(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT26_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit27(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT27_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit28(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT28_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit29(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT29_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit30(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT30_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit31(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT31_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit32(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT32_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit33(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT33_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit34(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT34_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit35(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT35_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit36(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT36_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit37(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT37_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit38(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT38_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit39(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT39_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit40(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT40_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit41(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT41_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit42(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT42_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit43(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT43_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit44(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT44_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit45(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT45_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit46(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT46_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit47(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT47_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit48(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT48_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit49(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT49_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit50(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT50_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit51(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT51_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit52(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT52_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit53(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT53_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit54(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT54_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit55(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT55_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit56(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT56_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit57(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT57_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit58(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT58_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit59(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT59_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit60(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT60_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit61(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT61_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit62(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT62_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit63(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT63_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit64(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT64_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit65(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT65_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit66(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT66_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit67(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT67_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit68(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT68_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit69(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT69_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit70(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT70_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit71(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT71_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit72(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT72_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit73(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT73_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit74(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT74_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit75(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT75_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit76(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT76_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit77(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT77_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit78(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT78_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit79(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT79_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit80(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT80_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit81(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT81_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit82(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT82_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit83(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT83_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit84(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT84_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit85(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT85_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit86(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT86_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit87(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT87_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit88(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT88_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit89(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT89_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit90(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT90_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit91(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT91_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit92(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT92_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit93(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT93_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit94(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT94_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit95(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT95_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit96(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT96_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit97(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT97_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit98(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT98_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit99(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT99_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit100(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT100_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit101(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT101_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit102(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT102_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit103(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT103_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit104(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT104_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit105(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT105_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit106(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT106_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit107(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT107_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit108(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT108_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit109(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT109_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit110(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT110_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit111(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT111_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit112(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT112_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit113(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT113_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit114(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT114_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit115(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT115_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit116(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT116_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit117(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT117_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit118(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT118_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit119(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT119_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit120(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT120_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit121(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT121_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit122(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT122_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit123(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT123_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit124(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT124_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit125(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT125_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit126(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT126_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit127(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT127_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit128(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT128_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit129(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT129_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit130(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT130_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit131(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT131_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit132(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT132_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit133(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT133_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit134(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT134_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit135(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT135_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit136(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT136_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit137(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT137_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit138(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT138_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit139(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT139_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit140(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT140_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit141(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT141_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit142(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT142_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit143(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT143_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit144(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT144_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit145(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT145_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit146(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT146_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit147(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT147_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit148(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT148_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit149(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT149_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit150(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT150_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit151(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT151_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit152(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT152_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit153(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT153_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit154(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT154_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit155(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT155_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit156(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT156_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit157(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT157_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit158(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT158_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit159(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT159_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit160(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT160_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit161(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT161_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit162(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT162_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit163(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT163_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit164(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT164_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit165(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT165_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit166(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT166_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit167(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT167_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit168(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT168_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit169(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT169_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit170(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT170_OFFSET))(luaenv, translator);
		}

		static ::System::Void Init(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INIT_OFFSET))(luaenv, translator);
		}
	};
}

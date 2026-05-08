#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Base64FormattingOptions.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class IConvertible; }
namespace System { class IFormatProvider; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_CONVERT_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x18B82890)
#define SYSTEM_CONVERT_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x18B82940)
#define SYSTEM_CONVERT_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x18B810E0)
#define SYSTEM_CONVERT_CONVERTTOBASE64ARRAY_OFFSET UNITYSDK_OFFSET(0x18B8A1D0)
#define SYSTEM_CONVERT_DEFAULTTOTYPE_OFFSET UNITYSDK_OFFSET(0x18B81BB0)
#define SYSTEM_CONVERT_FROMBASE64CHARARRAY_OFFSET UNITYSDK_OFFSET(0x18B8A9E0)
#define SYSTEM_CONVERT_FROMBASE64CHARPTR_OFFSET UNITYSDK_OFFSET(0x18B8A900)
#define SYSTEM_CONVERT_FROMBASE64STRING_OFFSET UNITYSDK_OFFSET(0x18B8A7B0)
#define SYSTEM_CONVERT_FROMBASE64_COMPUTERESULTLENGTH_OFFSET UNITYSDK_OFFSET(0x18B8AC20)
#define SYSTEM_CONVERT_FROMBASE64_DECODE_OFFSET UNITYSDK_OFFSET(0x18B8ACD0)
#define SYSTEM_CONVERT_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x18B80FF0)
#define SYSTEM_CONVERT_TOBASE64CHARARRAY_1_OFFSET UNITYSDK_OFFSET(0x18B8A3F0)
#define SYSTEM_CONVERT_TOBASE64CHARARRAY_OFFSET UNITYSDK_OFFSET(0x18B8A3D0)
#define SYSTEM_CONVERT_TOBASE64STRING_1_OFFSET UNITYSDK_OFFSET(0x18B8A040)
#define SYSTEM_CONVERT_TOBASE64STRING_2_OFFSET UNITYSDK_OFFSET(0x18B8A0C0)
#define SYSTEM_CONVERT_TOBASE64STRING_3_OFFSET UNITYSDK_OFFSET(0x18B89D10)
#define SYSTEM_CONVERT_TOBASE64STRING_OFFSET UNITYSDK_OFFSET(0x18B89CA0)
#define SYSTEM_CONVERT_TOBASE64_CALCULATEANDVALIDATEOUTPUTLENGTH_OFFSET UNITYSDK_OFFSET(0x18B8A0D0)
#define SYSTEM_CONVERT_TOBOOLEAN_10_OFFSET UNITYSDK_OFFSET(0x18B83760)
#define SYSTEM_CONVERT_TOBOOLEAN_11_OFFSET UNITYSDK_OFFSET(0x18B837C0)
#define SYSTEM_CONVERT_TOBOOLEAN_12_OFFSET UNITYSDK_OFFSET(0x18B83820)
#define SYSTEM_CONVERT_TOBOOLEAN_13_OFFSET UNITYSDK_OFFSET(0x18B83830)
#define SYSTEM_CONVERT_TOBOOLEAN_14_OFFSET UNITYSDK_OFFSET(0x18B83850)
#define SYSTEM_CONVERT_TOBOOLEAN_1_OFFSET UNITYSDK_OFFSET(0x18B835C0)
#define SYSTEM_CONVERT_TOBOOLEAN_2_OFFSET UNITYSDK_OFFSET(0x18B836E0)
#define SYSTEM_CONVERT_TOBOOLEAN_3_OFFSET UNITYSDK_OFFSET(0x18B836F0)
#define SYSTEM_CONVERT_TOBOOLEAN_4_OFFSET UNITYSDK_OFFSET(0x18B83700)
#define SYSTEM_CONVERT_TOBOOLEAN_5_OFFSET UNITYSDK_OFFSET(0x18B83710)
#define SYSTEM_CONVERT_TOBOOLEAN_6_OFFSET UNITYSDK_OFFSET(0x18B83720)
#define SYSTEM_CONVERT_TOBOOLEAN_7_OFFSET UNITYSDK_OFFSET(0x18B83730)
#define SYSTEM_CONVERT_TOBOOLEAN_8_OFFSET UNITYSDK_OFFSET(0x18B83740)
#define SYSTEM_CONVERT_TOBOOLEAN_9_OFFSET UNITYSDK_OFFSET(0x18B83750)
#define SYSTEM_CONVERT_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x18B834A0)
#define SYSTEM_CONVERT_TOBYTE_10_OFFSET UNITYSDK_OFFSET(0x18B84D90)
#define SYSTEM_CONVERT_TOBYTE_11_OFFSET UNITYSDK_OFFSET(0x18B84E00)
#define SYSTEM_CONVERT_TOBYTE_12_OFFSET UNITYSDK_OFFSET(0x18B84E80)
#define SYSTEM_CONVERT_TOBYTE_13_OFFSET UNITYSDK_OFFSET(0x18B84F00)
#define SYSTEM_CONVERT_TOBYTE_14_OFFSET UNITYSDK_OFFSET(0x18B84FD0)
#define SYSTEM_CONVERT_TOBYTE_15_OFFSET UNITYSDK_OFFSET(0x18B85010)
#define SYSTEM_CONVERT_TOBYTE_16_OFFSET UNITYSDK_OFFSET(0x18B89480)
#define SYSTEM_CONVERT_TOBYTE_1_OFFSET UNITYSDK_OFFSET(0x18B84940)
#define SYSTEM_CONVERT_TOBYTE_2_OFFSET UNITYSDK_OFFSET(0x18B84A70)
#define SYSTEM_CONVERT_TOBYTE_3_OFFSET UNITYSDK_OFFSET(0x18B84A80)
#define SYSTEM_CONVERT_TOBYTE_4_OFFSET UNITYSDK_OFFSET(0x18B84AF0)
#define SYSTEM_CONVERT_TOBYTE_5_OFFSET UNITYSDK_OFFSET(0x18B84B60)
#define SYSTEM_CONVERT_TOBYTE_6_OFFSET UNITYSDK_OFFSET(0x18B84BD0)
#define SYSTEM_CONVERT_TOBYTE_7_OFFSET UNITYSDK_OFFSET(0x18B84C40)
#define SYSTEM_CONVERT_TOBYTE_8_OFFSET UNITYSDK_OFFSET(0x18B84CB0)
#define SYSTEM_CONVERT_TOBYTE_9_OFFSET UNITYSDK_OFFSET(0x18B84D20)
#define SYSTEM_CONVERT_TOBYTE_OFFSET UNITYSDK_OFFSET(0x18B84820)
#define SYSTEM_CONVERT_TOCHAR_10_OFFSET UNITYSDK_OFFSET(0x18B83E20)
#define SYSTEM_CONVERT_TOCHAR_11_OFFSET UNITYSDK_OFFSET(0x18B83E30)
#define SYSTEM_CONVERT_TOCHAR_1_OFFSET UNITYSDK_OFFSET(0x18B83A30)
#define SYSTEM_CONVERT_TOCHAR_2_OFFSET UNITYSDK_OFFSET(0x18B83B60)
#define SYSTEM_CONVERT_TOCHAR_3_OFFSET UNITYSDK_OFFSET(0x18B83BD0)
#define SYSTEM_CONVERT_TOCHAR_4_OFFSET UNITYSDK_OFFSET(0x18B83BE0)
#define SYSTEM_CONVERT_TOCHAR_5_OFFSET UNITYSDK_OFFSET(0x18B83C50)
#define SYSTEM_CONVERT_TOCHAR_6_OFFSET UNITYSDK_OFFSET(0x18B83C60)
#define SYSTEM_CONVERT_TOCHAR_7_OFFSET UNITYSDK_OFFSET(0x18B83CD0)
#define SYSTEM_CONVERT_TOCHAR_8_OFFSET UNITYSDK_OFFSET(0x18B83D40)
#define SYSTEM_CONVERT_TOCHAR_9_OFFSET UNITYSDK_OFFSET(0x18B83DB0)
#define SYSTEM_CONVERT_TOCHAR_OFFSET UNITYSDK_OFFSET(0x18B83910)
#define SYSTEM_CONVERT_TODATETIME_1_OFFSET UNITYSDK_OFFSET(0x18B88E70)
#define SYSTEM_CONVERT_TODATETIME_2_OFFSET UNITYSDK_OFFSET(0x18B88F30)
#define SYSTEM_CONVERT_TODATETIME_OFFSET UNITYSDK_OFFSET(0x18B88D40)
#define SYSTEM_CONVERT_TODECIMAL_10_OFFSET UNITYSDK_OFFSET(0x18B88A50)
#define SYSTEM_CONVERT_TODECIMAL_11_OFFSET UNITYSDK_OFFSET(0x18B88AD0)
#define SYSTEM_CONVERT_TODECIMAL_12_OFFSET UNITYSDK_OFFSET(0x18B88B50)
#define SYSTEM_CONVERT_TODECIMAL_13_OFFSET UNITYSDK_OFFSET(0x18B88C00)
#define SYSTEM_CONVERT_TODECIMAL_14_OFFSET UNITYSDK_OFFSET(0x18B88CD0)
#define SYSTEM_CONVERT_TODECIMAL_1_OFFSET UNITYSDK_OFFSET(0x18B88530)
#define SYSTEM_CONVERT_TODECIMAL_2_OFFSET UNITYSDK_OFFSET(0x18B88690)
#define SYSTEM_CONVERT_TODECIMAL_3_OFFSET UNITYSDK_OFFSET(0x18B88710)
#define SYSTEM_CONVERT_TODECIMAL_4_OFFSET UNITYSDK_OFFSET(0x18B88780)
#define SYSTEM_CONVERT_TODECIMAL_5_OFFSET UNITYSDK_OFFSET(0x18B88800)
#define SYSTEM_CONVERT_TODECIMAL_6_OFFSET UNITYSDK_OFFSET(0x18B88870)
#define SYSTEM_CONVERT_TODECIMAL_7_OFFSET UNITYSDK_OFFSET(0x18B888F0)
#define SYSTEM_CONVERT_TODECIMAL_8_OFFSET UNITYSDK_OFFSET(0x18B88960)
#define SYSTEM_CONVERT_TODECIMAL_9_OFFSET UNITYSDK_OFFSET(0x18B889E0)
#define SYSTEM_CONVERT_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x18B883E0)
#define SYSTEM_CONVERT_TODOUBLE_10_OFFSET UNITYSDK_OFFSET(0x18B881E0)
#define SYSTEM_CONVERT_TODOUBLE_11_OFFSET UNITYSDK_OFFSET(0x18B881F0)
#define SYSTEM_CONVERT_TODOUBLE_12_OFFSET UNITYSDK_OFFSET(0x18B88320)
#define SYSTEM_CONVERT_TODOUBLE_13_OFFSET UNITYSDK_OFFSET(0x18B88360)
#define SYSTEM_CONVERT_TODOUBLE_14_OFFSET UNITYSDK_OFFSET(0x18B883C0)
#define SYSTEM_CONVERT_TODOUBLE_1_OFFSET UNITYSDK_OFFSET(0x18B88010)
#define SYSTEM_CONVERT_TODOUBLE_2_OFFSET UNITYSDK_OFFSET(0x18B88140)
#define SYSTEM_CONVERT_TODOUBLE_3_OFFSET UNITYSDK_OFFSET(0x18B88150)
#define SYSTEM_CONVERT_TODOUBLE_4_OFFSET UNITYSDK_OFFSET(0x18B88160)
#define SYSTEM_CONVERT_TODOUBLE_5_OFFSET UNITYSDK_OFFSET(0x18B88170)
#define SYSTEM_CONVERT_TODOUBLE_6_OFFSET UNITYSDK_OFFSET(0x18B88180)
#define SYSTEM_CONVERT_TODOUBLE_7_OFFSET UNITYSDK_OFFSET(0x18B88190)
#define SYSTEM_CONVERT_TODOUBLE_8_OFFSET UNITYSDK_OFFSET(0x18B881A0)
#define SYSTEM_CONVERT_TODOUBLE_9_OFFSET UNITYSDK_OFFSET(0x18B881B0)
#define SYSTEM_CONVERT_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x18B87EF0)
#define SYSTEM_CONVERT_TOINT16_10_OFFSET UNITYSDK_OFFSET(0x18B85520)
#define SYSTEM_CONVERT_TOINT16_11_OFFSET UNITYSDK_OFFSET(0x18B85590)
#define SYSTEM_CONVERT_TOINT16_12_OFFSET UNITYSDK_OFFSET(0x18B85610)
#define SYSTEM_CONVERT_TOINT16_13_OFFSET UNITYSDK_OFFSET(0x18B85680)
#define SYSTEM_CONVERT_TOINT16_14_OFFSET UNITYSDK_OFFSET(0x18B85750)
#define SYSTEM_CONVERT_TOINT16_15_OFFSET UNITYSDK_OFFSET(0x18B85790)
#define SYSTEM_CONVERT_TOINT16_16_OFFSET UNITYSDK_OFFSET(0x18B89630)
#define SYSTEM_CONVERT_TOINT16_1_OFFSET UNITYSDK_OFFSET(0x18B85190)
#define SYSTEM_CONVERT_TOINT16_2_OFFSET UNITYSDK_OFFSET(0x18B852C0)
#define SYSTEM_CONVERT_TOINT16_3_OFFSET UNITYSDK_OFFSET(0x18B852D0)
#define SYSTEM_CONVERT_TOINT16_4_OFFSET UNITYSDK_OFFSET(0x18B85340)
#define SYSTEM_CONVERT_TOINT16_5_OFFSET UNITYSDK_OFFSET(0x18B85350)
#define SYSTEM_CONVERT_TOINT16_6_OFFSET UNITYSDK_OFFSET(0x18B85360)
#define SYSTEM_CONVERT_TOINT16_7_OFFSET UNITYSDK_OFFSET(0x18B853D0)
#define SYSTEM_CONVERT_TOINT16_8_OFFSET UNITYSDK_OFFSET(0x18B85440)
#define SYSTEM_CONVERT_TOINT16_9_OFFSET UNITYSDK_OFFSET(0x18B854B0)
#define SYSTEM_CONVERT_TOINT16_OFFSET UNITYSDK_OFFSET(0x18B85070)
#define SYSTEM_CONVERT_TOINT32_10_OFFSET UNITYSDK_OFFSET(0x18B86270)
#define SYSTEM_CONVERT_TOINT32_11_OFFSET UNITYSDK_OFFSET(0x18B862E0)
#define SYSTEM_CONVERT_TOINT32_12_OFFSET UNITYSDK_OFFSET(0x18B86350)
#define SYSTEM_CONVERT_TOINT32_13_OFFSET UNITYSDK_OFFSET(0x18B84600)
#define SYSTEM_CONVERT_TOINT32_14_OFFSET UNITYSDK_OFFSET(0x18B86360)
#define SYSTEM_CONVERT_TOINT32_15_OFFSET UNITYSDK_OFFSET(0x18B863C0)
#define SYSTEM_CONVERT_TOINT32_16_OFFSET UNITYSDK_OFFSET(0x18B86400)
#define SYSTEM_CONVERT_TOINT32_17_OFFSET UNITYSDK_OFFSET(0x18B897E0)
#define SYSTEM_CONVERT_TOINT32_1_OFFSET UNITYSDK_OFFSET(0x18B86060)
#define SYSTEM_CONVERT_TOINT32_2_OFFSET UNITYSDK_OFFSET(0x18B86190)
#define SYSTEM_CONVERT_TOINT32_3_OFFSET UNITYSDK_OFFSET(0x18B861A0)
#define SYSTEM_CONVERT_TOINT32_4_OFFSET UNITYSDK_OFFSET(0x18B861B0)
#define SYSTEM_CONVERT_TOINT32_5_OFFSET UNITYSDK_OFFSET(0x18B861C0)
#define SYSTEM_CONVERT_TOINT32_6_OFFSET UNITYSDK_OFFSET(0x18B861D0)
#define SYSTEM_CONVERT_TOINT32_7_OFFSET UNITYSDK_OFFSET(0x18B861E0)
#define SYSTEM_CONVERT_TOINT32_8_OFFSET UNITYSDK_OFFSET(0x18B861F0)
#define SYSTEM_CONVERT_TOINT32_9_OFFSET UNITYSDK_OFFSET(0x18B86260)
#define SYSTEM_CONVERT_TOINT32_OFFSET UNITYSDK_OFFSET(0x18B85F40)
#define SYSTEM_CONVERT_TOINT64_10_OFFSET UNITYSDK_OFFSET(0x18B86EE0)
#define SYSTEM_CONVERT_TOINT64_11_OFFSET UNITYSDK_OFFSET(0x18B86F50)
#define SYSTEM_CONVERT_TOINT64_12_OFFSET UNITYSDK_OFFSET(0x18B87020)
#define SYSTEM_CONVERT_TOINT64_13_OFFSET UNITYSDK_OFFSET(0x18B870E0)
#define SYSTEM_CONVERT_TOINT64_14_OFFSET UNITYSDK_OFFSET(0x18B871B0)
#define SYSTEM_CONVERT_TOINT64_15_OFFSET UNITYSDK_OFFSET(0x18B871F0)
#define SYSTEM_CONVERT_TOINT64_16_OFFSET UNITYSDK_OFFSET(0x18B89900)
#define SYSTEM_CONVERT_TOINT64_1_OFFSET UNITYSDK_OFFSET(0x18B86D30)
#define SYSTEM_CONVERT_TOINT64_2_OFFSET UNITYSDK_OFFSET(0x18B86E60)
#define SYSTEM_CONVERT_TOINT64_3_OFFSET UNITYSDK_OFFSET(0x18B86E70)
#define SYSTEM_CONVERT_TOINT64_4_OFFSET UNITYSDK_OFFSET(0x18B86E80)
#define SYSTEM_CONVERT_TOINT64_5_OFFSET UNITYSDK_OFFSET(0x18B86E90)
#define SYSTEM_CONVERT_TOINT64_6_OFFSET UNITYSDK_OFFSET(0x18B86EA0)
#define SYSTEM_CONVERT_TOINT64_7_OFFSET UNITYSDK_OFFSET(0x18B86EB0)
#define SYSTEM_CONVERT_TOINT64_8_OFFSET UNITYSDK_OFFSET(0x18B86EC0)
#define SYSTEM_CONVERT_TOINT64_9_OFFSET UNITYSDK_OFFSET(0x18B86ED0)
#define SYSTEM_CONVERT_TOINT64_OFFSET UNITYSDK_OFFSET(0x18B86C10)
#define SYSTEM_CONVERT_TOSBYTE_10_OFFSET UNITYSDK_OFFSET(0x18B84490)
#define SYSTEM_CONVERT_TOSBYTE_11_OFFSET UNITYSDK_OFFSET(0x18B84500)
#define SYSTEM_CONVERT_TOSBYTE_12_OFFSET UNITYSDK_OFFSET(0x18B84580)
#define SYSTEM_CONVERT_TOSBYTE_13_OFFSET UNITYSDK_OFFSET(0x18B84700)
#define SYSTEM_CONVERT_TOSBYTE_14_OFFSET UNITYSDK_OFFSET(0x18B847D0)
#define SYSTEM_CONVERT_TOSBYTE_15_OFFSET UNITYSDK_OFFSET(0x18B89550)
#define SYSTEM_CONVERT_TOSBYTE_1_OFFSET UNITYSDK_OFFSET(0x18B84040)
#define SYSTEM_CONVERT_TOSBYTE_2_OFFSET UNITYSDK_OFFSET(0x18B84170)
#define SYSTEM_CONVERT_TOSBYTE_3_OFFSET UNITYSDK_OFFSET(0x18B84180)
#define SYSTEM_CONVERT_TOSBYTE_4_OFFSET UNITYSDK_OFFSET(0x18B841F0)
#define SYSTEM_CONVERT_TOSBYTE_5_OFFSET UNITYSDK_OFFSET(0x18B84260)
#define SYSTEM_CONVERT_TOSBYTE_6_OFFSET UNITYSDK_OFFSET(0x18B842D0)
#define SYSTEM_CONVERT_TOSBYTE_7_OFFSET UNITYSDK_OFFSET(0x18B84340)
#define SYSTEM_CONVERT_TOSBYTE_8_OFFSET UNITYSDK_OFFSET(0x18B843B0)
#define SYSTEM_CONVERT_TOSBYTE_9_OFFSET UNITYSDK_OFFSET(0x18B84420)
#define SYSTEM_CONVERT_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x18B83F20)
#define SYSTEM_CONVERT_TOSINGLE_10_OFFSET UNITYSDK_OFFSET(0x18B87CF0)
#define SYSTEM_CONVERT_TOSINGLE_11_OFFSET UNITYSDK_OFFSET(0x18B87D00)
#define SYSTEM_CONVERT_TOSINGLE_12_OFFSET UNITYSDK_OFFSET(0x18B87E30)
#define SYSTEM_CONVERT_TOSINGLE_13_OFFSET UNITYSDK_OFFSET(0x18B87E70)
#define SYSTEM_CONVERT_TOSINGLE_14_OFFSET UNITYSDK_OFFSET(0x18B87ED0)
#define SYSTEM_CONVERT_TOSINGLE_1_OFFSET UNITYSDK_OFFSET(0x18B87B20)
#define SYSTEM_CONVERT_TOSINGLE_2_OFFSET UNITYSDK_OFFSET(0x18B87C50)
#define SYSTEM_CONVERT_TOSINGLE_3_OFFSET UNITYSDK_OFFSET(0x18B87C60)
#define SYSTEM_CONVERT_TOSINGLE_4_OFFSET UNITYSDK_OFFSET(0x18B87C70)
#define SYSTEM_CONVERT_TOSINGLE_5_OFFSET UNITYSDK_OFFSET(0x18B87C80)
#define SYSTEM_CONVERT_TOSINGLE_6_OFFSET UNITYSDK_OFFSET(0x18B87C90)
#define SYSTEM_CONVERT_TOSINGLE_7_OFFSET UNITYSDK_OFFSET(0x18B87CA0)
#define SYSTEM_CONVERT_TOSINGLE_8_OFFSET UNITYSDK_OFFSET(0x18B87CB0)
#define SYSTEM_CONVERT_TOSINGLE_9_OFFSET UNITYSDK_OFFSET(0x18B87CC0)
#define SYSTEM_CONVERT_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x18B87A00)
#define SYSTEM_CONVERT_TOSTRING_10_OFFSET UNITYSDK_OFFSET(0x18B893D0)
#define SYSTEM_CONVERT_TOSTRING_11_OFFSET UNITYSDK_OFFSET(0x18B89410)
#define SYSTEM_CONVERT_TOSTRING_12_OFFSET UNITYSDK_OFFSET(0x18B89A20)
#define SYSTEM_CONVERT_TOSTRING_13_OFFSET UNITYSDK_OFFSET(0x18B89AC0)
#define SYSTEM_CONVERT_TOSTRING_14_OFFSET UNITYSDK_OFFSET(0x18B89B60)
#define SYSTEM_CONVERT_TOSTRING_15_OFFSET UNITYSDK_OFFSET(0x18B89C00)
#define SYSTEM_CONVERT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x18B88FF0)
#define SYSTEM_CONVERT_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x18B891C0)
#define SYSTEM_CONVERT_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x18B89240)
#define SYSTEM_CONVERT_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x18B892C0)
#define SYSTEM_CONVERT_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x18B892F0)
#define SYSTEM_CONVERT_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x18B89310)
#define SYSTEM_CONVERT_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x18B89340)
#define SYSTEM_CONVERT_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x18B89370)
#define SYSTEM_CONVERT_TOSTRING_9_OFFSET UNITYSDK_OFFSET(0x18B893A0)
#define SYSTEM_CONVERT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18B88FE0)
#define SYSTEM_CONVERT_TOUINT16_10_OFFSET UNITYSDK_OFFSET(0x18B85CA0)
#define SYSTEM_CONVERT_TOUINT16_11_OFFSET UNITYSDK_OFFSET(0x18B85D10)
#define SYSTEM_CONVERT_TOUINT16_12_OFFSET UNITYSDK_OFFSET(0x18B85D90)
#define SYSTEM_CONVERT_TOUINT16_13_OFFSET UNITYSDK_OFFSET(0x18B85E10)
#define SYSTEM_CONVERT_TOUINT16_14_OFFSET UNITYSDK_OFFSET(0x18B85EE0)
#define SYSTEM_CONVERT_TOUINT16_15_OFFSET UNITYSDK_OFFSET(0x18B89710)
#define SYSTEM_CONVERT_TOUINT16_1_OFFSET UNITYSDK_OFFSET(0x18B85910)
#define SYSTEM_CONVERT_TOUINT16_2_OFFSET UNITYSDK_OFFSET(0x18B85A40)
#define SYSTEM_CONVERT_TOUINT16_3_OFFSET UNITYSDK_OFFSET(0x18B85A50)
#define SYSTEM_CONVERT_TOUINT16_4_OFFSET UNITYSDK_OFFSET(0x18B85A60)
#define SYSTEM_CONVERT_TOUINT16_5_OFFSET UNITYSDK_OFFSET(0x18B85AD0)
#define SYSTEM_CONVERT_TOUINT16_6_OFFSET UNITYSDK_OFFSET(0x18B85AE0)
#define SYSTEM_CONVERT_TOUINT16_7_OFFSET UNITYSDK_OFFSET(0x18B85B50)
#define SYSTEM_CONVERT_TOUINT16_8_OFFSET UNITYSDK_OFFSET(0x18B85BC0)
#define SYSTEM_CONVERT_TOUINT16_9_OFFSET UNITYSDK_OFFSET(0x18B85C30)
#define SYSTEM_CONVERT_TOUINT16_OFFSET UNITYSDK_OFFSET(0x18B857F0)
#define SYSTEM_CONVERT_TOUINT32_10_OFFSET UNITYSDK_OFFSET(0x18B868B0)
#define SYSTEM_CONVERT_TOUINT32_11_OFFSET UNITYSDK_OFFSET(0x18B86920)
#define SYSTEM_CONVERT_TOUINT32_12_OFFSET UNITYSDK_OFFSET(0x18B869E0)
#define SYSTEM_CONVERT_TOUINT32_13_OFFSET UNITYSDK_OFFSET(0x18B86AA0)
#define SYSTEM_CONVERT_TOUINT32_14_OFFSET UNITYSDK_OFFSET(0x18B86B70)
#define SYSTEM_CONVERT_TOUINT32_15_OFFSET UNITYSDK_OFFSET(0x18B89870)
#define SYSTEM_CONVERT_TOUINT32_1_OFFSET UNITYSDK_OFFSET(0x18B86580)
#define SYSTEM_CONVERT_TOUINT32_2_OFFSET UNITYSDK_OFFSET(0x18B866B0)
#define SYSTEM_CONVERT_TOUINT32_3_OFFSET UNITYSDK_OFFSET(0x18B866C0)
#define SYSTEM_CONVERT_TOUINT32_4_OFFSET UNITYSDK_OFFSET(0x18B866D0)
#define SYSTEM_CONVERT_TOUINT32_5_OFFSET UNITYSDK_OFFSET(0x18B86740)
#define SYSTEM_CONVERT_TOUINT32_6_OFFSET UNITYSDK_OFFSET(0x18B86750)
#define SYSTEM_CONVERT_TOUINT32_7_OFFSET UNITYSDK_OFFSET(0x18B867C0)
#define SYSTEM_CONVERT_TOUINT32_8_OFFSET UNITYSDK_OFFSET(0x18B867D0)
#define SYSTEM_CONVERT_TOUINT32_9_OFFSET UNITYSDK_OFFSET(0x18B86840)
#define SYSTEM_CONVERT_TOUINT32_OFFSET UNITYSDK_OFFSET(0x18B86460)
#define SYSTEM_CONVERT_TOUINT64_10_OFFSET UNITYSDK_OFFSET(0x18B87640)
#define SYSTEM_CONVERT_TOUINT64_11_OFFSET UNITYSDK_OFFSET(0x18B876B0)
#define SYSTEM_CONVERT_TOUINT64_12_OFFSET UNITYSDK_OFFSET(0x18B876C0)
#define SYSTEM_CONVERT_TOUINT64_13_OFFSET UNITYSDK_OFFSET(0x18B877B0)
#define SYSTEM_CONVERT_TOUINT64_14_OFFSET UNITYSDK_OFFSET(0x18B87890)
#define SYSTEM_CONVERT_TOUINT64_15_OFFSET UNITYSDK_OFFSET(0x18B87960)
#define SYSTEM_CONVERT_TOUINT64_16_OFFSET UNITYSDK_OFFSET(0x18B879A0)
#define SYSTEM_CONVERT_TOUINT64_17_OFFSET UNITYSDK_OFFSET(0x18B89990)
#define SYSTEM_CONVERT_TOUINT64_1_OFFSET UNITYSDK_OFFSET(0x18B87370)
#define SYSTEM_CONVERT_TOUINT64_2_OFFSET UNITYSDK_OFFSET(0x18B874A0)
#define SYSTEM_CONVERT_TOUINT64_3_OFFSET UNITYSDK_OFFSET(0x18B874B0)
#define SYSTEM_CONVERT_TOUINT64_4_OFFSET UNITYSDK_OFFSET(0x18B874C0)
#define SYSTEM_CONVERT_TOUINT64_5_OFFSET UNITYSDK_OFFSET(0x18B87530)
#define SYSTEM_CONVERT_TOUINT64_6_OFFSET UNITYSDK_OFFSET(0x18B87540)
#define SYSTEM_CONVERT_TOUINT64_7_OFFSET UNITYSDK_OFFSET(0x18B875B0)
#define SYSTEM_CONVERT_TOUINT64_8_OFFSET UNITYSDK_OFFSET(0x18B875C0)
#define SYSTEM_CONVERT_TOUINT64_9_OFFSET UNITYSDK_OFFSET(0x18B87630)
#define SYSTEM_CONVERT_TOUINT64_OFFSET UNITYSDK_OFFSET(0x18B87250)
#define SYSTEM_CONVERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B8AF70)

namespace System
{
	inline static constexpr unsigned int Convert_TypeDefinitionIndex = 209;

	class Convert : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_DBNull()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Convert_TypeDefinitionIndex)->GetStaticField(0x1490);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_base64Table()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Convert_TypeDefinitionIndex)->GetStaticField(0x1498);
		}
		static ::System::RuntimeType** StaticGet_EnumType()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(Convert_TypeDefinitionIndex)->GetStaticField(0x14A0);
		}
		static ::Il2CppArray<::System::RuntimeType*>** StaticGet_ConvertTypes()
		{
			return (::Il2CppArray<::System::RuntimeType*>**)Il2CppClass::FromTypeDefinitionIndex(Convert_TypeDefinitionIndex)->GetStaticField(0x14A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONVERT__CCTOR_OFFSET))();
		}

		static ::System::TypeCode GetTypeCode(::System::Object* value)
		{
			return ((::System::TypeCode(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_GETTYPECODE_OFFSET))(value);
		}

		static ::System::Object* ChangeType(::System::Object* value, ::System::TypeCode typeCode, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::TypeCode, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_CHANGETYPE_OFFSET))(value, typeCode, provider);
		}

		static ::System::Object* DefaultToType(::System::IConvertible* value, ::System::Type* targetType, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::System::IConvertible*, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_DEFAULTTOTYPE_OFFSET))(value, targetType, provider);
		}

		static ::System::Object* ChangeType_1(::System::Object* value, ::System::Type* conversionType)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_CHANGETYPE_1_OFFSET))(value, conversionType);
		}

		static ::System::Object* ChangeType_2(::System::Object* value, ::System::Type* conversionType, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_CHANGETYPE_2_OFFSET))(value, conversionType, provider);
		}

		static ::System::Boolean ToBoolean(::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_1_OFFSET))(value, provider);
		}

		static ::System::Boolean ToBoolean_2(::System::SByte value)
		{
			return ((::System::Boolean(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_2_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_3(::System::Byte value)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_3_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_4(::System::Int16 value)
		{
			return ((::System::Boolean(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_4_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_5(::System::UInt16 value)
		{
			return ((::System::Boolean(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_5_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_6(::System::Int32 value)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_6_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_7(::System::UInt32 value)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_7_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_8(::System::Int64 value)
		{
			return ((::System::Boolean(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_8_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_9(::System::UInt64 value)
		{
			return ((::System::Boolean(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_9_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_10(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_10_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_11(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_11_OFFSET))(value, provider);
		}

		static ::System::Boolean ToBoolean_12(::System::Single value)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_12_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_13(::System::Double value)
		{
			return ((::System::Boolean(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_13_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean_14(::System::Decimal value)
		{
			return ((::System::Boolean(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBOOLEAN_14_OFFSET))(value);
		}

		static ::System::Char ToChar(::System::Object* value)
		{
			return ((::System::Char(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_OFFSET))(value);
		}

		static ::System::Char ToChar_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_1_OFFSET))(value, provider);
		}

		static ::System::Char ToChar_2(::System::SByte value)
		{
			return ((::System::Char(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_2_OFFSET))(value);
		}

		static ::System::Char ToChar_3(::System::Byte value)
		{
			return ((::System::Char(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_3_OFFSET))(value);
		}

		static ::System::Char ToChar_4(::System::Int16 value)
		{
			return ((::System::Char(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_4_OFFSET))(value);
		}

		static ::System::Char ToChar_5(::System::UInt16 value)
		{
			return ((::System::Char(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_5_OFFSET))(value);
		}

		static ::System::Char ToChar_6(::System::Int32 value)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_6_OFFSET))(value);
		}

		static ::System::Char ToChar_7(::System::UInt32 value)
		{
			return ((::System::Char(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_7_OFFSET))(value);
		}

		static ::System::Char ToChar_8(::System::Int64 value)
		{
			return ((::System::Char(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_8_OFFSET))(value);
		}

		static ::System::Char ToChar_9(::System::UInt64 value)
		{
			return ((::System::Char(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_9_OFFSET))(value);
		}

		static ::System::Char ToChar_10(::System::String* value)
		{
			return ((::System::Char(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_10_OFFSET))(value);
		}

		static ::System::Char ToChar_11(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOCHAR_11_OFFSET))(value, provider);
		}

		static ::System::SByte ToSByte(::System::Object* value)
		{
			return ((::System::SByte(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_OFFSET))(value);
		}

		static ::System::SByte ToSByte_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_1_OFFSET))(value, provider);
		}

		static ::System::SByte ToSByte_2(::System::Boolean value)
		{
			return ((::System::SByte(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_2_OFFSET))(value);
		}

		static ::System::SByte ToSByte_3(::System::Char value)
		{
			return ((::System::SByte(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_3_OFFSET))(value);
		}

		static ::System::SByte ToSByte_4(::System::Byte value)
		{
			return ((::System::SByte(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_4_OFFSET))(value);
		}

		static ::System::SByte ToSByte_5(::System::Int16 value)
		{
			return ((::System::SByte(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_5_OFFSET))(value);
		}

		static ::System::SByte ToSByte_6(::System::UInt16 value)
		{
			return ((::System::SByte(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_6_OFFSET))(value);
		}

		static ::System::SByte ToSByte_7(::System::Int32 value)
		{
			return ((::System::SByte(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_7_OFFSET))(value);
		}

		static ::System::SByte ToSByte_8(::System::UInt32 value)
		{
			return ((::System::SByte(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_8_OFFSET))(value);
		}

		static ::System::SByte ToSByte_9(::System::Int64 value)
		{
			return ((::System::SByte(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_9_OFFSET))(value);
		}

		static ::System::SByte ToSByte_10(::System::UInt64 value)
		{
			return ((::System::SByte(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_10_OFFSET))(value);
		}

		static ::System::SByte ToSByte_11(::System::Single value)
		{
			return ((::System::SByte(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_11_OFFSET))(value);
		}

		static ::System::SByte ToSByte_12(::System::Double value)
		{
			return ((::System::SByte(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_12_OFFSET))(value);
		}

		static ::System::SByte ToSByte_13(::System::Decimal value)
		{
			return ((::System::SByte(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_13_OFFSET))(value);
		}

		static ::System::SByte ToSByte_14(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_14_OFFSET))(value, provider);
		}

		static ::System::Byte ToByte(::System::Object* value)
		{
			return ((::System::Byte(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_OFFSET))(value);
		}

		static ::System::Byte ToByte_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_1_OFFSET))(value, provider);
		}

		static ::System::Byte ToByte_2(::System::Boolean value)
		{
			return ((::System::Byte(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_2_OFFSET))(value);
		}

		static ::System::Byte ToByte_3(::System::Char value)
		{
			return ((::System::Byte(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_3_OFFSET))(value);
		}

		static ::System::Byte ToByte_4(::System::SByte value)
		{
			return ((::System::Byte(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_4_OFFSET))(value);
		}

		static ::System::Byte ToByte_5(::System::Int16 value)
		{
			return ((::System::Byte(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_5_OFFSET))(value);
		}

		static ::System::Byte ToByte_6(::System::UInt16 value)
		{
			return ((::System::Byte(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_6_OFFSET))(value);
		}

		static ::System::Byte ToByte_7(::System::Int32 value)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_7_OFFSET))(value);
		}

		static ::System::Byte ToByte_8(::System::UInt32 value)
		{
			return ((::System::Byte(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_8_OFFSET))(value);
		}

		static ::System::Byte ToByte_9(::System::Int64 value)
		{
			return ((::System::Byte(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_9_OFFSET))(value);
		}

		static ::System::Byte ToByte_10(::System::UInt64 value)
		{
			return ((::System::Byte(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_10_OFFSET))(value);
		}

		static ::System::Byte ToByte_11(::System::Single value)
		{
			return ((::System::Byte(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_11_OFFSET))(value);
		}

		static ::System::Byte ToByte_12(::System::Double value)
		{
			return ((::System::Byte(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_12_OFFSET))(value);
		}

		static ::System::Byte ToByte_13(::System::Decimal value)
		{
			return ((::System::Byte(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_13_OFFSET))(value);
		}

		static ::System::Byte ToByte_14(::System::String* value)
		{
			return ((::System::Byte(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_14_OFFSET))(value);
		}

		static ::System::Byte ToByte_15(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_15_OFFSET))(value, provider);
		}

		static ::System::Int16 ToInt16(::System::Object* value)
		{
			return ((::System::Int16(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_1_OFFSET))(value, provider);
		}

		static ::System::Int16 ToInt16_2(::System::Boolean value)
		{
			return ((::System::Int16(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_2_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_3(::System::Char value)
		{
			return ((::System::Int16(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_3_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_4(::System::SByte value)
		{
			return ((::System::Int16(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_4_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_5(::System::Byte value)
		{
			return ((::System::Int16(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_5_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_6(::System::UInt16 value)
		{
			return ((::System::Int16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_6_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_7(::System::Int32 value)
		{
			return ((::System::Int16(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_7_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_8(::System::UInt32 value)
		{
			return ((::System::Int16(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_8_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_9(::System::Int64 value)
		{
			return ((::System::Int16(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_9_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_10(::System::UInt64 value)
		{
			return ((::System::Int16(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_10_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_11(::System::Single value)
		{
			return ((::System::Int16(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_11_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_12(::System::Double value)
		{
			return ((::System::Int16(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_12_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_13(::System::Decimal value)
		{
			return ((::System::Int16(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_13_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_14(::System::String* value)
		{
			return ((::System::Int16(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_14_OFFSET))(value);
		}

		static ::System::Int16 ToInt16_15(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_15_OFFSET))(value, provider);
		}

		static ::System::UInt16 ToUInt16(::System::Object* value)
		{
			return ((::System::UInt16(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_1_OFFSET))(value, provider);
		}

		static ::System::UInt16 ToUInt16_2(::System::Boolean value)
		{
			return ((::System::UInt16(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_2_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_3(::System::Char value)
		{
			return ((::System::UInt16(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_3_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_4(::System::SByte value)
		{
			return ((::System::UInt16(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_4_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_5(::System::Byte value)
		{
			return ((::System::UInt16(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_5_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_6(::System::Int16 value)
		{
			return ((::System::UInt16(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_6_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_7(::System::Int32 value)
		{
			return ((::System::UInt16(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_7_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_8(::System::UInt32 value)
		{
			return ((::System::UInt16(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_8_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_9(::System::Int64 value)
		{
			return ((::System::UInt16(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_9_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_10(::System::UInt64 value)
		{
			return ((::System::UInt16(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_10_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_11(::System::Single value)
		{
			return ((::System::UInt16(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_11_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_12(::System::Double value)
		{
			return ((::System::UInt16(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_12_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_13(::System::Decimal value)
		{
			return ((::System::UInt16(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_13_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16_14(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_14_OFFSET))(value, provider);
		}

		static ::System::Int32 ToInt32(::System::Object* value)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_1_OFFSET))(value, provider);
		}

		static ::System::Int32 ToInt32_2(::System::Boolean value)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_2_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_3(::System::Char value)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_3_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_4(::System::SByte value)
		{
			return ((::System::Int32(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_4_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_5(::System::Byte value)
		{
			return ((::System::Int32(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_5_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_6(::System::Int16 value)
		{
			return ((::System::Int32(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_6_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_7(::System::UInt16 value)
		{
			return ((::System::Int32(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_7_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_8(::System::UInt32 value)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_8_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_9(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_9_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_10(::System::Int64 value)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_10_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_11(::System::UInt64 value)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_11_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_12(::System::Single value)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_12_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_13(::System::Double value)
		{
			return ((::System::Int32(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_13_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_14(::System::Decimal value)
		{
			return ((::System::Int32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_14_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_15(::System::String* value)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_15_OFFSET))(value);
		}

		static ::System::Int32 ToInt32_16(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_16_OFFSET))(value, provider);
		}

		static ::System::UInt32 ToUInt32(::System::Object* value)
		{
			return ((::System::UInt32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_1_OFFSET))(value, provider);
		}

		static ::System::UInt32 ToUInt32_2(::System::Boolean value)
		{
			return ((::System::UInt32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_2_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_3(::System::Char value)
		{
			return ((::System::UInt32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_3_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_4(::System::SByte value)
		{
			return ((::System::UInt32(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_4_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_5(::System::Byte value)
		{
			return ((::System::UInt32(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_5_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_6(::System::Int16 value)
		{
			return ((::System::UInt32(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_6_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_7(::System::UInt16 value)
		{
			return ((::System::UInt32(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_7_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_8(::System::Int32 value)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_8_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_9(::System::Int64 value)
		{
			return ((::System::UInt32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_9_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_10(::System::UInt64 value)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_10_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_11(::System::Single value)
		{
			return ((::System::UInt32(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_11_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_12(::System::Double value)
		{
			return ((::System::UInt32(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_12_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_13(::System::Decimal value)
		{
			return ((::System::UInt32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_13_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32_14(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_14_OFFSET))(value, provider);
		}

		static ::System::Int64 ToInt64(::System::Object* value)
		{
			return ((::System::Int64(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_1_OFFSET))(value, provider);
		}

		static ::System::Int64 ToInt64_2(::System::Boolean value)
		{
			return ((::System::Int64(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_2_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_3(::System::Char value)
		{
			return ((::System::Int64(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_3_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_4(::System::SByte value)
		{
			return ((::System::Int64(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_4_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_5(::System::Byte value)
		{
			return ((::System::Int64(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_5_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_6(::System::Int16 value)
		{
			return ((::System::Int64(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_6_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_7(::System::UInt16 value)
		{
			return ((::System::Int64(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_7_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_8(::System::Int32 value)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_8_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_9(::System::UInt32 value)
		{
			return ((::System::Int64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_9_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_10(::System::UInt64 value)
		{
			return ((::System::Int64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_10_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_11(::System::Single value)
		{
			return ((::System::Int64(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_11_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_12(::System::Double value)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_12_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_13(::System::Decimal value)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_13_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_14(::System::String* value)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_14_OFFSET))(value);
		}

		static ::System::Int64 ToInt64_15(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_15_OFFSET))(value, provider);
		}

		static ::System::UInt64 ToUInt64(::System::Object* value)
		{
			return ((::System::UInt64(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_1_OFFSET))(value, provider);
		}

		static ::System::UInt64 ToUInt64_2(::System::Boolean value)
		{
			return ((::System::UInt64(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_2_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_3(::System::Char value)
		{
			return ((::System::UInt64(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_3_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_4(::System::SByte value)
		{
			return ((::System::UInt64(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_4_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_5(::System::Byte value)
		{
			return ((::System::UInt64(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_5_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_6(::System::Int16 value)
		{
			return ((::System::UInt64(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_6_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_7(::System::UInt16 value)
		{
			return ((::System::UInt64(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_7_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_8(::System::Int32 value)
		{
			return ((::System::UInt64(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_8_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_9(::System::UInt32 value)
		{
			return ((::System::UInt64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_9_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_10(::System::Int64 value)
		{
			return ((::System::UInt64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_10_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_11(::System::UInt64 value)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_11_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_12(::System::Single value)
		{
			return ((::System::UInt64(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_12_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_13(::System::Double value)
		{
			return ((::System::UInt64(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_13_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_14(::System::Decimal value)
		{
			return ((::System::UInt64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_14_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_15(::System::String* value)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_15_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64_16(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_16_OFFSET))(value, provider);
		}

		static ::System::Single ToSingle(::System::Object* value)
		{
			return ((::System::Single(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_OFFSET))(value);
		}

		static ::System::Single ToSingle_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_1_OFFSET))(value, provider);
		}

		static ::System::Single ToSingle_2(::System::SByte value)
		{
			return ((::System::Single(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_2_OFFSET))(value);
		}

		static ::System::Single ToSingle_3(::System::Byte value)
		{
			return ((::System::Single(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_3_OFFSET))(value);
		}

		static ::System::Single ToSingle_4(::System::Int16 value)
		{
			return ((::System::Single(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_4_OFFSET))(value);
		}

		static ::System::Single ToSingle_5(::System::UInt16 value)
		{
			return ((::System::Single(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_5_OFFSET))(value);
		}

		static ::System::Single ToSingle_6(::System::Int32 value)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_6_OFFSET))(value);
		}

		static ::System::Single ToSingle_7(::System::UInt32 value)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_7_OFFSET))(value);
		}

		static ::System::Single ToSingle_8(::System::Int64 value)
		{
			return ((::System::Single(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_8_OFFSET))(value);
		}

		static ::System::Single ToSingle_9(::System::UInt64 value)
		{
			return ((::System::Single(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_9_OFFSET))(value);
		}

		static ::System::Single ToSingle_10(::System::Double value)
		{
			return ((::System::Single(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_10_OFFSET))(value);
		}

		static ::System::Single ToSingle_11(::System::Decimal value)
		{
			return ((::System::Single(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_11_OFFSET))(value);
		}

		static ::System::Single ToSingle_12(::System::String* value)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_12_OFFSET))(value);
		}

		static ::System::Single ToSingle_13(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_13_OFFSET))(value, provider);
		}

		static ::System::Single ToSingle_14(::System::Boolean value)
		{
			return ((::System::Single(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSINGLE_14_OFFSET))(value);
		}

		static ::System::Double ToDouble(::System::Object* value)
		{
			return ((::System::Double(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_OFFSET))(value);
		}

		static ::System::Double ToDouble_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_1_OFFSET))(value, provider);
		}

		static ::System::Double ToDouble_2(::System::SByte value)
		{
			return ((::System::Double(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_2_OFFSET))(value);
		}

		static ::System::Double ToDouble_3(::System::Byte value)
		{
			return ((::System::Double(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_3_OFFSET))(value);
		}

		static ::System::Double ToDouble_4(::System::Int16 value)
		{
			return ((::System::Double(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_4_OFFSET))(value);
		}

		static ::System::Double ToDouble_5(::System::UInt16 value)
		{
			return ((::System::Double(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_5_OFFSET))(value);
		}

		static ::System::Double ToDouble_6(::System::Int32 value)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_6_OFFSET))(value);
		}

		static ::System::Double ToDouble_7(::System::UInt32 value)
		{
			return ((::System::Double(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_7_OFFSET))(value);
		}

		static ::System::Double ToDouble_8(::System::Int64 value)
		{
			return ((::System::Double(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_8_OFFSET))(value);
		}

		static ::System::Double ToDouble_9(::System::UInt64 value)
		{
			return ((::System::Double(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_9_OFFSET))(value);
		}

		static ::System::Double ToDouble_10(::System::Single value)
		{
			return ((::System::Double(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_10_OFFSET))(value);
		}

		static ::System::Double ToDouble_11(::System::Decimal value)
		{
			return ((::System::Double(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_11_OFFSET))(value);
		}

		static ::System::Double ToDouble_12(::System::String* value)
		{
			return ((::System::Double(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_12_OFFSET))(value);
		}

		static ::System::Double ToDouble_13(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_13_OFFSET))(value, provider);
		}

		static ::System::Double ToDouble_14(::System::Boolean value)
		{
			return ((::System::Double(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODOUBLE_14_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal(::System::Object* value)
		{
			return ((::System::Decimal(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_1_OFFSET))(value, provider);
		}

		static ::System::Decimal ToDecimal_2(::System::SByte value)
		{
			return ((::System::Decimal(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_2_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_3(::System::Byte value)
		{
			return ((::System::Decimal(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_3_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_4(::System::Int16 value)
		{
			return ((::System::Decimal(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_4_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_5(::System::UInt16 value)
		{
			return ((::System::Decimal(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_5_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_6(::System::Int32 value)
		{
			return ((::System::Decimal(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_6_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_7(::System::UInt32 value)
		{
			return ((::System::Decimal(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_7_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_8(::System::Int64 value)
		{
			return ((::System::Decimal(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_8_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_9(::System::UInt64 value)
		{
			return ((::System::Decimal(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_9_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_10(::System::Single value)
		{
			return ((::System::Decimal(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_10_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_11(::System::Double value)
		{
			return ((::System::Decimal(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_11_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_12(::System::String* value)
		{
			return ((::System::Decimal(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_12_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_13(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_13_OFFSET))(value, provider);
		}

		static ::System::Decimal ToDecimal_14(::System::Boolean value)
		{
			return ((::System::Decimal(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODECIMAL_14_OFFSET))(value);
		}

		static ::System::DateTime ToDateTime(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODATETIME_OFFSET))(value, provider);
		}

		static ::System::DateTime ToDateTime_1(::System::String* value)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODATETIME_1_OFFSET))(value);
		}

		static ::System::DateTime ToDateTime_2(::System::String* value, ::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TODATETIME_2_OFFSET))(value, provider);
		}

		static ::System::String* ToString(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_OFFSET))(value);
		}

		static ::System::String* ToString_1(::System::Object* value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_1_OFFSET))(value, provider);
		}

		static ::System::String* ToString_2(::System::Char value)
		{
			return ((::System::String*(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_2_OFFSET))(value);
		}

		static ::System::String* ToString_3(::System::Char value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Char, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_3_OFFSET))(value, provider);
		}

		static ::System::String* ToString_4(::System::Int32 value)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_4_OFFSET))(value);
		}

		static ::System::String* ToString_5(::System::Int32 value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Int32, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_5_OFFSET))(value, provider);
		}

		static ::System::String* ToString_6(::System::Int64 value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Int64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_6_OFFSET))(value, provider);
		}

		static ::System::String* ToString_7(::System::UInt64 value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::UInt64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_7_OFFSET))(value, provider);
		}

		static ::System::String* ToString_8(::System::Single value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Single, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_8_OFFSET))(value, provider);
		}

		static ::System::String* ToString_9(::System::Double value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Double, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_9_OFFSET))(value, provider);
		}

		static ::System::String* ToString_10(::System::Decimal value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::Decimal, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_10_OFFSET))(value, provider);
		}

		static ::System::String* ToString_11(::System::DateTime value, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_11_OFFSET))(value, provider);
		}

		static ::System::Byte ToByte_16(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::Byte(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBYTE_16_OFFSET))(value, fromBase);
		}

		static ::System::SByte ToSByte_15(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::SByte(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSBYTE_15_OFFSET))(value, fromBase);
		}

		static ::System::Int16 ToInt16_16(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::Int16(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT16_16_OFFSET))(value, fromBase);
		}

		static ::System::UInt16 ToUInt16_15(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::UInt16(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT16_15_OFFSET))(value, fromBase);
		}

		static ::System::Int32 ToInt32_17(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT32_17_OFFSET))(value, fromBase);
		}

		static ::System::UInt32 ToUInt32_15(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT32_15_OFFSET))(value, fromBase);
		}

		static ::System::Int64 ToInt64_16(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::Int64(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOINT64_16_OFFSET))(value, fromBase);
		}

		static ::System::UInt64 ToUInt64_17(::System::String* value, ::System::Int32 fromBase)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOUINT64_17_OFFSET))(value, fromBase);
		}

		static ::System::String* ToString_12(::System::Byte value, ::System::Int32 toBase)
		{
			return ((::System::String*(*)(::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_12_OFFSET))(value, toBase);
		}

		static ::System::String* ToString_13(::System::Int16 value, ::System::Int32 toBase)
		{
			return ((::System::String*(*)(::System::Int16, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_13_OFFSET))(value, toBase);
		}

		static ::System::String* ToString_14(::System::Int32 value, ::System::Int32 toBase)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_14_OFFSET))(value, toBase);
		}

		static ::System::String* ToString_15(::System::Int64 value, ::System::Int32 toBase)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOSTRING_15_OFFSET))(value, toBase);
		}

		static ::System::String* ToBase64String(::Il2CppArray<::System::Byte>* inArray)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64STRING_OFFSET))(inArray);
		}

		static ::System::String* ToBase64String_1(::Il2CppArray<::System::Byte>* inArray, ::System::Base64FormattingOptions options)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Base64FormattingOptions))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64STRING_1_OFFSET))(inArray, options);
		}

		static ::System::String* ToBase64String_2(::Il2CppArray<::System::Byte>* inArray, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64STRING_2_OFFSET))(inArray, offset, length);
		}

		static ::System::String* ToBase64String_3(::Il2CppArray<::System::Byte>* inArray, ::System::Int32 offset, ::System::Int32 length, ::System::Base64FormattingOptions options)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Base64FormattingOptions))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64STRING_3_OFFSET))(inArray, offset, length, options);
		}

		static ::System::Int32 ToBase64CharArray(::Il2CppArray<::System::Byte>* inArray, ::System::Int32 offsetIn, ::System::Int32 length, ::Il2CppArray<::System::Char>* outArray, ::System::Int32 offsetOut)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64CHARARRAY_OFFSET))(inArray, offsetIn, length, outArray, offsetOut);
		}

		static ::System::Int32 ToBase64CharArray_1(::Il2CppArray<::System::Byte>* inArray, ::System::Int32 offsetIn, ::System::Int32 length, ::Il2CppArray<::System::Char>* outArray, ::System::Int32 offsetOut, ::System::Base64FormattingOptions options)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Base64FormattingOptions))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64CHARARRAY_1_OFFSET))(inArray, offsetIn, length, outArray, offsetOut, options);
		}

		static ::System::Int32 ConvertToBase64Array(::System::Char* outChars, ::System::Byte* inData, ::System::Int32 offset, ::System::Int32 length, ::System::Boolean insertLineBreaks)
		{
			return ((::System::Int32(*)(::System::Char*, ::System::Byte*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_CONVERTTOBASE64ARRAY_OFFSET))(outChars, inData, offset, length, insertLineBreaks);
		}

		static ::System::Int32 ToBase64_CalculateAndValidateOutputLength(::System::Int32 inputLength, ::System::Boolean insertLineBreaks)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_TOBASE64_CALCULATEANDVALIDATEOUTPUTLENGTH_OFFSET))(inputLength, insertLineBreaks);
		}

		static ::Il2CppArray<::System::Byte>* FromBase64String(::System::String* s)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_FROMBASE64STRING_OFFSET))(s);
		}

		static ::Il2CppArray<::System::Byte>* FromBase64CharArray(::Il2CppArray<::System::Char>* inArray, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_FROMBASE64CHARARRAY_OFFSET))(inArray, offset, length);
		}

		static ::Il2CppArray<::System::Byte>* FromBase64CharPtr(::System::Char* inputPtr, ::System::Int32 inputLength)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_FROMBASE64CHARPTR_OFFSET))(inputPtr, inputLength);
		}

		static ::System::Int32 FromBase64_Decode(::System::Char* startInputPtr, ::System::Int32 inputLength, ::System::Byte* startDestPtr, ::System::Int32 destLength)
		{
			return ((::System::Int32(*)(::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_FROMBASE64_DECODE_OFFSET))(startInputPtr, inputLength, startDestPtr, destLength);
		}

		static ::System::Int32 FromBase64_ComputeResultLength(::System::Char* inputPtr, ::System::Int32 inputLength)
		{
			return ((::System::Int32(*)(::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONVERT_FROMBASE64_COMPUTERESULTLENGTH_OFFSET))(inputPtr, inputLength);
		}
	};
}

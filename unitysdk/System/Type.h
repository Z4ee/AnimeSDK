#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/GenericParameterAttributes.h"
#include "unitysdk/System/Reflection/InterfaceMapping.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberFilter; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class TypeFilter; }
namespace System::Runtime::InteropServices { class StructLayoutAttribute; }

#define SYSTEM_TYPE_METHOD_2_0A0A3449BBEF67E8_OFFSET UNITYSDK_OFFSET(0x1D1AE0D0)
#define SYSTEM_TYPE_METHOD_2_0B34AA51B95C62BE_OFFSET UNITYSDK_OFFSET(0x1D1AE120)
#define SYSTEM_TYPE_METHOD_2_0BC61176382266A0_OFFSET UNITYSDK_OFFSET(0x1D1A9500)
#define SYSTEM_TYPE_METHOD_2_0C3F7ABB64BEF122_OFFSET UNITYSDK_OFFSET(0x1D1ABCF0)
#define SYSTEM_TYPE_METHOD_2_0D3FA31517A13597_OFFSET UNITYSDK_OFFSET(0x1D1A9D70)
#define SYSTEM_TYPE_METHOD_2_0F55D804EED8B1CB_OFFSET UNITYSDK_OFFSET(0x1D1ACF50)
#define SYSTEM_TYPE_METHOD_2_106AAA0EC98942A9_OFFSET UNITYSDK_OFFSET(0x1D19F080)
#define SYSTEM_TYPE_METHOD_2_11726621EC20B8A1_OFFSET UNITYSDK_OFFSET(0x1D1AC770)
#define SYSTEM_TYPE_METHOD_2_12080E436B35722B_OFFSET UNITYSDK_OFFSET(0x1D19FE20)
#define SYSTEM_TYPE_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1D1AE0B0)
#define SYSTEM_TYPE_METHOD_2_14D90F9EAA5338F5_OFFSET UNITYSDK_OFFSET(0x1D1AAD90)
#define SYSTEM_TYPE_METHOD_2_16F5EE15AA8012FE_OFFSET UNITYSDK_OFFSET(0x1D1AE5F0)
#define SYSTEM_TYPE_METHOD_2_19658C3189E1936E_OFFSET UNITYSDK_OFFSET(0x1D1AACC0)
#define SYSTEM_TYPE_METHOD_2_19F8A88108880A99_OFFSET UNITYSDK_OFFSET(0x1D19C1F0)
#define SYSTEM_TYPE_METHOD_2_1A8E6050C9A53DBB_OFFSET UNITYSDK_OFFSET(0x1D1A9D20)
#define SYSTEM_TYPE_METHOD_2_1BFB32349816027D_OFFSET UNITYSDK_OFFSET(0x1D1AE170)
#define SYSTEM_TYPE_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1D1AC4D0)
#define SYSTEM_TYPE_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1D1ABFE0)
#define SYSTEM_TYPE_METHOD_2_1F9CF0B1087F1CF5_OFFSET UNITYSDK_OFFSET(0x1D1AA680)
#define SYSTEM_TYPE_METHOD_2_2085A8E7752C4504_OFFSET UNITYSDK_OFFSET(0x1D1A9BD0)
#define SYSTEM_TYPE_METHOD_2_2213B9582589B042_OFFSET UNITYSDK_OFFSET(0x1D1AE540)
#define SYSTEM_TYPE_METHOD_2_274AFBB8FBB350FB_OFFSET UNITYSDK_OFFSET(0x1D1AB0D0)
#define SYSTEM_TYPE_METHOD_2_30FF6A1E2EEC22D4_OFFSET UNITYSDK_OFFSET(0x1D1ADB10)
#define SYSTEM_TYPE_METHOD_2_356B1FEE9A0FD3FB_OFFSET UNITYSDK_OFFSET(0x1D1AABF0)
#define SYSTEM_TYPE_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1D1AC6A0)
#define SYSTEM_TYPE_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1D1AC640)
#define SYSTEM_TYPE_METHOD_2_3C86C4C22DFC104C_OFFSET UNITYSDK_OFFSET(0x1D1ADFE0)
#define SYSTEM_TYPE_METHOD_2_3E51EEFB06718274_OFFSET UNITYSDK_OFFSET(0x1D1ABF80)
#define SYSTEM_TYPE_METHOD_2_3EACA5870CDCB012_OFFSET UNITYSDK_OFFSET(0x1D1AAFE0)
#define SYSTEM_TYPE_METHOD_2_41708008508DB94D_OFFSET UNITYSDK_OFFSET(0x1D1AA180)
#define SYSTEM_TYPE_METHOD_2_41C953C3DC1CA8A3_OFFSET UNITYSDK_OFFSET(0x1D1AA940)
#define SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_1_OFFSET UNITYSDK_OFFSET(0x1D1A95E0)
#define SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_2_OFFSET UNITYSDK_OFFSET(0x1D1A9630)
#define SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_3_OFFSET UNITYSDK_OFFSET(0x1D1AE9E0)
#define SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_OFFSET UNITYSDK_OFFSET(0x1D1A9540)
#define SYSTEM_TYPE_METHOD_2_46EC973EE97CF90C_OFFSET UNITYSDK_OFFSET(0x1D1ABD40)
#define SYSTEM_TYPE_METHOD_2_4792FCD3AEEF1D34_OFFSET UNITYSDK_OFFSET(0x1D1AEB50)
#define SYSTEM_TYPE_METHOD_2_48193F0DE1E79383_OFFSET UNITYSDK_OFFSET(0x1D1A9A90)
#define SYSTEM_TYPE_METHOD_2_49E3FA61F17A6A16_OFFSET UNITYSDK_OFFSET(0x1D1A9440)
#define SYSTEM_TYPE_METHOD_2_4DB8EF219D07153D_OFFSET UNITYSDK_OFFSET(0x1D1AD490)
#define SYSTEM_TYPE_METHOD_2_4FCA5BC476E1EB90_OFFSET UNITYSDK_OFFSET(0x1D1AB050)
#define SYSTEM_TYPE_METHOD_2_504AF74076537693_OFFSET UNITYSDK_OFFSET(0x1D18A030)
#define SYSTEM_TYPE_METHOD_2_5281C34237041CCE_OFFSET UNITYSDK_OFFSET(0x1D1AA410)
#define SYSTEM_TYPE_METHOD_2_564EB76CD896C3A1_OFFSET UNITYSDK_OFFSET(0x1D1AEA40)
#define SYSTEM_TYPE_METHOD_2_6277CA0648979D17_OFFSET UNITYSDK_OFFSET(0x1D1A9810)
#define SYSTEM_TYPE_METHOD_2_64077BBBAC3C741E_OFFSET UNITYSDK_OFFSET(0x1D1AAFC0)
#define SYSTEM_TYPE_METHOD_2_643BAFBDFE5E07C3_OFFSET UNITYSDK_OFFSET(0x1D1AEB30)
#define SYSTEM_TYPE_METHOD_2_649156FC20B6C2E7_OFFSET UNITYSDK_OFFSET(0x1D1A96D0)
#define SYSTEM_TYPE_METHOD_2_6558E8094F65F2B7_OFFSET UNITYSDK_OFFSET(0x1D1ADC40)
#define SYSTEM_TYPE_METHOD_2_658A7E0382F7B35F_OFFSET UNITYSDK_OFFSET(0x1D1A9FD0)
#define SYSTEM_TYPE_METHOD_2_67529902BB4E8D25_OFFSET UNITYSDK_OFFSET(0x1D1A3D80)
#define SYSTEM_TYPE_METHOD_2_6C8403E1516BC0EF_OFFSET UNITYSDK_OFFSET(0x1D1AA030)
#define SYSTEM_TYPE_METHOD_2_6F0CF7A7B8D1AF17_OFFSET UNITYSDK_OFFSET(0x1D1AE350)
#define SYSTEM_TYPE_METHOD_2_707E378E209AD3DB_OFFSET UNITYSDK_OFFSET(0x1D1AC5E0)
#define SYSTEM_TYPE_METHOD_2_7202D45B87B95D58_1_OFFSET UNITYSDK_OFFSET(0x1D1AC260)
#define SYSTEM_TYPE_METHOD_2_7202D45B87B95D58_OFFSET UNITYSDK_OFFSET(0x1D1A9E40)
#define SYSTEM_TYPE_METHOD_2_76D86C3B4084ED50_OFFSET UNITYSDK_OFFSET(0x1D1AE710)
#define SYSTEM_TYPE_METHOD_2_77204B8F346C64B5_OFFSET UNITYSDK_OFFSET(0x1D1AC7D0)
#define SYSTEM_TYPE_METHOD_2_7886B044EB6D0826_OFFSET UNITYSDK_OFFSET(0x1D1AC3E0)
#define SYSTEM_TYPE_METHOD_2_7ADAE76435FA645D_OFFSET UNITYSDK_OFFSET(0x1D1AE450)
#define SYSTEM_TYPE_METHOD_2_7C6826D9DBE5A703_OFFSET UNITYSDK_OFFSET(0x1D1AE760)
#define SYSTEM_TYPE_METHOD_2_7CB420157B20CDB6_OFFSET UNITYSDK_OFFSET(0x1D1AC8D0)
#define SYSTEM_TYPE_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1D1A9430)
#define SYSTEM_TYPE_METHOD_2_8C387B4DBE4B1BEB_1_OFFSET UNITYSDK_OFFSET(0x1D197AA0)
#define SYSTEM_TYPE_METHOD_2_8C387B4DBE4B1BEB_OFFSET UNITYSDK_OFFSET(0x1D196970)
#define SYSTEM_TYPE_METHOD_2_8E6CB5045133FE7B_OFFSET UNITYSDK_OFFSET(0x1D1AB020)
#define SYSTEM_TYPE_METHOD_2_8F74C0EFB6973156_OFFSET UNITYSDK_OFFSET(0x1D1A9FA0)
#define SYSTEM_TYPE_METHOD_2_8FB7CA68F1D729F9_OFFSET UNITYSDK_OFFSET(0x1D1AC830)
#define SYSTEM_TYPE_METHOD_2_8FEC3ACCA3C57C46_OFFSET UNITYSDK_OFFSET(0x1D1A94C0)
#define SYSTEM_TYPE_METHOD_2_9194AEB8C3EFB726_OFFSET UNITYSDK_OFFSET(0x1D1AEAE0)
#define SYSTEM_TYPE_METHOD_2_930C6E00D64F75B2_OFFSET UNITYSDK_OFFSET(0x1D1AAF30)
#define SYSTEM_TYPE_METHOD_2_944B288DCD05C0A2_OFFSET UNITYSDK_OFFSET(0x1D1A98B0)
#define SYSTEM_TYPE_METHOD_2_94588964F1650EE0_OFFSET UNITYSDK_OFFSET(0x1D183CA0)
#define SYSTEM_TYPE_METHOD_2_951E6AEB335B97C7_OFFSET UNITYSDK_OFFSET(0x1D1ADC90)
#define SYSTEM_TYPE_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1D1AE390)
#define SYSTEM_TYPE_METHOD_2_96B7CEA203D7C950_OFFSET UNITYSDK_OFFSET(0x1D1AA540)
#define SYSTEM_TYPE_METHOD_2_98C7EF1109EAC80E_OFFSET UNITYSDK_OFFSET(0x1D1ABCE0)
#define SYSTEM_TYPE_METHOD_2_9A88E409B5509FFF_OFFSET UNITYSDK_OFFSET(0x1D1ADCD0)
#define SYSTEM_TYPE_METHOD_2_9B14DDD47F78BE42_OFFSET UNITYSDK_OFFSET(0x1D1A99F0)
#define SYSTEM_TYPE_METHOD_2_9CD59C62BB547794_OFFSET UNITYSDK_OFFSET(0x1D1AE4A0)
#define SYSTEM_TYPE_METHOD_2_9D1595EC95232895_OFFSET UNITYSDK_OFFSET(0x1D1A9950)
#define SYSTEM_TYPE_METHOD_2_9DB8152063D37616_OFFSET UNITYSDK_OFFSET(0x1D1A9FF0)
#define SYSTEM_TYPE_METHOD_2_9E074B7A2129359B_OFFSET UNITYSDK_OFFSET(0x1D1AD040)
#define SYSTEM_TYPE_METHOD_2_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x1D1A9470)
#define SYSTEM_TYPE_METHOD_2_A99467CE9479C990_2_OFFSET UNITYSDK_OFFSET(0x1D1AE9D0)
#define SYSTEM_TYPE_METHOD_2_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1D1A9450)
#define SYSTEM_TYPE_METHOD_2_AB93D2EC75EDFB04_OFFSET UNITYSDK_OFFSET(0x1D1AA700)
#define SYSTEM_TYPE_METHOD_2_AE554D726F2B5DA3_OFFSET UNITYSDK_OFFSET(0x1D1AA980)
#define SYSTEM_TYPE_METHOD_2_B28E4D719DA9F08F_OFFSET UNITYSDK_OFFSET(0x1D1AC710)
#define SYSTEM_TYPE_METHOD_2_B4C5A97F5D5A4EBC_1_OFFSET UNITYSDK_OFFSET(0x1D1AB000)
#define SYSTEM_TYPE_METHOD_2_B4C5A97F5D5A4EBC_OFFSET UNITYSDK_OFFSET(0x1D1AA6E0)
#define SYSTEM_TYPE_METHOD_2_B71F7BC2FBE92AD7_OFFSET UNITYSDK_OFFSET(0x1D1AB0B0)
#define SYSTEM_TYPE_METHOD_2_BAD0232A38D2B40C_OFFSET UNITYSDK_OFFSET(0x1D1A9680)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_1_OFFSET UNITYSDK_OFFSET(0x1D1AC540)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_2_OFFSET UNITYSDK_OFFSET(0x1D1AC590)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_3_OFFSET UNITYSDK_OFFSET(0x1D1ADA20)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_4_OFFSET UNITYSDK_OFFSET(0x1D1ADA70)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_5_OFFSET UNITYSDK_OFFSET(0x1D1ADAC0)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_6_OFFSET UNITYSDK_OFFSET(0x1D1AE590)
#define SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_OFFSET UNITYSDK_OFFSET(0x1D1AC200)
#define SYSTEM_TYPE_METHOD_2_BF13A921A74DE0E3_OFFSET UNITYSDK_OFFSET(0x1D1AD880)
#define SYSTEM_TYPE_METHOD_2_BF772B1DF446DB82_OFFSET UNITYSDK_OFFSET(0x1D1A19F0)
#define SYSTEM_TYPE_METHOD_2_C24B6AF6A1369F2B_OFFSET UNITYSDK_OFFSET(0x1D1A9CF0)
#define SYSTEM_TYPE_METHOD_2_C30F4551B136B988_OFFSET UNITYSDK_OFFSET(0x1D1AAE60)
#define SYSTEM_TYPE_METHOD_2_C74EB1073E383038_OFFSET UNITYSDK_OFFSET(0x1D1ACF20)
#define SYSTEM_TYPE_METHOD_2_C84AED655A605DE0_OFFSET UNITYSDK_OFFSET(0x1D1AE0A0)
#define SYSTEM_TYPE_METHOD_2_CBD3BA4E6CDFFC36_OFFSET UNITYSDK_OFFSET(0x1D1AE5E0)
#define SYSTEM_TYPE_METHOD_2_CC5BBD601CE3FB1E_OFFSET UNITYSDK_OFFSET(0x1D1A9480)
#define SYSTEM_TYPE_METHOD_2_CFEBFFB58584A622_OFFSET UNITYSDK_OFFSET(0x1D1A9D80)
#define SYSTEM_TYPE_METHOD_2_D0E5B8DF616291AC_OFFSET UNITYSDK_OFFSET(0x1D1ACE80)
#define SYSTEM_TYPE_METHOD_2_D1BEE4831CE92503_OFFSET UNITYSDK_OFFSET(0x1D1AA6A0)
#define SYSTEM_TYPE_METHOD_2_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x1D19CF00)
#define SYSTEM_TYPE_METHOD_2_D2CD8D1EDDD0377E_OFFSET UNITYSDK_OFFSET(0x1D1A9590)
#define SYSTEM_TYPE_METHOD_2_D6805DB983BC2080_OFFSET UNITYSDK_OFFSET(0x1D1AEA90)
#define SYSTEM_TYPE_METHOD_2_DC2EC27FF4027CD4_OFFSET UNITYSDK_OFFSET(0x1D1AA960)
#define SYSTEM_TYPE_METHOD_2_DC3563BB998AAECC_OFFSET UNITYSDK_OFFSET(0x1D1A9CB0)
#define SYSTEM_TYPE_METHOD_2_DC661F0021CCF5E8_OFFSET UNITYSDK_OFFSET(0x1D1AA6C0)
#define SYSTEM_TYPE_METHOD_2_DCD121E649730AB3_OFFSET UNITYSDK_OFFSET(0x1D1AA5E0)
#define SYSTEM_TYPE_METHOD_2_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x1D1AC2C0)
#define SYSTEM_TYPE_METHOD_2_DFB6F182F8C5F37C_OFFSET UNITYSDK_OFFSET(0x1D1AB120)
#define SYSTEM_TYPE_METHOD_2_DFD406CADA0B7F84_OFFSET UNITYSDK_OFFSET(0x1D1AE3F0)
#define SYSTEM_TYPE_METHOD_2_E32E9D2F746C1AB2_OFFSET UNITYSDK_OFFSET(0x1D1A2EA0)
#define SYSTEM_TYPE_METHOD_2_E3F888547230D911_OFFSET UNITYSDK_OFFSET(0x1D1AA2D0)
#define SYSTEM_TYPE_METHOD_2_E48A585A7EF26F1D_OFFSET UNITYSDK_OFFSET(0x1D1A9460)
#define SYSTEM_TYPE_METHOD_2_E77ECCE0C35CFCDB_OFFSET UNITYSDK_OFFSET(0x1D1AC090)
#define SYSTEM_TYPE_METHOD_2_E89E41CA009424F7_OFFSET UNITYSDK_OFFSET(0x1D1AE4F0)
#define SYSTEM_TYPE_METHOD_2_E90E9464C54974CE_OFFSET UNITYSDK_OFFSET(0x1D1A9770)
#define SYSTEM_TYPE_METHOD_2_EA0DA1401919D184_OFFSET UNITYSDK_OFFSET(0x1D1A9B30)
#define SYSTEM_TYPE_METHOD_2_EDE03DCEC6FAC93F_OFFSET UNITYSDK_OFFSET(0x1D1AAB60)
#define SYSTEM_TYPE_METHOD_2_EED4C8FA39B90919_OFFSET UNITYSDK_OFFSET(0x1D1AAA70)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_10_OFFSET UNITYSDK_OFFSET(0x1D1ABF40)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_11_OFFSET UNITYSDK_OFFSET(0x1D1ABF60)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_12_OFFSET UNITYSDK_OFFSET(0x1D1A27B0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_13_OFFSET UNITYSDK_OFFSET(0x1D1A3200)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_14_OFFSET UNITYSDK_OFFSET(0x1D1ABFC0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_15_OFFSET UNITYSDK_OFFSET(0x1D1AC050)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_16_OFFSET UNITYSDK_OFFSET(0x1D1AC070)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_17_OFFSET UNITYSDK_OFFSET(0x1D1AC150)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_18_OFFSET UNITYSDK_OFFSET(0x1D1AC170)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_19_OFFSET UNITYSDK_OFFSET(0x1D1AC1A0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1D1A1AC0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_20_OFFSET UNITYSDK_OFFSET(0x1D198A30)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_21_OFFSET UNITYSDK_OFFSET(0x1D1AC1D0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_22_OFFSET UNITYSDK_OFFSET(0x1D1AC1E0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_23_OFFSET UNITYSDK_OFFSET(0x1D1AC1F0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_24_OFFSET UNITYSDK_OFFSET(0x1D1AC250)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_25_OFFSET UNITYSDK_OFFSET(0x1D197D80)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_26_OFFSET UNITYSDK_OFFSET(0x1D196980)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_27_OFFSET UNITYSDK_OFFSET(0x1D1A1A60)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_28_OFFSET UNITYSDK_OFFSET(0x1D1AC470)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_29_OFFSET UNITYSDK_OFFSET(0x1D1AC480)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1D1986C0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_30_OFFSET UNITYSDK_OFFSET(0x1D1AC490)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_31_OFFSET UNITYSDK_OFFSET(0x1D1A4050)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_32_OFFSET UNITYSDK_OFFSET(0x1D1AC4A0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_33_OFFSET UNITYSDK_OFFSET(0x1D1AC4B0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_34_OFFSET UNITYSDK_OFFSET(0x1D1AC4C0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_35_OFFSET UNITYSDK_OFFSET(0x1D1AC700)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_36_OFFSET UNITYSDK_OFFSET(0x1D1AEA30)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1D1986A0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x1D1ABEA0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x1D1ABEC0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x1D1986E0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0x1D1ABEE0)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_8_OFFSET UNITYSDK_OFFSET(0x1D1ABF00)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_9_OFFSET UNITYSDK_OFFSET(0x1D1ABF20)
#define SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D1A1A40)
#define SYSTEM_TYPE_METHOD_2_F4D18854959ED471_OFFSET UNITYSDK_OFFSET(0x1D1A9EA0)
#define SYSTEM_TYPE_METHOD_2_F5B5922AF03D233C_OFFSET UNITYSDK_OFFSET(0x1D1AE300)
#define SYSTEM_TYPE_METHOD_2_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x1D1A9C40)
#define SYSTEM_TYPE_METHOD_2_FB9A1387D38501D0_OFFSET UNITYSDK_OFFSET(0x1D1A2880)

namespace System
{
	inline static constexpr unsigned int Type_TypeDefinitionIndex = 339;

	class Type : public ::System::Reflection::MemberInfo
	{
	public:
		static ::System::Reflection::Binder** StaticGet_Field_2_11()
		{
			return (::System::Reflection::Binder**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x5E0);
		}
		static ::System::Reflection::MemberFilter** StaticGet_Field_2_0()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x5E8);
		}
		static ::System::Object** StaticGet_Field_2_6()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x5F0);
		}
		static ::System::Reflection::MemberFilter** StaticGet_Field_2_1()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x5F8);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_Field_2_4()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x600);
		}
		static ::System::Reflection::MemberFilter** StaticGet_Field_2_7()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x608);
		}
		static ::System::Char* StaticGet_Field_2_5()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x140);
		}
		// static const ::System::Reflection::BindingFlags Field_2_10; // 0x0
		// static const ::System::Reflection::BindingFlags Field_2_9; // 0x0
		::System::RuntimeTypeHandle Field_2_8; // 0x10

		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_832295EC279E5994_OFFSET))(this);
		}

		static ::System::Void Method_2_4792FCD3AEEF1D34()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_4792FCD3AEEF1D34_OFFSET))();
		}

		::System::Reflection::MemberTypes Method_2_49E3FA61F17A6A16()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_49E3FA61F17A6A16_OFFSET))(this);
		}

		::System::Type* Method_2_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_A99467CE9479C990_OFFSET))(this);
		}

		::System::Reflection::MethodBase* Method_2_E48A585A7EF26F1D()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_E48A585A7EF26F1D_OFFSET))(this);
		}

		::System::Type* Method_2_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_A99467CE9479C990_1_OFFSET))(this);
		}

		static ::System::Type* Method_2_CC5BBD601CE3FB1E(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_CC5BBD601CE3FB1E_OFFSET))(typeName, assemblyResolver, typeResolver);
		}

		static ::System::Type* Method_2_8FEC3ACCA3C57C46(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8FEC3ACCA3C57C46_OFFSET))(typeName, assemblyResolver, typeResolver, throwOnError);
		}

		static ::System::Type* Method_2_0BC61176382266A0(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_0BC61176382266A0_OFFSET))(typeName, assemblyResolver, typeResolver, throwOnError, ignoreCase);
		}

		::System::Type* Method_2_441D6FB69D162BCC()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_OFFSET))(this);
		}

		::System::Runtime::InteropServices::StructLayoutAttribute* Method_2_D2CD8D1EDDD0377E()
		{
			return ((::System::Runtime::InteropServices::StructLayoutAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_D2CD8D1EDDD0377E_OFFSET))(this);
		}

		::System::Type* Method_2_441D6FB69D162BCC_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_1_OFFSET))(this);
		}

		::System::Type* Method_2_441D6FB69D162BCC_2()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_2_OFFSET))(this);
		}

		::System::Type* Method_2_BAD0232A38D2B40C(::System::Int32 rank)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BAD0232A38D2B40C_OFFSET))(this, rank);
		}

		static ::System::Type* Method_2_649156FC20B6C2E7(::System::String* progID)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_649156FC20B6C2E7_OFFSET))(progID);
		}

		static ::System::Type* Method_2_E90E9464C54974CE(::System::String* progID, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_E90E9464C54974CE_OFFSET))(progID, throwOnError);
		}

		static ::System::Type* Method_2_6277CA0648979D17(::System::String* progID, ::System::String* server)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_6277CA0648979D17_OFFSET))(progID, server);
		}

		static ::System::Type* Method_2_944B288DCD05C0A2(::System::String* progID, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_944B288DCD05C0A2_OFFSET))(progID, server, throwOnError);
		}

		static ::System::Type* Method_2_9D1595EC95232895(::System::Guid clsid)
		{
			return ((::System::Type*(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_9D1595EC95232895_OFFSET))(clsid);
		}

		static ::System::Type* Method_2_9B14DDD47F78BE42(::System::Guid clsid, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_9B14DDD47F78BE42_OFFSET))(clsid, throwOnError);
		}

		static ::System::Type* Method_2_48193F0DE1E79383(::System::Guid clsid, ::System::String* server)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_48193F0DE1E79383_OFFSET))(clsid, server);
		}

		static ::System::Type* Method_2_EA0DA1401919D184(::System::Guid clsid, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_EA0DA1401919D184_OFFSET))(clsid, server, throwOnError);
		}

		static ::System::TypeCode Method_2_67529902BB4E8D25(::System::Type* type)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_67529902BB4E8D25_OFFSET))(type);
		}

		::System::TypeCode Method_2_2085A8E7752C4504()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_2085A8E7752C4504_OFFSET))(this);
		}

		static ::System::Reflection::Binder* Method_2_19F8A88108880A99()
		{
			return ((::System::Reflection::Binder*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_19F8A88108880A99_OFFSET))();
		}

		static ::System::Void Method_2_F8C7231308CD2C82()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F8C7231308CD2C82_OFFSET))();
		}

		::System::Object* Method_2_DC3563BB998AAECC(::System::String* name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* args, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DC3563BB998AAECC_OFFSET))(this, name, invokeAttr, binder, target, args, culture);
		}

		::System::Object* Method_2_C24B6AF6A1369F2B(::System::String* name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_C24B6AF6A1369F2B_OFFSET))(this, name, invokeAttr, binder, target, args);
		}

		::System::RuntimeTypeHandle Method_2_1A8E6050C9A53DBB()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_1A8E6050C9A53DBB_OFFSET))(this);
		}

		::System::RuntimeTypeHandle Method_2_0D3FA31517A13597()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_0D3FA31517A13597_OFFSET))(this);
		}

		static ::System::RuntimeTypeHandle Method_2_CFEBFFB58584A622(::System::Object* o)
		{
			return ((::System::RuntimeTypeHandle(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_CFEBFFB58584A622_OFFSET))(o);
		}

		::System::Int32 Method_2_7202D45B87B95D58()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7202D45B87B95D58_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* Method_2_E32E9D2F746C1AB2(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_E32E9D2F746C1AB2_OFFSET))(this, bindingAttr, binder, callConvention, types, modifiers);
		}

		::System::Reflection::ConstructorInfo* Method_2_F4D18854959ED471(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F4D18854959ED471_OFFSET))(this, bindingAttr, binder, types, modifiers);
		}

		::System::Reflection::ConstructorInfo* Method_2_8F74C0EFB6973156(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8F74C0EFB6973156_OFFSET))(this, types);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* Method_2_658A7E0382F7B35F()
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_658A7E0382F7B35F_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* Method_2_9DB8152063D37616()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_9DB8152063D37616_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_2_6C8403E1516BC0EF(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_6C8403E1516BC0EF_OFFSET))(this, name, bindingAttr, binder, callConvention, types, modifiers);
		}

		::System::Reflection::MethodInfo* Method_2_41708008508DB94D(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_41708008508DB94D_OFFSET))(this, name, bindingAttr, binder, types, modifiers);
		}

		::System::Reflection::MethodInfo* Method_2_E3F888547230D911(::System::String* name, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_E3F888547230D911_OFFSET))(this, name, types, modifiers);
		}

		::System::Reflection::MethodInfo* Method_2_5281C34237041CCE(::System::String* name, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_5281C34237041CCE_OFFSET))(this, name, types);
		}

		::System::Reflection::MethodInfo* Method_2_96B7CEA203D7C950(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_96B7CEA203D7C950_OFFSET))(this, name, bindingAttr);
		}

		::System::Reflection::MethodInfo* Method_2_DCD121E649730AB3(::System::String* name)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DCD121E649730AB3_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* Method_2_1F9CF0B1087F1CF5()
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_1F9CF0B1087F1CF5_OFFSET))(this);
		}

		::System::Reflection::FieldInfo* Method_2_D1BEE4831CE92503(::System::String* name)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_D1BEE4831CE92503_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* Method_2_DC661F0021CCF5E8()
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DC661F0021CCF5E8_OFFSET))(this);
		}

		::System::Type* Method_2_B4C5A97F5D5A4EBC(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_B4C5A97F5D5A4EBC_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Type*>* Method_2_AB93D2EC75EDFB04(::System::Reflection::TypeFilter* filter, ::System::Object* filterCriteria)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::TypeFilter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_AB93D2EC75EDFB04_OFFSET))(this, filter, filterCriteria);
		}

		::System::Reflection::EventInfo* Method_2_41C953C3DC1CA8A3(::System::String* name)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_41C953C3DC1CA8A3_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* Method_2_DC2EC27FF4027CD4()
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DC2EC27FF4027CD4_OFFSET))(this);
		}

		::System::Reflection::PropertyInfo* Method_2_AE554D726F2B5DA3(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_AE554D726F2B5DA3_OFFSET))(this, name, bindingAttr, binder, returnType, types, modifiers);
		}

		::System::Reflection::PropertyInfo* Method_2_EED4C8FA39B90919(::System::String* name, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_EED4C8FA39B90919_OFFSET))(this, name, returnType, types, modifiers);
		}

		::System::Reflection::PropertyInfo* Method_2_EDE03DCEC6FAC93F(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_EDE03DCEC6FAC93F_OFFSET))(this, name, bindingAttr);
		}

		::System::Reflection::PropertyInfo* Method_2_356B1FEE9A0FD3FB(::System::String* name, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_356B1FEE9A0FD3FB_OFFSET))(this, name, returnType, types);
		}

		::System::Reflection::PropertyInfo* Method_2_19658C3189E1936E(::System::String* name, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_19658C3189E1936E_OFFSET))(this, name, types);
		}

		::System::Reflection::PropertyInfo* Method_2_14D90F9EAA5338F5(::System::String* name, ::System::Type* returnType)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_14D90F9EAA5338F5_OFFSET))(this, name, returnType);
		}

		::System::Reflection::PropertyInfo* Method_2_C30F4551B136B988(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Type* returnType)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_C30F4551B136B988_OFFSET))(this, name, bindingAttr, returnType);
		}

		::System::Reflection::PropertyInfo* Method_2_930C6E00D64F75B2(::System::String* name)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_930C6E00D64F75B2_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* Method_2_64077BBBAC3C741E()
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_64077BBBAC3C741E_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_2_3EACA5870CDCB012()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_3EACA5870CDCB012_OFFSET))(this);
		}

		::System::Type* Method_2_B4C5A97F5D5A4EBC_1(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_B4C5A97F5D5A4EBC_1_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_2_12080E436B35722B(::System::String* name)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_12080E436B35722B_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_2_8E6CB5045133FE7B(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8E6CB5045133FE7B_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_2_4FCA5BC476E1EB90(::System::String* name, ::System::Reflection::MemberTypes type, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_4FCA5BC476E1EB90_OFFSET))(this, name, type, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_2_B71F7BC2FBE92AD7()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_B71F7BC2FBE92AD7_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_2_274AFBB8FBB350FB()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_274AFBB8FBB350FB_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_2_DFB6F182F8C5F37C(::System::Reflection::MemberTypes memberType, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::MemberFilter* filter, ::System::Object* filterCriteria)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags, ::System::Reflection::MemberFilter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DFB6F182F8C5F37C_OFFSET))(this, memberType, bindingAttr, filter, filterCriteria);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Reflection::TypeAttributes Method_2_98C7EF1109EAC80E()
		{
			return ((::System::Reflection::TypeAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_98C7EF1109EAC80E_OFFSET))(this);
		}

		::System::Reflection::GenericParameterAttributes Method_2_0C3F7ABB64BEF122()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_0C3F7ABB64BEF122_OFFSET))(this);
		}

		::System::Boolean Method_2_46EC973EE97CF90C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_46EC973EE97CF90C_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_4_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_5_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_6_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_7_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_8_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_9_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_10()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_10_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_11()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_11_OFFSET))(this);
		}

		::System::Boolean Method_2_3E51EEFB06718274()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_3E51EEFB06718274_OFFSET))(this);
		}

		::System::Boolean Method_2_D2809205008ACF99()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_D2809205008ACF99_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_12()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_12_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_13()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_13_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_14()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_14_OFFSET))(this);
		}

		::System::Boolean Method_2_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_15()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_15_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_16()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_16_OFFSET))(this);
		}

		::System::Boolean Method_2_E77ECCE0C35CFCDB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_E77ECCE0C35CFCDB_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_17()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_17_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_18()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_18_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_19()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_19_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_20()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_20_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_21()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_21_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_22()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_22_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_23()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_23_OFFSET))(this);
		}

		::System::Boolean Method_2_BDB668AB780CC35F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_24()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_24_OFFSET))(this);
		}

		::System::Int32 Method_2_7202D45B87B95D58_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7202D45B87B95D58_1_OFFSET))(this);
		}

		::System::Boolean Method_2_DD1EE3A48E307831()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DD1EE3A48E307831_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_2_7886B044EB6D0826()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7886B044EB6D0826_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_25()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_25_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_26()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_26_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_27()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_27_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_28()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_28_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_29()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_29_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_30()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_30_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_31()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_31_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_32()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_32_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_33()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_33_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_34()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_34_OFFSET))(this);
		}

		::System::Boolean Method_2_1D4018D4200358D0_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
		}

		::System::Boolean Method_2_BDB668AB780CC35F_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_1_OFFSET))(this);
		}

		::System::Boolean Method_2_BDB668AB780CC35F_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_2_OFFSET))(this);
		}

		::System::Type* Method_2_707E378E209AD3DB(::Il2CppArray<::System::Type*>* typeArguments)
		{
			return ((::System::Type*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_707E378E209AD3DB_OFFSET))(this, typeArguments);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_35()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_35_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_2_B28E4D719DA9F08F()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_B28E4D719DA9F08F_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_2_11726621EC20B8A1()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_11726621EC20B8A1_OFFSET))(this);
		}

		::System::Type* Method_2_77204B8F346C64B5()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_77204B8F346C64B5_OFFSET))(this);
		}

		::System::Type* Method_2_BF772B1DF446DB82()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BF772B1DF446DB82_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* Method_2_8FB7CA68F1D729F9()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8FB7CA68F1D729F9_OFFSET))(this);
		}

		::System::Array* Method_2_D0E5B8DF616291AC()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_D0E5B8DF616291AC_OFFSET))(this);
		}

		::System::Array* Method_2_C74EB1073E383038()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_C74EB1073E383038_OFFSET))(this);
		}

		::System::Void Method_2_7CB420157B20CDB6(::Il2CppArray<::System::String*>*& enumNames, ::System::Array*& enumValues)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*&, ::System::Array*&))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7CB420157B20CDB6_OFFSET))(this, enumNames, enumValues);
		}

		::System::Type* Method_2_0F55D804EED8B1CB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_0F55D804EED8B1CB_OFFSET))(this);
		}

		::System::Boolean Method_2_9E074B7A2129359B(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_9E074B7A2129359B_OFFSET))(this, value);
		}

		::System::String* Method_2_BF13A921A74DE0E3(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BF13A921A74DE0E3_OFFSET))(this, value);
		}

		static ::System::Int32 Method_2_4DB8EF219D07153D(::System::Array* array, ::System::Object* value)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_4DB8EF219D07153D_OFFSET))(array, value);
		}

		static ::System::Boolean Method_2_106AAA0EC98942A9(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_106AAA0EC98942A9_OFFSET))(t);
		}

		::System::Boolean Method_2_BDB668AB780CC35F_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_3_OFFSET))(this);
		}

		::System::Boolean Method_2_BDB668AB780CC35F_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_4_OFFSET))(this);
		}

		::System::Boolean Method_2_BDB668AB780CC35F_5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_5_OFFSET))(this);
		}

		::System::Boolean Method_2_30FF6A1E2EEC22D4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_30FF6A1E2EEC22D4_OFFSET))(this);
		}

		::System::Boolean Method_2_6558E8094F65F2B7(::System::Type* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_6558E8094F65F2B7_OFFSET))(this, c);
		}

		::System::Boolean Method_2_951E6AEB335B97C7(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_951E6AEB335B97C7_OFFSET))(this, o);
		}

		::System::Boolean Method_2_9A88E409B5509FFF(::System::Type* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_9A88E409B5509FFF_OFFSET))(this, c);
		}

		::System::Boolean Method_2_C84AED655A605DE0(::System::Type* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_C84AED655A605DE0_OFFSET))(this, other);
		}

		::System::Boolean Method_2_3C86C4C22DFC104C(::System::Type* ifaceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_3C86C4C22DFC104C_OFFSET))(this, ifaceType);
		}

		::System::String* Method_2_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_126AB3935214AA22_OFFSET))(this);
		}

		::System::String* Method_2_0A0A3449BBEF67E8(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_0A0A3449BBEF67E8_OFFSET))(this, serialization);
		}

		::System::String* Method_2_0B34AA51B95C62BE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_0B34AA51B95C62BE_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Type*>* Method_2_1BFB32349816027D(::Il2CppArray<::System::Object*>* args)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_1BFB32349816027D_OFFSET))(args);
		}

		::System::Boolean Method_2_F5B5922AF03D233C(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F5B5922AF03D233C_OFFSET))(this, o);
		}

		::System::Boolean Method_2_6F0CF7A7B8D1AF17(::System::Type* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_6F0CF7A7B8D1AF17_OFFSET))(this, o);
		}

		static ::System::Boolean Method_2_8C387B4DBE4B1BEB(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8C387B4DBE4B1BEB_OFFSET))(left, right);
		}

		static ::System::Boolean Method_2_8C387B4DBE4B1BEB_1(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_8C387B4DBE4B1BEB_1_OFFSET))(left, right);
		}

		::System::Int32 Method_2_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_95780ED94B90ED36_OFFSET))(this);
		}

		::System::Reflection::InterfaceMapping Method_2_DFD406CADA0B7F84(::System::Type* interfaceType)
		{
			return ((::System::Reflection::InterfaceMapping(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_DFD406CADA0B7F84_OFFSET))(this, interfaceType);
		}

		::System::Type* Method_2_FB9A1387D38501D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_FB9A1387D38501D0_OFFSET))(this);
		}

		::System::Void Method_2_7ADAE76435FA645D(::System::UInt32& pcTInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7ADAE76435FA645D_OFFSET))(this, pcTInfo);
		}

		::System::Void Method_2_9CD59C62BB547794(::System::UInt32 iTInfo, ::System::UInt32 lcid, ::System::IntPtr ppTInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_9CD59C62BB547794_OFFSET))(this, iTInfo, lcid, ppTInfo);
		}

		::System::Void Method_2_E89E41CA009424F7(::System::Guid& riid, ::System::IntPtr rgszNames, ::System::UInt32 cNames, ::System::UInt32 lcid, ::System::IntPtr rgDispId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_E89E41CA009424F7_OFFSET))(this, riid, rgszNames, cNames, lcid, rgDispId);
		}

		::System::Void Method_2_2213B9582589B042(::System::UInt32 dispIdMember, ::System::Guid& riid, ::System::UInt32 lcid, ::System::Int16 wFlags, ::System::IntPtr pDispParams, ::System::IntPtr pVarResult, ::System::IntPtr pExcepInfo, ::System::IntPtr puArgErr)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Guid&, ::System::UInt32, ::System::Int16, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_2213B9582589B042_OFFSET))(this, dispIdMember, riid, lcid, wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);
		}

		::System::Boolean Method_2_BDB668AB780CC35F_6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_BDB668AB780CC35F_6_OFFSET))(this);
		}

		static ::System::Type* Method_2_CBD3BA4E6CDFFC36(::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_CBD3BA4E6CDFFC36_OFFSET))(name, throwOnError, ignoreCase);
		}

		static ::System::Type* Method_2_94588964F1650EE0(::System::String* typeName)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_94588964F1650EE0_OFFSET))(typeName);
		}

		static ::System::Type* Method_2_76D86C3B4084ED50(::System::String* typeName, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_76D86C3B4084ED50_OFFSET))(typeName, throwOnError);
		}

		static ::System::Type* Method_2_16F5EE15AA8012FE(::System::String* typeName, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_16F5EE15AA8012FE_OFFSET))(typeName, throwOnError, ignoreCase);
		}

		static ::System::Type* Method_2_7C6826D9DBE5A703(::System::String* typeName, ::System::Boolean throwIfNotFound, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_7C6826D9DBE5A703_OFFSET))(typeName, throwIfNotFound, ignoreCase);
		}

		::System::Type* Method_2_A99467CE9479C990_2()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_A99467CE9479C990_2_OFFSET))(this);
		}

		::System::Type* Method_2_441D6FB69D162BCC_3()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_441D6FB69D162BCC_3_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_36()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_F0088C88851A7DFB_36_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_2_564EB76CD896C3A1(::System::Reflection::MethodInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_564EB76CD896C3A1_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::ConstructorInfo* Method_2_D6805DB983BC2080(::System::Reflection::ConstructorInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_D6805DB983BC2080_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::FieldInfo* Method_2_9194AEB8C3EFB726(::System::Reflection::FieldInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_9194AEB8C3EFB726_OFFSET))(this, fromNoninstanciated);
		}

		static ::System::Type* Method_2_504AF74076537693(::System::RuntimeTypeHandle handle)
		{
			return ((::System::Type*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_504AF74076537693_OFFSET))(handle);
		}

		static ::System::Type* Method_2_643BAFBDFE5E07C3(::System::IntPtr handle)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_643BAFBDFE5E07C3_OFFSET))(handle);
		}
	};
}

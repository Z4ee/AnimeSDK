#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/GenericParameterAttributes.h"
#include "unitysdk/System/Reflection/InterfaceMapping.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/Reflection/TypeInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/RuntimeType_ListBuilder_1.h"
#include "unitysdk/System/RuntimeType_MemberListType.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/TypeNameKind.h"

namespace System { class Array; }
namespace System { class MonoTypeInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class MonoCMethod; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Reflection { class RuntimeConstructorInfo; }
namespace System::Reflection { class RuntimeEventInfo; }
namespace System::Reflection { class RuntimeFieldInfo; }
namespace System::Reflection { class RuntimeMethodInfo; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Reflection { class RuntimePropertyInfo; }
namespace System::Runtime::InteropServices { class StructLayoutAttribute; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMETYPE_METHOD_4_005EBF98C3532FFD_OFFSET UNITYSDK_OFFSET(0x1D19BA20)
#define SYSTEM_RUNTIMETYPE_METHOD_4_024382CE80365B25_OFFSET UNITYSDK_OFFSET(0x1D198090)
#define SYSTEM_RUNTIMETYPE_METHOD_4_02954A1C23795FB8_OFFSET UNITYSDK_OFFSET(0x1D1A3DA0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_0334FF501B5B4BBD_OFFSET UNITYSDK_OFFSET(0x1D19FB70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_0711F9291C78FC7E_OFFSET UNITYSDK_OFFSET(0x1D1A2B90)
#define SYSTEM_RUNTIMETYPE_METHOD_4_073DD9BB0734A6ED_OFFSET UNITYSDK_OFFSET(0x1D1A31F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_083577508CCFDAF3_OFFSET UNITYSDK_OFFSET(0x1D1A1460)
#define SYSTEM_RUNTIMETYPE_METHOD_4_0C18B9D424367DD8_OFFSET UNITYSDK_OFFSET(0x1D19BED0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_0C9478799733C6A5_OFFSET UNITYSDK_OFFSET(0x1D1A41F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_0E1E76A0C6190781_OFFSET UNITYSDK_OFFSET(0x1D197FC0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_0EB5A38382E7897A_OFFSET UNITYSDK_OFFSET(0x1D19C930)
#define SYSTEM_RUNTIMETYPE_METHOD_4_11726621EC20B8A1_OFFSET UNITYSDK_OFFSET(0x1D19F4A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_150CF985911718EE_OFFSET UNITYSDK_OFFSET(0x1D1A3670)
#define SYSTEM_RUNTIMETYPE_METHOD_4_178DAFA20962D7A6_OFFSET UNITYSDK_OFFSET(0x1D19BC70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1A6FE1EF4452538C_OFFSET UNITYSDK_OFFSET(0x1D19EA90)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1C0B3B154EF753FD_OFFSET UNITYSDK_OFFSET(0x1D19FA40)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1CE4D117678600CC_1_OFFSET UNITYSDK_OFFSET(0x1D1A4870)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1CE4D117678600CC_OFFSET UNITYSDK_OFFSET(0x1D1A4860)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1CEB1E5016BFB4BD_OFFSET UNITYSDK_OFFSET(0x1D1A2890)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1D19E4E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1D19E410)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1EE706B64AB2E0B5_OFFSET UNITYSDK_OFFSET(0x1D198780)
#define SYSTEM_RUNTIMETYPE_METHOD_4_1F60BF24C085B9DD_OFFSET UNITYSDK_OFFSET(0x1D19E650)
#define SYSTEM_RUNTIMETYPE_METHOD_4_23616C0014E07556_1_OFFSET UNITYSDK_OFFSET(0x1D1A3FD0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_23616C0014E07556_OFFSET UNITYSDK_OFFSET(0x1D1A3F20)
#define SYSTEM_RUNTIMETYPE_METHOD_4_2419027A1B6A289C_OFFSET UNITYSDK_OFFSET(0x1D1A4730)
#define SYSTEM_RUNTIMETYPE_METHOD_4_247EE95BB171CB15_OFFSET UNITYSDK_OFFSET(0x1D19D4A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_25669C2F5FCF3304_OFFSET UNITYSDK_OFFSET(0x1D19E370)
#define SYSTEM_RUNTIMETYPE_METHOD_4_299BBAE2E9EA23BB_OFFSET UNITYSDK_OFFSET(0x1D1A4880)
#define SYSTEM_RUNTIMETYPE_METHOD_4_2EF36975534D3ECF_OFFSET UNITYSDK_OFFSET(0x1D19D490)
#define SYSTEM_RUNTIMETYPE_METHOD_4_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1D19E470)
#define SYSTEM_RUNTIMETYPE_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1D19E280)
#define SYSTEM_RUNTIMETYPE_METHOD_4_3C126BB7F0AB06C0_OFFSET UNITYSDK_OFFSET(0x1D1989B0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_3D23F6856598AB45_OFFSET UNITYSDK_OFFSET(0x1D1A1F10)
#define SYSTEM_RUNTIMETYPE_METHOD_4_3D2981724ADAD83D_OFFSET UNITYSDK_OFFSET(0x1D19F240)
#define SYSTEM_RUNTIMETYPE_METHOD_4_3E73D4BF8B2402C5_OFFSET UNITYSDK_OFFSET(0x1D1A3E00)
#define SYSTEM_RUNTIMETYPE_METHOD_4_3E9C48238FF9F629_OFFSET UNITYSDK_OFFSET(0x1D198550)
#define SYSTEM_RUNTIMETYPE_METHOD_4_40C2B49E32B39DA0_OFFSET UNITYSDK_OFFSET(0x1D1A1480)
#define SYSTEM_RUNTIMETYPE_METHOD_4_418612C8553B69E3_OFFSET UNITYSDK_OFFSET(0x1D19DE20)
#define SYSTEM_RUNTIMETYPE_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1D1A1B20)
#define SYSTEM_RUNTIMETYPE_METHOD_4_420F5543CED5025E_OFFSET UNITYSDK_OFFSET(0x1D1A13A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x1D19FC80)
#define SYSTEM_RUNTIMETYPE_METHOD_4_49091FA7D0FEFC35_OFFSET UNITYSDK_OFFSET(0x1D19FD70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_4ACE462D3A32946C_OFFSET UNITYSDK_OFFSET(0x1D1A4690)
#define SYSTEM_RUNTIMETYPE_METHOD_4_50AA39680205CAB4_OFFSET UNITYSDK_OFFSET(0x1D19C270)
#define SYSTEM_RUNTIMETYPE_METHOD_4_50C9CC00B047EA74_OFFSET UNITYSDK_OFFSET(0x1D1A4780)
#define SYSTEM_RUNTIMETYPE_METHOD_4_52A6E8F5E2C154FA_OFFSET UNITYSDK_OFFSET(0x1D1A47F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_54E7AEAF33AF5A22_OFFSET UNITYSDK_OFFSET(0x1D19CFA0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_55AA8DDCDD4BB83A_1_OFFSET UNITYSDK_OFFSET(0x1D1A4890)
#define SYSTEM_RUNTIMETYPE_METHOD_4_55AA8DDCDD4BB83A_OFFSET UNITYSDK_OFFSET(0x1D197D90)
#define SYSTEM_RUNTIMETYPE_METHOD_4_5612F26DCB691197_OFFSET UNITYSDK_OFFSET(0x1D1A41C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_58723AF19337DFD2_OFFSET UNITYSDK_OFFSET(0x1D1A1D40)
#define SYSTEM_RUNTIMETYPE_METHOD_4_5DDEFE80296CC936_OFFSET UNITYSDK_OFFSET(0x1D199250)
#define SYSTEM_RUNTIMETYPE_METHOD_4_63FAF2949B5A843E_OFFSET UNITYSDK_OFFSET(0x1D19DF30)
#define SYSTEM_RUNTIMETYPE_METHOD_4_645B1D3C84FF0E0E_1_OFFSET UNITYSDK_OFFSET(0x1D19DC40)
#define SYSTEM_RUNTIMETYPE_METHOD_4_645B1D3C84FF0E0E_OFFSET UNITYSDK_OFFSET(0x1D19DC20)
#define SYSTEM_RUNTIMETYPE_METHOD_4_65BD3E670E8E028C_OFFSET UNITYSDK_OFFSET(0x1D198B80)
#define SYSTEM_RUNTIMETYPE_METHOD_4_6676BF79100271CF_OFFSET UNITYSDK_OFFSET(0x1D1A45B0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_687E833F9132CA42_OFFSET UNITYSDK_OFFSET(0x1D1A41D0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_697F0A8BF5871CF3_OFFSET UNITYSDK_OFFSET(0x1D1A45A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_6ACCDE9BF52FCC3E_OFFSET UNITYSDK_OFFSET(0x1D19DC60)
#define SYSTEM_RUNTIMETYPE_METHOD_4_6CD735989F26829D_OFFSET UNITYSDK_OFFSET(0x1D19F420)
#define SYSTEM_RUNTIMETYPE_METHOD_4_6F7384C0215E3155_OFFSET UNITYSDK_OFFSET(0x1D1A14F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_6FA9F79B8743294B_OFFSET UNITYSDK_OFFSET(0x1D1A4850)
#define SYSTEM_RUNTIMETYPE_METHOD_4_7339F5E7304A21FD_OFFSET UNITYSDK_OFFSET(0x1D19E780)
#define SYSTEM_RUNTIMETYPE_METHOD_4_735295DDA07BAFE1_OFFSET UNITYSDK_OFFSET(0x1D19C4C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_772ABBEDF7F0E0E1_OFFSET UNITYSDK_OFFSET(0x1D1A41E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_7999019A63725FEC_OFFSET UNITYSDK_OFFSET(0x1D1A2A80)
#define SYSTEM_RUNTIMETYPE_METHOD_4_7F66C4648B09BAAB_1_OFFSET UNITYSDK_OFFSET(0x1D1A1AF0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_7F66C4648B09BAAB_OFFSET UNITYSDK_OFFSET(0x1D1A1AE0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_813D34E7D96F0117_OFFSET UNITYSDK_OFFSET(0x1D19DC90)
#define SYSTEM_RUNTIMETYPE_METHOD_4_81BC61DFAD3E6119_OFFSET UNITYSDK_OFFSET(0x1D19F510)
#define SYSTEM_RUNTIMETYPE_METHOD_4_82F4B250EE228D87_OFFSET UNITYSDK_OFFSET(0x1D1A49F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8943C0FE993200B9_OFFSET UNITYSDK_OFFSET(0x1D19E5E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_89834815FB1C7AF4_OFFSET UNITYSDK_OFFSET(0x1D1A1800)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8C102517D9E22765_OFFSET UNITYSDK_OFFSET(0x1D198700)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8C35F716B4594052_OFFSET UNITYSDK_OFFSET(0x1D19E020)
#define SYSTEM_RUNTIMETYPE_METHOD_4_8FD0D16114735478_OFFSET UNITYSDK_OFFSET(0x1D19FE40)
#define SYSTEM_RUNTIMETYPE_METHOD_4_90BBD5FF028A78B5_OFFSET UNITYSDK_OFFSET(0x1D19E1B0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_950D613B97BF99B5_OFFSET UNITYSDK_OFFSET(0x1D1A2A90)
#define SYSTEM_RUNTIMETYPE_METHOD_4_9634F9D504216B6C_OFFSET UNITYSDK_OFFSET(0x1D19B2E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_97FEFCB730B533A1_1_OFFSET UNITYSDK_OFFSET(0x1D198F40)
#define SYSTEM_RUNTIMETYPE_METHOD_4_97FEFCB730B533A1_OFFSET UNITYSDK_OFFSET(0x1D196990)
#define SYSTEM_RUNTIMETYPE_METHOD_4_98C7EF1109EAC80E_OFFSET UNITYSDK_OFFSET(0x1D19E260)
#define SYSTEM_RUNTIMETYPE_METHOD_4_9B55A85BD192BAFB_OFFSET UNITYSDK_OFFSET(0x1D1A2C10)
#define SYSTEM_RUNTIMETYPE_METHOD_4_9CCB67B83FE9B5F3_OFFSET UNITYSDK_OFFSET(0x1D19C760)
#define SYSTEM_RUNTIMETYPE_METHOD_4_9D9B4B9508B30842_OFFSET UNITYSDK_OFFSET(0x1D19DBA0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A0B2C8B62794E4BE_OFFSET UNITYSDK_OFFSET(0x1D1A2B20)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A0C1DAA6261B1CB5_OFFSET UNITYSDK_OFFSET(0x1D19E540)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A2497175640B6EA8_OFFSET UNITYSDK_OFFSET(0x1D19D7A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A371B288E0FD4413_OFFSET UNITYSDK_OFFSET(0x1D1A2FB0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A3C117624446E448_OFFSET UNITYSDK_OFFSET(0x1D1A1780)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A4A7A3F49AFEE9C7_OFFSET UNITYSDK_OFFSET(0x1D1A2A70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A4F0AE065ED7C0F6_OFFSET UNITYSDK_OFFSET(0x1D19A7A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A5F5C3921DFE273C_OFFSET UNITYSDK_OFFSET(0x1D19BB20)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A65F2580F7ABB5D5_OFFSET UNITYSDK_OFFSET(0x1D199700)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A87353E34D2B7F2A_OFFSET UNITYSDK_OFFSET(0x1D1A3220)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x1D198A90)
#define SYSTEM_RUNTIMETYPE_METHOD_4_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1D19E250)
#define SYSTEM_RUNTIMETYPE_METHOD_4_AF3DE7EEF4AB88EF_OFFSET UNITYSDK_OFFSET(0x1D19FA50)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B23F2CD0B80B660E_OFFSET UNITYSDK_OFFSET(0x1D19BAA0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B261C18A810978BB_OFFSET UNITYSDK_OFFSET(0x1D1A1670)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B51AE11045F7B3BA_OFFSET UNITYSDK_OFFSET(0x1D1A1A70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B6EC8E0AB9F74197_OFFSET UNITYSDK_OFFSET(0x1D1A33E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B79D35F01CCB2578_OFFSET UNITYSDK_OFFSET(0x1D19F490)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B7C8CD788B0FD326_OFFSET UNITYSDK_OFFSET(0x1D19E960)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B7E20B95BC406686_OFFSET UNITYSDK_OFFSET(0x1D19DBF0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_B9EEFB7B2B203E99_OFFSET UNITYSDK_OFFSET(0x1D1A48A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BAD677EDADF830ED_OFFSET UNITYSDK_OFFSET(0x1D198250)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BC39949F5BA69719_OFFSET UNITYSDK_OFFSET(0x1D19AC50)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x1D1A1470)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BC9F83DBB4E359FE_OFFSET UNITYSDK_OFFSET(0x1D19E0B0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BE049A869C46BA07_OFFSET UNITYSDK_OFFSET(0x1D1982E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BE8FDB1F94273CB8_OFFSET UNITYSDK_OFFSET(0x1D1A47E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x1D19FB10)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C2F6B06E4B0033F5_OFFSET UNITYSDK_OFFSET(0x1D198F50)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C2FD8FE3FD51CF32_OFFSET UNITYSDK_OFFSET(0x1D199E10)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C343973E7F1F4E6E_OFFSET UNITYSDK_OFFSET(0x1D19D4B0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C54DC6D3987164EB_OFFSET UNITYSDK_OFFSET(0x1D19B9A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C658F01C8EFFDB98_OFFSET UNITYSDK_OFFSET(0x1D1A1980)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C68820B46A75C60F_OFFSET UNITYSDK_OFFSET(0x1D19DB80)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1D1A4930)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1D1A1B00)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C76ADCCC62AD2D4A_OFFSET UNITYSDK_OFFSET(0x1D19AE30)
#define SYSTEM_RUNTIMETYPE_METHOD_4_C9B320AD2104D332_OFFSET UNITYSDK_OFFSET(0x1D1A4840)
#define SYSTEM_RUNTIMETYPE_METHOD_4_CE20781D8A6DF948_OFFSET UNITYSDK_OFFSET(0x1D19BB90)
#define SYSTEM_RUNTIMETYPE_METHOD_4_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D19E2F0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x1D19FC40)
#define SYSTEM_RUNTIMETYPE_METHOD_4_D41B1688CED7511D_OFFSET UNITYSDK_OFFSET(0x1D19A5C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_DC5EDEC1A4CAE943_OFFSET UNITYSDK_OFFSET(0x1D19DBC0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_DD9817232466412F_OFFSET UNITYSDK_OFFSET(0x1D19E4C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_DDC346E78E511F21_OFFSET UNITYSDK_OFFSET(0x1D1A1560)
#define SYSTEM_RUNTIMETYPE_METHOD_4_E049C0034E719151_OFFSET UNITYSDK_OFFSET(0x1D1A3E50)
#define SYSTEM_RUNTIMETYPE_METHOD_4_E3BC248272D5F8CC_OFFSET UNITYSDK_OFFSET(0x1D197C80)
#define SYSTEM_RUNTIMETYPE_METHOD_4_E53890B3FD8344AD_OFFSET UNITYSDK_OFFSET(0x1D1A4060)
#define SYSTEM_RUNTIMETYPE_METHOD_4_E6345EB155A5F7CA_OFFSET UNITYSDK_OFFSET(0x1D19BC00)
#define SYSTEM_RUNTIMETYPE_METHOD_4_E809E954CD095D1E_OFFSET UNITYSDK_OFFSET(0x1D19A110)
#define SYSTEM_RUNTIMETYPE_METHOD_4_ECE2E325FC736966_OFFSET UNITYSDK_OFFSET(0x1D1A3FA0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_EDF2D461BAF8F675_OFFSET UNITYSDK_OFFSET(0x1D198180)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1D19E330)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1D19E350)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1D19E360)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x1D19E520)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x1D1A49E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D19E2E0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0A9A42DE7458CAA_OFFSET UNITYSDK_OFFSET(0x1D19B4A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x1D19E180)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D19FA10)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F313A68022D4DE2F_OFFSET UNITYSDK_OFFSET(0x1D19E0A0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x1D1A4940)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F3AE841AC01EBAAE_OFFSET UNITYSDK_OFFSET(0x1D1A4040)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F71DCB97330711E2_OFFSET UNITYSDK_OFFSET(0x1D199B10)
#define SYSTEM_RUNTIMETYPE_METHOD_4_F9DD768E485FEA64_OFFSET UNITYSDK_OFFSET(0x1D197DA0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_FA09CB9096E985D0_OFFSET UNITYSDK_OFFSET(0x1D1A28C0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_FB9A1387D38501D0_OFFSET UNITYSDK_OFFSET(0x1D1A3F00)
#define SYSTEM_RUNTIMETYPE_METHOD_4_FC0BB9B98F157BA5_OFFSET UNITYSDK_OFFSET(0x1D19FCE0)
#define SYSTEM_RUNTIMETYPE_METHOD_4_FE197C2E59FB1FB0_OFFSET UNITYSDK_OFFSET(0x1D198A40)
#define SYSTEM_RUNTIMETYPE_METHOD_4_FF46CD27A057C3D6_OFFSET UNITYSDK_OFFSET(0x1D1A27C0)

namespace System
{
	inline static constexpr unsigned int RuntimeType_TypeDefinitionIndex = 309;

	class RuntimeType : public ::System::Reflection::TypeInfo
	{
	public:
		static ::System::RuntimeType** StaticGet_Field_4_5()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x560);
		}
		static ::System::RuntimeType** StaticGet_Field_4_7()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x568);
		}
		static ::System::RuntimeType** StaticGet_Field_4_1()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x570);
		}
		static ::System::RuntimeType** StaticGet_Field_4_2()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x578);
		}
		static ::System::RuntimeType** StaticGet_Field_4_0()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x580);
		}
		static ::System::RuntimeType** StaticGet_Field_4_6()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x588);
		}
		::System::MonoTypeInfo* Field_4_4; // 0x18
		::System::Object* Field_4_11; // 0x20
		::System::Reflection::RuntimeConstructorInfo* Field_4_10; // 0x28

		::System::Void Method_4_FE197C2E59FB1FB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_FE197C2E59FB1FB0_OFFSET))(this);
		}

		static ::System::Void Method_4_82F4B250EE228D87()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_82F4B250EE228D87_OFFSET))();
		}

		static ::System::Void Method_4_E3BC248272D5F8CC(::System::RuntimeType* type)
		{
			return ((::System::Void(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_E3BC248272D5F8CC_OFFSET))(type);
		}

		static ::System::Void Method_4_F9DD768E485FEA64(::Il2CppArray<::System::RuntimeType*>* genericArguments, ::Il2CppArray<::System::RuntimeType*>* genericParamters)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::RuntimeType*>*, ::Il2CppArray<::System::RuntimeType*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F9DD768E485FEA64_OFFSET))(genericArguments, genericParamters);
		}

		static ::System::Void Method_4_0E1E76A0C6190781(::System::String* fullname, ::System::String*& name, ::System::String*& ns)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_0E1E76A0C6190781_OFFSET))(fullname, name, ns);
		}

		static ::System::Void Method_4_024382CE80365B25(::System::Reflection::BindingFlags bindingFlags, ::System::String*& name, ::System::Boolean allowPrefixLookup, ::System::Boolean& prefixLookup, ::System::Boolean& ignoreCase, ::System::RuntimeType_MemberListType& listType)
		{
			return ((::System::Void(*)(::System::Reflection::BindingFlags, ::System::String*&, ::System::Boolean, ::System::Boolean&, ::System::Boolean&, ::System::RuntimeType_MemberListType&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_024382CE80365B25_OFFSET))(bindingFlags, name, allowPrefixLookup, prefixLookup, ignoreCase, listType);
		}

		static ::System::Void Method_4_EDF2D461BAF8F675(::System::Reflection::BindingFlags bindingFlags, ::System::String*& name, ::System::Boolean& ignoreCase, ::System::RuntimeType_MemberListType& listType)
		{
			return ((::System::Void(*)(::System::Reflection::BindingFlags, ::System::String*&, ::System::Boolean&, ::System::RuntimeType_MemberListType&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_EDF2D461BAF8F675_OFFSET))(bindingFlags, name, ignoreCase, listType);
		}

		static ::System::Boolean Method_4_BAD677EDADF830ED(::System::Reflection::MemberInfo* memberInfo, ::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BAD677EDADF830ED_OFFSET))(memberInfo, name, ignoreCase);
		}

		static ::System::Boolean Method_4_BE049A869C46BA07(::System::Reflection::MemberInfo* memberInfo, ::System::Reflection::BindingFlags bindingFlags, ::System::Boolean isPublic, ::System::Boolean isNonProtectedInternal, ::System::Boolean isStatic, ::System::String* name, ::System::Boolean prefixLookup)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BE049A869C46BA07_OFFSET))(memberInfo, bindingFlags, isPublic, isNonProtectedInternal, isStatic, name, prefixLookup);
		}

		static ::System::Boolean Method_4_3E9C48238FF9F629(::System::Type* type, ::System::Reflection::BindingFlags bindingFlags, ::System::String* name, ::System::Boolean prefixLookup, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Reflection::BindingFlags, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_3E9C48238FF9F629_OFFSET))(type, bindingFlags, name, prefixLookup, ns);
		}

		static ::System::Boolean Method_4_8C102517D9E22765(::System::Reflection::RuntimeMethodInfo* method, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::RuntimeMethodInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8C102517D9E22765_OFFSET))(method, bindingFlags, callConv, argumentTypes);
		}

		static ::System::Boolean Method_4_3C126BB7F0AB06C0(::System::Reflection::RuntimeConstructorInfo* constructor, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::RuntimeConstructorInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_3C126BB7F0AB06C0_OFFSET))(constructor, bindingFlags, callConv, argumentTypes);
		}

		static ::System::Boolean Method_4_1EE706B64AB2E0B5(::System::Reflection::MethodBase* methodBase, ::System::Reflection::BindingFlags methodFlags, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::BindingFlags, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1EE706B64AB2E0B5_OFFSET))(methodBase, methodFlags, bindingFlags, callConv, argumentTypes);
		}

		::System::Boolean Method_4_A8F6F688241E6DBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A8F6F688241E6DBC_OFFSET))(this);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> Method_4_C2F6B06E4B0033F5(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* types, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C2F6B06E4B0033F5_OFFSET))(this, name, bindingAttr, callConv, types, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*> Method_4_A65F2580F7ABB5D5(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* types, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A65F2580F7ABB5D5_OFFSET))(this, name, bindingAttr, callConv, types, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*> Method_4_C2FD8FE3FD51CF32(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::Il2CppArray<::System::Type*>* types, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C2FD8FE3FD51CF32_OFFSET))(this, name, bindingAttr, types, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*> Method_4_D41B1688CED7511D(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_D41B1688CED7511D_OFFSET))(this, name, bindingAttr, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*> Method_4_BC39949F5BA69719(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BC39949F5BA69719_OFFSET))(this, name, bindingAttr, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Type*> Method_4_9634F9D504216B6C(::System::String* fullname, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Type*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_9634F9D504216B6C_OFFSET))(this, fullname, bindingAttr, allowPrefixLookup);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* Method_4_C54DC6D3987164EB(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C54DC6D3987164EB_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* Method_4_005EBF98C3532FFD(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_005EBF98C3532FFD_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* Method_4_B23F2CD0B80B660E(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B23F2CD0B80B660E_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* Method_4_A5F5C3921DFE273C(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A5F5C3921DFE273C_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* Method_4_CE20781D8A6DF948(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_CE20781D8A6DF948_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Type*>* Method_4_E6345EB155A5F7CA(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_E6345EB155A5F7CA_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_4_178DAFA20962D7A6(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_178DAFA20962D7A6_OFFSET))(this, bindingAttr);
		}

		::System::Reflection::MethodInfo* Method_4_0C18B9D424367DD8(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_0C18B9D424367DD8_OFFSET))(this, name, bindingAttr, binder, callConv, types, modifiers);
		}

		::System::Reflection::ConstructorInfo* Method_4_50AA39680205CAB4(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_50AA39680205CAB4_OFFSET))(this, bindingAttr, binder, callConvention, types, modifiers);
		}

		::System::Reflection::PropertyInfo* Method_4_735295DDA07BAFE1(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_735295DDA07BAFE1_OFFSET))(this, name, bindingAttr, binder, returnType, types, modifiers);
		}

		::System::Reflection::EventInfo* Method_4_9CCB67B83FE9B5F3(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_9CCB67B83FE9B5F3_OFFSET))(this, name, bindingAttr);
		}

		::System::Reflection::FieldInfo* Method_4_0EB5A38382E7897A(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_0EB5A38382E7897A_OFFSET))(this, name, bindingAttr);
		}

		::System::Type* Method_4_54E7AEAF33AF5A22(::System::String* fullname, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_54E7AEAF33AF5A22_OFFSET))(this, fullname, ignoreCase);
		}

		::System::Type* Method_4_C343973E7F1F4E6E(::System::String* fullname, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C343973E7F1F4E6E_OFFSET))(this, fullname, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_4_A2497175640B6EA8(::System::String* name, ::System::Reflection::MemberTypes type, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A2497175640B6EA8_OFFSET))(this, name, type, bindingAttr);
		}

		::System::Reflection::Module* Method_4_C68820B46A75C60F()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C68820B46A75C60F_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_4_9D9B4B9508B30842()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_9D9B4B9508B30842_OFFSET))(this);
		}

		::System::Reflection::Assembly* Method_4_DC5EDEC1A4CAE943()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_DC5EDEC1A4CAE943_OFFSET))(this);
		}

		::System::Reflection::RuntimeAssembly* Method_4_B7E20B95BC406686()
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B7E20B95BC406686_OFFSET))(this);
		}

		::System::RuntimeTypeHandle Method_4_645B1D3C84FF0E0E()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_645B1D3C84FF0E0E_OFFSET))(this);
		}

		::System::RuntimeTypeHandle Method_4_645B1D3C84FF0E0E_1()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_645B1D3C84FF0E0E_1_OFFSET))(this);
		}

		::System::Boolean Method_4_6ACCDE9BF52FCC3E(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_6ACCDE9BF52FCC3E_OFFSET))(this, o);
		}

		::System::Boolean Method_4_813D34E7D96F0117(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_813D34E7D96F0117_OFFSET))(this, type);
		}

		::System::Boolean Method_4_418612C8553B69E3(::System::Reflection::TypeInfo* typeInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_418612C8553B69E3_OFFSET))(this, typeInfo);
		}

		::System::Boolean Method_4_63FAF2949B5A843E(::System::Type* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_63FAF2949B5A843E_OFFSET))(this, c);
		}

		::System::Boolean Method_4_8C35F716B4594052(::System::Type* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8C35F716B4594052_OFFSET))(this, other);
		}

		::System::Type* Method_4_F313A68022D4DE2F()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F313A68022D4DE2F_OFFSET))(this);
		}

		::System::RuntimeType* Method_4_65BD3E670E8E028C()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_65BD3E670E8E028C_OFFSET))(this);
		}

		::System::Type* Method_4_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A99467CE9479C990_OFFSET))(this);
		}

		::System::Reflection::TypeAttributes Method_4_98C7EF1109EAC80E()
		{
			return ((::System::Reflection::TypeAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_98C7EF1109EAC80E_OFFSET))(this);
		}

		::System::Boolean Method_4_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_4_CE34EA208837238D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_CE34EA208837238D_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_2_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_3_OFFSET))(this);
		}

		::System::Boolean Method_4_25669C2F5FCF3304()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_25669C2F5FCF3304_OFFSET))(this);
		}

		::System::Boolean Method_4_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Boolean Method_4_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Reflection::GenericParameterAttributes Method_4_90BBD5FF028A78B5()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_90BBD5FF028A78B5_OFFSET))(this);
		}

		::System::Boolean Method_4_1D4018D4200358D0_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1D4018D4200358D0_1_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_4_OFFSET))(this);
		}

		::System::Int32 Method_4_A0C1DAA6261B1CB5()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A0C1DAA6261B1CB5_OFFSET))(this);
		}

		::System::Type* Method_4_8943C0FE993200B9()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8943C0FE993200B9_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* Method_4_1F60BF24C085B9DD()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1F60BF24C085B9DD_OFFSET))(this);
		}

		::System::Array* Method_4_7339F5E7304A21FD()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_7339F5E7304A21FD_OFFSET))(this);
		}

		::System::Type* Method_4_B7C8CD788B0FD326()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B7C8CD788B0FD326_OFFSET))(this);
		}

		::System::Boolean Method_4_1A6FE1EF4452538C(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1A6FE1EF4452538C_OFFSET))(this, value);
		}

		::System::String* Method_4_3D2981724ADAD83D(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_3D2981724ADAD83D_OFFSET))(this, value);
		}

		::Il2CppArray<::System::RuntimeType*>* Method_4_6CD735989F26829D()
		{
			return ((::Il2CppArray<::System::RuntimeType*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_6CD735989F26829D_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_4_11726621EC20B8A1()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_11726621EC20B8A1_OFFSET))(this);
		}

		::System::Type* Method_4_81BC61DFAD3E6119(::Il2CppArray<::System::Type*>* instantiation)
		{
			return ((::System::Type*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_81BC61DFAD3E6119_OFFSET))(this, instantiation);
		}

		::System::Boolean Method_4_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0E307B84478A272_OFFSET))(this);
		}

		::System::Boolean Method_4_F0E307B84478A272_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0E307B84478A272_1_OFFSET))(this);
		}

		::System::Int32 Method_4_AF3DE7EEF4AB88EF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_AF3DE7EEF4AB88EF_OFFSET))(this);
		}

		::System::Type* Method_4_0334FF501B5B4BBD()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_0334FF501B5B4BBD_OFFSET))(this);
		}

		::System::Boolean Method_4_CF8BA38996D09531()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_CF8BA38996D09531_OFFSET))(this);
		}

		::System::Boolean Method_4_42C5BADE1C9EFC80()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_42C5BADE1C9EFC80_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_4_FC0BB9B98F157BA5()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_FC0BB9B98F157BA5_OFFSET))(this);
		}

		::System::Object* Method_4_8FD0D16114735478(::System::String* name, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* providedArgs, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers, ::System::Globalization::CultureInfo* culture, ::Il2CppArray<::System::String*>* namedParams)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_8FD0D16114735478_OFFSET))(this, name, bindingFlags, binder, target, providedArgs, modifiers, culture, namedParams);
		}

		::System::Boolean Method_4_083577508CCFDAF3(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_083577508CCFDAF3_OFFSET))(this, obj);
		}

		static ::System::Boolean Method_4_97FEFCB730B533A1(::System::RuntimeType* left, ::System::RuntimeType* right)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_97FEFCB730B533A1_OFFSET))(left, right);
		}

		static ::System::Boolean Method_4_97FEFCB730B533A1_1(::System::RuntimeType* left, ::System::RuntimeType* right)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_97FEFCB730B533A1_1_OFFSET))(left, right);
		}

		::System::Object* Method_4_BC62B9FB87FD6A48()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BC62B9FB87FD6A48_OFFSET))(this);
		}

		::System::Void Method_4_40C2B49E32B39DA0(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_40C2B49E32B39DA0_OFFSET))(this, info, context);
		}

		::Il2CppArray<::System::Object*>* Method_4_6F7384C0215E3155(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_6F7384C0215E3155_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_4_DDC346E78E511F21(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_DDC346E78E511F21_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean Method_4_B261C18A810978BB(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B261C18A810978BB_OFFSET))(this, attributeType, inherit);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_4_A3C117624446E448()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A3C117624446E448_OFFSET))(this);
		}

		::System::String* Method_4_89834815FB1C7AF4(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_89834815FB1C7AF4_OFFSET))(this, serialization);
		}

		::System::Reflection::MemberTypes Method_4_B51AE11045F7B3BA()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B51AE11045F7B3BA_OFFSET))(this);
		}

		::System::Type* Method_4_7F66C4648B09BAAB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_7F66C4648B09BAAB_OFFSET))(this);
		}

		::System::Int32 Method_4_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Void Method_4_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_41A074549EF25F63_OFFSET))(this);
		}

		::System::Object* Method_4_3D23F6856598AB45(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* args, ::System::Globalization::CultureInfo* culture, ::Il2CppArray<::System::Object*>* activationAttributes, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_3D23F6856598AB45_OFFSET))(this, bindingAttr, binder, args, culture, activationAttributes, stackMark);
		}

		::System::Object* Method_4_FF46CD27A057C3D6(::System::Boolean publicOnly, ::System::Boolean skipCheckThis, ::System::Boolean fillCache, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_FF46CD27A057C3D6_OFFSET))(this, publicOnly, skipCheckThis, fillCache, stackMark);
		}

		::System::Reflection::MonoCMethod* Method_4_FA09CB9096E985D0()
		{
			return ((::System::Reflection::MonoCMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_FA09CB9096E985D0_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_4_A4A7A3F49AFEE9C7(::System::Reflection::MethodInfo* generic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A4A7A3F49AFEE9C7_OFFSET))(this, generic);
		}

		::System::Reflection::ConstructorInfo* Method_4_7999019A63725FEC(::System::Reflection::ConstructorInfo* generic)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_7999019A63725FEC_OFFSET))(this, generic);
		}

		::System::Reflection::MethodInfo* Method_4_950D613B97BF99B5(::System::Reflection::MethodInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_950D613B97BF99B5_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::ConstructorInfo* Method_4_A0B2C8B62794E4BE(::System::Reflection::ConstructorInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A0B2C8B62794E4BE_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::FieldInfo* Method_4_0711F9291C78FC7E(::System::Reflection::FieldInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_0711F9291C78FC7E_OFFSET))(this, fromNoninstanciated);
		}

		::System::String* Method_4_49091FA7D0FEFC35()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_49091FA7D0FEFC35_OFFSET))(this);
		}

		::System::Reflection::RuntimeConstructorInfo* Method_4_9B55A85BD192BAFB()
		{
			return ((::System::Reflection::RuntimeConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_9B55A85BD192BAFB_OFFSET))(this);
		}

		::System::Object* Method_4_1CEB1E5016BFB4BD(::System::Boolean publicOnly, ::System::Boolean skipCheckThis, ::System::Boolean fillCache, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1CEB1E5016BFB4BD_OFFSET))(this, publicOnly, skipCheckThis, fillCache, stackMark);
		}

		::System::Object* Method_4_A371B288E0FD4413(::System::Boolean nonPublic)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A371B288E0FD4413_OFFSET))(this, nonPublic);
		}

		::System::Object* Method_4_A87353E34D2B7F2A(::System::Object* value, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture, ::System::Reflection::BindingFlags invokeAttr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A87353E34D2B7F2A_OFFSET))(this, value, binder, culture, invokeAttr);
		}

		::System::Object* Method_4_B6EC8E0AB9F74197(::System::Object* value, ::System::Boolean& failed)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B6EC8E0AB9F74197_OFFSET))(this, value, failed);
		}

		static ::System::Object* Method_4_150CF985911718EE(::System::Object* value, ::System::Type* targetType)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_150CF985911718EE_OFFSET))(value, targetType);
		}

		::System::String* Method_4_C658F01C8EFFDB98(::System::TypeNameKind kind)
		{
			return ((::System::String*(*)(::PVOID, ::System::TypeNameKind))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C658F01C8EFFDB98_OFFSET))(this, kind);
		}

		::System::Type* Method_4_02954A1C23795FB8(::System::Int32 rank)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_02954A1C23795FB8_OFFSET))(this, rank);
		}

		::System::Type* Method_4_3E73D4BF8B2402C5()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_3E73D4BF8B2402C5_OFFSET))(this);
		}

		::System::Type* Method_4_E049C0034E719151(::System::Int32 rank)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_E049C0034E719151_OFFSET))(this, rank);
		}

		::System::Type* Method_4_FB9A1387D38501D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_FB9A1387D38501D0_OFFSET))(this);
		}

		::System::Type* Method_4_23616C0014E07556()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_23616C0014E07556_OFFSET))(this);
		}

		static ::System::Type* Method_4_ECE2E325FC736966(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_ECE2E325FC736966_OFFSET))(type);
		}

		::System::Type* Method_4_23616C0014E07556_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_23616C0014E07556_1_OFFSET))(this);
		}

		::System::Runtime::InteropServices::StructLayoutAttribute* Method_4_F3AE841AC01EBAAE()
		{
			return ((::System::Runtime::InteropServices::StructLayoutAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F3AE841AC01EBAAE_OFFSET))(this);
		}

		::System::Boolean Method_4_58723AF19337DFD2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_58723AF19337DFD2_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_4_BC9F83DBB4E359FE()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BC9F83DBB4E359FE_OFFSET))(this);
		}

		static ::System::Object* Method_4_E53890B3FD8344AD(::System::Type* genericType, ::System::RuntimeType* genericArgument)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_E53890B3FD8344AD_OFFSET))(genericType, genericArgument);
		}

		static ::System::Type* Method_4_1C0B3B154EF753FD(::System::Type* gt, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Type*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1C0B3B154EF753FD_OFFSET))(gt, types);
		}

		::System::IntPtr Method_4_5612F26DCB691197(::System::IntPtr namePtr, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean ignoreCase)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_5612F26DCB691197_OFFSET))(this, namePtr, bindingAttr, ignoreCase);
		}

		::Il2CppArray<::System::Reflection::RuntimeMethodInfo*>* Method_4_5DDEFE80296CC936(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean ignoreCase, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeMethodInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_5DDEFE80296CC936_OFFSET))(this, name, bindingAttr, ignoreCase, reflectedType);
		}

		::System::IntPtr Method_4_687E833F9132CA42(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean icase)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_687E833F9132CA42_OFFSET))(this, name, bindingAttr, icase);
		}

		::System::IntPtr Method_4_772ABBEDF7F0E0E1(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_772ABBEDF7F0E0E1_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::RuntimeConstructorInfo*>* Method_4_F71DCB97330711E2(::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F71DCB97330711E2_OFFSET))(this, bindingAttr, reflectedType);
		}

		::Il2CppArray<::System::Reflection::RuntimePropertyInfo*>* Method_4_E809E954CD095D1E(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean icase, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimePropertyInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_E809E954CD095D1E_OFFSET))(this, name, bindingAttr, icase, reflectedType);
		}

		::System::Reflection::InterfaceMapping Method_4_0C9478799733C6A5(::System::Type* ifaceType)
		{
			return ((::System::Reflection::InterfaceMapping(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_0C9478799733C6A5_OFFSET))(this, ifaceType);
		}

		static ::System::Void Method_4_697F0A8BF5871CF3(::System::Type* t, ::System::Type* iface, ::Il2CppArray<::System::Reflection::MethodInfo*>*& targets, ::Il2CppArray<::System::Reflection::MethodInfo*>*& methods)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Type*, ::Il2CppArray<::System::Reflection::MethodInfo*>*&, ::Il2CppArray<::System::Reflection::MethodInfo*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_697F0A8BF5871CF3_OFFSET))(t, iface, targets, methods);
		}

		::System::Guid Method_4_6676BF79100271CF()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_6676BF79100271CF_OFFSET))(this);
		}

		::System::Void Method_4_4ACE462D3A32946C(::System::Int32& packing, ::System::Int32& size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_4ACE462D3A32946C_OFFSET))(this, packing, size);
		}

		static ::System::Type* Method_4_2419027A1B6A289C(::System::Guid clsid, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_2419027A1B6A289C_OFFSET))(clsid, server, throwOnError);
		}

		::System::TypeCode Method_4_50C9CC00B047EA74()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_50C9CC00B047EA74_OFFSET))(this);
		}

		static ::System::TypeCode Method_4_BE8FDB1F94273CB8(::System::Type* type)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BE8FDB1F94273CB8_OFFSET))(type);
		}

		static ::System::Type* Method_4_52A6E8F5E2C154FA(::System::String* progID, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_52A6E8F5E2C154FA_OFFSET))(progID, server, throwOnError);
		}

		::System::String* Method_4_55AA8DDCDD4BB83A()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_55AA8DDCDD4BB83A_OFFSET))(this);
		}

		static ::System::Object* Method_4_073DD9BB0734A6ED(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_073DD9BB0734A6ED_OFFSET))(type);
		}

		::System::Reflection::MethodBase* Method_4_6FA9F79B8743294B()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_6FA9F79B8743294B_OFFSET))(this);
		}

		::System::String* Method_4_C9B320AD2104D332(::System::Boolean full_name, ::System::Boolean assembly_qualified)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C9B320AD2104D332_OFFSET))(this, full_name, assembly_qualified);
		}

		::Il2CppArray<::System::Type*>* Method_4_B79D35F01CCB2578(::System::Boolean runtimeArray)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B79D35F01CCB2578_OFFSET))(this, runtimeArray);
		}

		::System::Reflection::GenericParameterAttributes Method_4_DD9817232466412F()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_DD9817232466412F_OFFSET))(this);
		}

		::System::Int32 Method_4_BFBBE8A6FE167A6A()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_BFBBE8A6FE167A6A_OFFSET))(this);
		}

		::System::IntPtr Method_4_1CE4D117678600CC(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1CE4D117678600CC_OFFSET))(this, name, bindingAttr);
		}

		::System::IntPtr Method_4_1CE4D117678600CC_1(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_1CE4D117678600CC_1_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::RuntimeFieldInfo*>* Method_4_C76ADCCC62AD2D4A(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeFieldInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C76ADCCC62AD2D4A_OFFSET))(this, name, bindingAttr, reflectedType);
		}

		::Il2CppArray<::System::Reflection::RuntimeEventInfo*>* Method_4_A4F0AE065ED7C0F6(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeEventInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_A4F0AE065ED7C0F6_OFFSET))(this, name, bindingAttr, reflectedType);
		}

		::Il2CppArray<::System::Type*>* Method_4_2EF36975534D3ECF()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_2EF36975534D3ECF_OFFSET))(this);
		}

		::System::IntPtr Method_4_299BBAE2E9EA23BB(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_299BBAE2E9EA23BB_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::RuntimeType*>* Method_4_F0A9A42DE7458CAA(::System::String* displayName, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::RuntimeType*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0A9A42DE7458CAA_OFFSET))(this, displayName, bindingAttr);
		}

		::System::String* Method_4_55AA8DDCDD4BB83A_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_55AA8DDCDD4BB83A_1_OFFSET))(this);
		}

		::System::Type* Method_4_7F66C4648B09BAAB_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_7F66C4648B09BAAB_1_OFFSET))(this);
		}

		::System::String* Method_4_247EE95BB171CB15()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_247EE95BB171CB15_OFFSET))(this);
		}

		::System::String* Method_4_B9EEFB7B2B203E99()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_B9EEFB7B2B203E99_OFFSET))(this);
		}

		::System::Int32 Method_4_C74CF020AA42ED85_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_C74CF020AA42ED85_1_OFFSET))(this);
		}

		::System::String* Method_4_420F5543CED5025E()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_420F5543CED5025E_OFFSET))(this);
		}

		::System::Boolean Method_4_F39234F2606D8D97()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F39234F2606D8D97_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_F0088C88851A7DFB_5_OFFSET))(this);
		}
	};
}

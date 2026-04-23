#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/OpCode.h"

#define SYSTEM_REFLECTION_EMIT_OPCODES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1799E680)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int OpCodes_TypeDefinitionIndex = 652;

	class OpCodes : public ::System::Object
	{
	public:
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefixref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3C50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3C58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3C60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3C68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3C70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Constrained()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3C78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Box()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3C80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3C88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3C90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3C98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3CA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brtrue()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3CA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3CB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bne_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3CB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldtoken()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3CC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ceq()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3CC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_M1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3CD0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3CD8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3CE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarga_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3CE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3CF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Readonly()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3CF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Callvirt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Endfilter()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Switch()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Starg_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldvirtftn()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldsfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_5()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Castclass()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix6()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3D98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3DA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_6()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3DA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Div()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3DB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3DB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3DC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3DC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3DD0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Refanyval()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3DD8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Or()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3DE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3DE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Localloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3DF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Newarr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3DF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldlen()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Calli()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U8_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix5()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I8_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Nop()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Break()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Br_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Pop()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3E98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3EA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix7()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3EA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldflda()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3EB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3EB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3EC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sizeof()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3EC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3ED0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3ED8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Starg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3EE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Neg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3EE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3EF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldnull()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3EF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_7()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Arglist()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brfalse_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U4_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Leave()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Newobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3F98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3FA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3FA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3FB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3FB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I2_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3FC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3FC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3FD0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3FD8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3FE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U2_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3FE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3FF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Initblk()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3FF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cgt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4000);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4008);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4010);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldsflda()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4018);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloca()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4020);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4028);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4030);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldstr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4038);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4040);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4048);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4050);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Endfinally()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4058);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4060);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brfalse()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4068);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Br()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4070);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Not()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4078);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4080);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bne_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4088);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Isinst()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4090);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4098);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x40A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x40A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cpobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x40B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mkrefany()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x40B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U1_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x40C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloca_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x40C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x40D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x40D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stsfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x40E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Jmp()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x40E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Clt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x40F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x40F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shl()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4100);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ckfinite()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4108);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4110);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_And()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4118);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4120);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Dup()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4128);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4130);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4138);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4140);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4148);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Tailcall()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4150);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4158);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4160);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I4_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4168);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ret()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4170);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unbox_Any()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4178);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4180);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unaligned()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4188);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rem_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4190);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Volatile()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4198);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x41A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x41A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x41B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarga()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x41B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rethrow()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x41C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unbox()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x41C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x41D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cpblk()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x41D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x41E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x41E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x41F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x41F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Leave_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4200);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shr_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4208);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4210);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cgt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4218);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Initobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4220);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Xor()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4228);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4230);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4238);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Throw()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4240);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Beq()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4248);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4250);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldftn()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4258);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4260);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4268);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4270);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4278);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4280);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4288);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4290);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Refanytype()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4298);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x42A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelema()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x42A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x42B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x42B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I1_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x42C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x42C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Div_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x42D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x42D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x42E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Clt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x42E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x42F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x42F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4300);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4308);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brtrue_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4310);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Beq_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4318);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4320);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4328);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4330);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4338);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Call()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4340);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4348);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4350);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODES__CCTOR_OFFSET))();
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/OpCode.h"

#define SYSTEM_REFLECTION_EMIT_OPCODES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC1DBE0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int OpCodes_TypeDefinitionIndex = 654;

	class OpCodes : public ::System::Object
	{
	public:
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Endfinally()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Starg_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rem_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Calli()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldvirtftn()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6BA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6BA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6BB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Dup()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6BB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6BC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6BC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Initblk()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6BD0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6BD8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6BE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Break()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6BE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Arglist()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6BF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6BF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Readonly()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Isinst()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Nop()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Jmp()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bne_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelema()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Beq()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brtrue_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Br_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldsfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6CA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6CA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brfalse()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6CB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6CB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6CC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6CC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldstr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6CD0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ret()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6CD8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Call()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6CE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Castclass()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6CE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Xor()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6CF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6CF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I8_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Throw()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldftn()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Not()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Newarr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_And()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Br()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Or()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rethrow()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6DA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix5()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6DA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6DB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6DB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6DC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6DC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6DD0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6DD8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6DE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6DE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6DF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldsflda()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6DF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cgt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U8_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Newobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix7()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I1_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cgt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Tailcall()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldlen()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Constrained()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6EA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldnull()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6EA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6EB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6EB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stsfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6EC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shl()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6EC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unbox_Any()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6ED0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Neg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6ED8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6EE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mkrefany()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6EE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6EF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6EF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unbox()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Box()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U4_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_7()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix6()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloca_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ckfinite()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U1_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Refanyval()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6FA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bne_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6FA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6FB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6FB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Initobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6FC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6FC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6FD0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6FD8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U2_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6FE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6FE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6FF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Div()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6FF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7000);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7008);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Switch()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7010);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7018);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Refanytype()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7020);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Volatile()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7028);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7030);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7038);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sizeof()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7040);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7048);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarga()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7050);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7058);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_M1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7060);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7068);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unaligned()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7070);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cpblk()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7078);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7080);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7088);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Beq_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7090);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Leave_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7098);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cpobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x70A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x70A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x70B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x70B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Pop()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x70C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x70C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Endfilter()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x70D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x70D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x70E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x70E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x70F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Clt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x70F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_6()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7100);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7108);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7110);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brfalse_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7118);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7120);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7128);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarga_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7130);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Clt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7138);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Localloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7140);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_5()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7148);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shr_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7150);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brtrue()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7158);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I4_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7160);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7168);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I2_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7170);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7178);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Div_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7180);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Starg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7188);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7190);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefixref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7198);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x71A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x71A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x71B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x71B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Leave()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x71C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x71C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x71D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x71D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x71E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloca()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x71E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ceq()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x71F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x71F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldtoken()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7200);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldflda()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7208);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7210);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7218);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Callvirt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7220);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7228);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7230);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7238);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7240);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODES__CCTOR_OFFSET))();
		}
	};
}

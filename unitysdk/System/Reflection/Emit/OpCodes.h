#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/OpCode.h"

#define SYSTEM_REFLECTION_EMIT_OPCODES__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C60C60)
#define SYSTEM_REFLECTION_EMIT_OPCODES__CTOR_OFFSET UNITYSDK_OFFSET(0x18C60C50)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int OpCodes_TypeDefinitionIndex = 623;

	class OpCodes : public ::System::Object
	{
	public:
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x550);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x558);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unaligned()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x560);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x568);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cgt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x570);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x578);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Nop()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x580);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Jmp()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x588);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x590);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Initobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x598);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x5A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x5A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shl()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x5B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x5B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x5C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x5C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x5D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cpblk()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x5D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Starg_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x5E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Calli()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x5E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x5F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x5F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x600);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rem_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x608);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldnull()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x610);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bne_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x618);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x620);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Newobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x628);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x630);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brfalse()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x638);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x640);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x648);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U4_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x650);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldvirtftn()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x658);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x660);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x668);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Clt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x670);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x678);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unbox()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x680);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldftn()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x688);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ceq()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x690);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldlen()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x698);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Constrained()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brfalse_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brtrue_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Switch()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldsfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cgt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I8_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x6F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Newarr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x700);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_7()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x708);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x710);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x718);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix5()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x720);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x728);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Leave_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x730);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x738);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x740);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x748);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U1_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x750);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x758);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x760);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Call()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x768);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x770);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Not()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x778);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x780);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x788);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix6()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x790);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x798);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Readonly()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloca()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Or()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U8_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brtrue()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_6()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x7F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x800);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x808);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x810);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Refanytype()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x818);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x820);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x828);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x830);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cpobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x838);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x840);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Div_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x848);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x850);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x858);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x860);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Arglist()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x868);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x870);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sizeof()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x878);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Callvirt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x880);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Div()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x888);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bne_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x890);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I2_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x898);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x8A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x8A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_M1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x8B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Pop()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x8B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Castclass()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x8C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Endfinally()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x8C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x8D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x8D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rethrow()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x8E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x8E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Box()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x8F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix7()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x8F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x900);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x908);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldsflda()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x910);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x918);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Localloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x920);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x928);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Beq_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x930);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Br_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x938);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Dup()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x940);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x948);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x950);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Volatile()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x958);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x960);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x968);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Xor()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x970);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x978);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unbox_Any()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x980);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x988);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x990);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x998);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x9A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Break()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x9A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x9B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Isinst()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x9B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x9C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U2_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x9C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x9D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarga()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x9D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x9E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Tailcall()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x9E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarga_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x9F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shr_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x9F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Br()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_And()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Clt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloca_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldflda()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Endfilter()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Neg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I1_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_5()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xA98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xAA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xAA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldstr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xAB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xAB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xAC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xAC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xAD0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xAD8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefixref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xAE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Refanyval()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xAE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xAF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ckfinite()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xAF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mkrefany()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Beq()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Throw()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Leave()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Starg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xB98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xBA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xBA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xBB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xBB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xBC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xBC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xBD0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ret()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xBD8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xBE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xBE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Initblk()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xBF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xBF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xC00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xC08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xC10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xC18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldtoken()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xC20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelema()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xC28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xC30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xC38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xC40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xC48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stsfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xC50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I4_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0xC58);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODES__CCTOR_OFFSET))();
		}
	};
}

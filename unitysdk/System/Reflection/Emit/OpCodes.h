#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/OpCode.h"

#define SYSTEM_REFLECTION_EMIT_OPCODES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C29FFB0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int OpCodes_TypeDefinitionIndex = 654;

	class OpCodes : public ::System::Object
	{
	public:
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4560);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldvirtftn()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4568);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4570);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4578);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shl()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4580);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_5()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4588);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4590);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4598);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x45A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x45A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x45B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x45B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Not()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x45C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x45C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloca()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x45D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Beq_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x45D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x45E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x45E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x45F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x45F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ckfinite()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4600);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4608);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Div_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4610);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelema()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4618);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Nop()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4620);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bne_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4628);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4630);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4638);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4640);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4648);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4650);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4658);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4660);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4668);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4670);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Refanyval()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4678);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldstr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4680);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sizeof()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4688);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4690);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stsfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4698);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Castclass()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x46A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Localloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x46A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x46B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x46B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldsflda()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x46C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x46C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I8_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x46D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x46D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Break()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x46E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x46E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x46F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x46F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Callvirt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4700);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4708);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4710);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4718);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U4_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4720);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brtrue_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4728);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Initblk()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4730);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4738);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4740);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Refanytype()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4748);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Xor()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4750);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brtrue()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4758);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Starg_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4760);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Beq()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4768);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4770);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4778);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4780);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4788);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix5()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4790);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_And()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4798);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x47A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U8_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x47A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Clt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x47B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x47B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Br_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x47C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x47C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x47D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rethrow()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x47D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x47E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rem_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x47E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x47F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x47F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4800);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4808);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Newarr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4810);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4818);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Div()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4820);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4828);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4830);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4838);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldftn()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4840);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4848);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Leave()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4850);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Initobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4858);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloca_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4860);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_M1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4868);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4870);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4878);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4880);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarga()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4888);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldsfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4890);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4898);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldnull()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x48A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x48A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldflda()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x48B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldlen()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x48B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ceq()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x48C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x48C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Endfinally()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x48D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_6()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x48D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x48E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarga_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x48E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unbox_Any()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x48F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ret()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x48F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Clt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4900);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4908);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4910);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4918);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4920);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4928);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unbox()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4930);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4938);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4940);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Constrained()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4948);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_7()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4950);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4958);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4960);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Tailcall()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4968);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4970);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4978);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4980);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4988);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Br()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4990);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Leave_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4998);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x49A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix6()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x49A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Pop()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x49B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Arglist()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x49B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Box()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x49C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x49C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix7()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x49D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x49D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x49E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x49E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Volatile()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x49F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Throw()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x49F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shr_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Endfilter()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U2_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Isinst()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cpblk()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mkrefany()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brfalse()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefixref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4A98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4AA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Call()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4AA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brfalse_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4AB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4AB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4AC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I2_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4AC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldtoken()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4AD0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4AD8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4AE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4AE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Jmp()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4AF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4AF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cgt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Neg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I4_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4B98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4BA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4BA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4BB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cpobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4BB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U1_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4BC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4BC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Newobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4BD0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4BD8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4BE0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4BE8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I1_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4BF0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Switch()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4BF8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cgt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Readonly()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bne_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Calli()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unaligned()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Starg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Dup()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Or()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x4C68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODES__CCTOR_OFFSET))();
		}
	};
}

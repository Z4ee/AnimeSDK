#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x19EFE9F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x19EFE980)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x19EFE9A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x19EFE990)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFE9E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EqualInstruction_TypeDefinitionIndex = 3346;

	class EqualInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_BooleanLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x128D0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x128D8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x128E0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Char()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x128E8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x128F0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_reference()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x128F8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_ByteLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12900);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12908);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Single()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12910);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByteLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12918);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Boolean()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12920);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12928);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12930);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12938);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12940);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12948);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_CharLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12950);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12958);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SingleLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12960);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12968);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12970);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12978);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_DoubleLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12980);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Double()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12988);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0x12990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, ::System::Boolean liftedToNull)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_CREATE_OFFSET))(type, liftedToNull);
		}
	};
}

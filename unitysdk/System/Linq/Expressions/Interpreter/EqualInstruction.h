#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x184C3B20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x184C3AB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184C3AD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x184C3AC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184C3B10)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EqualInstruction_TypeDefinitionIndex = 3344;

	class EqualInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Single()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF5E0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF5E8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_reference()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF5F0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByteLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF5F8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF600);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_ByteLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF608);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SingleLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF610);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_CharLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF618);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF620);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF628);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF630);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF638);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF640);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_DoubleLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF648);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF650);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF658);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF660);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF668);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Double()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF670);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF678);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Char()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF680);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF688);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_BooleanLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF690);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF698);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Boolean()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(EqualInstruction_TypeDefinitionIndex)->GetStaticField(0xF6A0);
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

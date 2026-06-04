#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1ADA8950)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADA88F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1ADA8910)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADA8900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA88E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotInstruction_TypeDefinitionIndex = 3572;

	class NotInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotInstruction_TypeDefinitionIndex)->GetStaticField(0x2BCB0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotInstruction_TypeDefinitionIndex)->GetStaticField(0x2BCB8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotInstruction_TypeDefinitionIndex)->GetStaticField(0x2BCC0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Boolean()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotInstruction_TypeDefinitionIndex)->GetStaticField(0x2BCC8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotInstruction_TypeDefinitionIndex)->GetStaticField(0x2BCD0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotInstruction_TypeDefinitionIndex)->GetStaticField(0x2BCD8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotInstruction_TypeDefinitionIndex)->GetStaticField(0x2BCE0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotInstruction_TypeDefinitionIndex)->GetStaticField(0x2BCE8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotInstruction_TypeDefinitionIndex)->GetStaticField(0x2BCF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_CREATE_OFFSET))(a1);
		}
	};
}

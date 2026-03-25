#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x184B85B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x184B8540)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184B8560)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x184B8550)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184B85A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AddOvfInstruction_TypeDefinitionIndex = 3276;

	class AddOvfInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(AddOvfInstruction_TypeDefinitionIndex)->GetStaticField(0xF0C0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(AddOvfInstruction_TypeDefinitionIndex)->GetStaticField(0xF0C8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(AddOvfInstruction_TypeDefinitionIndex)->GetStaticField(0xF0D0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(AddOvfInstruction_TypeDefinitionIndex)->GetStaticField(0xF0D8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(AddOvfInstruction_TypeDefinitionIndex)->GetStaticField(0xF0E0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(AddOvfInstruction_TypeDefinitionIndex)->GetStaticField(0xF0E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_CREATE_OFFSET))(type);
		}
	};
}

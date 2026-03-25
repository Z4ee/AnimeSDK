#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x184C6590)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x184C6520)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184C6540)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x184C6530)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184C6580)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExclusiveOrInstruction_TypeDefinitionIndex = 3370;

	class ExclusiveOrInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(ExclusiveOrInstruction_TypeDefinitionIndex)->GetStaticField(0xF6E0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(ExclusiveOrInstruction_TypeDefinitionIndex)->GetStaticField(0xF6E8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Boolean()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(ExclusiveOrInstruction_TypeDefinitionIndex)->GetStaticField(0xF6F0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(ExclusiveOrInstruction_TypeDefinitionIndex)->GetStaticField(0xF6F8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(ExclusiveOrInstruction_TypeDefinitionIndex)->GetStaticField(0xF700);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(ExclusiveOrInstruction_TypeDefinitionIndex)->GetStaticField(0xF708);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(ExclusiveOrInstruction_TypeDefinitionIndex)->GetStaticField(0xF710);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(ExclusiveOrInstruction_TypeDefinitionIndex)->GetStaticField(0xF718);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(ExclusiveOrInstruction_TypeDefinitionIndex)->GetStaticField(0xF720);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_CREATE_OFFSET))(type);
		}
	};
}

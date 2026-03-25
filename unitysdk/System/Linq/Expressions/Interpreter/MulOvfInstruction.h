#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x184F0CB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x184F0C40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184F0C60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x184F0C50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184F0CA0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int MulOvfInstruction_TypeDefinitionIndex = 3525;

	class MulOvfInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(MulOvfInstruction_TypeDefinitionIndex)->GetStaticField(0x10C50);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(MulOvfInstruction_TypeDefinitionIndex)->GetStaticField(0x10C58);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(MulOvfInstruction_TypeDefinitionIndex)->GetStaticField(0x10C60);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(MulOvfInstruction_TypeDefinitionIndex)->GetStaticField(0x10C68);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(MulOvfInstruction_TypeDefinitionIndex)->GetStaticField(0x10C70);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(MulOvfInstruction_TypeDefinitionIndex)->GetStaticField(0x10C78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_CREATE_OFFSET))(type);
		}
	};
}

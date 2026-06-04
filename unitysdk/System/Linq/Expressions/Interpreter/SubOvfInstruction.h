#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1ADB1C30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADB1BC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1ADB1BE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADB1BD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB1C20)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int SubOvfInstruction_TypeDefinitionIndex = 3620;

	class SubOvfInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(SubOvfInstruction_TypeDefinitionIndex)->GetStaticField(0x2BF50);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(SubOvfInstruction_TypeDefinitionIndex)->GetStaticField(0x2BF58);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(SubOvfInstruction_TypeDefinitionIndex)->GetStaticField(0x2BF60);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(SubOvfInstruction_TypeDefinitionIndex)->GetStaticField(0x2BF68);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(SubOvfInstruction_TypeDefinitionIndex)->GetStaticField(0x2BF70);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(SubOvfInstruction_TypeDefinitionIndex)->GetStaticField(0x2BF78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_CREATE_OFFSET))(a1);
		}
	};
}

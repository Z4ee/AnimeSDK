#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1ADAEDB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADAED40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1ADAED60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADAED50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAEDA0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RightShiftInstruction_TypeDefinitionIndex = 3597;

	class RightShiftInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(RightShiftInstruction_TypeDefinitionIndex)->GetStaticField(0x2BE60);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(RightShiftInstruction_TypeDefinitionIndex)->GetStaticField(0x2BE68);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(RightShiftInstruction_TypeDefinitionIndex)->GetStaticField(0x2BE70);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(RightShiftInstruction_TypeDefinitionIndex)->GetStaticField(0x2BE78);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(RightShiftInstruction_TypeDefinitionIndex)->GetStaticField(0x2BE80);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(RightShiftInstruction_TypeDefinitionIndex)->GetStaticField(0x2BE88);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(RightShiftInstruction_TypeDefinitionIndex)->GetStaticField(0x2BE90);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(RightShiftInstruction_TypeDefinitionIndex)->GetStaticField(0x2BE98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_CREATE_OFFSET))(a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1B00B640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1B00B630)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1B00B680)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B00B740)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE2B80)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadCachedObjectInstruction_TypeDefinitionIndex = 3620;

	class LoadCachedObjectInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::UInt32 _index; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_RUN_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADCACHEDOBJECTINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}

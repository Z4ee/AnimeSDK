#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLESINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E75F8B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLESINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E75F8C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLESINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E75F8A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLESINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E75F900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLESINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E75F890)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RuntimeVariablesInstruction_TypeDefinitionIndex = 3517;

	class RuntimeVariablesInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Int32 _count; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLESINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLESINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLESINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLESINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLESINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}

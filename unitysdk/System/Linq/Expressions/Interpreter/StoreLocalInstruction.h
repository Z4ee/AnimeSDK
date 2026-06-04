#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalAccessInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_BOXIFINDEXMATCHES_OFFSET UNITYSDK_OFFSET(0x1ADB08B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADB07C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1ADB07D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1ADB0810)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB07B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int StoreLocalInstruction_TypeDefinitionIndex = 3491;

	class StoreLocalInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_RUN_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORELOCALINSTRUCTION_BOXIFINDEXMATCHES_OFFSET))(this, a1);
		}
	};
}

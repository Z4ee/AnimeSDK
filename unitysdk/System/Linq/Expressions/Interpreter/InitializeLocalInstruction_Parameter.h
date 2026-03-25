#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InitializeLocalInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_PARAMETER_BOXIFINDEXMATCHES_OFFSET UNITYSDK_OFFSET(0x184CC430)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_PARAMETER_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184CC500)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_PARAMETER_RUN_OFFSET UNITYSDK_OFFSET(0x184CC420)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x184CC410)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InitializeLocalInstruction_Parameter_TypeDefinitionIndex = 3499;

	class InitializeLocalInstruction_Parameter : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction
	{
	public:
		::System::Void _ctor(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_PARAMETER__CTOR_OFFSET))(this, index);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_PARAMETER_RUN_OFFSET))(this, frame);
		}

		::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_PARAMETER_BOXIFINDEXMATCHES_OFFSET))(this, index);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_PARAMETER_GET_INSTRUCTIONNAME_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalAccessInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_BOXIFINDEXMATCHES_OFFSET UNITYSDK_OFFSET(0x184BB490)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x184BB370)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184BB390)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x184BB380)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x184BB3D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184BB360)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AssignLocalInstruction_TypeDefinitionIndex = 3487;

	class AssignLocalInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction
	{
	public:
		::System::Void _ctor(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION__CTOR_OFFSET))(this, index);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_RUN_OFFSET))(this, frame);
		}

		::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALINSTRUCTION_BOXIFINDEXMATCHES_OFFSET))(this, index);
		}
	};
}

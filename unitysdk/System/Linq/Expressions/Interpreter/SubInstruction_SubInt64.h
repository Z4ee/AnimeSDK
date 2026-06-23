#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/SubInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBINT64_RUN_OFFSET UNITYSDK_OFFSET(0x1E326A30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1E326C30)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int SubInstruction_SubInt64_TypeDefinitionIndex = 4897;

	class SubInstruction_SubInt64 : public ::System::Linq::Expressions::Interpreter::SubInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBINT64_RUN_OFFSET))(this, frame);
		}
	};
}

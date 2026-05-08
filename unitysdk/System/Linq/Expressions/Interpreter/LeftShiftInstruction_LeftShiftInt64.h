#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LeftShiftInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_LEFTSHIFTINT64_RUN_OFFSET UNITYSDK_OFFSET(0x1BDACB60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_LEFTSHIFTINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDACD10)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeftShiftInstruction_LeftShiftInt64_TypeDefinitionIndex = 4718;

	class LeftShiftInstruction_LeftShiftInt64 : public ::System::Linq::Expressions::Interpreter::LeftShiftInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_LEFTSHIFTINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_LEFTSHIFTINT64_RUN_OFFSET))(this, frame);
		}
	};
}

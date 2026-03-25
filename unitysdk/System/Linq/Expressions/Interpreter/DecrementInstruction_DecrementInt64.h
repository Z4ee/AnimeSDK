#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/DecrementInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DECREMENTINSTRUCTION_DECREMENTINT64_RUN_OFFSET UNITYSDK_OFFSET(0x184C00B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DECREMENTINSTRUCTION_DECREMENTINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x184BFC40)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DecrementInstruction_DecrementInt64_TypeDefinitionIndex = 3328;

	class DecrementInstruction_DecrementInt64 : public ::System::Linq::Expressions::Interpreter::DecrementInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DECREMENTINSTRUCTION_DECREMENTINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DECREMENTINSTRUCTION_DECREMENTINT64_RUN_OFFSET))(this, frame);
		}
	};
}

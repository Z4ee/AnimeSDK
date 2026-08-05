#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/DecrementInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DECREMENTINSTRUCTION_DECREMENTSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x1F759020)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DECREMENTINSTRUCTION_DECREMENTSINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F759140)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DecrementInstruction_DecrementSingle_TypeDefinitionIndex = 4614;

	class DecrementInstruction_DecrementSingle : public ::System::Linq::Expressions::Interpreter::DecrementInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DECREMENTINSTRUCTION_DECREMENTSINGLE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DECREMENTINSTRUCTION_DECREMENTSINGLE_RUN_OFFSET))(this, frame);
		}
	};
}

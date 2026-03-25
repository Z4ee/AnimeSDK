#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/EqualInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_EQUALREFERENCE_RUN_OFFSET UNITYSDK_OFFSET(0x184C55D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_EQUALREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x184C41D0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EqualInstruction_EqualReference_TypeDefinitionIndex = 3357;

	class EqualInstruction_EqualReference : public ::System::Linq::Expressions::Interpreter::EqualInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_EQUALREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_EQUALREFERENCE_RUN_OFFSET))(this, frame);
		}
	};
}

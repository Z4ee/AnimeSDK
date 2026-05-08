#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NegateCheckedInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_NEGATECHECKEDINT32_RUN_OFFSET UNITYSDK_OFFSET(0x1BFEA340)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_NEGATECHECKEDINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFEA4F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NegateCheckedInstruction_NegateCheckedInt32_TypeDefinitionIndex = 4826;

	class NegateCheckedInstruction_NegateCheckedInt32 : public ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_NEGATECHECKEDINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_NEGATECHECKEDINT32_RUN_OFFSET))(this, frame);
		}
	};
}

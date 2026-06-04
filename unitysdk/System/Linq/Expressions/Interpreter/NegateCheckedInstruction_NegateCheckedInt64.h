#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NegateCheckedInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_NEGATECHECKEDINT64_RUN_OFFSET UNITYSDK_OFFSET(0x1ADA4EC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_NEGATECHECKEDINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA4960)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NegateCheckedInstruction_NegateCheckedInt64_TypeDefinitionIndex = 3544;

	class NegateCheckedInstruction_NegateCheckedInt64 : public ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_NEGATECHECKEDINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_NEGATECHECKEDINT64_RUN_OFFSET))(this, a1);
		}
	};
}

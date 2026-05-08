#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/MulInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULINSTRUCTION_MULDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x1BD30790)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULINSTRUCTION_MULDOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD30970)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int MulInstruction_MulDouble_TypeDefinitionIndex = 4811;

	class MulInstruction_MulDouble : public ::System::Linq::Expressions::Interpreter::MulInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULINSTRUCTION_MULDOUBLE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULINSTRUCTION_MULDOUBLE_RUN_OFFSET))(this, frame);
		}
	};
}

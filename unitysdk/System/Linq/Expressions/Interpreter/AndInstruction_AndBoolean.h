#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/AndInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ANDINSTRUCTION_ANDBOOLEAN_RUN_OFFSET UNITYSDK_OFFSET(0x184B9EB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ANDINSTRUCTION_ANDBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x184B9EA0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AndInstruction_AndBoolean_TypeDefinitionIndex = 3292;

	class AndInstruction_AndBoolean : public ::System::Linq::Expressions::Interpreter::AndInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ANDINSTRUCTION_ANDBOOLEAN__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ANDINSTRUCTION_ANDBOOLEAN_RUN_OFFSET))(this, frame);
		}
	};
}

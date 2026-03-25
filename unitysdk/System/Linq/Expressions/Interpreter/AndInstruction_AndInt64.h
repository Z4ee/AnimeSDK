#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/AndInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ANDINSTRUCTION_ANDINT64_RUN_OFFSET UNITYSDK_OFFSET(0x184BA5A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ANDINSTRUCTION_ANDINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x184B9E50)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AndInstruction_AndInt64_TypeDefinitionIndex = 3287;

	class AndInstruction_AndInt64 : public ::System::Linq::Expressions::Interpreter::AndInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ANDINSTRUCTION_ANDINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ANDINSTRUCTION_ANDINT64_RUN_OFFSET))(this, frame);
		}
	};
}

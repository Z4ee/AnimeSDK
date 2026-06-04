#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/AndInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ANDINSTRUCTION_ANDUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x1AD6D020)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ANDINSTRUCTION_ANDUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD6C170)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AndInstruction_AndUInt64_TypeDefinitionIndex = 3294;

	class AndInstruction_AndUInt64 : public ::System::Linq::Expressions::Interpreter::AndInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ANDINSTRUCTION_ANDUINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ANDINSTRUCTION_ANDUINT64_RUN_OFFSET))(this, a1);
		}
	};
}

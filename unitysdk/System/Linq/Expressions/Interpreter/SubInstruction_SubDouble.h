#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/SubInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x1ADB0E70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBDOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB0E60)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int SubInstruction_SubDouble_TypeDefinitionIndex = 3619;

	class SubInstruction_SubDouble : public ::System::Linq::Expressions::Interpreter::SubInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBDOUBLE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBDOUBLE_RUN_OFFSET))(this, a1);
		}
	};
}

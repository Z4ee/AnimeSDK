#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NotEqualInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALSINGLELIFTEDTONULL_RUN_OFFSET UNITYSDK_OFFSET(0x1ADA8040)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALSINGLELIFTEDTONULL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA6B40)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotEqualInstruction_NotEqualSingleLiftedToNull_TypeDefinitionIndex = 3570;

	class NotEqualInstruction_NotEqualSingleLiftedToNull : public ::System::Linq::Expressions::Interpreter::NotEqualInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALSINGLELIFTEDTONULL__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALSINGLELIFTEDTONULL_RUN_OFFSET))(this, a1);
		}
	};
}

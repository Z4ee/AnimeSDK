#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NotEqualInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALBOOLEAN_RUN_OFFSET UNITYSDK_OFFSET(0x1ADA6C30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA6B60)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotEqualInstruction_NotEqualBoolean_TypeDefinitionIndex = 3548;

	class NotEqualInstruction_NotEqualBoolean : public ::System::Linq::Expressions::Interpreter::NotEqualInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALBOOLEAN__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALBOOLEAN_RUN_OFFSET))(this, a1);
		}
	};
}

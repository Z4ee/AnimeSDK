#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NotEqualInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x184F61E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x184F44B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotEqualInstruction_NotEqualUInt64_TypeDefinitionIndex = 3554;

	class NotEqualInstruction_NotEqualUInt64 : public ::System::Linq::Expressions::Interpreter::NotEqualInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALUINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALUINT64_RUN_OFFSET))(this, frame);
		}
	};
}

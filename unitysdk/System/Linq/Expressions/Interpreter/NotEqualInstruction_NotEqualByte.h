#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NotEqualInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x184F4640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALBYTE__CTOR_OFFSET UNITYSDK_OFFSET(0x184F4480)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotEqualInstruction_NotEqualByte_TypeDefinitionIndex = 3551;

	class NotEqualInstruction_NotEqualByte : public ::System::Linq::Expressions::Interpreter::NotEqualInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALBYTE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALBYTE_RUN_OFFSET))(this, frame);
		}
	};
}

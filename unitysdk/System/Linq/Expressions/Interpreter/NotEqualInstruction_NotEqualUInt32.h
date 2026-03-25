#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NotEqualInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x184F5F30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALUINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x184F44A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotEqualInstruction_NotEqualUInt32_TypeDefinitionIndex = 3553;

	class NotEqualInstruction_NotEqualUInt32 : public ::System::Linq::Expressions::Interpreter::NotEqualInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALUINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_NOTEQUALUINT32_RUN_OFFSET))(this, frame);
		}
	};
}

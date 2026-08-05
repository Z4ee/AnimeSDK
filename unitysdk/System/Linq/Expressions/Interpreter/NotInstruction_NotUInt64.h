#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NotInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x1F68F330)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1F68F450)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotInstruction_NotUInt64_TypeDefinitionIndex = 4860;

	class NotInstruction_NotUInt64 : public ::System::Linq::Expressions::Interpreter::NotInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTUINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTUINT64_RUN_OFFSET))(this, frame);
		}
	};
}

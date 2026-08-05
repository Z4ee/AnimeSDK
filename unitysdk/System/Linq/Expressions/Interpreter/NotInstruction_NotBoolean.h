#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NotInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTBOOLEAN_RUN_OFFSET UNITYSDK_OFFSET(0x1F47A0C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F47A1C0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotInstruction_NotBoolean_TypeDefinitionIndex = 4856;

	class NotInstruction_NotBoolean : public ::System::Linq::Expressions::Interpreter::NotInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTBOOLEAN__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTBOOLEAN_RUN_OFFSET))(this, frame);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NotInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x1ADA8D00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTBYTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA8C00)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotInstruction_NotByte_TypeDefinitionIndex = 3580;

	class NotInstruction_NotByte : public ::System::Linq::Expressions::Interpreter::NotInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTBYTE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTBYTE_RUN_OFFSET))(this, a1);
		}
	};
}

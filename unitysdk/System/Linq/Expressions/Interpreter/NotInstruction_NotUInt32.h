#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NotInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x1E59E940)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTUINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x1E59EA50)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotInstruction_NotUInt32_TypeDefinitionIndex = 4861;

	class NotInstruction_NotUInt32 : public ::System::Linq::Expressions::Interpreter::NotInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTUINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTINSTRUCTION_NOTUINT32_RUN_OFFSET))(this, frame);
		}
	};
}

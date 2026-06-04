#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/IncrementInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INCREMENTINSTRUCTION_INCREMENTINT16_RUN_OFFSET UNITYSDK_OFFSET(0x1AD7D510)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INCREMENTINSTRUCTION_INCREMENTINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD7D320)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int IncrementInstruction_IncrementInt16_TypeDefinitionIndex = 3413;

	class IncrementInstruction_IncrementInt16 : public ::System::Linq::Expressions::Interpreter::IncrementInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INCREMENTINSTRUCTION_INCREMENTINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INCREMENTINSTRUCTION_INCREMENTINT16_RUN_OFFSET))(this, a1);
		}
	};
}

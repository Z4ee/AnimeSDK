#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/IncrementInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INCREMENTINSTRUCTION_INCREMENTUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x1AD7DAC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INCREMENTINSTRUCTION_INCREMENTUINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD7D360)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int IncrementInstruction_IncrementUInt32_TypeDefinitionIndex = 3417;

	class IncrementInstruction_IncrementUInt32 : public ::System::Linq::Expressions::Interpreter::IncrementInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INCREMENTINSTRUCTION_INCREMENTUINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INCREMENTINSTRUCTION_INCREMENTUINT32_RUN_OFFSET))(this, a1);
		}
	};
}

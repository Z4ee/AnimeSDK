#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/IncrementInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INCREMENTINSTRUCTION_INCREMENTSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x184CB1C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INCREMENTINSTRUCTION_INCREMENTSINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x184CADF0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int IncrementInstruction_IncrementSingle_TypeDefinitionIndex = 3416;

	class IncrementInstruction_IncrementSingle : public ::System::Linq::Expressions::Interpreter::IncrementInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INCREMENTINSTRUCTION_INCREMENTSINGLE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INCREMENTINSTRUCTION_INCREMENTSINGLE_RUN_OFFSET))(this, frame);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/RightShiftInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_RIGHTSHIFTINT32_RUN_OFFSET UNITYSDK_OFFSET(0x184FCC00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_RIGHTSHIFTINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x184FC8C0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RightShiftInstruction_RightShiftInt32_TypeDefinitionIndex = 3597;

	class RightShiftInstruction_RightShiftInt32 : public ::System::Linq::Expressions::Interpreter::RightShiftInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_RIGHTSHIFTINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_RIGHTSHIFTINT32_RUN_OFFSET))(this, frame);
		}
	};
}

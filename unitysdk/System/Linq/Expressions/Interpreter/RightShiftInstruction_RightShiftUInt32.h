#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/RightShiftInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_RIGHTSHIFTUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x1ADAF8E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_RIGHTSHIFTUINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAF020)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RightShiftInstruction_RightShiftUInt32_TypeDefinitionIndex = 3604;

	class RightShiftInstruction_RightShiftUInt32 : public ::System::Linq::Expressions::Interpreter::RightShiftInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_RIGHTSHIFTUINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_RIGHTSHIFTUINT32_RUN_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/RightShiftInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_RIGHTSHIFTSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x1ADAF640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_RIGHTSHIFTSBYTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAEFC0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RightShiftInstruction_RightShiftSByte_TypeDefinitionIndex = 3598;

	class RightShiftInstruction_RightShiftSByte : public ::System::Linq::Expressions::Interpreter::RightShiftInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_RIGHTSHIFTSBYTE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RIGHTSHIFTINSTRUCTION_RIGHTSHIFTSBYTE_RUN_OFFSET))(this, a1);
		}
	};
}

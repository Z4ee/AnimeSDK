#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LeftShiftInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_LEFTSHIFTSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x1FAE9F60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_LEFTSHIFTSBYTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAEA0F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeftShiftInstruction_LeftShiftSByte_TypeDefinitionIndex = 4714;

	class LeftShiftInstruction_LeftShiftSByte : public ::System::Linq::Expressions::Interpreter::LeftShiftInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_LEFTSHIFTSBYTE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEFTSHIFTINSTRUCTION_LEFTSHIFTSBYTE_RUN_OFFSET))(this, frame);
		}
	};
}

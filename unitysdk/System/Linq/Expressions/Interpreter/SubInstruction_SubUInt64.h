#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/SubInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x1E0F57E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F59E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int SubInstruction_SubUInt64_TypeDefinitionIndex = 4900;

	class SubInstruction_SubUInt64 : public ::System::Linq::Expressions::Interpreter::SubInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBUINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBUINT64_RUN_OFFSET))(this, frame);
		}
	};
}

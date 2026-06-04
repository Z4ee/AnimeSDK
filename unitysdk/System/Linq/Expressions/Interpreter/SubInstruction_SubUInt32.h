#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/SubInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x1ADB1870)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBUINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB0E30)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int SubInstruction_SubUInt32_TypeDefinitionIndex = 3616;

	class SubInstruction_SubUInt32 : public ::System::Linq::Expressions::Interpreter::SubInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBUINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBINSTRUCTION_SUBUINT32_RUN_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/SubOvfInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x1ADB2DA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB1E70)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int SubOvfInstruction_SubOvfUInt64_TypeDefinitionIndex = 3626;

	class SubOvfInstruction_SubOvfUInt64 : public ::System::Linq::Expressions::Interpreter::SubOvfInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFUINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFUINT64_RUN_OFFSET))(this, a1);
		}
	};
}

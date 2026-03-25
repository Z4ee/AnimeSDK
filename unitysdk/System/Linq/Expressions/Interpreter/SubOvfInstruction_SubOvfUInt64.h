#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/SubOvfInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x18500930)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x184FF870)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int SubOvfInstruction_SubOvfUInt64_TypeDefinitionIndex = 3623;

	class SubOvfInstruction_SubOvfUInt64 : public ::System::Linq::Expressions::Interpreter::SubOvfInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFUINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFUINT64_RUN_OFFSET))(this, frame);
		}
	};
}

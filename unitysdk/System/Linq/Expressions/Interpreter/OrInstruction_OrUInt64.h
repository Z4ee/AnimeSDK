#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/OrInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ORINSTRUCTION_ORUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x1F47A5D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ORINSTRUCTION_ORUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1F47A780)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int OrInstruction_OrUInt64_TypeDefinitionIndex = 4878;

	class OrInstruction_OrUInt64 : public ::System::Linq::Expressions::Interpreter::OrInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ORINSTRUCTION_ORUINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ORINSTRUCTION_ORUINT64_RUN_OFFSET))(this, frame);
		}
	};
}

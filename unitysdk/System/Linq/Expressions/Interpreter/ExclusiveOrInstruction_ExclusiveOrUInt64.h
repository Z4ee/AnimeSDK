#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ExclusiveOrInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x184C7580)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x184C6840)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExclusiveOrInstruction_ExclusiveOrUInt64_TypeDefinitionIndex = 3378;

	class ExclusiveOrInstruction_ExclusiveOrUInt64 : public ::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORUINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORUINT64_RUN_OFFSET))(this, frame);
		}
	};
}

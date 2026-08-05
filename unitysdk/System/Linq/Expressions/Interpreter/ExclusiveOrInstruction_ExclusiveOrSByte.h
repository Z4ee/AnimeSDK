#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ExclusiveOrInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x1F7C1DA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORSBYTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C1F20)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExclusiveOrInstruction_ExclusiveOrSByte_TypeDefinitionIndex = 4653;

	class ExclusiveOrInstruction_ExclusiveOrSByte : public ::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORSBYTE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORSBYTE_RUN_OFFSET))(this, frame);
		}
	};
}

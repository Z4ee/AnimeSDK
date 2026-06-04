#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ExclusiveOrInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORBOOLEAN_RUN_OFFSET UNITYSDK_OFFSET(0x1AD78960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD78950)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExclusiveOrInstruction_ExclusiveOrBoolean_TypeDefinitionIndex = 3382;

	class ExclusiveOrInstruction_ExclusiveOrBoolean : public ::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORBOOLEAN__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORBOOLEAN_RUN_OFFSET))(this, a1);
		}
	};
}

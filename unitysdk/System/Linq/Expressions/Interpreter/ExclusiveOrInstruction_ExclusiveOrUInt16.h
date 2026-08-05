#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/ExclusiveOrInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x1F90BC70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORUINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x1F90BDF0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExclusiveOrInstruction_ExclusiveOrUInt16_TypeDefinitionIndex = 4658;

	class ExclusiveOrInstruction_ExclusiveOrUInt16 : public ::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORUINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCLUSIVEORINSTRUCTION_EXCLUSIVEORUINT16_RUN_OFFSET))(this, frame);
		}
	};
}

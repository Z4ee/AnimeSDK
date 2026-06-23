#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/DivInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DIVINSTRUCTION_DIVUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x1E70B7B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DIVINSTRUCTION_DIVUINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x1E70B9D0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DivInstruction_DivUInt16_TypeDefinitionIndex = 4621;

	class DivInstruction_DivUInt16 : public ::System::Linq::Expressions::Interpreter::DivInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DIVINSTRUCTION_DIVUINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DIVINSTRUCTION_DIVUINT16_RUN_OFFSET))(this, frame);
		}
	};
}

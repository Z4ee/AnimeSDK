#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/MulInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULINSTRUCTION_MULSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x1E3260D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULINSTRUCTION_MULSINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3262E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int MulInstruction_MulSingle_TypeDefinitionIndex = 4809;

	class MulInstruction_MulSingle : public ::System::Linq::Expressions::Interpreter::MulInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULINSTRUCTION_MULSINGLE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULINSTRUCTION_MULSINGLE_RUN_OFFSET))(this, frame);
		}
	};
}

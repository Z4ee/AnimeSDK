#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/DivInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DIVINSTRUCTION_DIVSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x1AD742D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DIVINSTRUCTION_DIVSINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD73BB0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DivInstruction_DivSingle_TypeDefinitionIndex = 3345;

	class DivInstruction_DivSingle : public ::System::Linq::Expressions::Interpreter::DivInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DIVINSTRUCTION_DIVSINGLE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DIVINSTRUCTION_DIVSINGLE_RUN_OFFSET))(this, a1);
		}
	};
}

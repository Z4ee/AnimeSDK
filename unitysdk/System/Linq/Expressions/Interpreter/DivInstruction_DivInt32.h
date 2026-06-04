#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/DivInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DIVINSTRUCTION_DIVINT32_RUN_OFFSET UNITYSDK_OFFSET(0x1AD73F70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DIVINSTRUCTION_DIVINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD73B60)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DivInstruction_DivInt32_TypeDefinitionIndex = 3340;

	class DivInstruction_DivInt32 : public ::System::Linq::Expressions::Interpreter::DivInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DIVINSTRUCTION_DIVINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DIVINSTRUCTION_DIVINT32_RUN_OFFSET))(this, a1);
		}
	};
}

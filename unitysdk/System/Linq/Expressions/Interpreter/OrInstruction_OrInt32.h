#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/OrInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ORINSTRUCTION_ORINT32_RUN_OFFSET UNITYSDK_OFFSET(0x1ADAD320)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ORINSTRUCTION_ORINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADACC60)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int OrInstruction_OrInt32_TypeDefinitionIndex = 3590;

	class OrInstruction_OrInt32 : public ::System::Linq::Expressions::Interpreter::OrInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ORINSTRUCTION_ORINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ORINSTRUCTION_ORINT32_RUN_OFFSET))(this, a1);
		}
	};
}

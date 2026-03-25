#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/OrInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ORINSTRUCTION_ORINT16_RUN_OFFSET UNITYSDK_OFFSET(0x184FAC20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ORINSTRUCTION_ORINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x184FA790)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int OrInstruction_OrInt16_TypeDefinitionIndex = 3586;

	class OrInstruction_OrInt16 : public ::System::Linq::Expressions::Interpreter::OrInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ORINSTRUCTION_ORINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ORINSTRUCTION_ORINT16_RUN_OFFSET))(this, frame);
		}
	};
}

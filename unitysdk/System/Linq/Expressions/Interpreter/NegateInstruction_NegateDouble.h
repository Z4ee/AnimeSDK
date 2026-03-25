#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NegateInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_NEGATEDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x184F2C10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_NEGATEDOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x184F2C00)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NegateInstruction_NegateDouble_TypeDefinitionIndex = 3537;

	class NegateInstruction_NegateDouble : public ::System::Linq::Expressions::Interpreter::NegateInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_NEGATEDOUBLE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_NEGATEDOUBLE_RUN_OFFSET))(this, frame);
		}
	};
}

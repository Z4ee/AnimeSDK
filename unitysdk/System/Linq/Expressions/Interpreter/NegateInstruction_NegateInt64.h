#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NegateInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_NEGATEINT64_RUN_OFFSET UNITYSDK_OFFSET(0x1ADA54A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_NEGATEINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA50F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NegateInstruction_NegateInt64_TypeDefinitionIndex = 3538;

	class NegateInstruction_NegateInt64 : public ::System::Linq::Expressions::Interpreter::NegateInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_NEGATEINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_NEGATEINT64_RUN_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NegateInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_NEGATEINT16_RUN_OFFSET UNITYSDK_OFFSET(0x184F2D10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_NEGATEINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x184F2BC0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NegateInstruction_NegateInt16_TypeDefinitionIndex = 3533;

	class NegateInstruction_NegateInt16 : public ::System::Linq::Expressions::Interpreter::NegateInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_NEGATEINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATEINSTRUCTION_NEGATEINT16_RUN_OFFSET))(this, frame);
		}
	};
}

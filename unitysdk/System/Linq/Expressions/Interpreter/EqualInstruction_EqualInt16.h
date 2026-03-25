#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/EqualInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_EQUALINT16_RUN_OFFSET UNITYSDK_OFFSET(0x184C4DC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_EQUALINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x184C4130)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EqualInstruction_EqualInt16_TypeDefinitionIndex = 3347;

	class EqualInstruction_EqualInt16 : public ::System::Linq::Expressions::Interpreter::EqualInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_EQUALINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EQUALINSTRUCTION_EQUALINT16_RUN_OFFSET))(this, frame);
		}
	};
}

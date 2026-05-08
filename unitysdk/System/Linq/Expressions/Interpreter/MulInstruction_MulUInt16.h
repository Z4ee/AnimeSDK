#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/MulInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULINSTRUCTION_MULUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x1BF3D2C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULINSTRUCTION_MULUINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3D4C0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int MulInstruction_MulUInt16_TypeDefinitionIndex = 4807;

	class MulInstruction_MulUInt16 : public ::System::Linq::Expressions::Interpreter::MulInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULINSTRUCTION_MULUINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULINSTRUCTION_MULUINT16_RUN_OFFSET))(this, frame);
		}
	};
}

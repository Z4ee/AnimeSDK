#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/SubOvfInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x185002B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFUINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x184FF850)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int SubOvfInstruction_SubOvfUInt16_TypeDefinitionIndex = 3621;

	class SubOvfInstruction_SubOvfUInt16 : public ::System::Linq::Expressions::Interpreter::SubOvfInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFUINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFUINT16_RUN_OFFSET))(this, frame);
		}
	};
}

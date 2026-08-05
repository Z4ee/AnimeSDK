#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/SubOvfInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFINT32_RUN_OFFSET UNITYSDK_OFFSET(0x1F521470)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5217E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int SubOvfInstruction_SubOvfInt32_TypeDefinitionIndex = 4905;

	class SubOvfInstruction_SubOvfInt32 : public ::System::Linq::Expressions::Interpreter::SubOvfInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SUBOVFINSTRUCTION_SUBOVFINT32_RUN_OFFSET))(this, frame);
		}
	};
}

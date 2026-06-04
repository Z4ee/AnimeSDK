#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/AddOvfInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_ADDOVFINT32_RUN_OFFSET UNITYSDK_OFFSET(0x1AD6B070)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_ADDOVFINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD6ACB0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AddOvfInstruction_AddOvfInt32_TypeDefinitionIndex = 3281;

	class AddOvfInstruction_AddOvfInt32 : public ::System::Linq::Expressions::Interpreter::AddOvfInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_ADDOVFINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_ADDOVFINT32_RUN_OFFSET))(this, a1);
		}
	};
}

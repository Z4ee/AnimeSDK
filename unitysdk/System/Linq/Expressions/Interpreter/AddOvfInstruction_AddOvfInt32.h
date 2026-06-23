#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/AddOvfInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_ADDOVFINT32_RUN_OFFSET UNITYSDK_OFFSET(0x1E386DD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_ADDOVFINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x1E387110)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AddOvfInstruction_AddOvfInt32_TypeDefinitionIndex = 4560;

	class AddOvfInstruction_AddOvfInt32 : public ::System::Linq::Expressions::Interpreter::AddOvfInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_ADDOVFINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_ADDOVFINT32_RUN_OFFSET))(this, frame);
		}
	};
}

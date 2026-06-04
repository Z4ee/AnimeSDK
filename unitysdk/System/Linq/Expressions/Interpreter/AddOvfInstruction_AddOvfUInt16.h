#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/AddOvfInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_ADDOVFUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x1AD6B610)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_ADDOVFUINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD6ACD0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AddOvfInstruction_AddOvfUInt16_TypeDefinitionIndex = 3283;

	class AddOvfInstruction_AddOvfUInt16 : public ::System::Linq::Expressions::Interpreter::AddOvfInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_ADDOVFUINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDOVFINSTRUCTION_ADDOVFUINT16_RUN_OFFSET))(this, a1);
		}
	};
}

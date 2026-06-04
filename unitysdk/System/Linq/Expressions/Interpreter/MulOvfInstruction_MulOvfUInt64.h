#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/MulOvfInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_MULOVFUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x1ADA4540)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_MULOVFUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA35B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int MulOvfInstruction_MulOvfUInt64_TypeDefinitionIndex = 3534;

	class MulOvfInstruction_MulOvfUInt64 : public ::System::Linq::Expressions::Interpreter::MulOvfInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_MULOVFUINT64__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_MULOVFUINT64_RUN_OFFSET))(this, a1);
		}
	};
}

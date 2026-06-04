#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/MulOvfInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_MULOVFUINT16_RUN_OFFSET UNITYSDK_OFFSET(0x1ADA3F50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_MULOVFUINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA3590)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int MulOvfInstruction_MulOvfUInt16_TypeDefinitionIndex = 3532;

	class MulOvfInstruction_MulOvfUInt16 : public ::System::Linq::Expressions::Interpreter::MulOvfInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_MULOVFUINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_MULOVFUINT16_RUN_OFFSET))(this, a1);
		}
	};
}

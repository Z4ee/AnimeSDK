#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/MulOvfInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_MULOVFINT32_RUN_OFFSET UNITYSDK_OFFSET(0x184F12E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_MULOVFINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x184F0EB0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int MulOvfInstruction_MulOvfInt32_TypeDefinitionIndex = 3527;

	class MulOvfInstruction_MulOvfInt32 : public ::System::Linq::Expressions::Interpreter::MulOvfInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_MULOVFINT32__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_MULOVFINSTRUCTION_MULOVFINT32_RUN_OFFSET))(this, frame);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/AddInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x1F3343E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDDOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3345C0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AddInstruction_AddDouble_TypeDefinitionIndex = 4557;

	class AddInstruction_AddDouble : public ::System::Linq::Expressions::Interpreter::AddInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDDOUBLE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDDOUBLE_RUN_OFFSET))(this, frame);
		}
	};
}

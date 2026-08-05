#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/AddInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x1F3347E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDSINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3349E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AddInstruction_AddSingle_TypeDefinitionIndex = 4556;

	class AddInstruction_AddSingle : public ::System::Linq::Expressions::Interpreter::AddInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDSINGLE__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDSINGLE_RUN_OFFSET))(this, frame);
		}
	};
}

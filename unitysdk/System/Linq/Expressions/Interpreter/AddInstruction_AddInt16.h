#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/AddInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDINT16_RUN_OFFSET UNITYSDK_OFFSET(0x1EEF2190)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDINT16__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF2390)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AddInstruction_AddInt16_TypeDefinitionIndex = 4550;

	class AddInstruction_AddInt16 : public ::System::Linq::Expressions::Interpreter::AddInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDINT16__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ADDINSTRUCTION_ADDINT16_RUN_OFFSET))(this, frame);
		}
	};
}

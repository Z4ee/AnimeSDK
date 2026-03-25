#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NullableMethodCallInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETHASHCODECLASS_RUN_OFFSET UNITYSDK_OFFSET(0x184F76C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETHASHCODECLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x184F74D0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NullableMethodCallInstruction_GetHashCodeClass_TypeDefinitionIndex = 3635;

	class NullableMethodCallInstruction_GetHashCodeClass : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETHASHCODECLASS__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETHASHCODECLASS_RUN_OFFSET))(this, frame);
		}
	};
}

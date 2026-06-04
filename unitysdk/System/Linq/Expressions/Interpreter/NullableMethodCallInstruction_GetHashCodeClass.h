#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NullableMethodCallInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETHASHCODECLASS_RUN_OFFSET UNITYSDK_OFFSET(0x1ADA9CE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETHASHCODECLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA9A90)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NullableMethodCallInstruction_GetHashCodeClass_TypeDefinitionIndex = 3638;

	class NullableMethodCallInstruction_GetHashCodeClass : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETHASHCODECLASS__CTOR_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETHASHCODECLASS_RUN_OFFSET))(this, a1);
		}
	};
}

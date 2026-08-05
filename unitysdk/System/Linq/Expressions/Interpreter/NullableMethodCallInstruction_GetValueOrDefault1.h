#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NullableMethodCallInstruction.h"

namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETVALUEORDEFAULT1_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1DC45670)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETVALUEORDEFAULT1_RUN_OFFSET UNITYSDK_OFFSET(0x1DC45680)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETVALUEORDEFAULT1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC45710)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NullableMethodCallInstruction_GetValueOrDefault1_TypeDefinitionIndex = 4918;

	class NullableMethodCallInstruction_GetValueOrDefault1 : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETVALUEORDEFAULT1__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETVALUEORDEFAULT1_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETVALUEORDEFAULT1_RUN_OFFSET))(this, frame);
		}
	};
}

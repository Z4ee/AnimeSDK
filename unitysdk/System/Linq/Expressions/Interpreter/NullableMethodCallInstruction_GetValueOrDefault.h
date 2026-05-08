#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NullableMethodCallInstruction.h"

namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETVALUEORDEFAULT_RUN_OFFSET UNITYSDK_OFFSET(0x1A3EE940)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETVALUEORDEFAULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3EE910)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NullableMethodCallInstruction_GetValueOrDefault_TypeDefinitionIndex = 4918;

	class NullableMethodCallInstruction_GetValueOrDefault : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction
	{
	public:
		::System::Type* defaultValueType; // 0x10

		::System::Void _ctor(::System::Reflection::MethodInfo* mi)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETVALUEORDEFAULT__CTOR_OFFSET))(this, mi);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GETVALUEORDEFAULT_RUN_OFFSET))(this, frame);
		}
	};
}

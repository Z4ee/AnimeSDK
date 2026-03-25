#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LessThanInstruction.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANDOUBLE_RUN_OFFSET UNITYSDK_OFFSET(0x184D4DA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANDOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x184D4AD0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LessThanInstruction_LessThanDouble_TypeDefinitionIndex = 3448;

	class LessThanInstruction_LessThanDouble : public ::System::Linq::Expressions::Interpreter::LessThanInstruction
	{
	public:
		::System::Void _ctor(::System::Object* nullValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANDOUBLE__CTOR_OFFSET))(this, nullValue);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANDOUBLE_RUN_OFFSET))(this, frame);
		}
	};
}

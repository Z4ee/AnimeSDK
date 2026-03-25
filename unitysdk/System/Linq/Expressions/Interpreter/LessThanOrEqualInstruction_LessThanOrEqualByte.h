#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LessThanOrEqualInstruction.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_LESSTHANOREQUALBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x184D5B20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_LESSTHANOREQUALBYTE__CTOR_OFFSET UNITYSDK_OFFSET(0x184D5AC0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LessThanOrEqualInstruction_LessThanOrEqualByte_TypeDefinitionIndex = 3455;

	class LessThanOrEqualInstruction_LessThanOrEqualByte : public ::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction
	{
	public:
		::System::Void _ctor(::System::Object* nullValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_LESSTHANOREQUALBYTE__CTOR_OFFSET))(this, nullValue);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_LESSTHANOREQUALBYTE_RUN_OFFSET))(this, frame);
		}
	};
}

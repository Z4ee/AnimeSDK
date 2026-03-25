#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/GreaterThanOrEqualInstruction.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GREATERTHANOREQUALSBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x184CA430)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GREATERTHANOREQUALSBYTE__CTOR_OFFSET UNITYSDK_OFFSET(0x184C9B40)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte_TypeDefinitionIndex = 3398;

	class GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte : public ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction
	{
	public:
		::System::Void _ctor(::System::Object* nullValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GREATERTHANOREQUALSBYTE__CTOR_OFFSET))(this, nullValue);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GREATERTHANOREQUALSBYTE_RUN_OFFSET))(this, frame);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/GreaterThanOrEqualInstruction.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GREATERTHANOREQUALUINT64_RUN_OFFSET UNITYSDK_OFFSET(0x1AD7CF10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GREATERTHANOREQUALUINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD7BF40)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64_TypeDefinitionIndex = 3409;

	class GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64 : public ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction
	{
	public:
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GREATERTHANOREQUALUINT64__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANOREQUALINSTRUCTION_GREATERTHANOREQUALUINT64_RUN_OFFSET))(this, a1);
		}
	};
}

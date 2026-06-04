#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LessThanOrEqualInstruction.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_LESSTHANOREQUALSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x1AD88F00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_LESSTHANOREQUALSINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD883F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LessThanOrEqualInstruction_LessThanOrEqualSingle_TypeDefinitionIndex = 3462;

	class LessThanOrEqualInstruction_LessThanOrEqualSingle : public ::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction
	{
	public:
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_LESSTHANOREQUALSINGLE__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_LESSTHANOREQUALSINGLE_RUN_OFFSET))(this, a1);
		}
	};
}

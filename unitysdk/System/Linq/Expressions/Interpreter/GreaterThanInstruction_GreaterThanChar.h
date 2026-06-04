#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/GreaterThanInstruction.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANINSTRUCTION_GREATERTHANCHAR_RUN_OFFSET UNITYSDK_OFFSET(0x1AD7A950)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANINSTRUCTION_GREATERTHANCHAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD7A730)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int GreaterThanInstruction_GreaterThanChar_TypeDefinitionIndex = 3391;

	class GreaterThanInstruction_GreaterThanChar : public ::System::Linq::Expressions::Interpreter::GreaterThanInstruction
	{
	public:
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANINSTRUCTION_GREATERTHANCHAR__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANINSTRUCTION_GREATERTHANCHAR_RUN_OFFSET))(this, a1);
		}
	};
}

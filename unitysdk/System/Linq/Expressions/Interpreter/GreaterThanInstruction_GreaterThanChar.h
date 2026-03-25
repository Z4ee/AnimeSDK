#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/GreaterThanInstruction.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANINSTRUCTION_GREATERTHANCHAR_RUN_OFFSET UNITYSDK_OFFSET(0x184C87B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANINSTRUCTION_GREATERTHANCHAR__CTOR_OFFSET UNITYSDK_OFFSET(0x184C85C0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int GreaterThanInstruction_GreaterThanChar_TypeDefinitionIndex = 3388;

	class GreaterThanInstruction_GreaterThanChar : public ::System::Linq::Expressions::Interpreter::GreaterThanInstruction
	{
	public:
		::System::Void _ctor(::System::Object* nullValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANINSTRUCTION_GREATERTHANCHAR__CTOR_OFFSET))(this, nullValue);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_GREATERTHANINSTRUCTION_GREATERTHANCHAR_RUN_OFFSET))(this, frame);
		}
	};
}

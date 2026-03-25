#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LessThanInstruction.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANBYTE_RUN_OFFSET UNITYSDK_OFFSET(0x184D4AE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANBYTE__CTOR_OFFSET UNITYSDK_OFFSET(0x184D4A80)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LessThanInstruction_LessThanByte_TypeDefinitionIndex = 3443;

	class LessThanInstruction_LessThanByte : public ::System::Linq::Expressions::Interpreter::LessThanInstruction
	{
	public:
		::System::Void _ctor(::System::Object* nullValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANBYTE__CTOR_OFFSET))(this, nullValue);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANBYTE_RUN_OFFSET))(this, frame);
		}
	};
}

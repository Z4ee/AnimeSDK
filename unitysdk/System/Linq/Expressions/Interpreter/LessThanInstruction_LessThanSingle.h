#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LessThanInstruction.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANSINGLE_RUN_OFFSET UNITYSDK_OFFSET(0x1AD87CB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANSINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD871A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LessThanInstruction_LessThanSingle_TypeDefinitionIndex = 3450;

	class LessThanInstruction_LessThanSingle : public ::System::Linq::Expressions::Interpreter::LessThanInstruction
	{
	public:
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANSINGLE__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANSINGLE_RUN_OFFSET))(this, a1);
		}
	};
}

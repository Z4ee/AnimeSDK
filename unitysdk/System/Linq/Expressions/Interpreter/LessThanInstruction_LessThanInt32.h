#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LessThanInstruction.h"

namespace System { class Object; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANINT32_RUN_OFFSET UNITYSDK_OFFSET(0x1AD87800)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD87140)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LessThanInstruction_LessThanInt32_TypeDefinitionIndex = 3444;

	class LessThanInstruction_LessThanInt32 : public ::System::Linq::Expressions::Interpreter::LessThanInstruction
	{
	public:
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANINT32__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANINSTRUCTION_LESSTHANINT32_RUN_OFFSET))(this, a1);
		}
	};
}

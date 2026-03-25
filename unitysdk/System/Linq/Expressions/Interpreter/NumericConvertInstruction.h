#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x184F7AD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184F7A90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x184F7AE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x184F79B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x184F7AF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184F79A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NumericConvertInstruction_TypeDefinitionIndex = 3580;

	class NumericConvertInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Boolean _isLiftedToNull; // 0x10
		::System::TypeCode _to; // 0x14
		::System::TypeCode _from; // 0x18

		::System::Void _ctor(::System::TypeCode from, ::System::TypeCode to, ::System::Boolean isLiftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypeCode, ::System::TypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION__CTOR_OFFSET))(this, from, to, isLiftedToNull);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_RUN_OFFSET))(this, frame);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}

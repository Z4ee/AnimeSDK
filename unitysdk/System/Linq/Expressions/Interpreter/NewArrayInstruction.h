#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1F7BD450)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1F7BD470)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1F7BD460)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1F7BD4B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7BD440)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NewArrayInstruction_TypeDefinitionIndex = 4576;

	class NewArrayInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Type* _elementType; // 0x10

		::System::Void _ctor(::System::Type* elementType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION__CTOR_OFFSET))(this, elementType);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

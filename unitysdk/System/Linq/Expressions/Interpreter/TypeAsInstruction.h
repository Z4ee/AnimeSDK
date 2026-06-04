#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADB3A30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1ADB3A50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADB3A40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1ADB3A90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ADB3B80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB3A20)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int TypeAsInstruction_TypeDefinitionIndex = 3629;

	class TypeAsInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Type* _type; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_RUN_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEASINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}

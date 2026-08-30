#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E717F30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E717F20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E717F70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E718010)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E717F10)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DefaultValueInstruction_TypeDefinitionIndex = 3349;

	class DefaultValueInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Type* _type; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_RUN_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEFAULTVALUEINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}

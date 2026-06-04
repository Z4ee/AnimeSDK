#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1AD9FE30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AD9FE20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1AD9FE70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AD9FF00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD7FCA0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadObjectInstruction_TypeDefinitionIndex = 3607;

	class LoadObjectInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Object* _value; // 0x10

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_RUN_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}

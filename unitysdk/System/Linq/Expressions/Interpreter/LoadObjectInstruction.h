#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E07DFE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E07DFD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E07E020)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E07E0C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E07DFC0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadObjectInstruction_TypeDefinitionIndex = 4890;

	class LoadObjectInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Object* _value; // 0x10

		::System::Void _ctor(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION__CTOR_OFFSET))(this, value);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_RUN_OFFSET))(this, frame);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADOBJECTINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}

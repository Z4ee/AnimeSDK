#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LightDelegateCreator; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AFD3800)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1AFD3870)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AFD3860)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1AFD38B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD37F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CreateDelegateInstruction_TypeDefinitionIndex = 3639;

	class CreateDelegateInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Linq::Expressions::Interpreter::LightDelegateCreator* _creator; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::LightDelegateCreator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightDelegateCreator*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CREATEDELEGATEINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}

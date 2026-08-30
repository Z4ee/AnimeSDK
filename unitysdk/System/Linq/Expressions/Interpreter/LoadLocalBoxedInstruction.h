#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalAccessInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1B00B970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1B00B960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1B00B9B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE3680)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadLocalBoxedInstruction_TypeDefinitionIndex = 3499;

	class LoadLocalBoxedInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALBOXEDINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}

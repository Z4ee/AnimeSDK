#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalAccessInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALBOXEDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E306430)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALBOXEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E306450)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALBOXEDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E306440)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALBOXEDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E306490)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALBOXEDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E306420)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int AssignLocalBoxedInstruction_TypeDefinitionIndex = 4775;

	class AssignLocalBoxedInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction
	{
	public:
		::System::Void _ctor(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALBOXEDINSTRUCTION__CTOR_OFFSET))(this, index);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALBOXEDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALBOXEDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALBOXEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSIGNLOCALBOXEDINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

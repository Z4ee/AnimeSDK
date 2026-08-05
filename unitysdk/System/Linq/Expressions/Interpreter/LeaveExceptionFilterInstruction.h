#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1F68E5D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1F68E590)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1F68E5E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F68E5F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F68E580)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeaveExceptionFilterInstruction_TypeDefinitionIndex = 4601;

	class LeaveExceptionFilterInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction**)Il2CppClass::FromTypeDefinitionIndex(LeaveExceptionFilterInstruction_TypeDefinitionIndex)->GetStaticField(0x3EB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

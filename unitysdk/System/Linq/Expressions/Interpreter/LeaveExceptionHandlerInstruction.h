#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/IndexedBranchInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1E325590)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E325570)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E325530)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E325580)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E3256B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E325710)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E325520)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeaveExceptionHandlerInstruction_TypeDefinitionIndex = 4603;

	class LeaveExceptionHandlerInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>** StaticGet_s_cache()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>**)Il2CppClass::FromTypeDefinitionIndex(LeaveExceptionHandlerInstruction_TypeDefinitionIndex)->GetStaticField(0x3F70);
		}
		::System::Boolean _hasValue; // 0x18

		::System::Void _ctor(::System::Int32 labelIndex, ::System::Boolean hasValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION__CTOR_OFFSET))(this, labelIndex, hasValue);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction* Create(::System::Int32 labelIndex, ::System::Boolean hasValue)
		{
			return ((::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_CREATE_OFFSET))(labelIndex, hasValue);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONHANDLERINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

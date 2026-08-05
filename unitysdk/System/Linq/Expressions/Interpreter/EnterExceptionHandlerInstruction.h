#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1F7BB450)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1F7BB410)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1F7BB460)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1F7BB470)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7BB480)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7BB400)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterExceptionHandlerInstruction_TypeDefinitionIndex = 4602;

	class EnterExceptionHandlerInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction** StaticGet_NonVoid()
		{
			return (::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction**)Il2CppClass::FromTypeDefinitionIndex(EnterExceptionHandlerInstruction_TypeDefinitionIndex)->GetStaticField(0x3EC0);
		}
		static ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction** StaticGet_Void()
		{
			return (::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction**)Il2CppClass::FromTypeDefinitionIndex(EnterExceptionHandlerInstruction_TypeDefinitionIndex)->GetStaticField(0x3EC8);
		}
		::System::Boolean _hasValue; // 0x10

		::System::Void _ctor(::System::Boolean hasValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION__CTOR_OFFSET))(this, hasValue);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONHANDLERINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

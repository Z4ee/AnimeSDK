#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1C06A650)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1C06A690)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1C06A6A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C06A6B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06A640)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int EnterExceptionFilterInstruction_TypeDefinitionIndex = 4601;

	class EnterExceptionFilterInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction**)Il2CppClass::FromTypeDefinitionIndex(EnterExceptionFilterInstruction_TypeDefinitionIndex)->GetStaticField(0x3EA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ENTEREXCEPTIONFILTERINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

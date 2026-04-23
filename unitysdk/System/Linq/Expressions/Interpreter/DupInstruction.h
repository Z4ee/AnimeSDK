#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x19EFD350)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x19EFD340)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x19EFD390)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EFD480)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFD330)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DupInstruction_TypeDefinitionIndex = 3609;

	class DupInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::DupInstruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::DupInstruction**)Il2CppClass::FromTypeDefinitionIndex(DupInstruction_TypeDefinitionIndex)->GetStaticField(0x12820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

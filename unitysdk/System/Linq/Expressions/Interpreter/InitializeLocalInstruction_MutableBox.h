#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InitializeLocalInstruction.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEBOX_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1AD7E870)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEBOX_RUN_OFFSET UNITYSDK_OFFSET(0x1AD7E700)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD7E6F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InitializeLocalInstruction_MutableBox_TypeDefinitionIndex = 3504;

	class InitializeLocalInstruction_MutableBox : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction
	{
	public:
		::System::Type* _type; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEBOX__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEBOX_RUN_OFFSET))(this, a1);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEBOX_GET_INSTRUCTIONNAME_OFFSET))(this);
		}
	};
}

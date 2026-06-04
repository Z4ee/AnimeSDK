#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalAccessInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1AD9FA10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AD9FA00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1AD9FA50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD808E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadLocalFromClosureBoxedInstruction_TypeDefinitionIndex = 3489;

	class LoadLocalFromClosureBoxedInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}

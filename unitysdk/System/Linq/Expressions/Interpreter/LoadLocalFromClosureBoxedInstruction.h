#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalAccessInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184ED0C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x184ED0B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x184ED100)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184CE370)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadLocalFromClosureBoxedInstruction_TypeDefinitionIndex = 3486;

	class LoadLocalFromClosureBoxedInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction
	{
	public:
		::System::Void _ctor(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION__CTOR_OFFSET))(this, index);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADLOCALFROMCLOSUREBOXEDINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

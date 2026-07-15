#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1C1BB200)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1C1BB220)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1C1BB210)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1C1BB260)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1BB2F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1BB1F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NullCheckInstruction_TypeDefinitionIndex = 3586;

	class NullCheckInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NullCheckInstruction_TypeDefinitionIndex)->GetStaticField(0x33D00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}

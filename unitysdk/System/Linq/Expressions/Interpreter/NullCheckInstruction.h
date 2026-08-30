#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E758960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E758980)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E758970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E7589C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E758A50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLCHECKINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E758950)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NullCheckInstruction_TypeDefinitionIndex = 3594;

	class NullCheckInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NullCheckInstruction_TypeDefinitionIndex)->GetStaticField(0x2BF0);
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

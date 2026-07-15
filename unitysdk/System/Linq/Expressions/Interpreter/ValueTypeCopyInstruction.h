#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1C1C6670)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1C1C6690)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1C1C6680)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1C1C66D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1C6850)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C6840)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ValueTypeCopyInstruction_TypeDefinitionIndex = 3499;

	class ValueTypeCopyInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction** StaticGet_Instruction()
		{
			return (::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction**)Il2CppClass::FromTypeDefinitionIndex(ValueTypeCopyInstruction_TypeDefinitionIndex)->GetStaticField(0x33C00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_VALUETYPECOPYINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}

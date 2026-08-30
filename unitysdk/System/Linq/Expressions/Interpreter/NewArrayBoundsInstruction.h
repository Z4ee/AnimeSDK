#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYBOUNDSINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E754B40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYBOUNDSINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E754B60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYBOUNDSINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E754B50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYBOUNDSINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E754BA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYBOUNDSINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E754B30)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NewArrayBoundsInstruction_TypeDefinitionIndex = 3310;

	class NewArrayBoundsInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Type* _elementType; // 0x10
		::System::Int32 _rank; // 0x18

		::System::Void _ctor(::System::Type* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYBOUNDSINSTRUCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYBOUNDSINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYBOUNDSINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYBOUNDSINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYBOUNDSINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}

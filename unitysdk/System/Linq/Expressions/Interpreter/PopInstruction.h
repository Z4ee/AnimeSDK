#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1BBE1BE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1BBE1BF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1BBE1C30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBE1C80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE1BD0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int PopInstruction_TypeDefinitionIndex = 4893;

	class PopInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::PopInstruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::PopInstruction**)Il2CppClass::FromTypeDefinitionIndex(PopInstruction_TypeDefinitionIndex)->GetStaticField(0x3BA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_POPINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

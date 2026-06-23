#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E07E950)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E07E970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E07E960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E07E9B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E07E940)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NewArrayInitInstruction_TypeDefinitionIndex = 4575;

	class NewArrayInitInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Type* _elementType; // 0x10
		::System::Int32 _elementCount; // 0x18

		::System::Void _ctor(::System::Type* elementType, ::System::Int32 elementCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION__CTOR_OFFSET))(this, elementType, elementCount);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEWARRAYINITINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

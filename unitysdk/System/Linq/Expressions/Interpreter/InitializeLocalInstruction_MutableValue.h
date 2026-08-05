#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InitializeLocalInstruction.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEVALUE_BOXIFINDEXMATCHES_OFFSET UNITYSDK_OFFSET(0x1F7BC440)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEVALUE_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1F7BC4A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEVALUE_RUN_OFFSET UNITYSDK_OFFSET(0x1F7BC2C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7BC2B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InitializeLocalInstruction_MutableValue_TypeDefinitionIndex = 4786;

	class InitializeLocalInstruction_MutableValue : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction
	{
	public:
		::System::Type* _type; // 0x18

		::System::Void _ctor(::System::Int32 index, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEVALUE__CTOR_OFFSET))(this, index, type);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEVALUE_RUN_OFFSET))(this, frame);
		}

		::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEVALUE_BOXIFINDEXMATCHES_OFFSET))(this, index);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_MUTABLEVALUE_GET_INSTRUCTIONNAME_OFFSET))(this);
		}
	};
}

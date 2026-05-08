#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InitializeLocalInstruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEVALUE_BOXIFINDEXMATCHES_OFFSET UNITYSDK_OFFSET(0x1BE35D00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEVALUE_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1BE35D60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEVALUE_RUN_OFFSET UNITYSDK_OFFSET(0x1BE35C60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE35C50)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InitializeLocalInstruction_ImmutableValue_TypeDefinitionIndex = 4782;

	class InitializeLocalInstruction_ImmutableValue : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction
	{
	public:
		::System::Object* _defaultValue; // 0x18

		::System::Void _ctor(::System::Int32 index, ::System::Object* defaultValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEVALUE__CTOR_OFFSET))(this, index, defaultValue);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEVALUE_RUN_OFFSET))(this, frame);
		}

		::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEVALUE_BOXIFINDEXMATCHES_OFFSET))(this, index);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEVALUE_GET_INSTRUCTIONNAME_OFFSET))(this);
		}
	};
}

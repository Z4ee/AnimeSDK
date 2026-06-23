#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InitializeLocalInstruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEBOX_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E3254E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEBOX_RUN_OFFSET UNITYSDK_OFFSET(0x1E3253F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3253E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InitializeLocalInstruction_ImmutableBox_TypeDefinitionIndex = 4782;

	class InitializeLocalInstruction_ImmutableBox : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction
	{
	public:
		::System::Object* _defaultValue; // 0x18

		::System::Void _ctor(::System::Int32 index, ::System::Object* defaultValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEBOX__CTOR_OFFSET))(this, index, defaultValue);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEBOX_RUN_OFFSET))(this, frame);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INITIALIZELOCALINSTRUCTION_IMMUTABLEBOX_GET_INSTRUCTIONNAME_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/FieldInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STOREFIELDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E117FC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STOREFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E117F80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STOREFIELDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E117FD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STOREFIELDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E117F70)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int StoreFieldInstruction_TypeDefinitionIndex = 4665;

	class StoreFieldInstruction : public ::System::Linq::Expressions::Interpreter::FieldInstruction
	{
	public:
		::System::Void _ctor(::System::Reflection::FieldInfo* field)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STOREFIELDINSTRUCTION__CTOR_OFFSET))(this, field);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STOREFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STOREFIELDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STOREFIELDINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

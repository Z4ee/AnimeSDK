#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/FieldInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E508EB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E508E70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1E508EC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1E508ED0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E508E60)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadFieldInstruction_TypeDefinitionIndex = 4664;

	class LoadFieldInstruction : public ::System::Linq::Expressions::Interpreter::FieldInstruction
	{
	public:
		::System::Void _ctor(::System::Reflection::FieldInfo* field)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION__CTOR_OFFSET))(this, field);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADFIELDINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/FieldInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184ED680)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x184ED6C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x184ED6D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x184D0CF0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LoadStaticFieldInstruction_TypeDefinitionIndex = 3381;

	class LoadStaticFieldInstruction : public ::System::Linq::Expressions::Interpreter::FieldInstruction
	{
	public:
		::System::Void _ctor(::System::Reflection::FieldInfo* field)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION__CTOR_OFFSET))(this, field);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOADSTATICFIELDINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/FieldInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1AE1E3F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1AE1E3B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1AE1E400)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1E3A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int StoreStaticFieldInstruction_TypeDefinitionIndex = 4667;

	class StoreStaticFieldInstruction : public ::System::Linq::Expressions::Interpreter::FieldInstruction
	{
	public:
		::System::Void _ctor(::System::Reflection::FieldInfo* field)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION__CTOR_OFFSET))(this, field);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_RUN_OFFSET))(this, frame);
		}
	};
}

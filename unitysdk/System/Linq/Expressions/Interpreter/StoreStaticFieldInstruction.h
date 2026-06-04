#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/FieldInstruction.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1ADB0960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1ADB0920)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1ADB0970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB0910)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int StoreStaticFieldInstruction_TypeDefinitionIndex = 3387;

	class StoreStaticFieldInstruction : public ::System::Linq::Expressions::Interpreter::FieldInstruction
	{
	public:
		::System::Void _ctor(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_STORESTATICFIELDINSTRUCTION_RUN_OFFSET))(this, a1);
		}
	};
}

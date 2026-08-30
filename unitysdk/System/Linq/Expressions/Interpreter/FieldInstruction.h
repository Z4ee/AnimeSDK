#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E71F070)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E71F060)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int FieldInstruction_TypeDefinitionIndex = 3395;

	class FieldInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Reflection::FieldInfo* _field; // 0x10

		::System::Void _ctor(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDINSTRUCTION__CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDINSTRUCTION_TOSTRING_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NumericConvertInstruction.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_TOUNDERLYING_CONVERT_OFFSET UNITYSDK_OFFSET(0x1C072F80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_TOUNDERLYING_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1C072F30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_TOUNDERLYING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C072F70)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NumericConvertInstruction_ToUnderlying_TypeDefinitionIndex = 4870;

	class NumericConvertInstruction_ToUnderlying : public ::System::Linq::Expressions::Interpreter::NumericConvertInstruction
	{
	public:
		::System::Void _ctor(::System::TypeCode to, ::System::Boolean isLiftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_TOUNDERLYING__CTOR_OFFSET))(this, to, isLiftedToNull);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_TOUNDERLYING_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Object* Convert(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_TOUNDERLYING_CONVERT_OFFSET))(this, obj);
		}
	};
}

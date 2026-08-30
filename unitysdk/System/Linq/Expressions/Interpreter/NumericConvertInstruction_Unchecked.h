#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NumericConvertInstruction.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E75BBF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTINT32_OFFSET UNITYSDK_OFFSET(0x1E75B5C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTINT64_OFFSET UNITYSDK_OFFSET(0x1E75B7D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTUINT64_OFFSET UNITYSDK_OFFSET(0x1E75B9D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERT_OFFSET UNITYSDK_OFFSET(0x1E75AFD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E75AF80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E75AFC0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NumericConvertInstruction_Unchecked_TypeDefinitionIndex = 3596;

	class NumericConvertInstruction_Unchecked : public ::System::Linq::Expressions::Interpreter::NumericConvertInstruction
	{
	public:
		::System::Void _ctor(::System::TypeCode a1, ::System::TypeCode a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypeCode, ::System::TypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Object* Convert(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertInt32(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTINT32_OFFSET))(this, a1);
		}

		::System::Object* ConvertInt64(::System::Int64 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTINT64_OFFSET))(this, a1);
		}

		::System::Object* ConvertUInt64(::System::UInt64 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTUINT64_OFFSET))(this, a1);
		}

		::System::Object* ConvertDouble(::System::Double a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTDOUBLE_OFFSET))(this, a1);
		}
	};
}

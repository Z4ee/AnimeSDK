#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NumericConvertInstruction.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E75A930)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTINT32_OFFSET UNITYSDK_OFFSET(0x1E75A1E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTINT64_OFFSET UNITYSDK_OFFSET(0x1E75A430)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTUINT64_OFFSET UNITYSDK_OFFSET(0x1E75A6A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERT_OFFSET UNITYSDK_OFFSET(0x1E759BF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1E759BA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E759BE0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NumericConvertInstruction_Checked_TypeDefinitionIndex = 3597;

	class NumericConvertInstruction_Checked : public ::System::Linq::Expressions::Interpreter::NumericConvertInstruction
	{
	public:
		::System::Void _ctor(::System::TypeCode a1, ::System::TypeCode a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypeCode, ::System::TypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Object* Convert(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertInt32(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTINT32_OFFSET))(this, a1);
		}

		::System::Object* ConvertInt64(::System::Int64 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTINT64_OFFSET))(this, a1);
		}

		::System::Object* ConvertUInt64(::System::UInt64 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTUINT64_OFFSET))(this, a1);
		}

		::System::Object* ConvertDouble(::System::Double a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTDOUBLE_OFFSET))(this, a1);
		}
	};
}

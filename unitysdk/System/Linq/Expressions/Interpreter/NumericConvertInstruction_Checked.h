#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NumericConvertInstruction.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTDOUBLE_OFFSET UNITYSDK_OFFSET(0x184F8DC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTINT32_OFFSET UNITYSDK_OFFSET(0x184F84C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTINT64_OFFSET UNITYSDK_OFFSET(0x184F8780)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTUINT64_OFFSET UNITYSDK_OFFSET(0x184F8A80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERT_OFFSET UNITYSDK_OFFSET(0x184F7ED0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x184F7E80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED__CTOR_OFFSET UNITYSDK_OFFSET(0x184F7EC0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NumericConvertInstruction_Checked_TypeDefinitionIndex = 3582;

	class NumericConvertInstruction_Checked : public ::System::Linq::Expressions::Interpreter::NumericConvertInstruction
	{
	public:
		::System::Void _ctor(::System::TypeCode from, ::System::TypeCode to, ::System::Boolean isLiftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypeCode, ::System::TypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED__CTOR_OFFSET))(this, from, to, isLiftedToNull);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Object* Convert(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERT_OFFSET))(this, obj);
		}

		::System::Object* ConvertInt32(::System::Int32 obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTINT32_OFFSET))(this, obj);
		}

		::System::Object* ConvertInt64(::System::Int64 obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTINT64_OFFSET))(this, obj);
		}

		::System::Object* ConvertUInt64(::System::UInt64 obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTUINT64_OFFSET))(this, obj);
		}

		::System::Object* ConvertDouble(::System::Double obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_CHECKED_CONVERTDOUBLE_OFFSET))(this, obj);
		}
	};
}

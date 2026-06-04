#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_INCLOSURE_OFFSET UNITYSDK_OFFSET(0x1ADA0140)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_ISBOXED_OFFSET UNITYSDK_OFFSET(0x1ADA0120)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_SET_ISBOXED_OFFSET UNITYSDK_OFFSET(0x1ADA0130)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ADA0160)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA0150)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LocalVariable_TypeDefinitionIndex = 3506;

	class LocalVariable : public ::System::Object
	{
	public:
		::System::Int32 Index; // 0x10
		::System::Int32 _flags; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsBoxed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_ISBOXED_OFFSET))(this);
		}

		::System::Void set_IsBoxed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_SET_ISBOXED_OFFSET))(this, a1);
		}

		::System::Boolean get_InClosure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_INCLOSURE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_TOSTRING_OFFSET))(this);
		}
	};
}

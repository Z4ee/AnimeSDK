#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_INCLOSURE_OFFSET UNITYSDK_OFFSET(0x184ED800)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_ISBOXED_OFFSET UNITYSDK_OFFSET(0x184ED7E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_SET_ISBOXED_OFFSET UNITYSDK_OFFSET(0x184ED7F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x184ED820)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x184ED810)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LocalVariable_TypeDefinitionIndex = 3503;

	class LocalVariable : public ::System::Object
	{
	public:
		::System::Int32 _flags; // 0x10
		::System::Int32 Index; // 0x14

		::System::Void _ctor(::System::Int32 index, ::System::Boolean closure)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE__CTOR_OFFSET))(this, index, closure);
		}

		::System::Boolean get_IsBoxed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_ISBOXED_OFFSET))(this);
		}

		::System::Void set_IsBoxed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_SET_ISBOXED_OFFSET))(this, value);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_INCLOSURE_OFFSET UNITYSDK_OFFSET(0x1BFE9A90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_ISBOXED_OFFSET UNITYSDK_OFFSET(0x1BFE9A70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_SET_ISBOXED_OFFSET UNITYSDK_OFFSET(0x1BFE9A80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BFE9AB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE9AA0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LocalVariable_TypeDefinitionIndex = 4790;

	class LocalVariable : public ::System::Object
	{
	public:
		// static const ::System::Int32 IsBoxedFlag = 0x1; // 0x0
		// static const ::System::Int32 InClosureFlag = 0x2; // 0x0
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

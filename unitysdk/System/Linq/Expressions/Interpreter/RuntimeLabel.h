#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMELABEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AA17C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMELABEL__CTOR_OFFSET UNITYSDK_OFFSET(0x6EB6E0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RuntimeLabel_TypeDefinitionIndex = 3307;

	struct alignas(4) RuntimeLabel
	{
		::System::Int32 Index; // 0x10
		::System::Int32 StackDepth; // 0x14
		::System::Int32 ContinuationStackDepth; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMELABEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMELABEL_TOSTRING_OFFSET))(this);
		}
	};
}

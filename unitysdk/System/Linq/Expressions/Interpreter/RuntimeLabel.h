#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMELABEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22CE380)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMELABEL__CTOR_OFFSET UNITYSDK_OFFSET(0x22CE370)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RuntimeLabel_TypeDefinitionIndex = 3302;

	struct alignas(4) RuntimeLabel
	{
		::System::Int32 Index; // 0x10
		::System::Int32 StackDepth; // 0x14
		::System::Int32 ContinuationStackDepth; // 0x18

		::System::Void _ctor(::System::Int32 index, ::System::Int32 continuationStackDepth, ::System::Int32 stackDepth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMELABEL__CTOR_OFFSET))(this, index, continuationStackDepth, stackDepth);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMELABEL_TOSTRING_OFFSET))(this);
		}
	};
}

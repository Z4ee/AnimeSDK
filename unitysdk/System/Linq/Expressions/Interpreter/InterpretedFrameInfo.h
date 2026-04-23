#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class DebugInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22CE2B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x743C0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InterpretedFrameInfo_TypeDefinitionIndex = 3470;

	struct alignas(8) InterpretedFrameInfo
	{
		::System::String* _methodName; // 0x10
		::System::Linq::Expressions::Interpreter::DebugInfo* _debugInfo; // 0x18

		::System::Void _ctor(::System::String* methodName, ::System::Linq::Expressions::Interpreter::DebugInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Linq::Expressions::Interpreter::DebugInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO__CTOR_OFFSET))(this, methodName, info);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO_TOSTRING_OFFSET))(this);
		}
	};
}

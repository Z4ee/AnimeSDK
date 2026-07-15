#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class ExceptionFilter; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_MATCHES_OFFSET UNITYSDK_OFFSET(0x195701E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19570280)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x195701C0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExceptionHandler_TypeDefinitionIndex = 3469;

	class ExceptionHandler : public ::System::Object
	{
	public:
		::System::Type* _exceptionType; // 0x10
		::System::Linq::Expressions::Interpreter::ExceptionFilter* Filter; // 0x18
		::System::Int32 HandlerEndIndex; // 0x20
		::System::Int32 LabelIndex; // 0x24
		::System::Int32 HandlerStartIndex; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Type* a4, ::System::Linq::Expressions::Interpreter::ExceptionFilter* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Type*, ::System::Linq::Expressions::Interpreter::ExceptionFilter*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Matches(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_MATCHES_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_TOSTRING_OFFSET))(this);
		}
	};
}

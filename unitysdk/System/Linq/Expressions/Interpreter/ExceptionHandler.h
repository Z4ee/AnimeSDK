#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class ExceptionFilter; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_MATCHES_OFFSET UNITYSDK_OFFSET(0x19F012E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F01310)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F012C0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExceptionHandler_TypeDefinitionIndex = 3464;

	class ExceptionHandler : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Interpreter::ExceptionFilter* Filter; // 0x10
		::System::Type* _exceptionType; // 0x18
		::System::Int32 HandlerStartIndex; // 0x20
		::System::Int32 HandlerEndIndex; // 0x24
		::System::Int32 LabelIndex; // 0x28

		::System::Void _ctor(::System::Int32 labelIndex, ::System::Int32 handlerStartIndex, ::System::Int32 handlerEndIndex, ::System::Type* exceptionType, ::System::Linq::Expressions::Interpreter::ExceptionFilter* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Type*, ::System::Linq::Expressions::Interpreter::ExceptionFilter*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER__CTOR_OFFSET))(this, labelIndex, handlerStartIndex, handlerEndIndex, exceptionType, filter);
		}

		::System::Boolean Matches(::System::Type* exceptionType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_MATCHES_OFFSET))(this, exceptionType);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_TOSTRING_OFFSET))(this);
		}
	};
}

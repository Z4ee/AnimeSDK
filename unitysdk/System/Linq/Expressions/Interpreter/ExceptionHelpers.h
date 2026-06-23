#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class TargetInvocationException; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHELPERS_UNWRAPANDRETHROW_OFFSET UNITYSDK_OFFSET(0x1E16F6B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExceptionHelpers_TypeDefinitionIndex = 4934;

	class ExceptionHelpers : public ::System::Object
	{
	public:
		static ::System::Void UnwrapAndRethrow(::System::Reflection::TargetInvocationException* exception)
		{
			return ((::System::Void(*)(::System::Reflection::TargetInvocationException*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHELPERS_UNWRAPANDRETHROW_OFFSET))(exception);
		}
	};
}

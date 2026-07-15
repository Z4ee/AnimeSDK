#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class TargetInvocationException; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHELPERS_UNWRAPANDRETHROW_OFFSET UNITYSDK_OFFSET(0x19566110)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExceptionHelpers_TypeDefinitionIndex = 3655;

	class ExceptionHelpers : public ::System::Object
	{
	public:
		static ::System::Void UnwrapAndRethrow(::System::Reflection::TargetInvocationException* a1)
		{
			return ((::System::Void(*)(::System::Reflection::TargetInvocationException*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHELPERS_UNWRAPANDRETHROW_OFFSET))(a1);
		}
	};
}

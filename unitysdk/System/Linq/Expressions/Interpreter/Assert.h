#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSERT_NOTNULL_OFFSET UNITYSDK_OFFSET(0x1F07DAA0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int Assert_TypeDefinitionIndex = 4937;

	class Assert : public ::System::Object
	{
	public:
		static ::System::Void NotNull(::System::Object* var)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ASSERT_NOTNULL_OFFSET))(var);
		}
	};
}

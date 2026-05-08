#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RETHROWEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F0EF0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RethrowException_TypeDefinitionIndex = 4751;

	class RethrowException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RETHROWEXCEPTION__CTOR_OFFSET))(this);
		}
	};
}

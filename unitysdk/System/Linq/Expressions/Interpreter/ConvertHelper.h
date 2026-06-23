#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CONVERTHELPER_TOINT32NONULL_OFFSET UNITYSDK_OFFSET(0x1E3872B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ConvertHelper_TypeDefinitionIndex = 4581;

	class ConvertHelper : public ::System::Object
	{
	public:
		static ::System::Int32 ToInt32NoNull(::System::Object* val)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CONVERTHELPER_TOINT32NONULL_OFFSET))(val);
		}
	};
}

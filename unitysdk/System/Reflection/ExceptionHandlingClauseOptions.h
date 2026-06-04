#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int ExceptionHandlingClauseOptions_TypeDefinitionIndex = 575;

	enum class ExceptionHandlingClauseOptions : ::System::Int32
	{
		Clause = 0,
		Filter = 1,
		Finally = 2,
		Fault = 4,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_TryGetFuncActionArgsResult_TypeDefinitionIndex = 4428;

	enum class Expression_TryGetFuncActionArgsResult : ::System::Int32
	{
		Valid = 0,
		ArgumentNull = 1,
		ByRef = 2,
		PointerOrVoid = 3,
	};
}

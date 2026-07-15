#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int AnalyzeTypeIsResult_TypeDefinitionIndex = 3198;

	enum class AnalyzeTypeIsResult : ::System::Int32
	{
		KnownFalse = 0,
		KnownTrue = 1,
		KnownAssignable = 2,
		Unknown = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanStyles_TypeDefinitionIndex = 768;

	enum class TimeSpanStyles : ::System::Int32
	{
		None = 0,
		AssumeNegative = 1,
	};
}

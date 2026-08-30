#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanFormat_Pattern_TypeDefinitionIndex = 768;

	enum class TimeSpanFormat_Pattern : ::System::Int32
	{
		None = 0,
		Minimum = 1,
		Full = 2,
	};
}

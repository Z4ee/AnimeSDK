#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int DateTimeStyles_TypeDefinitionIndex = 748;

	enum class DateTimeStyles : ::System::Int32
	{
		None = 0,
		AllowLeadingWhite = 1,
		AllowTrailingWhite = 2,
		AllowInnerWhite = 4,
		AllowWhiteSpaces = 7,
		NoCurrentDateDefault = 8,
		AdjustToUniversal = 16,
		AssumeLocal = 32,
		AssumeUniversal = 64,
		RoundtripKind = 128,
	};
}

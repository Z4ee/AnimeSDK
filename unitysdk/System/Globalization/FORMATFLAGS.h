#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int FORMATFLAGS_TypeDefinitionIndex = 741;

	enum class FORMATFLAGS : ::System::Int32
	{
		None = 0,
		UseGenitiveMonth = 1,
		UseLeapYearMonth = 2,
		UseSpacesInMonthNames = 4,
		UseHebrewParsing = 8,
		UseSpacesInDayNames = 16,
		UseDigitPrefixInTokens = 32,
	};
}

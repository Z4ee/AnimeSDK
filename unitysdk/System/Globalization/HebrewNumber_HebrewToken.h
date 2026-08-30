#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int HebrewNumber_HebrewToken_TypeDefinitionIndex = 756;

	enum class HebrewNumber_HebrewToken : ::System::Int32
	{
		Invalid = -1,
		Digit400 = 0,
		Digit200_300 = 1,
		Digit100 = 2,
		Digit10 = 3,
		Digit1 = 4,
		Digit6_7 = 5,
		Digit7 = 6,
		Digit9 = 7,
		SingleQuote = 8,
		DoubleQuote = 9,
	};
}

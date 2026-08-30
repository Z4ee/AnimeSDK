#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int NumberStyles_TypeDefinitionIndex = 761;

	enum class NumberStyles : ::System::Int32
	{
		None = 0,
		AllowLeadingWhite = 1,
		AllowTrailingWhite = 2,
		AllowLeadingSign = 4,
		AllowTrailingSign = 8,
		AllowParentheses = 16,
		AllowDecimalPoint = 32,
		AllowThousands = 64,
		AllowExponent = 128,
		AllowCurrencySymbol = 256,
		AllowHexSpecifier = 512,
		Integer = 7,
		HexNumber = 515,
		Number = 111,
		Float = 167,
		Currency = 383,
		Any = 511,
	};
}

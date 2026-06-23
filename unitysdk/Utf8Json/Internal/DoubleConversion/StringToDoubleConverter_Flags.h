#pragma once
#include "unitysdk/unitysdk.h"

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int StringToDoubleConverter_Flags_TypeDefinitionIndex = 91275;

	enum class StringToDoubleConverter_Flags : ::System::Int32
	{
		NO_FLAGS = 0,
		ALLOW_HEX = 1,
		ALLOW_OCTALS = 2,
		ALLOW_TRAILING_JUNK = 4,
		ALLOW_LEADING_SPACES = 8,
		ALLOW_TRAILING_SPACES = 16,
		ALLOW_SPACES_AFTER_SIGN = 32,
		ALLOW_CASE_INSENSIBILITY = 64,
	};
}

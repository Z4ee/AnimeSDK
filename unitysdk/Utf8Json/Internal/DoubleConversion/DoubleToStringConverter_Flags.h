#pragma once
#include "unitysdk/unitysdk.h"

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int DoubleToStringConverter_Flags_TypeDefinitionIndex = 95197;

	enum class DoubleToStringConverter_Flags : ::System::Int32
	{
		NO_FLAGS = 0,
		EMIT_POSITIVE_EXPONENT_SIGN = 1,
		EMIT_TRAILING_DECIMAL_POINT = 2,
		EMIT_TRAILING_ZERO_AFTER_POINT = 4,
		UNIQUE_ZERO = 8,
	};
}

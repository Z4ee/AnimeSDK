#pragma once
#include "unitysdk/unitysdk.h"

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int DoubleToStringConverter_FastDtoaMode_TypeDefinitionIndex = 95195;

	enum class DoubleToStringConverter_FastDtoaMode : ::System::Int32
	{
		FAST_DTOA_SHORTEST = 0,
		FAST_DTOA_SHORTEST_SINGLE = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int DoubleToStringConverter_DtoaMode_TypeDefinitionIndex = 95196;

	enum class DoubleToStringConverter_DtoaMode : ::System::Int32
	{
		SHORTEST = 0,
		SHORTEST_SINGLE = 1,
	};
}

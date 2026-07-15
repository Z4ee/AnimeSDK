#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	inline static constexpr unsigned int FontFeatureLookupFlags_TypeDefinitionIndex = 41785;

	enum class FontFeatureLookupFlags : ::System::Int32
	{
		None = 0,
		IgnoreLigatures = 4,
		IgnoreSpacingAdjustments = 256,
	};
}

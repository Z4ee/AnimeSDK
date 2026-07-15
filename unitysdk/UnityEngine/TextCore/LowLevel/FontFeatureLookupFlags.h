#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int FontFeatureLookupFlags_TypeDefinitionIndex = 5824;

	enum class FontFeatureLookupFlags : ::System::Int32
	{
		None = 0,
		IgnoreLigatures = 4,
		IgnoreSpacingAdjustments = 256,
	};
}

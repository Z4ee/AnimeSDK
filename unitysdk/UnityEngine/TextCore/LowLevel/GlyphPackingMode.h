#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphPackingMode_TypeDefinitionIndex = 5831;

	enum class GlyphPackingMode : ::System::Int32
	{
		BestShortSideFit = 0,
		BestLongSideFit = 1,
		BestAreaFit = 2,
		BottomLeftRule = 3,
		ContactPointRule = 4,
	};
}

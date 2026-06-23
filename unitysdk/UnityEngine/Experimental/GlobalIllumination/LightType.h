#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int LightType_TypeDefinitionIndex = 6307;

	enum class LightType : ::System::Byte
	{
		Directional = 0x0,
		Point = 0x1,
		Spot = 0x2,
		Rectangle = 0x3,
		Disc = 0x4,
		SpotPyramidShape = 0x5,
		SpotBoxShape = 0x6,
	};
}

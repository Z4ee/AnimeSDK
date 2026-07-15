#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LightType_TypeDefinitionIndex = 4143;

	enum class LightType : ::System::Int32
	{
		Spot = 0,
		Directional = 1,
		Point = 2,
		Area = 3,
		Rectangle = 3,
		Disc = 4,
		RuntimeArea = 5,
	};
}

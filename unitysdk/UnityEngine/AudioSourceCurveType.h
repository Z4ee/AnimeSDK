#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AudioSourceCurveType_TypeDefinitionIndex = 18756;

	enum class AudioSourceCurveType : ::System::Int32
	{
		CustomRolloff = 0,
		SpatialBlend = 1,
		ReverbZoneMix = 2,
		Spread = 3,
	};
}

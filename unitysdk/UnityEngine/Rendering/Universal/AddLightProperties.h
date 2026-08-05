#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AddLightProperties_TypeDefinitionIndex = 27452;

	enum class AddLightProperties : ::System::Int32
	{
		distanceAndSpotAttenuation = 2,
		Count = 4,
		colorForCharacter = 3,
		positionWS_halfInvSmoothness = 0,
		forward = 1,
	};
}

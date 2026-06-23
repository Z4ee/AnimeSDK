#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AddLightProperties_TypeDefinitionIndex = 26222;

	enum class AddLightProperties : ::System::Int32
	{
		positionWS_halfInvSmoothness = 0,
		forward = 1,
		colorForCharacter = 3,
		distanceAndSpotAttenuation = 2,
		Count = 4,
	};
}

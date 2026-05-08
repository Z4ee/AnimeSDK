#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AddLightProperties_TypeDefinitionIndex = 30073;

	enum class AddLightProperties : ::System::Int32
	{
		positionWS_halfInvSmoothness = 0,
		forward = 1,
		distanceAndSpotAttenuation = 2,
		colorForCharacter = 3,
		Count = 4,
	};
}

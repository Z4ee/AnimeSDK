#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakedPointShadowCubemapFace_TypeDefinitionIndex = 27716;

	enum class BakedPointShadowCubemapFace : ::System::Int32
	{
		PositiveZ = 4,
		NegativeX = 1,
		NegativeY = 3,
		NegativeZ = 5,
		PositiveX = 0,
		PositiveY = 2,
	};
}

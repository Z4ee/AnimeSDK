#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakedPointShadowCubemapFace_TypeDefinitionIndex = 26957;

	enum class BakedPointShadowCubemapFace : ::System::Int32
	{
		NegativeZ = 5,
		PositiveY = 2,
		NegativeX = 1,
		PositiveX = 0,
		PositiveZ = 4,
		NegativeY = 3,
	};
}

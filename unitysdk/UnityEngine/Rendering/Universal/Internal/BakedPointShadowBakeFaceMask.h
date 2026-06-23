#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakedPointShadowBakeFaceMask_TypeDefinitionIndex = 26280;

	enum class BakedPointShadowBakeFaceMask : ::System::Int32
	{
		HorizontalRing = 51,
		PositiveZ = 16,
		NegativeX = 2,
		All = 63,
		NegativeZ = 32,
		PositiveY = 4,
		PositiveX = 1,
		None = 0,
		NegativeY = 8,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakedPointShadowBakeFaceMask_TypeDefinitionIndex = 26802;

	enum class BakedPointShadowBakeFaceMask : ::System::Int32
	{
		PositiveZ = 16,
		NegativeX = 2,
		PositiveY = 4,
		None = 0,
		All = 63,
		PositiveX = 1,
		NegativeY = 8,
		HorizontalRing = 51,
		NegativeZ = 32,
	};
}

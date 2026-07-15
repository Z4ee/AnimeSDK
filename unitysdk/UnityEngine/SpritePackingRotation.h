#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SpritePackingRotation_TypeDefinitionIndex = 4403;

	enum class SpritePackingRotation : ::System::Int32
	{
		None = 0,
		FlipHorizontal = 1,
		FlipVertical = 2,
		Rotate180 = 3,
		Any = 15,
	};
}

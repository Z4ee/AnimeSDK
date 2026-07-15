#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CollisionFlags_TypeDefinitionIndex = 5300;

	enum class CollisionFlags : ::System::Int32
	{
		None = 0,
		Sides = 1,
		Above = 2,
		Below = 4,
		CollidedSides = 1,
		CollidedAbove = 2,
		CollidedBelow = 4,
	};
}

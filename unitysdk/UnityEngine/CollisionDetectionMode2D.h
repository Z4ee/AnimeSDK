#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CollisionDetectionMode2D_TypeDefinitionIndex = 5274;

	enum class CollisionDetectionMode2D : ::System::Int32
	{
		None = 0,
		Discrete = 0,
		Continuous = 1,
	};
}

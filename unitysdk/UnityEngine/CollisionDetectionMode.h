#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CollisionDetectionMode_TypeDefinitionIndex = 5302;

	enum class CollisionDetectionMode : ::System::Int32
	{
		Discrete = 0,
		Continuous = 1,
		ContinuousDynamic = 2,
		ContinuousSpeculative = 3,
	};
}

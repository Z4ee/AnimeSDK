#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshObstacleShape_TypeDefinitionIndex = 27391;

	enum class NavMeshObstacleShape : ::System::Int32
	{
		Capsule = 0,
		Box = 1,
	};
}

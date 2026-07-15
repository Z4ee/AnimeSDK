#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int UpdateFlags_TypeDefinitionIndex = 5669;

	enum class UpdateFlags : ::System::Int32
	{
		ObstacleAvoidance = 1,
		AutoTraverseOffMeshLink = 2,
		AutoBraking = 4,
		AutoRepath = 8,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int ObstacleAvoidanceType_TypeDefinitionIndex = 5649;

	enum class ObstacleAvoidanceType : ::System::Int32
	{
		NoObstacleAvoidance = 0,
		LowQualityObstacleAvoidance = 1,
		MedQualityObstacleAvoidance = 2,
		GoodQualityObstacleAvoidance = 3,
		HighQualityObstacleAvoidance = 4,
	};
}

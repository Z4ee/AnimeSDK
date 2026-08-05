#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DistanceMetric_TypeDefinitionIndex = 6268;

	enum class DistanceMetric : ::System::Int32
	{
		Perspective = 0,
		Orthographic = 1,
		CustomAxis = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DistanceMetric_TypeDefinitionIndex = 4758;

	enum class DistanceMetric : ::System::Int32
	{
		Perspective = 0,
		Orthographic = 1,
		CustomAxis = 2,
	};
}

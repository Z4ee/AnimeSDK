#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SampleDistanceMode_TypeDefinitionIndex = 30154;

	enum class SampleDistanceMode : ::System::Int32
	{
		Reciprocal = 0,
		Linear = 1,
	};
}

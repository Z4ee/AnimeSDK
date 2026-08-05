#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SampleDistanceMode_TypeDefinitionIndex = 27417;

	enum class SampleDistanceMode : ::System::Int32
	{
		Linear = 1,
		Reciprocal = 0,
	};
}

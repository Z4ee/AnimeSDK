#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DepthOfFieldMode_TypeDefinitionIndex = 27552;

	enum class DepthOfFieldMode : ::System::Int32
	{
		Bokeh = 2,
		Gaussian = 1,
		Off = 0,
	};
}

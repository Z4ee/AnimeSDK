#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DepthOfFieldMode_TypeDefinitionIndex = 30115;

	enum class DepthOfFieldMode : ::System::Int32
	{
		Off = 0,
		Gaussian = 1,
		Bokeh = 2,
	};
}

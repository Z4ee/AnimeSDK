#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Gradient; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int WeatherConfigSkyLutGradParams_TypeDefinitionIndex = 5924;

	struct alignas(8) WeatherConfigSkyLutGradParams
	{
		::UnityEngine::Gradient* skyVerticalGradient; // 0x10
		::UnityEngine::Gradient* cloudOnSkyColor; // 0x18
	};
}

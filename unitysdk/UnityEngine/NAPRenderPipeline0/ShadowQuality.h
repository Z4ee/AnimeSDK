#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ShadowQuality_TypeDefinitionIndex = 5880;

	enum class ShadowQuality : ::System::Int32
	{
		Disabled = 0,
		Low = 1,
		SoftShadows = 2,
		SoftShadowsHigh = 3,
		SoftShadowsHigh_PCSS = 4,
	};
}

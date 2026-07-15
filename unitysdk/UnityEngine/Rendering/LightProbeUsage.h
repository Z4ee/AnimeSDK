#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LightProbeUsage_TypeDefinitionIndex = 4708;

	enum class LightProbeUsage : ::System::Int32
	{
		Off = 0,
		BlendProbes = 1,
		UseProxyVolume = 2,
		CustomProvided = 4,
	};
}

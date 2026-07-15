#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionProbeUsage_TypeDefinitionIndex = 4700;

	enum class ReflectionProbeUsage : ::System::Int32
	{
		Off = 0,
		BlendProbes = 1,
		BlendProbesAndSkybox = 2,
		Simple = 3,
	};
}

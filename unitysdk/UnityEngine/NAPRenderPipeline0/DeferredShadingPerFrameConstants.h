#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DeferredShadingPerFrameConstants_TypeDefinitionIndex = 5942;

	struct alignas(4) DeferredShadingPerFrameConstants
	{
		::System::Single PerLightInOutEpsilon; // 0x10
		::System::Single AdditionalLightsDiffuseOnlyDistThreshold; // 0x14
		::System::Boolean AdditionalLightsParticleUsedDiffuseOnly; // 0x18
	};
}

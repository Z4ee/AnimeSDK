#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ParticleLightsCullingOptions_TypeDefinitionIndex = 5701;

	struct alignas(1) ParticleLightsCullingOptions
	{
		::System::Boolean enableParticleLightCountOptimize; // 0x10
		::System::Boolean disableCachedAdditionalLightData; // 0x11
	};
}

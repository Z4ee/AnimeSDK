#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LightLayerEnum_TypeDefinitionIndex = 5851;

	enum class LightLayerEnum : ::System::Int32
	{
		Nothing = 0,
		LightLayerDefault = 1,
		LightLayer1 = 2,
		LightLayer2 = 4,
		LightLayer3 = 8,
		LightLayer4 = 16,
		LightLayer5 = 32,
		LightLayer6 = 64,
		LightLayer7 = 128,
		LightLayer8 = 256,
		LightLayer9 = 512,
		Everything = 1023,
	};
}

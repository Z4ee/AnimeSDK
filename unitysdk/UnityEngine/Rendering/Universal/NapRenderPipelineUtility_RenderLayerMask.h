#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderPipelineUtility_RenderLayerMask_TypeDefinitionIndex = 26895;

	enum class NapRenderPipelineUtility_RenderLayerMask : ::System::Int32
	{
		LayerForStaticLightMap = 1,
		LayerForStencilAlpha = 8,
		LayerForWindAndDetailLayer = 4,
		LayerForDynamicLight = 2,
	};
}

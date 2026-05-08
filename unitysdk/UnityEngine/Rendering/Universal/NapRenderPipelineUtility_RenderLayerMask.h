#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderPipelineUtility_RenderLayerMask_TypeDefinitionIndex = 30100;

	enum class NapRenderPipelineUtility_RenderLayerMask : ::System::Int32
	{
		LayerForStaticLightMap = 1,
		LayerForDynamicLight = 2,
		LayerForWindAndDetailLayer = 4,
		LayerForStencilAlpha = 8,
	};
}

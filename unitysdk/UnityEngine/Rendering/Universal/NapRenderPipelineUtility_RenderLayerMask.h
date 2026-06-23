#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderPipelineUtility_RenderLayerMask_TypeDefinitionIndex = 27069;

	enum class NapRenderPipelineUtility_RenderLayerMask : ::System::Int32
	{
		LayerForWindAndDetailLayer = 4,
		LayerForStaticLightMap = 1,
		LayerForDynamicLight = 2,
		LayerForStencilAlpha = 8,
	};
}

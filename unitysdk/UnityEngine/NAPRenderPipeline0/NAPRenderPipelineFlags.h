#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NAPRenderPipelineFlags_TypeDefinitionIndex = 5703;

	enum class NAPRenderPipelineFlags : ::System::Int32
	{
		DisableHizCulling = 1,
		EnableHizLightCull = 2,
		HasSkybox = 4,
		EnableHizDebug = 8,
		LocalLightEnable = 16,
		LocalLightDrawEnable = 32,
		ReflectionProbeDrawEnable = 64,
		ReflectionProbeEnable = 128,
		UiBlurDepthStencil = 256,
		UiBlurStencilWithoutDepth = 512,
		TestSkipAllCSMUpdate = 1024,
		TestSkipStaticCSMUpdate = 2048,
	};
}

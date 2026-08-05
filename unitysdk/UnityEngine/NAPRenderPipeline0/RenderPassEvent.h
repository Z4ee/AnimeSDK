#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderPassEvent_TypeDefinitionIndex = 5869;

	enum class RenderPassEvent : ::System::Int32
	{
		BeforeRendering = 0,
		BeforeRenderingShadows = 50,
		AfterRenderingShadows = 100,
		BeforeRenderingPrepasses = 150,
		AfterRenderingPrePasses = 200,
		BeforeRenderingOpaques = 250,
		AfterRenderingOpaques = 300,
		BeforeRenderingSkybox = 350,
		AfterRenderingSkybox = 400,
		BeforeRenderingTransparents = 450,
		AfterRenderingTransparents = 500,
		BeforeRenderingPostProcessing = 550,
		AfterRenderingPostProcessing = 600,
		AfterRendering = 1000,
	};
}

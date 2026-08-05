#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderFeatureFlag_TypeDefinitionIndex = 5861;

	enum class RenderFeatureFlag : ::System::Int32
	{
		Skybox = 1,
		OffScreenParticle = 2,
		VolumetricFog = 4,
		VolumetricCloud = 8,
		LightCulling = 16,
		LightShaft = 32,
		Distortion = 64,
		MotionVector = 128,
		OpaquePostProcess = 256,
		LensFlare = 512,
		SeparateDeferredShading = 1024,
		OneLocalLightPerPass = 2048,
		MainLightShadow = 4096,
		CopyOpaquePass = 8192,
		ScreenSpaceReflectionPass = 16384,
		SSGIPass = 32768,
		FxFogForSkyBoxIsOn = 65536,
		CloudDepthOn = 131072,
		LyraGIPass = 262144,
	};
}

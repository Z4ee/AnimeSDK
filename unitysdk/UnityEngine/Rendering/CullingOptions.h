#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullingOptions_TypeDefinitionIndex = 6232;

	enum class CullingOptions : ::System::Int32
	{
		None = 0,
		ForceEvenIfCameraIsNotActive = 1,
		OcclusionCull = 2,
		NeedsLighting = 4,
		NeedsReflectionProbes = 8,
		Stereo = 16,
		DisablePerObjectCulling = 32,
		ShadowCasters = 64,
		NoSceneCullingEvent = 128,
		NoShadowCullingEvent = 256,
		HizLightCull = 512,
		IsNapDrawSetCulling = 1024,
		IsPlanarReflectionCamera = 2048,
	};
}

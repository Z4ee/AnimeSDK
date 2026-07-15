#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullingOptions_TypeDefinitionIndex = 4731;

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
		HizOcclusionCull = 128,
	};
}

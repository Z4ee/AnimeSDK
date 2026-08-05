#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PerObjectData_TypeDefinitionIndex = 6250;

	enum class PerObjectData : ::System::Int32
	{
		None = 0,
		LightProbe = 1,
		ReflectionProbes = 2,
		LightProbeProxyVolume = 4,
		Lightmaps = 8,
		LightData = 16,
		MotionVectors = 32,
		LightIndices = 64,
		ReflectionProbeData = 128,
		OcclusionProbe = 256,
		OcclusionProbeProxyVolume = 512,
		ShadowMask = 1024,
		DynamicShadingRateMsaa = 2048,
		DynamicShadingRateVrs = 4096,
		ForceHighShadingRate = 8192,
		ForceLowShadingRate = 16384,
	};
}

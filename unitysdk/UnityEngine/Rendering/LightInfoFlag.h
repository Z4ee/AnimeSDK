#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LightInfoFlag_TypeDefinitionIndex = 35965;

	enum class LightInfoFlag : ::System::Int32
	{
		kLightDynamic = 1,
		kLightIgnoreTransScale = 2,
		kLightIgnoreCharLighting = 4,
		kLightLegecyFalloff = 8,
		kLightUseDirectionalAtten = 16,
		kLightColorCookie = 32,
		kUseLightBias = 64,
		kIsParticelLight = 128,
		kAOMask = 256,
		kUseVolumeStencil = 512,
		kUseVolumeCull = 1024,
		kNewLocalLight = 2048,
		kMainCharLight = 4096,
		kNotLerpLocalLight = 8192,
		kEnableDistanceFade = 16384,
		kEnableTSC = 32768,
		kTSCState = 65536,
		kLightQualityV2 = 131072,
		kForceCharacterAffect = 262144,
		kLightDebugAlwaysUpdate = 268435456,
	};
}

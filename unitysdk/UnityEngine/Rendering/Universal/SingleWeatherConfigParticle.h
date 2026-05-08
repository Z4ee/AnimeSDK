#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x190CFC10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SingleWeatherConfigParticle_TypeDefinitionIndex = 29806;

	class SingleWeatherConfigParticle : public ::System::Object
	{
	public:
		::System::Single effectBrightness; // 0x10
		::System::Single bloomThresholdScaler; // 0x14
		::System::Single extraBloomMinBrightness; // 0x18
		::System::Single extraBloomMinBrightnessFadeLength; // 0x1C
		::System::Single localLightMultiplyIntensity; // 0x20
		::System::Single localLightThreadHold; // 0x24
		::System::Single localLightMultiplyIntensityForScene; // 0x28
		::System::Single localLightThreadHoldForScene; // 0x2C
		::System::Single localLightMultiplyIntensityForCharter; // 0x30
		::System::Single localLightThreadHoldForCharter; // 0x34
		::System::Single additionalLightIntensity; // 0x38
		::UnityEngine::Color sceneFogColorMultiply; // 0x3C
		::UnityEngine::Color sceneWeatherSandstorm; // 0x4C
		::UnityEngine::Color particleWaterColor; // 0x5C
		::System::Boolean vfxShadowEnableDebugOnly; // 0x6C
		::System::Boolean vfxShadowLightingEnableDebugOnly; // 0x6D
		::System::Single vfxShadowLightingIntensityDebugOnly; // 0x70
		::UnityEngine::Vector4 vfxShadowDefault; // 0x74
		::UnityEngine::Vector4 vfxShadowFire; // 0x84
		::UnityEngine::Vector4 vfxShadowIce; // 0x94
		::UnityEngine::Vector4 vfxShadowYiTai; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGPARTICLE__CTOR_OFFSET))(this);
		}
	};
}

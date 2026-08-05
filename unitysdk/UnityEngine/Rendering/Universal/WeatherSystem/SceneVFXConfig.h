#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENEVFXCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1CF19090)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENEVFXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF195D0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int SceneVFXConfig_TypeDefinitionIndex = 27370;

	class SceneVFXConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::SceneVFXConfig*>
	{
	public:
		::UnityEngine::Color sceneEtherColor; // 0x18
		::UnityEngine::Color sceneEtherWaveColor; // 0x28
		::UnityEngine::Texture2D* sceneEtherWaveTexture; // 0x38
		::System::Single sceneEtherWaveTextureTilling; // 0x40
		::UnityEngine::Color sceneEtherEffectColor; // 0x44
		::System::Single etherEffectDirection; // 0x54
		::System::Single etherEffectSpeed; // 0x58
		::System::Single etherFXWaveAngle; // 0x5C
		::System::Single etherFXWaveSpeed; // 0x60
		::System::Single etherFXWaveSpacing; // 0x64
		::System::Single effectBrightness; // 0x68
		::System::Single bloomThresholdScaler; // 0x6C
		::System::Single extraBloomMinBrightness; // 0x70
		::System::Single extraBloomMinBrightnessFadeLength; // 0x74
		::System::Single localLightMultiplyIntensity; // 0x78
		::System::Single localLightThreadHold; // 0x7C
		::System::Single localLightMultiplyIntensityForScene; // 0x80
		::System::Single localLightThreadHoldForScene; // 0x84
		::System::Single localLightMultiplyIntensityForCharter; // 0x88
		::System::Single localLightThreadHoldForCharter; // 0x8C
		::System::Single additionalLightIntensity; // 0x90
		::UnityEngine::Color sceneFogColorMultiply; // 0x94
		::UnityEngine::Color sceneWeatherSandstorm; // 0xA4
		::UnityEngine::Color particleWaterColor; // 0xB4
		::UnityEngine::Vector4 vfxShadowDefault; // 0xC4
		::UnityEngine::Vector4 vfxShadowFire; // 0xD4
		::UnityEngine::Vector4 vfxShadowIce; // 0xE4
		::UnityEngine::Vector4 vfxShadowYiTai; // 0xF4
		::System::Boolean vfxShadowEnableDebugOnly; // 0x104
		::System::Boolean vfxShadowLightingEnableDebugOnly; // 0x105
		::System::Single vfxShadowLightingIntensityDebugOnly; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENEVFXCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::SceneVFXConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::SceneVFXConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::SceneVFXConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::SceneVFXConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::SceneVFXConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::SceneVFXConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENEVFXCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

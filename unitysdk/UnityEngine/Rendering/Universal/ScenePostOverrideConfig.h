#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCENEPOSTOVERRIDECONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1AF6A1C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCENEPOSTOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6A280)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScenePostOverrideConfig_TypeDefinitionIndex = 26205;

	class ScenePostOverrideConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::ScenePostOverrideConfig*>
	{
	public:
		::System::Single ChannelMixer_redOutRedIn; // 0x18
		::System::Single ChannelMixer_redOutGreenIn; // 0x1C
		::System::Single ChannelMixer_redOutBlueIn; // 0x20
		::System::Single ChannelMixer_greenOutRedIn; // 0x24
		::System::Single ChannelMixer_greenOutGreenIn; // 0x28
		::System::Single ChannelMixer_greenOutBlueIn; // 0x2C
		::System::Single ChannelMixer_blueOutRedIn; // 0x30
		::System::Single ChannelMixer_blueOutGreenIn; // 0x34
		::System::Single ChannelMixer_blueOutBlueIn; // 0x38
		::UnityEngine::Color ColorAdjustments_colorFilter; // 0x3C
		::System::Single ColorAdjustments_contrast; // 0x4C
		::System::Single ColorAdjustments_hueShift; // 0x50
		::System::Single ColorAdjustments_saturation; // 0x54
		::UnityEngine::Color SplitTonings_shadows; // 0x58
		::UnityEngine::Color splitToning_highlights; // 0x68
		::System::Single splitToning_balance; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCENEPOSTOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::ScenePostOverrideConfig* DoLerp(::UnityEngine::Rendering::Universal::ScenePostOverrideConfig* weatherConfig, ::UnityEngine::Rendering::Universal::ScenePostOverrideConfig* CharacterLightingConfig, ::System::Single characterWeight, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::ScenePostOverrideConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScenePostOverrideConfig*, ::UnityEngine::Rendering::Universal::ScenePostOverrideConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCENEPOSTOVERRIDECONFIG_DOLERP_OFFSET))(this, weatherConfig, CharacterLightingConfig, characterWeight, dayNight);
		}
	};
}

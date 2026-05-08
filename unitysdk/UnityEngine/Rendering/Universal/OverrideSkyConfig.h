#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDESKYCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1A6A9100)
#define UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDESKYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A91C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OverrideSkyConfig_TypeDefinitionIndex = 29982;

	class OverrideSkyConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::OverrideSkyConfig*>
	{
	public:
		::UnityEngine::Color SkyBtnColor; // 0x18
		::UnityEngine::Color SkyTopColor; // 0x28
		::UnityEngine::Color LowCloudLightColor; // 0x38
		::UnityEngine::Color LowCloudDarkColor; // 0x48
		::UnityEngine::Color LowCloudPhaseColor; // 0x58
		::System::Single cloudPhaseG; // 0x68
		::System::Single cloudScatteringIntensity; // 0x6C
		::UnityEngine::Color HighCloudDarkColor; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDESKYCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::OverrideSkyConfig* DoLerp(::UnityEngine::Rendering::Universal::OverrideSkyConfig* weatherConfig, ::UnityEngine::Rendering::Universal::OverrideSkyConfig* CharacterLightingConfig, ::System::Single characterWeight, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::OverrideSkyConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::OverrideSkyConfig*, ::UnityEngine::Rendering::Universal::OverrideSkyConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDESKYCONFIG_DOLERP_OFFSET))(this, weatherConfig, CharacterLightingConfig, characterWeight, dayNight);
		}
	};
}

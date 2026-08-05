#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDEEXPOSURECONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1CB1B5C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDEEXPOSURECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB1B680)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OverrideExposureConfig_TypeDefinitionIndex = 27197;

	class OverrideExposureConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::OverrideExposureConfig*>
	{
	public:
		::System::Single CharacterExposureIntensity; // 0x18
		::System::Single PCExposureCompensation; // 0x1C
		::System::Single MobileExposureCompensation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDEEXPOSURECONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::OverrideExposureConfig* DoLerp(::UnityEngine::Rendering::Universal::OverrideExposureConfig* from, ::UnityEngine::Rendering::Universal::OverrideExposureConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::OverrideExposureConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::OverrideExposureConfig*, ::UnityEngine::Rendering::Universal::OverrideExposureConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDEEXPOSURECONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

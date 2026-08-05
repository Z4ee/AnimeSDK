#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_AUTOEXPOSURECONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1CCA74B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_AUTOEXPOSURECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA7740)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int AutoExposureConfig_TypeDefinitionIndex = 27621;

	class AutoExposureConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::AutoExposureConfig*>
	{
	public:
		::System::Single CharacterAutoExposureIntensity; // 0x18
		::UnityEngine::Vector2 AutoExposureFiltering; // 0x1C
		::UnityEngine::Vector2 AutoExposureLuminanceRange; // 0x24
		::System::Single AutoExposureCompensation; // 0x2C
		::System::Boolean AutoExposureProgressiveEyeAdaptation; // 0x30
		::System::Single AutoExposureSpeedUp; // 0x34
		::System::Single AutoExposureSpeedDown; // 0x38
		::System::Single FallbackConstantExposureCompensation; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_AUTOEXPOSURECONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::AutoExposureConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::AutoExposureConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::AutoExposureConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::AutoExposureConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::AutoExposureConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::AutoExposureConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_AUTOEXPOSURECONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

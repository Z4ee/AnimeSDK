#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_Quality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LIGHTSHAFTCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1C41E9F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LIGHTSHAFTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C41EC40)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int LightShaftConfig_TypeDefinitionIndex = 26427;

	class LightShaftConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::LightShaftConfig*>
	{
	public:
		::System::Boolean lightShaft; // 0x18
		::System::Single lightShaftThreshold; // 0x1C
		::System::Single lightShaftIntensity; // 0x20
		::UnityEngine::Color lightShaftColor; // 0x24
		::System::Single lightShaftLength; // 0x34
		::System::Single lightShaftFadeLength; // 0x38
		::System::Boolean lightShaftBlur; // 0x3C
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_Quality lightShaftRTQuality; // 0x40
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_Quality lightShaftSampleQuality; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LIGHTSHAFTCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::LightShaftConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::LightShaftConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::LightShaftConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::LightShaftConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::LightShaftConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::LightShaftConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LIGHTSHAFTCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

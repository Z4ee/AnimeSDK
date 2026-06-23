#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WINDCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1E59F7E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WINDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E59F9B0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int WindConfig_TypeDefinitionIndex = 26316;

	class WindConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::WindConfig*>
	{
	public:
		::System::Single WindDir; // 0x18
		::System::Single MainWindIntensity; // 0x1C
		::System::Single ExtraWindIntensity; // 0x20
		::System::Single ShakeFrequence; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WINDCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::WindConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::WindConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::WindConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::WindConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::WindConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::WindConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WINDCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

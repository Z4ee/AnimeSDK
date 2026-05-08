#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENELUTCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0xF804990)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENELUTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF804C50)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int SceneLUTConfig_TypeDefinitionIndex = 30314;

	class SceneLUTConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::SceneLUTConfig*>
	{
	public:
		::System::Boolean useCustomLookupTable; // 0x18
		::UnityEngine::Texture* lookupTable; // 0x20
		::System::Single lutContribution; // 0x28
		::System::Single postExposure; // 0x2C
		::System::Boolean useLogLookupTable; // 0x30
		::UnityEngine::Texture* LogLutTex; // 0x38
		::System::Single loglutContribution; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENELUTCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::SceneLUTConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::SceneLUTConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::SceneLUTConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::SceneLUTConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::SceneLUTConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::SceneLUTConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENELUTCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

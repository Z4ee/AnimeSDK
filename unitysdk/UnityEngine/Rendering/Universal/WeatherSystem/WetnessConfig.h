#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WETNESSCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1AF6ABC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WETNESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6AE50)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int WetnessConfig_TypeDefinitionIndex = 27087;

	class WetnessConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::WetnessConfig*>
	{
	public:
		::System::Single wetness; // 0x18
		::UnityEngine::Texture* wetnessNoise; // 0x20
		::System::Single wetnessNoiseTilling; // 0x28
		::UnityEngine::Vector2 wetnessNoiseClampRange; // 0x2C
		::System::Boolean wetnessNoiseForHeight; // 0x34
		::UnityEngine::Vector2 porosity; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WETNESSCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::WetnessConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::WetnessConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::WetnessConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::WetnessConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::WetnessConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::WetnessConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WETNESSCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

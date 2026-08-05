#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

namespace UnityEngine { class AnimationCurve; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LIGHTNINGCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1C5EC360)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LIGHTNINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5EC530)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int LightningConfig_TypeDefinitionIndex = 27352;

	class LightningConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::LightningConfig*>
	{
	public:
		::System::Boolean useAnimation; // 0x18
		::System::Single animationLifeTime; // 0x1C
		::UnityEngine::AnimationCurve* mainLightIntensityCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LIGHTNINGCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::LightningConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::LightningConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::LightningConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::LightningConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::LightningConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::LightningConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LIGHTNINGCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

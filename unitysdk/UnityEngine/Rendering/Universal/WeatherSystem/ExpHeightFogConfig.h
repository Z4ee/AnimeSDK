#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_EXPHEIGHTFOGCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x19F39120)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_EXPHEIGHTFOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19F39370)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int ExpHeightFogConfig_TypeDefinitionIndex = 30296;

	class ExpHeightFogConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::ExpHeightFogConfig*>
	{
	public:
		::UnityEngine::Color fogRayColor; // 0x18
		::UnityEngine::Color fogMieColor; // 0x28
		::System::Single fogMieG; // 0x38
		::UnityEngine::Color fogExtinctColor; // 0x3C
		::System::Single fogDensity; // 0x4C
		::System::Single fogScattering; // 0x50
		::UnityEngine::Vector2 fogHeightRange; // 0x54
		::System::Single fogStartDistance; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_EXPHEIGHTFOGCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::ExpHeightFogConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::ExpHeightFogConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::ExpHeightFogConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::ExpHeightFogConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::ExpHeightFogConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::ExpHeightFogConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_EXPHEIGHTFOGCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

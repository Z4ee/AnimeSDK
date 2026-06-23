#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SECONDFOGCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1B824B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SECONDFOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B824E00)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int SecondFogConfig_TypeDefinitionIndex = 26769;

	class SecondFogConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::SecondFogConfig*>
	{
	public:
		::System::Boolean enableSecondFog; // 0x18
		::System::Boolean synFogColor; // 0x19
		::UnityEngine::Color fogColorA; // 0x1C
		::System::Single fogDensityA; // 0x2C
		::System::Single fogScatteringA; // 0x30
		::UnityEngine::Color fogColorB; // 0x34
		::System::Single fogDensityB; // 0x44
		::System::Single fogScatteringB; // 0x48
		::System::Single fogFadeHeight; // 0x4C
		::System::Single fogFadeRange; // 0x50
		::UnityEngine::Vector2 fogHeightRange; // 0x54
		::UnityEngine::Vector3 fogDistanceRange; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SECONDFOGCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::SecondFogConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::SecondFogConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::SecondFogConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::SecondFogConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::SecondFogConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::SecondFogConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SECONDFOGCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

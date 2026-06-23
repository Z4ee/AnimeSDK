#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LazyLoadReference_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYSTARCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1BC3A640)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYSTARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3A960)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int SkyStarConfig_TypeDefinitionIndex = 27094;

	class SkyStarConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::SkyStarConfig*>
	{
	public:
		::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> starMapOnSky; // 0x18
		::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> starMaskOnSky; // 0x1C
		::System::Single starsTwinklingRate; // 0x20
		::System::Single StarsIntensity; // 0x24
		::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> galaxyOnSky; // 0x28
		::UnityEngine::Vector3 galaxyDir; // 0x2C
		::UnityEngine::Vector3 galaxyAngleSpeed; // 0x38
		::System::Single GalaxyIntensity; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYSTARCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::SkyStarConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::SkyStarConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyStarConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::SkyStarConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyStarConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyStarConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYSTARCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

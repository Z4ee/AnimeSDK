#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LazyLoadReference_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1E674C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E674F40)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int SkyConfig_TypeDefinitionIndex = 27113;

	class SkyConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::SkyConfig*>
	{
	public:
		::UnityEngine::Gradient* skyVerticalGradient; // 0x18
		::UnityEngine::Vector3 sunDir; // 0x20
		::UnityEngine::Color sunDiskColor; // 0x2C
		::System::Single SunDiskSize; // 0x3C
		::System::Single SunDiskIntensity; // 0x40
		::UnityEngine::Vector3 moonDir; // 0x44
		::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> moonOnSky; // 0x50
		::UnityEngine::Color MoonColor; // 0x54
		::System::Single moonSize; // 0x64
		::UnityEngine::Color MoonGlowColor; // 0x68
		::System::Single customMoonPhase; // 0x78
		::System::Single moonPhaseAlphaBlend; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::SkyConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::SkyConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::SkyConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::SkyConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SKYCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

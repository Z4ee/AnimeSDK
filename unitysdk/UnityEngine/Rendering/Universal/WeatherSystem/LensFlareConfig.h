#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

namespace UnityEngine::Rendering { class LensFlareDataSRP; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LENSFLARECONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1A3102A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LENSFLARECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A310450)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int LensFlareConfig_TypeDefinitionIndex = 30290;

	class LensFlareConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::LensFlareConfig*>
	{
	public:
		::UnityEngine::Rendering::LensFlareDataSRP* lensFlareDataSrp; // 0x18
		::System::Single intensity; // 0x20
		::System::Single scale; // 0x24
		::System::Single OcclusionRadius; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LENSFLARECONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::LensFlareConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::LensFlareConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::LensFlareConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::LensFlareConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::LensFlareConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::LensFlareConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LENSFLARECONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

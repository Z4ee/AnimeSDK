#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_FOGMASKCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x19AD4450)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_FOGMASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD4920)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int FogMaskConfig_TypeDefinitionIndex = 30298;

	class FogMaskConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::FogMaskConfig*>
	{
	public:
		::System::Boolean enableFogMask; // 0x18
		::UnityEngine::Color fogMaskScattering; // 0x1C
		::System::Single fogMaskTransmittance; // 0x2C
		::System::Single fogMaskIntensity; // 0x30
		::System::Single fogMaskFade; // 0x34
		::System::Single fogMaskRange; // 0x38
		::UnityEngine::Vector3 fogMaskCenter; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_FOGMASKCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::FogMaskConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::FogMaskConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::FogMaskConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::FogMaskConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::FogMaskConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::FogMaskConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_FOGMASKCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

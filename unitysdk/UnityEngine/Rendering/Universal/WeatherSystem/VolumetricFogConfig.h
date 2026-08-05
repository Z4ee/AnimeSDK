#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_VOLUMETRICFOGCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1E7A4790)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_VOLUMETRICFOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A4A00)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int VolumetricFogConfig_TypeDefinitionIndex = 27745;

	class VolumetricFogConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricFogConfig*>
	{
	public:
		::System::Boolean enableVolumetricFog; // 0x18
		::System::Single volumetricFogSize; // 0x1C
		::System::Single volumetricFog_Jittering; // 0x20
		::System::Single volumetricFog_Dithering; // 0x24
		::System::Single volumetricFog_IntensityTowardLight; // 0x28
		::System::Single volumetricFog_DustIntensity; // 0x2C
		::System::Single volumetricFog_MaxIntensity; // 0x30
		::System::Single volumetricFog_Step; // 0x34
		::UnityEngine::Color volumetricFog_Color; // 0x38
		::System::Single volumetricFog_PunctualLightMultiplier; // 0x48
		::System::Single volumetricFog_PunctualLightFadePower; // 0x4C
		::System::Single volumetricFog_ExtraBlurValue; // 0x50
		::System::Boolean VolumetricFogBlitBeforeEffect; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_VOLUMETRICFOGCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricFogConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricFogConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricFogConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricFogConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricFogConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricFogConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_VOLUMETRICFOGCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

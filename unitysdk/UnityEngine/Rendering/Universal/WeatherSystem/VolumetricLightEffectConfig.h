#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_VOLUMETRICLIGHTEFFECTCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x196B8570)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_VOLUMETRICLIGHTEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196B86C0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int VolumetricLightEffectConfig_TypeDefinitionIndex = 30300;

	class VolumetricLightEffectConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricLightEffectConfig*>
	{
	public:
		::System::Boolean hasLightFogProxy; // 0x18
		::System::Single lightFogMaxDensity; // 0x1C
		::System::Single lightFogSoftParticleStartFadeDistance; // 0x20
		::System::Single lightFogSoftParticleFadeFactor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_VOLUMETRICLIGHTEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricLightEffectConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricLightEffectConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricLightEffectConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricLightEffectConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricLightEffectConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricLightEffectConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_VOLUMETRICLIGHTEFFECTCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

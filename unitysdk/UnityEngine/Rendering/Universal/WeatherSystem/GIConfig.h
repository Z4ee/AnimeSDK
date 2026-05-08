#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_GICONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x19F39580)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_GICONFIG_GETKODAMAGIPARAMS_OFFSET UNITYSDK_OFFSET(0x19F39400)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_GICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19F397F0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int GIConfig_TypeDefinitionIndex = 30292;

	class GIConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::GIConfig*>
	{
	public:
		::System::Single skyIntensity; // 0x18
		::UnityEngine::Color skyColor; // 0x1C
		::UnityEngine::Color middleColor; // 0x2C
		::UnityEngine::Color groundColor; // 0x3C
		::System::Single dynamicObjectGIIntensity; // 0x4C
		::System::Single emissionHueIntensity; // 0x50
		::System::Single cloudShadowIntensityForGI; // 0x54
		::System::Single secondaryBounceIntensity; // 0x58
		::System::Single skyIndirectIntensity; // 0x5C
		::System::Single sceneInteriorFakeBrightness; // 0x60
		::System::Single mainLightKodamaGIIndirectMultiplier; // 0x64
		::System::Single mainLightLyraGIIndirectMultiplier; // 0x68
		::System::Single lyraSkyPassThrough; // 0x6C
		::System::Single GIIntensity; // 0x70
		::System::Single IBLIntensity; // 0x74
		::UnityEngine::Color GIColorOffset; // 0x78
		::UnityEngine::Color GISpecularColorOffset; // 0x88
		::System::Single EmissionIntensity; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_GICONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetKodamaGIParams()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_GICONFIG_GETKODAMAGIPARAMS_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::GIConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::GIConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::GIConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::GIConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::GIConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::GIConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_GICONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

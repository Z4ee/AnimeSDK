#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_GICONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1D314CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_GICONFIG_GETKODAMAGIPARAMS_OFFSET UNITYSDK_OFFSET(0x1D314B60)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_GICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3150B0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int GIConfig_TypeDefinitionIndex = 27333;

	class GIConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::GIConfig*>
	{
	public:
		::System::Single skyIntensity; // 0x18
		::UnityEngine::Color skyColor; // 0x1C
		::UnityEngine::Color middleColor; // 0x2C
		::UnityEngine::Color groundColor; // 0x3C
		::System::Boolean useRTXGICustomSkySH; // 0x4C
		::System::Single rtxSkyIntensity; // 0x50
		::UnityEngine::Color rtxSkyColor; // 0x54
		::UnityEngine::Color rtxMiddleColor; // 0x64
		::UnityEngine::Color rtxGroundColor; // 0x74
		::System::Single dynamicObjectGIIntensity; // 0x84
		::System::Single emissionHueIntensity; // 0x88
		::System::Single cloudShadowIntensityForGI; // 0x8C
		::System::Single secondaryBounceIntensity; // 0x90
		::System::Single skyIndirectIntensity; // 0x94
		::System::Single sceneInteriorFakeBrightness; // 0x98
		::System::Single mainLightKodamaGIIndirectMultiplier; // 0x9C
		::System::Single mainLightLyraGIIndirectMultiplier; // 0xA0
		::System::Single lyraSkyPassThrough; // 0xA4
		::System::Single GIIntensity; // 0xA8
		::System::Single IBLIntensity; // 0xAC
		::UnityEngine::Color GIColorOffset; // 0xB0
		::UnityEngine::Color GISpecularColorOffset; // 0xC0
		::System::Single EmissionIntensity; // 0xD0

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

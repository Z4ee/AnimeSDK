#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/DetailLayerConfig_DetailBlendModeType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_DETAILLAYERCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1D60E8A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_DETAILLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D60EB90)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int DetailLayerConfig_TypeDefinitionIndex = 27125;

	class DetailLayerConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::DetailLayerConfig*>
	{
	public:
		::UnityEngine::Texture2D* DetailMask; // 0x18
		::UnityEngine::Texture2D* DetailAlbedoMap; // 0x20
		::UnityEngine::Texture2D* DetailMREMap; // 0x28
		::UnityEngine::Texture2D* DetailNormalMap; // 0x30
		::System::Single DetailIntensity; // 0x38
		::System::Single DetailMapSize; // 0x3C
		::System::Single DetailNormalScale; // 0x40
		::UnityEngine::Rendering::Universal::WeatherSystem::DetailLayerConfig_DetailBlendModeType DetailBlendMode; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_DETAILLAYERCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::DetailLayerConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::DetailLayerConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::DetailLayerConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::DetailLayerConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::DetailLayerConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::DetailLayerConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_DETAILLAYERCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

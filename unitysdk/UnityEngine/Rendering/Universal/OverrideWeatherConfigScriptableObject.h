#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class WeatherConfig;
namespace UnityEngine::Rendering::Universal { class OverrideCharacterLightingConfig; }
namespace UnityEngine::Rendering::Universal { class OverrideCharacterRampConfig; }
namespace UnityEngine::Rendering::Universal { class OverrideExposureConfig; }
namespace UnityEngine::Rendering::Universal { class OverrideSkyConfig; }
namespace UnityEngine::Rendering::Universal { class OverrideWaterConfig; }
namespace UnityEngine::Rendering::Universal { class ScenePostOverrideConfig; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class ExpHeightFogConfig; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class GIConfig; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class MainLightConfig; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class VolumetricFogConfig; }

#define UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDEWEATHERCONFIGSCRIPTABLEOBJECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1DDFD270)
#define UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDEWEATHERCONFIGSCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFEDB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OverrideWeatherConfigScriptableObject_TypeDefinitionIndex = 26852;

	class OverrideWeatherConfigScriptableObject : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Rendering::Universal::WeatherSystem::MainLightConfig* MainLightConfig; // 0x18
		::UnityEngine::Rendering::Universal::WeatherSystem::GIConfig* GIConfig; // 0x20
		::UnityEngine::Rendering::Universal::WeatherSystem::ExpHeightFogConfig* ExpHeightFogConfig; // 0x28
		::UnityEngine::Rendering::Universal::WeatherSystem::VolumetricFogConfig* VolumetricFogConfig; // 0x30
		::UnityEngine::Rendering::Universal::OverrideSkyConfig* SkyConfig; // 0x38
		::UnityEngine::Rendering::Universal::OverrideWaterConfig* WaterConfig; // 0x40
		::UnityEngine::Rendering::Universal::ScenePostOverrideConfig* scenePostConfig; // 0x48
		::UnityEngine::Rendering::Universal::OverrideExposureConfig* ExposureConfig; // 0x50
		::UnityEngine::Rendering::Universal::OverrideCharacterLightingConfig* CharacterLightingConfig; // 0x58
		::UnityEngine::Rendering::Universal::OverrideCharacterRampConfig* CharacterRampConfig; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDEWEATHERCONFIGSCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::WeatherConfig*& weatherConfig, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDEWEATHERCONFIGSCRIPTABLEOBJECT_APPLY_OFFSET))(this, weatherConfig, weight);
		}
	};
}

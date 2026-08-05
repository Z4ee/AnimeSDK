#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDEWATERCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1D6F5270)
#define UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDEWATERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F5330)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OverrideWaterConfig_TypeDefinitionIndex = 27956;

	class OverrideWaterConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::OverrideWaterConfig*>
	{
	public:
		::UnityEngine::Color ShallowWaterColor; // 0x18
		::UnityEngine::Color DeepWaterColor; // 0x28
		::System::Single WaterDensityForColor; // 0x38
		::System::Single WaterDensityForRefraction; // 0x3C
		::UnityEngine::Color ScatteringColor; // 0x40
		::System::Single IndirectScatteringIntensity; // 0x50
		::System::Single ScatteringPow; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDEWATERCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::OverrideWaterConfig* DoLerp(::UnityEngine::Rendering::Universal::OverrideWaterConfig* weatherConfig, ::UnityEngine::Rendering::Universal::OverrideWaterConfig* CharacterLightingConfig, ::System::Single characterWeight, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::OverrideWaterConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::OverrideWaterConfig*, ::UnityEngine::Rendering::Universal::OverrideWaterConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OVERRIDEWATERCONFIG_DOLERP_OFFSET))(this, weatherConfig, CharacterLightingConfig, characterWeight, dayNight);
		}
	};
}

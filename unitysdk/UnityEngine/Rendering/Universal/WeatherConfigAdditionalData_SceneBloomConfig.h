#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_SCENEBLOOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C41E9D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigAdditionalData_SceneBloomConfig_TypeDefinitionIndex = 26830;

	class WeatherConfigAdditionalData_SceneBloomConfig : public ::System::Object
	{
	public:
		::System::Boolean enableBloom; // 0x10
		::System::Single bloomThreshold; // 0x14
		::System::Single bloomMaxThreshold; // 0x18
		::System::Single bloomIntensity; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_SCENEBLOOMCONFIG__CTOR_OFFSET))(this);
		}
	};
}

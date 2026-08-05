#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_LYRAGICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE187A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigAdditionalData_LyraGIConfig_TypeDefinitionIndex = 27786;

	class WeatherConfigAdditionalData_LyraGIConfig : public ::System::Object
	{
	public:
		::System::Single mainLightLyraGIIndirectMultiplier; // 0x10
		::System::Single lyraSkyPassThrough; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_LYRAGICONFIG__CTOR_OFFSET))(this);
		}
	};
}

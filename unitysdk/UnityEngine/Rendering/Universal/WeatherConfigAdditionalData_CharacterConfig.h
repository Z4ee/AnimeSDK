#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_CHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6AB20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigAdditionalData_CharacterConfig_TypeDefinitionIndex = 26832;

	class WeatherConfigAdditionalData_CharacterConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_CHARACTERCONFIG__CTOR_OFFSET))(this);
		}
	};
}

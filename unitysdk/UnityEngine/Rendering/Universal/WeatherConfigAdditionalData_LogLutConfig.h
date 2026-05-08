#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_LOGLUTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA5460)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigAdditionalData_LogLutConfig_TypeDefinitionIndex = 29955;

	class WeatherConfigAdditionalData_LogLutConfig : public ::System::Object
	{
	public:
		::System::Boolean UseLogLookupTable; // 0x10
		::UnityEngine::Texture* LogLutTex; // 0x18
		::System::Single LogLutContribution; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_LOGLUTCONFIG__CTOR_OFFSET))(this);
		}
	};
}

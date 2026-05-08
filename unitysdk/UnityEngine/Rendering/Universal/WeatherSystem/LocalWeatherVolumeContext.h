#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F39890)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int LocalWeatherVolumeContext_TypeDefinitionIndex = 30281;

	class LocalWeatherVolumeContext : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* m_WeatherConfig; // 0x10
		::System::Int32 m_Priority; // 0x18
		::System::Boolean m_IsValid; // 0x1C
		::System::Single m_Weight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}

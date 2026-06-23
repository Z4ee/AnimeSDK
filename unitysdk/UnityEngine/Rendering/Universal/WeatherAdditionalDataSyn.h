#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigAdditionalDataSO; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERADDITIONALDATASYN_DOSYNWEATHERADDITIONALDATA_OFFSET UNITYSDK_OFFSET(0x1E59F200)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERADDITIONALDATASYN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E59F130)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERADDITIONALDATASYN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E59F470)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherAdditionalDataSyn_TypeDefinitionIndex = 26792;

	class WeatherAdditionalDataSyn : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalDataSO* WeatherConfigAdditionalData; // 0x18
		::UnityEngine::Rendering::Universal::VisualEnvironmentE* m_environmentE; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERADDITIONALDATASYN__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERADDITIONALDATASYN_ONENABLE_OFFSET))(this);
		}

		::System::Void DoSynWeatherAdditionalData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERADDITIONALDATASYN_DOSYNWEATHERADDITIONALDATA_OFFSET))(this);
		}
	};
}

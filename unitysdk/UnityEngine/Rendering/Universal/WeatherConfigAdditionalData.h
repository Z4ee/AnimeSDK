#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class WeatherConfig;
namespace UnityEngine::Rendering::Universal { class FogMaskConfig; }
namespace UnityEngine::Rendering::Universal { class RTXGIConfig; }
namespace UnityEngine::Rendering::Universal { class RTXGIRoughnessConfig; }
namespace UnityEngine::Rendering::Universal { class SecondFogConfig; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigAdditionalDataSO; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigAdditionalData_AutoExposureConfig; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigAdditionalData_CharacterConfig; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigAdditionalData_HotTwistConfig; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigAdditionalData_LogLutConfig; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigAdditionalData_LyraGIConfig; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigAdditionalData_SceneBloomConfig; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigAdditionalData_SpecularTonemappingConfig; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_SYNWEATHERADDITIONALDATA_OFFSET UNITYSDK_OFFSET(0x196B6EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x196B7180)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigAdditionalData_TypeDefinitionIndex = 29953;

	class WeatherConfigAdditionalData : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::SecondFogConfig* secondFogConfig; // 0x10
		::UnityEngine::Rendering::Universal::FogMaskConfig* fogMaskConfig; // 0x18
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData_AutoExposureConfig* autoExposureConfig; // 0x20
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData_LogLutConfig* logLutConfig; // 0x28
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData_HotTwistConfig* hotTwistConfig; // 0x30
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData_LyraGIConfig* lyraGIConfig; // 0x38
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData_CharacterConfig* characterConfig; // 0x40
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData_SceneBloomConfig* sceneBloomConfig; // 0x48
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData_SpecularTonemappingConfig* specularTonemappingConfig; // 0x50
		::UnityEngine::Rendering::Universal::RTXGIConfig* rtxGIConfig; // 0x58
		::UnityEngine::Rendering::Universal::RTXGIRoughnessConfig* rtxGIRoughnessConfig; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void SynWeatherAdditionalData(::UnityEngine::Rendering::Universal::WeatherConfigAdditionalDataSO* so, ::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* additionalData, ::WeatherConfig*& weatherConfig)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::WeatherConfigAdditionalDataSO*, ::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData*, ::WeatherConfig*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_SYNWEATHERADDITIONALDATA_OFFSET))(so, additionalData, weatherConfig);
		}
	};
}

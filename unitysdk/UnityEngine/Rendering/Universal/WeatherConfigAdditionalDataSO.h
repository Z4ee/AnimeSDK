#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigAdditionalData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATASO_BINDTEMPWEATHERLIST_OFFSET UNITYSDK_OFFSET(0x1E265F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATASO_GETCURRENTWEATHERADDITIONALDATA_OFFSET UNITYSDK_OFFSET(0x1E266780)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATASO_SYNWEATHERADDITIONALDATA_OFFSET UNITYSDK_OFFSET(0x1E266810)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATASO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E266A60)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigAdditionalDataSO_TypeDefinitionIndex = 26949;

	class WeatherConfigAdditionalDataSO : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather1; // 0x18
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather2; // 0x20
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather3; // 0x28
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather4; // 0x30
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather5; // 0x38
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather6; // 0x40
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather7; // 0x48
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather8; // 0x50
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather9; // 0x58
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather10; // 0x60
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather11; // 0x68
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather12; // 0x70
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather13; // 0x78
		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* weather14; // 0x80
		::Il2CppArray<::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData*>* tempWeatherList; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATASO__CTOR_OFFSET))(this);
		}

		::System::Void BindTempWeatherList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATASO_BINDTEMPWEATHERLIST_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData* GetCurrentWeatherAdditionalData(::System::Int32 weatherIndex)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherConfigAdditionalData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATASO_GETCURRENTWEATHERADDITIONALDATA_OFFSET))(this, weatherIndex);
		}

		::System::Void SynWeatherAdditionalData(::UnityEngine::Rendering::Universal::VisualEnvironmentE*& env)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATASO_SYNWEATHERADDITIONALDATA_OFFSET))(this, env);
		}
	};
}

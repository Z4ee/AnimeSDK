#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_AUTOEXPOSURECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FE500)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigAdditionalData_AutoExposureConfig_TypeDefinitionIndex = 27790;

	class WeatherConfigAdditionalData_AutoExposureConfig : public ::System::Object
	{
	public:
		::System::Boolean EnableAutoExposure; // 0x10
		::System::Single CharacterAutoExposureIntensity; // 0x14
		::UnityEngine::Vector2 AutoExposureFiltering; // 0x18
		::UnityEngine::Vector2 AutoExposureLuminanceRange; // 0x20
		::System::Single AutoExposureCompensation; // 0x28
		::System::Boolean AutoExposureProgressiveEyeAdaptation; // 0x2C
		::System::Single AutoExposureSpeedUp; // 0x30
		::System::Single AutoExposureSpeedDown; // 0x34
		::System::Single FallbackConstantExposureCompensation; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_AUTOEXPOSURECONFIG__CTOR_OFFSET))(this);
		}
	};
}

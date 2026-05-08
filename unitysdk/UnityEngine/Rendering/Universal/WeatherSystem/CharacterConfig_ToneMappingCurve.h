#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_CHARACTERCONFIG_TONEMAPPINGCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA99B0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int CharacterConfig_ToneMappingCurve_TypeDefinitionIndex = 30320;

	class CharacterConfig_ToneMappingCurve : public ::System::Object
	{
	public:
		::System::Single toeStrength; // 0x10
		::System::Single toeLength; // 0x14
		::System::Single shoulderStrength; // 0x18
		::System::Single shoulderLength; // 0x1C
		::System::Single shoulderAngle; // 0x20
		::System::Single customGamma; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_CHARACTERCONFIG_TONEMAPPINGCURVE__CTOR_OFFSET))(this);
		}
	};
}

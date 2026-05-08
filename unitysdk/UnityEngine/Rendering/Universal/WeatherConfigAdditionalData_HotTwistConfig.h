#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_HOTTWISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA5420)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigAdditionalData_HotTwistConfig_TypeDefinitionIndex = 29956;

	class WeatherConfigAdditionalData_HotTwistConfig : public ::System::Object
	{
	public:
		::System::Boolean enableHotTwist; // 0x10
		::System::Single hotTwistStrength; // 0x14
		::System::Single hotTwistNoiseScale; // 0x18
		::UnityEngine::Vector2 hotTwistSpeed; // 0x1C
		::UnityEngine::Vector2 hotTwistRepeatX; // 0x24
		::UnityEngine::Vector2 hotTwistRepeatZ; // 0x2C
		::System::Single hotTwistDepthDistance; // 0x34
		::System::Single hotTwistDepthFade; // 0x38
		::System::Boolean hotTwistHeightMaskDebugView; // 0x3C
		::System::Single hotTwistHeightMaskStrength; // 0x40
		::System::Single hotTwistHeightMaskOffset; // 0x44
		::System::Single hotTwistHeightMaskPower; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_HOTTWISTCONFIG__CTOR_OFFSET))(this);
		}
	};
}

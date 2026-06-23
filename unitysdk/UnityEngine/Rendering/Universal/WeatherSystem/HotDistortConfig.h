#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherPropertiesBase_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_HOTDISTORTCONFIG_DOLERP_OFFSET UNITYSDK_OFFSET(0x1BDDD590)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_HOTDISTORTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDDD880)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int HotDistortConfig_TypeDefinitionIndex = 27203;

	class HotDistortConfig : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherPropertiesBase_1<::UnityEngine::Rendering::Universal::WeatherSystem::HotDistortConfig*>
	{
	public:
		::System::Single hotTwistStrength; // 0x18
		::System::Single hotTwistNoiseScale; // 0x1C
		::UnityEngine::Vector2 hotTwistSpeed; // 0x20
		::UnityEngine::Vector2 hotTwistRepeatX; // 0x28
		::UnityEngine::Vector2 hotTwistRepeatZ; // 0x30
		::System::Single hotTwistDepthDistance; // 0x38
		::System::Single hotTwistDepthFade; // 0x3C
		::System::Boolean hotTwistHeightMaskDebugView; // 0x40
		::System::Single hotTwistHeightMaskStrength; // 0x44
		::System::Single hotTwistHeightMaskOffset; // 0x48
		::System::Single hotTwistHeightMaskPower; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_HOTDISTORTCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::WeatherSystem::HotDistortConfig* DoLerp(::UnityEngine::Rendering::Universal::WeatherSystem::HotDistortConfig* from, ::UnityEngine::Rendering::Universal::WeatherSystem::HotDistortConfig* to, ::System::Single t, ::System::Single dayNight)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherSystem::HotDistortConfig*(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::HotDistortConfig*, ::UnityEngine::Rendering::Universal::WeatherSystem::HotDistortConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_HOTDISTORTCONFIG_DOLERP_OFFSET))(this, from, to, t, dayNight);
		}
	};
}

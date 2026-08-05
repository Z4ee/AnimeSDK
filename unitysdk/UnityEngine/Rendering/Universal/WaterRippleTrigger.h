#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_GETCUSTOMRIPPLEDATA_OFFSET UNITYSDK_OFFSET(0x1F829D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F829D10)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F829C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F82A000)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterRippleTrigger_TypeDefinitionIndex = 27048;

	class WaterRippleTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single triggerTime; // 0x18
		::System::Single timeOffset; // 0x1C
		::System::Boolean isLoop; // 0x20
		::System::Boolean useSingleControl; // 0x21
		::System::Single lifeTime; // 0x24
		::System::Single rippleAmplitude; // 0x28
		::System::Single rippleFrequency; // 0x2C
		::System::Single rippleSize; // 0x30
		::System::UInt32 rippleRingCount; // 0x34
		::System::Single secondRippleOffset; // 0x38
		::System::Single rippleSpeed; // 0x3C
		::System::Single rippleDistortionStrength; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_ONDISABLE_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetCustomRippleData(::System::Single globalTimer, ::System::Single globalLifeTime)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_GETCUSTOMRIPPLEDATA_OFFSET))(this, globalTimer, globalLifeTime);
		}
	};
}

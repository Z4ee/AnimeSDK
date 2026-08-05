#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_HIGHFREQUENCYMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x44EB60)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_ISRUMBLING_OFFSET UNITYSDK_OFFSET(0xA9FC30)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_LOWFREQUENCYMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x324CC0)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0xA9FCC0)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0xA9FCE0)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0xA9FCD0)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0xA9FCF0)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SET_HIGHFREQUENCYMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x5A2BC0)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SET_LOWFREQUENCYMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x324A50)

namespace UnityEngine::InputSystem::Haptics
{
	inline static constexpr unsigned int DualMotorRumble_TypeDefinitionIndex = 32461;

	struct alignas(4) DualMotorRumble
	{
		::System::Single _lowFrequencyMotorSpeed_k__BackingField; // 0x10
		::System::Single _highFrequencyMotorSpeed_k__BackingField; // 0x14

		::System::Single get_lowFrequencyMotorSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_LOWFREQUENCYMOTORSPEED_OFFSET))(this);
		}

		::System::Void set_lowFrequencyMotorSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SET_LOWFREQUENCYMOTORSPEED_OFFSET))(this, value);
		}

		::System::Single get_highFrequencyMotorSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_HIGHFREQUENCYMOTORSPEED_OFFSET))(this);
		}

		::System::Void set_highFrequencyMotorSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SET_HIGHFREQUENCYMOTORSPEED_OFFSET))(this, value);
		}

		::System::Boolean get_isRumbling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_ISRUMBLING_OFFSET))(this);
		}

		::System::Void PauseHaptics(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_PAUSEHAPTICS_OFFSET))(this, device);
		}

		::System::Void ResumeHaptics(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_RESUMEHAPTICS_OFFSET))(this, device);
		}

		::System::Void ResetHaptics(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_RESETHAPTICS_OFFSET))(this, device);
		}

		::System::Void SetMotorSpeeds(::UnityEngine::InputSystem::InputDevice* device, ::System::Single lowFrequency, ::System::Single highFrequency)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SETMOTORSPEEDS_OFFSET))(this, device, lowFrequency, highFrequency);
		}
	};
}

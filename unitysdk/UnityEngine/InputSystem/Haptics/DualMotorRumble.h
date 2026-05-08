#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_HIGHFREQUENCYMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x3AA590)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_ISRUMBLING_OFFSET UNITYSDK_OFFSET(0x9AC170)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_LOWFREQUENCYMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x9AC1E0)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x9AC200)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x9AC1F0)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x9AC210)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SET_HIGHFREQUENCYMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x50C880)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SET_LOWFREQUENCYMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x2E7CE0)

namespace UnityEngine::InputSystem::Haptics
{
	inline static constexpr unsigned int DualMotorRumble_TypeDefinitionIndex = 29185;

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

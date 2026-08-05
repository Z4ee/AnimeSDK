#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/DualShockGamepad.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1EAD08F0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GET_LEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x1EAD0890)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GET_PLAYSTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x1EAD08D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GET_RIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x1EAD08B0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x1EAD0A30)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x1EAD0AA0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x1EAD0B30)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SETLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x1EAD0DE0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SETMOTORSPEEDSANDLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x1EAD0FE0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x1EAD0EE0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SET_LEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x1EAD08A0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SET_PLAYSTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x1EAD08E0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SET_RIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x1EAD08C0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD11A0)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualShock4GamepadHID_TypeDefinitionIndex = 32444;

	class DualShock4GamepadHID : public ::UnityEngine::InputSystem::DualShock::DualShockGamepad
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightTriggerButton_k__BackingField; // 0x220
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftTriggerButton_k__BackingField; // 0x228
		::UnityEngine::InputSystem::Controls::ButtonControl* _playStationButton_k__BackingField; // 0x230
		::System::Nullable_1<::UnityEngine::Color> m_LightBarColor; // 0x238
		::System::Nullable_1<::System::Single> m_HighFrequenceyMotorSpeed; // 0x24C
		::System::Nullable_1<::System::Single> m_LowFrequencyMotorSpeed; // 0x254

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftTriggerButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GET_LEFTTRIGGERBUTTON_OFFSET))(this);
		}

		::System::Void set_leftTriggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SET_LEFTTRIGGERBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightTriggerButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GET_RIGHTTRIGGERBUTTON_OFFSET))(this);
		}

		::System::Void set_rightTriggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SET_RIGHTTRIGGERBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_playStationButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GET_PLAYSTATIONBUTTON_OFFSET))(this);
		}

		::System::Void set_playStationButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SET_PLAYSTATIONBUTTON_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_FINISHSETUP_OFFSET))(this);
		}

		::System::Void PauseHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_PAUSEHAPTICS_OFFSET))(this);
		}

		::System::Void ResetHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_RESETHAPTICS_OFFSET))(this);
		}

		::System::Void ResumeHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_RESUMEHAPTICS_OFFSET))(this);
		}

		::System::Void SetLightBarColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SETLIGHTBARCOLOR_OFFSET))(this, color);
		}

		::System::Void SetMotorSpeeds(::System::Single lowFrequency, ::System::Single highFrequency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SETMOTORSPEEDS_OFFSET))(this, lowFrequency, highFrequency);
		}

		::System::Boolean SetMotorSpeedsAndLightBarColor(::System::Single lowFrequency, ::System::Single highFrequency, ::UnityEngine::Color color)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SETMOTORSPEEDSANDLIGHTBARCOLOR_OFFSET))(this, lowFrequency, highFrequency, color);
		}
	};
}

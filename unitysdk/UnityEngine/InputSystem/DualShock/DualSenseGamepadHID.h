#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/DualSenseGamepadHID_DualSenseHIDBluetoothInputReport.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/DualSenseGamepadHID_DualSenseHIDMinimalInputReport.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/DualSenseGamepadHID_DualSenseHIDUSBInputReport.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/DualShockGamepad.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1B948CC0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GET_LEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x1B948C60)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GET_PLAYSTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x1B948CA0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GET_RIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x1B948C80)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARDINNER_OFFSET UNITYSDK_OFFSET(0x1B949330)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARD_1_OFFSET UNITYSDK_OFFSET(0x1B949280)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARD_2_OFFSET UNITYSDK_OFFSET(0x1B9492D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x1B949230)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x1B948E00)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_PREPROCESSEVENTINNER_OFFSET UNITYSDK_OFFSET(0x1B9494F0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x1B9490D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x1B949120)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SETLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x1B949170)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SETMOTORSPEEDSANDLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x1B948E50)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x1B9491D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SET_LEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x1B948C70)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SET_PLAYSTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x1B948CB0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SET_RIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x1B948C90)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTMERGER_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x1B949320)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTPREPROCESSOR_PREPROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x1B9494E0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9496C0)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualSenseGamepadHID_TypeDefinitionIndex = 31819;

	class DualSenseGamepadHID : public ::UnityEngine::InputSystem::DualShock::DualShockGamepad
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftTriggerButton_k__BackingField; // 0x220
		::UnityEngine::InputSystem::Controls::ButtonControl* _playStationButton_k__BackingField; // 0x228
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightTriggerButton_k__BackingField; // 0x230
		::System::Nullable_1<::UnityEngine::Color> m_LightBarColor; // 0x238
		::System::Byte outputSequenceId; // 0x24C
		::System::Nullable_1<::System::Single> m_HighFrequenceyMotorSpeed; // 0x250
		::System::Nullable_1<::System::Single> m_LowFrequencyMotorSpeed; // 0x258

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftTriggerButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GET_LEFTTRIGGERBUTTON_OFFSET))(this);
		}

		::System::Void set_leftTriggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SET_LEFTTRIGGERBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightTriggerButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GET_RIGHTTRIGGERBUTTON_OFFSET))(this);
		}

		::System::Void set_rightTriggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SET_RIGHTTRIGGERBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_playStationButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GET_PLAYSTATIONBUTTON_OFFSET))(this);
		}

		::System::Void set_playStationButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SET_PLAYSTATIONBUTTON_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_FINISHSETUP_OFFSET))(this);
		}

		::System::Void PauseHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_PAUSEHAPTICS_OFFSET))(this);
		}

		::System::Void ResetHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_RESETHAPTICS_OFFSET))(this);
		}

		::System::Void ResumeHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_RESUMEHAPTICS_OFFSET))(this);
		}

		::System::Void SetLightBarColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SETLIGHTBARCOLOR_OFFSET))(this, color);
		}

		::System::Void SetMotorSpeeds(::System::Single lowFrequency, ::System::Single highFrequency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SETMOTORSPEEDS_OFFSET))(this, lowFrequency, highFrequency);
		}

		::System::Boolean SetMotorSpeedsAndLightBarColor(::System::Nullable_1<::System::Single> lowFrequency, ::System::Nullable_1<::System::Single> highFrequency, ::System::Nullable_1<::UnityEngine::Color> color)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SETMOTORSPEEDSANDLIGHTBARCOLOR_OFFSET))(this, lowFrequency, highFrequency, color);
		}

		static ::System::Boolean MergeForward(::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID_DualSenseHIDUSBInputReport* currentState, ::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID_DualSenseHIDUSBInputReport* nextState)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID_DualSenseHIDUSBInputReport*, ::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID_DualSenseHIDUSBInputReport*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARD_OFFSET))(currentState, nextState);
		}

		static ::System::Boolean MergeForward_1(::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID_DualSenseHIDBluetoothInputReport* currentState, ::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID_DualSenseHIDBluetoothInputReport* nextState)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID_DualSenseHIDBluetoothInputReport*, ::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID_DualSenseHIDBluetoothInputReport*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARD_1_OFFSET))(currentState, nextState);
		}

		static ::System::Boolean MergeForward_2(::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID_DualSenseHIDMinimalInputReport* currentState, ::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID_DualSenseHIDMinimalInputReport* nextState)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID_DualSenseHIDMinimalInputReport*, ::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID_DualSenseHIDMinimalInputReport*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARD_2_OFFSET))(currentState, nextState);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTMERGER_MERGEFORWARD_OFFSET))(this, currentEventPtr, nextEventPtr);
		}

		::System::Boolean MergeForwardInner(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARDINNER_OFFSET))(this, currentEventPtr, nextEventPtr);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IEventPreProcessor_PreProcessEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTPREPROCESSOR_PREPROCESSEVENT_OFFSET))(this, eventPtr);
		}

		::System::Boolean PreProcessEventInner(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_PREPROCESSEVENTINNER_OFFSET))(this, eventPtr);
		}
	};
}

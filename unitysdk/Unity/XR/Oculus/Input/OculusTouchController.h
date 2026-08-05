#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRControllerWithRumble.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F125330)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F1252F0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F125310)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F1252D0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F1252B0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x1F1251B0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x1F125150)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_PRIMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x1F125170)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_PRIMARYTOUCHED_OFFSET UNITYSDK_OFFSET(0x1F125210)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_SECONDARYBUTTON_OFFSET UNITYSDK_OFFSET(0x1F125190)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_SECONDARYTOUCHED_OFFSET UNITYSDK_OFFSET(0x1F125230)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_START_OFFSET UNITYSDK_OFFSET(0x1F1251D0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x1F1251F0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICKTOUCHED_OFFSET UNITYSDK_OFFSET(0x1F125290)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICK_OFFSET UNITYSDK_OFFSET(0x1F125110)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1F125270)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGERTOUCHED_OFFSET UNITYSDK_OFFSET(0x1F125250)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1F125130)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F125300)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F125320)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F1252E0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F1252C0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x1F1251C0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x1F125160)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_PRIMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x1F125180)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_PRIMARYTOUCHED_OFFSET UNITYSDK_OFFSET(0x1F125220)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_SECONDARYBUTTON_OFFSET UNITYSDK_OFFSET(0x1F1251A0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_SECONDARYTOUCHED_OFFSET UNITYSDK_OFFSET(0x1F125240)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_START_OFFSET UNITYSDK_OFFSET(0x1F1251E0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x1F125200)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICKTOUCHED_OFFSET UNITYSDK_OFFSET(0x1F1252A0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICK_OFFSET UNITYSDK_OFFSET(0x1F125120)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1F125280)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGERTOUCHED_OFFSET UNITYSDK_OFFSET(0x1F125260)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1F125140)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F125560)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusTouchController_TypeDefinitionIndex = 32131;

	class OculusTouchController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _triggerTouched_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::Vector2Control* _thumbstick_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::ButtonControl* _start_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryTouched_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularAcceleration_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _primaryTouched_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickClicked_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::ButtonControl* _primaryButton_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickTouched_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryButton_k__BackingField; // 0x1F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_thumbstick()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICK_OFFSET))(this);
		}

		::System::Void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGER_OFFSET))(this);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_GRIP_OFFSET))(this);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_GRIP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_PRIMARYBUTTON_OFFSET))(this);
		}

		::System::Void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_PRIMARYBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_SECONDARYBUTTON_OFFSET))(this);
		}

		::System::Void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_SECONDARYBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_GRIPPRESSED_OFFSET))(this);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_GRIPPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_start()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_START_OFFSET))(this);
		}

		::System::Void set_start(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_START_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickClicked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICKCLICKED_OFFSET))(this);
		}

		::System::Void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICKCLICKED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_PRIMARYTOUCHED_OFFSET))(this);
		}

		::System::Void set_primaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_PRIMARYTOUCHED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_SECONDARYTOUCHED_OFFSET))(this);
		}

		::System::Void set_secondaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_SECONDARYTOUCHED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_triggerTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGERTOUCHED_OFFSET))(this);
		}

		::System::Void set_triggerTouched(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGERTOUCHED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGERPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICKTOUCHED_OFFSET))(this);
		}

		::System::Void set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICKTOUCHED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEACCELERATION_OFFSET))(this);
		}

		::System::Void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEACCELERATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEANGULARACCELERATION_OFFSET))(this);
		}

		::System::Void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEANGULARACCELERATION_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_FINISHSETUP_OFFSET))(this);
		}
	};
}

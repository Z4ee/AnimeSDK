#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRController.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F80CC10)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F80CAD0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F80CAB0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x1F80CB30)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x1F80CBB0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_JOYSTICK_OFFSET UNITYSDK_OFFSET(0x1F80CBF0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_MENU_OFFSET UNITYSDK_OFFSET(0x1F80CB70)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TOUCHPADCLICK_OFFSET UNITYSDK_OFFSET(0x1F80CAF0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TOUCHPADTOUCH_OFFSET UNITYSDK_OFFSET(0x1F80CB10)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1F80CBD0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1F80CB50)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1F80CB90)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F80CAE0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F80CAC0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x1F80CB40)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x1F80CBC0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_JOYSTICK_OFFSET UNITYSDK_OFFSET(0x1F80CC00)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_MENU_OFFSET UNITYSDK_OFFSET(0x1F80CB80)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TOUCHPADCLICK_OFFSET UNITYSDK_OFFSET(0x1F80CB00)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TOUCHPADTOUCH_OFFSET UNITYSDK_OFFSET(0x1F80CB20)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1F80CBE0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1F80CB60)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1F80CBA0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F80CD90)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int OpenVRControllerWMR_TypeDefinitionIndex = 32124;

	class OpenVRControllerWMR : public ::UnityEngine::InputSystem::XR::XRController
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClick_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouch_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::Vector2Control* _joystick_k__BackingField; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_DEVICEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_DEVICEANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClick()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TOUCHPADCLICK_OFFSET))(this);
		}

		::System::Void set_touchpadClick(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TOUCHPADCLICK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouch()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TOUCHPADTOUCH_OFFSET))(this);
		}

		::System::Void set_touchpadTouch(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TOUCHPADTOUCH_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_GRIPPRESSED_OFFSET))(this);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_GRIPPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TRIGGERPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_menu()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_MENU_OFFSET))(this);
		}

		::System::Void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_MENU_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TRIGGER_OFFSET))(this);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TRIGGER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_GRIP_OFFSET))(this);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_GRIP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TOUCHPAD_OFFSET))(this);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TOUCHPAD_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_joystick()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_JOYSTICK_OFFSET))(this);
		}

		::System::Void set_joystick(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_JOYSTICK_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_FINISHSETUP_OFFSET))(this);
		}
	};
}

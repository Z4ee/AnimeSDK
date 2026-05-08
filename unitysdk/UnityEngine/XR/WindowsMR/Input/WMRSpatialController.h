#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRControllerWithRumble.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1B4F08F0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_BATTERYLEVEL_OFFSET UNITYSDK_OFFSET(0x1B4F0850)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B4F0830)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B4F0810)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x1B4F0730)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x1B4F0710)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_JOYSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x1B4F07B0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_JOYSTICK_OFFSET UNITYSDK_OFFSET(0x1B4F06D0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_MENU_OFFSET UNITYSDK_OFFSET(0x1B4F0750)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1B4F08B0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_POINTERROTATION_OFFSET UNITYSDK_OFFSET(0x1B4F08D0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_SOURCELOSSMITIGATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B4F0890)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_SOURCELOSSRISK_OFFSET UNITYSDK_OFFSET(0x1B4F0870)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x1B4F07D0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x1B4F07F0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1B4F06F0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1B4F0790)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1B4F0770)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_BATTERYLEVEL_OFFSET UNITYSDK_OFFSET(0x1B4F0860)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B4F0840)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B4F0820)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x1B4F0740)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x1B4F0720)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_JOYSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x1B4F07C0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_JOYSTICK_OFFSET UNITYSDK_OFFSET(0x1B4F06E0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_MENU_OFFSET UNITYSDK_OFFSET(0x1B4F0760)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1B4F08C0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_POINTERROTATION_OFFSET UNITYSDK_OFFSET(0x1B4F08E0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_SOURCELOSSMITIGATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B4F08A0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_SOURCELOSSRISK_OFFSET UNITYSDK_OFFSET(0x1B4F0880)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x1B4F07E0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x1B4F0800)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1B4F0700)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1B4F07A0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1B4F0780)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F0B20)

namespace UnityEngine::XR::WindowsMR::Input
{
	inline static constexpr unsigned int WMRSpatialController_TypeDefinitionIndex = 28864;

	class WMRSpatialController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::Vector3Control* _sourceLossMitigationDirection_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::Vector2Control* _joystick_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::AxisControl* _sourceLossRisk_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::AxisControl* _batteryLevel_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::ButtonControl* _joystickClicked_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_joystick()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_JOYSTICK_OFFSET))(this);
		}

		::System::Void set_joystick(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_JOYSTICK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPAD_OFFSET))(this);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPAD_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_GRIP_OFFSET))(this);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_GRIP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_GRIPPRESSED_OFFSET))(this);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_GRIPPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_menu()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_MENU_OFFSET))(this);
		}

		::System::Void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_MENU_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TRIGGER_OFFSET))(this);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TRIGGER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TRIGGERPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_joystickClicked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_JOYSTICKCLICKED_OFFSET))(this);
		}

		::System::Void set_joystickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_JOYSTICKCLICKED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPADCLICKED_OFFSET))(this);
		}

		::System::Void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPADCLICKED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET))(this);
		}

		::System::Void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_DEVICEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_batteryLevel()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_BATTERYLEVEL_OFFSET))(this);
		}

		::System::Void set_batteryLevel(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_BATTERYLEVEL_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_sourceLossRisk()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_SOURCELOSSRISK_OFFSET))(this);
		}

		::System::Void set_sourceLossRisk(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_SOURCELOSSRISK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_sourceLossMitigationDirection()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_SOURCELOSSMITIGATIONDIRECTION_OFFSET))(this);
		}

		::System::Void set_sourceLossMitigationDirection(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_SOURCELOSSMITIGATIONDIRECTION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_POINTERPOSITION_OFFSET))(this);
		}

		::System::Void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_POINTERPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_POINTERROTATION_OFFSET))(this);
		}

		::System::Void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_POINTERROTATION_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_FINISHSETUP_OFFSET))(this);
		}
	};
}

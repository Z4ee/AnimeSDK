#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRControllerWithRumble.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OPENVR_VIVEWAND_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1EC31A30)
#define UNITY_XR_OPENVR_VIVEWAND_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EC31A10)
#define UNITY_XR_OPENVR_VIVEWAND_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EC319F0)
#define UNITY_XR_OPENVR_VIVEWAND_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x1EC31910)
#define UNITY_XR_OPENVR_VIVEWAND_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x1EC318F0)
#define UNITY_XR_OPENVR_VIVEWAND_GET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x1EC31930)
#define UNITY_XR_OPENVR_VIVEWAND_GET_TRACKPADPRESSED_OFFSET UNITYSDK_OFFSET(0x1EC31950)
#define UNITY_XR_OPENVR_VIVEWAND_GET_TRACKPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x1EC31970)
#define UNITY_XR_OPENVR_VIVEWAND_GET_TRACKPAD_OFFSET UNITYSDK_OFFSET(0x1EC31990)
#define UNITY_XR_OPENVR_VIVEWAND_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1EC319D0)
#define UNITY_XR_OPENVR_VIVEWAND_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1EC319B0)
#define UNITY_XR_OPENVR_VIVEWAND_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EC31A20)
#define UNITY_XR_OPENVR_VIVEWAND_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EC31A00)
#define UNITY_XR_OPENVR_VIVEWAND_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x1EC31920)
#define UNITY_XR_OPENVR_VIVEWAND_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x1EC31900)
#define UNITY_XR_OPENVR_VIVEWAND_SET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x1EC31940)
#define UNITY_XR_OPENVR_VIVEWAND_SET_TRACKPADPRESSED_OFFSET UNITYSDK_OFFSET(0x1EC31960)
#define UNITY_XR_OPENVR_VIVEWAND_SET_TRACKPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x1EC31980)
#define UNITY_XR_OPENVR_VIVEWAND_SET_TRACKPAD_OFFSET UNITYSDK_OFFSET(0x1EC319A0)
#define UNITY_XR_OPENVR_VIVEWAND_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1EC319E0)
#define UNITY_XR_OPENVR_VIVEWAND_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1EC319C0)
#define UNITY_XR_OPENVR_VIVEWAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC31B90)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int ViveWand_TypeDefinitionIndex = 32125;

	class ViveWand : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::Vector2Control* _trackpad_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _primary_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadPressed_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadTouched_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x1C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_GRIP_OFFSET))(this);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_GRIP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_GRIPPRESSED_OFFSET))(this);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_GRIPPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primary()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_PRIMARY_OFFSET))(this);
		}

		::System::Void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_PRIMARY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_TRACKPADPRESSED_OFFSET))(this);
		}

		::System::Void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_TRACKPADPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_TRACKPADTOUCHED_OFFSET))(this);
		}

		::System::Void set_trackpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_TRACKPADTOUCHED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_trackpad()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_TRACKPAD_OFFSET))(this);
		}

		::System::Void set_trackpad(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_TRACKPAD_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_TRIGGER_OFFSET))(this);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_TRIGGER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_TRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_TRIGGERPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_DEVICEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_DEVICEANGULARVELOCITY_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_FINISHSETUP_OFFSET))(this);
		}
	};
}

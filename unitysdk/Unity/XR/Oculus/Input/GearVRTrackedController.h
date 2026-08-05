#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRController.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F166BD0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1F166AF0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F166B90)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F166BB0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F166B70)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x1F166B30)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x1F166B50)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1F166AB0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1F166B10)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1F166AD0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_BACK_OFFSET UNITYSDK_OFFSET(0x1F166B00)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F166BA0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F166BC0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F166B80)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x1F166B40)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x1F166B60)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1F166AC0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1F166B20)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1F166AE0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F166D10)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int GearVRTrackedController_TypeDefinitionIndex = 32135;

	class GearVRTrackedController : public ::UnityEngine::InputSystem::XR::XRController
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::ButtonControl* _back_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularAcceleration_k__BackingField; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPAD_OFFSET))(this);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPAD_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TRIGGER_OFFSET))(this);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TRIGGER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_back()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_BACK_OFFSET))(this);
		}

		::System::Void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_BACK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TRIGGERPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPADCLICKED_OFFSET))(this);
		}

		::System::Void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPADCLICKED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET))(this);
		}

		::System::Void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEACCELERATION_OFFSET))(this);
		}

		::System::Void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEACCELERATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEANGULARACCELERATION_OFFSET))(this);
		}

		::System::Void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEANGULARACCELERATION_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_FINISHSETUP_OFFSET))(this);
		}
	};
}

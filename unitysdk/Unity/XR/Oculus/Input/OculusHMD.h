#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRHMD.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x19565B60)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_CENTEREYEACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565B20)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_CENTEREYEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565B40)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_CENTEREYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x19565B00)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565A00)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565A20)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x195659E0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_LEFTEYEACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565A60)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_LEFTEYEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565A80)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_LEFTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x19565A40)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_RIGHTEYEACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565AC0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_RIGHTEYEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565AE0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_RIGHTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x19565AA0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_USERPRESENCE_OFFSET UNITYSDK_OFFSET(0x195659C0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_CENTEREYEACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565B30)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_CENTEREYEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565B50)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_CENTEREYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x19565B10)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565A10)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565A30)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x195659F0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_LEFTEYEACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565A70)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_LEFTEYEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565A90)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_LEFTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x19565A50)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_RIGHTEYEACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565AD0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_RIGHTEYEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x19565AF0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_RIGHTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x19565AB0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_USERPRESENCE_OFFSET UNITYSDK_OFFSET(0x195659D0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD__CTOR_OFFSET UNITYSDK_OFFSET(0x19565D20)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusHMD_TypeDefinitionIndex = 28854;

	class OculusHMD : public ::UnityEngine::InputSystem::XR::XRHMD
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAcceleration_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularVelocity_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAcceleration_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularAcceleration_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularAcceleration_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _userPresence_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularVelocity_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularVelocity_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAcceleration_k__BackingField; // 0x1F8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularAcceleration_k__BackingField; // 0x200
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularAcceleration_k__BackingField; // 0x208

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_USERPRESENCE_OFFSET))(this);
		}

		::System::Void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_USERPRESENCE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_DEVICEANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_DEVICEACCELERATION_OFFSET))(this);
		}

		::System::Void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_DEVICEACCELERATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_DEVICEANGULARACCELERATION_OFFSET))(this);
		}

		::System::Void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_DEVICEANGULARACCELERATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_LEFTEYEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_leftEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_LEFTEYEANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_LEFTEYEACCELERATION_OFFSET))(this);
		}

		::System::Void set_leftEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_LEFTEYEACCELERATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_LEFTEYEANGULARACCELERATION_OFFSET))(this);
		}

		::System::Void set_leftEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_LEFTEYEANGULARACCELERATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_RIGHTEYEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_rightEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_RIGHTEYEANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_RIGHTEYEACCELERATION_OFFSET))(this);
		}

		::System::Void set_rightEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_RIGHTEYEACCELERATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_RIGHTEYEANGULARACCELERATION_OFFSET))(this);
		}

		::System::Void set_rightEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_RIGHTEYEANGULARACCELERATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_CENTEREYEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_centerEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_CENTEREYEANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_CENTEREYEACCELERATION_OFFSET))(this);
		}

		::System::Void set_centerEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_CENTEREYEACCELERATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_CENTEREYEANGULARACCELERATION_OFFSET))(this);
		}

		::System::Void set_centerEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_CENTEREYEANGULARACCELERATION_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_FINISHSETUP_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRHMD.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OPENVR_OPENVRHMD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1E0C6B50)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_CENTEREYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6B30)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_CENTEREYEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6B10)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6A70)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6A50)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_LEFTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6AB0)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_LEFTEYEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6A90)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_RIGHTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6AF0)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_RIGHTEYEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6AD0)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_CENTEREYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6B40)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_CENTEREYEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6B20)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6A80)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6A60)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_LEFTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6AC0)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_LEFTEYEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6AA0)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_RIGHTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6B00)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_RIGHTEYEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E0C6AE0)
#define UNITY_XR_OPENVR_OPENVRHMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C6C80)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int OpenVRHMD_TypeDefinitionIndex = 32123;

	class OpenVRHMD : public ::UnityEngine::InputSystem::XR::XRHMD
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularVelocity_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeVelocity_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeVelocity_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularVelocity_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularVelocity_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeVelocity_k__BackingField; // 0x1E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_DEVICEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_DEVICEANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_LEFTEYEVELOCITY_OFFSET))(this);
		}

		::System::Void set_leftEyeVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_LEFTEYEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_LEFTEYEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_leftEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_LEFTEYEANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_RIGHTEYEVELOCITY_OFFSET))(this);
		}

		::System::Void set_rightEyeVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_RIGHTEYEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_RIGHTEYEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_rightEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_RIGHTEYEANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_CENTEREYEVELOCITY_OFFSET))(this);
		}

		::System::Void set_centerEyeVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_CENTEREYEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_CENTEREYEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_centerEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_CENTEREYEANGULARVELOCITY_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_FINISHSETUP_OFFSET))(this);
		}
	};
}

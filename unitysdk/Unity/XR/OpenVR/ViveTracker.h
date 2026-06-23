#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/TrackedDevice.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OPENVR_VIVETRACKER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1D79B5B0)
#define UNITY_XR_OPENVR_VIVETRACKER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1D79B590)
#define UNITY_XR_OPENVR_VIVETRACKER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1D79B570)
#define UNITY_XR_OPENVR_VIVETRACKER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1D79B5A0)
#define UNITY_XR_OPENVR_VIVETRACKER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1D79B580)
#define UNITY_XR_OPENVR_VIVETRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D79B620)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int ViveTracker_TypeDefinitionIndex = 31507;

	class ViveTracker : public ::UnityEngine::InputSystem::TrackedDevice
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_SET_DEVICEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_SET_DEVICEANGULARVELOCITY_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_FINISHSETUP_OFFSET))(this);
		}
	};
}

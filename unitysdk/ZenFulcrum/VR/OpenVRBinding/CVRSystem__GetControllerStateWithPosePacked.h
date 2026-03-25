#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRControllerState_t_Packed.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CA97C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CA98B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CA90F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA97A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSystem__GetControllerStateWithPosePacked_TypeDefinitionIndex = 30236;

	class CVRSystem__GetControllerStateWithPosePacked : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin, ::System::UInt32 unControllerDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& pControllerState, ::System::UInt32 unControllerStateSize, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED_INVOKE_OFFSET))(this, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin, ::System::UInt32 unControllerDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& pControllerState, ::System::UInt32 unControllerStateSize, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED_BEGININVOKE_OFFSET))(this, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& pControllerState, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED_ENDINVOKE_OFFSET))(this, pControllerState, pTrackedDevicePose, result);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRControllerState_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATEWITHPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE0AB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATEWITHPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE0BA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATEWITHPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE06A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATEWITHPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE0680)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetControllerStateWithPose_TypeDefinitionIndex = 29966;

	class IVRSystem__GetControllerStateWithPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATEWITHPOSE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin, ::System::UInt32 unControllerDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& pControllerState, ::System::UInt32 unControllerStateSize, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATEWITHPOSE_INVOKE_OFFSET))(this, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin, ::System::UInt32 unControllerDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& pControllerState, ::System::UInt32 unControllerStateSize, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATEWITHPOSE_BEGININVOKE_OFFSET))(this, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& pControllerState, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATEWITHPOSE_ENDINVOKE_OFFSET))(this, pControllerState, pTrackedDevicePose, result);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRCompositorError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB1550)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB1600)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB11C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB11A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetLastPoseForTrackedDeviceIndex_TypeDefinitionIndex = 30061;

	class IVRCompositor__GetLastPoseForTrackedDeviceIndex : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Invoke(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pOutputPose, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pOutputGamePose)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX_INVOKE_OFFSET))(this, unDeviceIndex, pOutputPose, pOutputGamePose);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pOutputPose, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pOutputGamePose, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX_BEGININVOKE_OFFSET))(this, unDeviceIndex, pOutputPose, pOutputGamePose, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pOutputPose, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pOutputGamePose, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX_ENDINVOKE_OFFSET))(this, pOutputPose, pOutputGamePose, result);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRCompositorError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B518A20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B518AD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B518A00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B518990)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetLastPoseForTrackedDeviceIndex_TypeDefinitionIndex = 36081;

	class IVRCompositor__GetLastPoseForTrackedDeviceIndex : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Invoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a2, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a2, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a1, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a2, ::System::IAsyncResult* a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTPOSEFORTRACKEDDEVICEINDEX_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}

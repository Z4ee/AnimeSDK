#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A723B90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A723C60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A723780)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A723760)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__PollNextEventWithPose_TypeDefinitionIndex = 35682;

	class IVRSystem__PollNextEventWithPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t& pEvent, ::System::UInt32 uncbVREvent, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE_INVOKE_OFFSET))(this, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t& pEvent, ::System::UInt32 uncbVREvent, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE_BEGININVOKE_OFFSET))(this, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t& pEvent, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE_ENDINVOKE_OFFSET))(this, pEvent, pTrackedDevicePose, result);
		}
	};
}

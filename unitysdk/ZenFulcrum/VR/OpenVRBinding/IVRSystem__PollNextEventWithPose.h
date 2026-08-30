#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC4370)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC4440)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC4340)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC42D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__PollNextEventWithPose_TypeDefinitionIndex = 37623;

	class IVRSystem__PollNextEventWithPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a1, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t& a2, ::System::UInt32 a3, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a1, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t& a2, ::System::UInt32 a3, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t& a1, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENTWITHPOSE_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}

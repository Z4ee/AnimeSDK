#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B516DE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B516E50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B50EDD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B516D70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose_TypeDefinitionIndex = 36063;

	class IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}

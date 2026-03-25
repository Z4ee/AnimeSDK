#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CABD90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CABE00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CA26C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CABD70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose_TypeDefinitionIndex = 30043;

	class IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_INVOKE_OFFSET))(this, pmatStandingZeroPoseToRawTrackingPose);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_BEGININVOKE_OFFSET))(this, pmatStandingZeroPoseToRawTrackingPose, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_ENDINVOKE_OFFSET))(this, pmatStandingZeroPoseToRawTrackingPose, result);
		}
	};
}

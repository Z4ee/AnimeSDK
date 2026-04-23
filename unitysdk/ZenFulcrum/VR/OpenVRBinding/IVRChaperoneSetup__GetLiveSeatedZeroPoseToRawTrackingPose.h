#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6F30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6FA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6DE670)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E6F10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose_TypeDefinitionIndex = 35769;

	class IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE_INVOKE_OFFSET))(this, pmatSeatedZeroPoseToRawTrackingPose);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE_BEGININVOKE_OFFSET))(this, pmatSeatedZeroPoseToRawTrackingPose, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE_ENDINVOKE_OFFSET))(this, pmatSeatedZeroPoseToRawTrackingPose, result);
		}
	};
}

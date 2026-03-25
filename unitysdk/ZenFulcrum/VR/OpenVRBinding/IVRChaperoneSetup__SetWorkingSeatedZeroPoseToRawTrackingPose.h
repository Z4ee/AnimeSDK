#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAC940)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAC9B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CAC5F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAC5D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose_TypeDefinitionIndex = 30046;

	class IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_INVOKE_OFFSET))(this, pMatSeatedZeroPoseToRawTrackingPose);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_BEGININVOKE_OFFSET))(this, pMatSeatedZeroPoseToRawTrackingPose, callback, object);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_ENDINVOKE_OFFSET))(this, pMatSeatedZeroPoseToRawTrackingPose, result);
		}
	};
}

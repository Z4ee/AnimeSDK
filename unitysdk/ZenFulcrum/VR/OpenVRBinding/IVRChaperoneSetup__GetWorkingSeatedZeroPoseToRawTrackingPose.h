#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CABCD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CABD40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CA2350)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CABCB0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose_TypeDefinitionIndex = 30042;

	class IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_INVOKE_OFFSET))(this, pmatSeatedZeroPoseToRawTrackingPose);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_BEGININVOKE_OFFSET))(this, pmatSeatedZeroPoseToRawTrackingPose, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_ENDINVOKE_OFFSET))(this, pmatSeatedZeroPoseToRawTrackingPose, result);
		}
	};
}

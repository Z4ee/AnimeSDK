#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5175B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B517620)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5175A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B517530)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose_TypeDefinitionIndex = 36066;

	class IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}

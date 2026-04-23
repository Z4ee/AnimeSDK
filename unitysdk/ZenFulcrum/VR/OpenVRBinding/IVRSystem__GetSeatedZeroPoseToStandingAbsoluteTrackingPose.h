#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSEATEDZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7207C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSEATEDZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A7207F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSEATEDZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A720430)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSEATEDZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A720410)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeDefinitionIndex = 35665;

	class IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSEATEDZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t Invoke()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSEATEDZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSEATEDZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSEATEDZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

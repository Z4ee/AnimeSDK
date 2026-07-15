#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRAWZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D268C40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRAWZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D268C70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRAWZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D268C20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRAWZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D268BB0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose_TypeDefinitionIndex = 36748;

	class IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRAWZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t Invoke()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRAWZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRAWZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRAWZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationTransitionState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTRANSITIONSTATENAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B514BB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTRANSITIONSTATENAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B514C20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTRANSITIONSTATENAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B50E5D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTRANSITIONSTATENAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B514B40)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeDefinitionIndex = 36042;

	class IVRApplications__GetApplicationsTransitionStateNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTRANSITIONSTATENAMEFROMENUM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTRANSITIONSTATENAMEFROMENUM_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTRANSITIONSTATENAMEFROMENUM_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTRANSITIONSTATENAMEFROMENUM_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

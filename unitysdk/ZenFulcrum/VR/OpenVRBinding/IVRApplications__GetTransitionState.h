#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationTransitionState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B514FC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B514FF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B50E530)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B514F50)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetTransitionState_TypeDefinitionIndex = 36040;

	class IVRApplications__GetTransitionState : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState Invoke()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

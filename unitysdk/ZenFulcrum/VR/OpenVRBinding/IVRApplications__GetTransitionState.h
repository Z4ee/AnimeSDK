#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationTransitionState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E5F40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E5F70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6D8F80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E5F20)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetTransitionState_TypeDefinitionIndex = 35740;

	class IVRApplications__GetTransitionState : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState Invoke()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETTRANSITIONSTATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

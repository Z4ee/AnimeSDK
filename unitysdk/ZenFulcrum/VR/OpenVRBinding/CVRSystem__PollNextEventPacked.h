#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_t_Packed.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CA9900)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CA9990)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CA8650)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA98E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSystem__PollNextEventPacked_TypeDefinitionIndex = 30232;

	class CVRSystem__PollNextEventPacked : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed& pEvent, ::System::UInt32 uncbVREvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED_INVOKE_OFFSET))(this, pEvent, uncbVREvent);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed& pEvent, ::System::UInt32 uncbVREvent, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED_BEGININVOKE_OFFSET))(this, pEvent, uncbVREvent, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed& pEvent, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED_ENDINVOKE_OFFSET))(this, pEvent, result);
		}
	};
}

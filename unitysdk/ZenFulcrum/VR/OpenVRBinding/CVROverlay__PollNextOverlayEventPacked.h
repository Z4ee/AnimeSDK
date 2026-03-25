#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_t_Packed.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY__POLLNEXTOVERLAYEVENTPACKED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CA6B30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY__POLLNEXTOVERLAYEVENTPACKED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CA6BE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY__POLLNEXTOVERLAYEVENTPACKED_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CA6280)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY__POLLNEXTOVERLAYEVENTPACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA6B10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVROverlay__PollNextOverlayEventPacked_TypeDefinitionIndex = 30245;

	class CVROverlay__PollNextOverlayEventPacked : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY__POLLNEXTOVERLAYEVENTPACKED__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed& pEvent, ::System::UInt32 uncbVREvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY__POLLNEXTOVERLAYEVENTPACKED_INVOKE_OFFSET))(this, ulOverlayHandle, pEvent, uncbVREvent);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed& pEvent, ::System::UInt32 uncbVREvent, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY__POLLNEXTOVERLAYEVENTPACKED_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pEvent, uncbVREvent, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed& pEvent, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY__POLLNEXTOVERLAYEVENTPACKED_ENDINVOKE_OFFSET))(this, pEvent, result);
		}
	};
}

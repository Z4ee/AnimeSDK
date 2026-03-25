#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC5F50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC6000)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC5BB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC5B90)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__PollNextOverlayEvent_TypeDefinitionIndex = 30146;

	class IVROverlay__PollNextOverlayEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t& pEvent, ::System::UInt32 uncbVREvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT_INVOKE_OFFSET))(this, ulOverlayHandle, pEvent, uncbVREvent);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t& pEvent, ::System::UInt32 uncbVREvent, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pEvent, uncbVREvent, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t& pEvent, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT_ENDINVOKE_OFFSET))(this, pEvent, result);
		}
	};
}

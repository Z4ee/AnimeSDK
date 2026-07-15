#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B22A7F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B22A8A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B22A7D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B22A760)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__PollNextOverlayEvent_TypeDefinitionIndex = 36948;

	class IVROverlay__PollNextOverlayEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t& a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t& a2, ::System::UInt32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__POLLNEXTOVERLAYEVENT_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}

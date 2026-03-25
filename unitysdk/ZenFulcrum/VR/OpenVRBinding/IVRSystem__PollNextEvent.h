#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE8150)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE81E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE7DF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE7DD0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__PollNextEvent_TypeDefinitionIndex = 29961;

	class IVRSystem__PollNextEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t& pEvent, ::System::UInt32 uncbVREvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENT_INVOKE_OFFSET))(this, pEvent, uncbVREvent);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t& pEvent, ::System::UInt32 uncbVREvent, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENT_BEGININVOKE_OFFSET))(this, pEvent, uncbVREvent, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t& pEvent, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__POLLNEXTEVENT_ENDINVOKE_OFFSET))(this, pEvent, result);
		}
	};
}

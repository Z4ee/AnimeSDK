#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_t_Packed.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B513710)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B5137A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B512D40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B513690)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSystem__PollNextEventPacked_TypeDefinitionIndex = 36252;

	class CVRSystem__PollNextEventPacked : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed& a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed& a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__POLLNEXTEVENTPACKED_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}

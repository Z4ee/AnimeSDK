#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRNotificationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B226E10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B226E60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B226E00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B226D90)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRNotifications__RemoveNotification_TypeDefinitionIndex = 37005;

	class IVRNotifications__RemoveNotification : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError Invoke(::System::UInt32 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

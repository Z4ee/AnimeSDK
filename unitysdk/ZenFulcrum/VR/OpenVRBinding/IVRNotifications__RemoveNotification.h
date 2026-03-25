#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRNotificationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB8DE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB8E30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB8AF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB8AD0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRNotifications__RemoveNotification_TypeDefinitionIndex = 30203;

	class IVRNotifications__RemoveNotification : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError Invoke(::System::UInt32 notificationId)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION_INVOKE_OFFSET))(this, notificationId);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 notificationId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION_BEGININVOKE_OFFSET))(this, notificationId, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__REMOVENOTIFICATION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

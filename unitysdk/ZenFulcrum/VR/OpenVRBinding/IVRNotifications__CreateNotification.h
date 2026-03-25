#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRNotificationError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRNotificationStyle.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRNotificationType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/NotificationBitmap_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB8970)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB8AA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB8480)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB8460)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRNotifications__CreateNotification_TypeDefinitionIndex = 30202;

	class IVRNotifications__CreateNotification : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError Invoke(::System::UInt64 ulOverlayHandle, ::System::UInt64 ulUserValue, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationType type, ::System::String* pchText, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationStyle style, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t& pImage, ::System::UInt32& pNotificationId)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationType, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationStyle, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION_INVOKE_OFFSET))(this, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::UInt64 ulUserValue, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationType type, ::System::String* pchText, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationStyle style, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t& pImage, ::System::UInt32& pNotificationId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationType, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationStyle, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION_BEGININVOKE_OFFSET))(this, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t& pImage, ::System::UInt32& pNotificationId, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION_ENDINVOKE_OFFSET))(this, pImage, pNotificationId, result);
		}
	};
}

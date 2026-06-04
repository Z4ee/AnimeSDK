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

#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B51AA90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B51ABC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B51AA40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51A9D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRNotifications__CreateNotification_TypeDefinitionIndex = 36222;

	class IVRNotifications__CreateNotification : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError Invoke(::System::UInt64 a1, ::System::UInt64 a2, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationType a3, ::System::String* a4, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationStyle a5, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t& a6, ::System::UInt32& a7)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationType, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationStyle, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::UInt64 a2, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationType a3, ::System::String* a4, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationStyle a5, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t& a6, ::System::UInt32& a7, ::System::AsyncCallback* a8, ::System::Object* a9)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationType, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationStyle, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t& a1, ::System::UInt32& a2, ::System::IAsyncResult* a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRNOTIFICATIONS__CREATENOTIFICATION_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}

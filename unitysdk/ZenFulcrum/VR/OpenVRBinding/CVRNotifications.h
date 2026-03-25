#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRNotificationError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRNotificationStyle.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRNotificationType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRNotifications.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/NotificationBitmap_t.h"

namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRNOTIFICATIONS_CREATENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x18CA5950)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRNOTIFICATIONS_REMOVENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x18CA5980)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRNOTIFICATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA5870)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRNotifications_TypeDefinitionIndex = 30250;

	class CVRNotifications : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRNotifications FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRNOTIFICATIONS__CTOR_OFFSET))(this, pInterface);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError CreateNotification(::System::UInt64 ulOverlayHandle, ::System::UInt64 ulUserValue, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationType type, ::System::String* pchText, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationStyle style, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t& pImage, ::System::UInt32& pNotificationId)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationType, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationStyle, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRNOTIFICATIONS_CREATENOTIFICATION_OFFSET))(this, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError RemoveNotification(::System::UInt32 notificationId)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRNOTIFICATIONS_REMOVENOTIFICATION_OFFSET))(this, notificationId);
		}
	};
}

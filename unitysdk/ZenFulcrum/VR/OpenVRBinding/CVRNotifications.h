#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRNotificationError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRNotificationStyle.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRNotificationType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRNotifications.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/NotificationBitmap_t.h"

namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRNOTIFICATIONS_CREATENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1BBF0C40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRNOTIFICATIONS_REMOVENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1BBF0CB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRNOTIFICATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF0B70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRNotifications_TypeDefinitionIndex = 37052;

	class CVRNotifications : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRNotifications FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRNOTIFICATIONS__CTOR_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError CreateNotification(::System::UInt64 a1, ::System::UInt64 a2, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationType a3, ::System::String* a4, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationStyle a5, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t& a6, ::System::UInt32& a7)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationType, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRNotificationStyle, ::ZenFulcrum::VR::OpenVRBinding::NotificationBitmap_t&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRNOTIFICATIONS_CREATENOTIFICATION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError RemoveNotification(::System::UInt32 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRNotificationError(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRNOTIFICATIONS_REMOVENOTIFICATION_OFFSET))(this, a1);
		}
	};
}

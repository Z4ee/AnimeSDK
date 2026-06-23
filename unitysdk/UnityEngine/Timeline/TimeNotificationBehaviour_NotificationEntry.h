#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace UnityEngine::Playables { class INotification; }
namespace UnityEngine::Timeline { class INapNotification; }

#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_NOTIFICATIONENTRY_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0xA63970)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_NOTIFICATIONENTRY_GET_TRIGGERINEDITOR_OFFSET UNITYSDK_OFFSET(0xA63960)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_NOTIFICATIONENTRY_GET_TRIGGERONCEWITHPAUSE_OFFSET UNITYSDK_OFFSET(0xA63990)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_NOTIFICATIONENTRY_GET_TRIGGERONCE_OFFSET UNITYSDK_OFFSET(0xA63980)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeNotificationBehaviour_NotificationEntry_TypeDefinitionIndex = 32401;

	struct alignas(8) TimeNotificationBehaviour_NotificationEntry
	{
		::System::Double time; // 0x10
		::UnityEngine::Playables::INotification* payload; // 0x18
		::System::Boolean notificationFired; // 0x20
		::System::Boolean notificationFiredWithPause; // 0x21
		::UnityEngine::Timeline::NotificationFlags flags; // 0x22
		::UnityEngine::Timeline::INapNotification* NapNotification; // 0x28

		::System::Boolean get_triggerInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_NOTIFICATIONENTRY_GET_TRIGGERINEDITOR_OFFSET))(this);
		}

		::System::Boolean get_prewarm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_NOTIFICATIONENTRY_GET_PREWARM_OFFSET))(this);
		}

		::System::Boolean get_triggerOnce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_NOTIFICATIONENTRY_GET_TRIGGERONCE_OFFSET))(this);
		}

		::System::Boolean get_triggerOnceWithPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_NOTIFICATIONENTRY_GET_TRIGGERONCEWITHPAUSE_OFFSET))(this);
		}
	};
}

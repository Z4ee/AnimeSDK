#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace UnityEngine::Playables { class INotification; }

#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_NOTIFICATIONENTRY_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0x39EDAE0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_NOTIFICATIONENTRY_GET_TRIGGERINEDITOR_OFFSET UNITYSDK_OFFSET(0x39EDAD0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_NOTIFICATIONENTRY_GET_TRIGGERONCE_OFFSET UNITYSDK_OFFSET(0x39EDAF0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeNotificationBehaviour_NotificationEntry_TypeDefinitionIndex = 36696;

	struct alignas(8) TimeNotificationBehaviour_NotificationEntry
	{
		::System::Double time; // 0x10
		::UnityEngine::Playables::INotification* payload; // 0x18
		::System::Boolean notificationFired; // 0x20
		::UnityEngine::Timeline::NotificationFlags flags; // 0x22

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
	};
}

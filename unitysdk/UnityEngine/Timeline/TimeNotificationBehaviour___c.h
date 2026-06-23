#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/TimeNotificationBehaviour_NotificationEntry.h"

namespace System { template <typename T> class Comparison_1; }

#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD0E410)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0E450)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR___C__SORTNOTIFICATIONS_B__13_0_OFFSET UNITYSDK_OFFSET(0x1DD0E460)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeNotificationBehaviour___c_TypeDefinitionIndex = 32402;

	class TimeNotificationBehaviour___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Timeline::TimeNotificationBehaviour___c** StaticGet___9()
		{
			return (::UnityEngine::Timeline::TimeNotificationBehaviour___c**)Il2CppClass::FromTypeDefinitionIndex(TimeNotificationBehaviour___c_TypeDefinitionIndex)->GetStaticField(0x268A0);
		}
		static ::System::Comparison_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>**)Il2CppClass::FromTypeDefinitionIndex(TimeNotificationBehaviour___c_TypeDefinitionIndex)->GetStaticField(0x268A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortNotifications_b__13_0(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry x, ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry, ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR___C__SORTNOTIFICATIONS_B__13_0_OFFSET))(this, x, y);
		}
	};
}

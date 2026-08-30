#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/DirectorWrapMode.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/UnityEngine/Timeline/TimeNotificationBehaviour_NotificationEntry.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class INotification; }

#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ADDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1ECC64A0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_CANRESTORENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1ECCB910)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_CREATE_OFFSET UNITYSDK_OFFSET(0x1ECC6380)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1ECCACE0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1ECCAA70)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1ECCAF50)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_RESTORE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECCB940)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SET_TIMESOURCE_OFFSET UNITYSDK_OFFSET(0x1ECCAA60)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SORTNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1ECCAB90)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SYNCDURATIONWITHEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0x1ECCB540)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_TRIGGERNOTIFICATIONSINRANGE_OFFSET UNITYSDK_OFFSET(0x1ECCB680)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_TRIGGER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECCAEF0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECCB980)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeNotificationBehaviour_TypeDefinitionIndex = 37554;

	class TimeNotificationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* m_Notifications; // 0x10
		::UnityEngine::Playables::Playable m_TimeSource; // 0x18
		::System::Double m_PreviousTime; // 0x28
		::System::Boolean m_NeedSortNotifications; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void set_timeSource(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SET_TIMESOURCE_OFFSET))(this, a1);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> Create(::UnityEngine::Playables::PlayableGraph a1, ::System::Double a2, ::UnityEngine::Playables::DirectorWrapMode a3)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>(*)(::UnityEngine::Playables::PlayableGraph, ::System::Double, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void AddNotification(::System::Double a1, ::UnityEngine::Playables::INotification* a2, ::UnityEngine::Timeline::NotificationFlags a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::UnityEngine::Playables::INotification*, ::UnityEngine::Timeline::NotificationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ADDNOTIFICATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void SortNotifications()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SORTNOTIFICATIONS_OFFSET))(this);
		}

		static ::System::Boolean CanRestoreNotification(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry a1, ::UnityEngine::Playables::FrameData a2, ::System::Double a3, ::System::Double a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry, ::UnityEngine::Playables::FrameData, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_CANRESTORENOTIFICATION_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void TriggerNotificationsInRange(::System::Double a1, ::System::Double a2, ::UnityEngine::Playables::FrameData a3, ::UnityEngine::Playables::Playable a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::UnityEngine::Playables::FrameData, ::UnityEngine::Playables::Playable, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_TRIGGERNOTIFICATIONSINRANGE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SyncDurationWithExternalSource(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SYNCDURATIONWITHEXTERNALSOURCE_OFFSET))(this, a1);
		}

		static ::System::Void Trigger_internal(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::PlayableOutput a2, ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::PlayableOutput, ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_TRIGGER_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Restore_internal(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_RESTORE_INTERNAL_OFFSET))(a1);
		}
	};
}

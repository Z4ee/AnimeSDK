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

#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ADDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x189AE780)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_CANRESTORENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x189B35A0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_CREATE_OFFSET UNITYSDK_OFFSET(0x189AE660)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x189B2950)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x189B2740)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x189B2BB0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_RESTORE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x189B35D0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SET_TIMESOURCE_OFFSET UNITYSDK_OFFSET(0x189B2730)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SORTNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x189B2840)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SYNCDURATIONWITHEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0x189B31A0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_TRIGGERNOTIFICATIONSINRANGE_OFFSET UNITYSDK_OFFSET(0x189B32E0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_TRIGGER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x189B2B50)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x189B3610)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeNotificationBehaviour_TypeDefinitionIndex = 29893;

	class TimeNotificationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* m_Notifications; // 0x10
		::System::Double m_PreviousTime; // 0x18
		::UnityEngine::Playables::Playable m_TimeSource; // 0x20
		::System::Boolean m_NeedSortNotifications; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void set_timeSource(::UnityEngine::Playables::Playable value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SET_TIMESOURCE_OFFSET))(this, value);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Double duration, ::UnityEngine::Playables::DirectorWrapMode loopMode)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>(*)(::UnityEngine::Playables::PlayableGraph, ::System::Double, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_CREATE_OFFSET))(graph, duration, loopMode);
		}

		::System::Void AddNotification(::System::Double time, ::UnityEngine::Playables::INotification* payload, ::UnityEngine::Timeline::NotificationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::UnityEngine::Playables::INotification*, ::UnityEngine::Timeline::NotificationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ADDNOTIFICATION_OFFSET))(this, time, payload, flags);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, playable);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_PREPAREFRAME_OFFSET))(this, playable, info);
		}

		::System::Void SortNotifications()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SORTNOTIFICATIONS_OFFSET))(this);
		}

		static ::System::Boolean CanRestoreNotification(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry e, ::UnityEngine::Playables::FrameData info, ::System::Double currentTime, ::System::Double previousTime)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry, ::UnityEngine::Playables::FrameData, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_CANRESTORENOTIFICATION_OFFSET))(e, info, currentTime, previousTime);
		}

		::System::Void TriggerNotificationsInRange(::System::Double start, ::System::Double end, ::UnityEngine::Playables::FrameData info, ::UnityEngine::Playables::Playable playable, ::System::Boolean checkState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::UnityEngine::Playables::FrameData, ::UnityEngine::Playables::Playable, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_TRIGGERNOTIFICATIONSINRANGE_OFFSET))(this, start, end, info, playable, checkState);
		}

		::System::Void SyncDurationWithExternalSource(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SYNCDURATIONWITHEXTERNALSOURCE_OFFSET))(this, playable);
		}

		static ::System::Void Trigger_internal(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::PlayableOutput output, ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry& e)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::PlayableOutput, ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_TRIGGER_INTERNAL_OFFSET))(playable, output, e);
		}

		static ::System::Void Restore_internal(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry& e)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_RESTORE_INTERNAL_OFFSET))(e);
		}
	};
}

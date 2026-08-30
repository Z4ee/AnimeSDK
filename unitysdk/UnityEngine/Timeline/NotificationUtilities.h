#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class IMarker; }
namespace UnityEngine::Timeline { class TimeNotificationBehaviour; }

#define UNITYENGINE_TIMELINE_NOTIFICATIONUTILITIES_CREATENOTIFICATIONSPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BF68170)
#define UNITYENGINE_TIMELINE_NOTIFICATIONUTILITIES_TRACKTYPESUPPORTSNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1BF68FD0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int NotificationUtilities_TypeDefinitionIndex = 37580;

	class NotificationUtilities : public ::System::Object
	{
	public:
		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>(*)(::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTIFICATIONUTILITIES_CREATENOTIFICATIONSPLAYABLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TrackTypeSupportsNotifications(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTIFICATIONUTILITIES_TRACKTYPESUPPORTSNOTIFICATIONS_OFFSET))(a1);
		}
	};
}

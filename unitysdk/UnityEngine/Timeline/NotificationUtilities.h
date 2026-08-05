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

#define UNITYENGINE_TIMELINE_NOTIFICATIONUTILITIES_CREATENOTIFICATIONSPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F3AB940)
#define UNITYENGINE_TIMELINE_NOTIFICATIONUTILITIES_TRACKTYPESUPPORTSNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1F3AC6C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int NotificationUtilities_TypeDefinitionIndex = 33067;

	class NotificationUtilities : public ::System::Object
	{
	public:
		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* markers, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>(*)(::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTIFICATIONUTILITIES_CREATENOTIFICATIONSPLAYABLE_OFFSET))(graph, markers, go);
		}

		static ::System::Boolean TrackTypeSupportsNotifications(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTIFICATIONUTILITIES_TRACKTYPESUPPORTSNOTIFICATIONS_OFFSET))(type);
		}
	};
}

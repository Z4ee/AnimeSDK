#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/MarkerTrack.h"

namespace UnityEngine::Timeline { class ComicGroupTrack; }
namespace UnityEngine::Timeline { class IMarker; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERTRACK_CANMOVEBYUSERINTIMELINE_OFFSET UNITYSDK_OFFSET(0x1F243C00)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1F243C10)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERTRACK_ONCREATEMARKER_OFFSET UNITYSDK_OFFSET(0x1F243C60)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERTRACK_ONDELETECLIP_OFFSET UNITYSDK_OFFSET(0x1F243C70)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERTRACK_ONDELETEMARKER_OFFSET UNITYSDK_OFFSET(0x1F243C80)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F243C90)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerTrack_TypeDefinitionIndex = 32953;

	class EventTriggerTrack : public ::UnityEngine::Timeline::MarkerTrack
	{
	public:
		::UnityEngine::Timeline::ComicGroupTrack* comicGroupTrack; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERTRACK__CTOR_OFFSET))(this);
		}

		::System::Boolean CanMoveByUserInTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERTRACK_CANMOVEBYUSERINTIMELINE_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERTRACK_ONCREATECLIP_OFFSET))(this, clip);
		}

		::System::Void OnCreateMarker(::UnityEngine::Timeline::IMarker* marker)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::IMarker*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERTRACK_ONCREATEMARKER_OFFSET))(this, marker);
		}

		::System::Void OnDeleteClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERTRACK_ONDELETECLIP_OFFSET))(this, clip);
		}

		::System::Void OnDeleteMarker(::UnityEngine::Timeline::IMarker* marker)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::IMarker*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERTRACK_ONDELETEMARKER_OFFSET))(this, marker);
		}
	};
}

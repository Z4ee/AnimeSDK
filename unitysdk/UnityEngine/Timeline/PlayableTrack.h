#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_PLAYABLETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1B23D2E0)
#define UNITYENGINE_TIMELINE_PLAYABLETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B23D340)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PlayableTrack_TypeDefinitionIndex = 35916;

	class PlayableTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PLAYABLETRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PLAYABLETRACK_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}

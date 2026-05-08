#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_COMIC_MAININFOTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1BA84850)
#define UNITYENGINE_TIMELINE_COMIC_MAININFOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA848A0)

namespace UnityEngine::Timeline::Comic
{
	inline static constexpr unsigned int MainInfoTrack_TypeDefinitionIndex = 30909;

	class MainInfoTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_MAININFOTRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_MAININFOTRACK_ONCREATECLIP_OFFSET))(this, clip);
		}
	};
}

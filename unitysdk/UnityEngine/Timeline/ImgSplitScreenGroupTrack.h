#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1FB20DF0)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB20EC0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImgSplitScreenGroupTrack_TypeDefinitionIndex = 32983;

	class ImgSplitScreenGroupTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPTRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPTRACK_ONCREATECLIP_OFFSET))(this, clip);
		}
	};
}

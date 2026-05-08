#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/MarkerTrack.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_BUBBLETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1BFABB00)
#define UNITYENGINE_TIMELINE_BUBBLETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFABB50)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int BubbleTrack_TypeDefinitionIndex = 30754;

	class BubbleTrack : public ::UnityEngine::Timeline::MarkerTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLETRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLETRACK_ONCREATECLIP_OFFSET))(this, clip);
		}
	};
}

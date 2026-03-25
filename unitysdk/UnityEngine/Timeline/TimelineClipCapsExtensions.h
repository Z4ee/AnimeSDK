#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_HASALL_OFFSET UNITYSDK_OFFSET(0x189BBCA0)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_HASANY_OFFSET UNITYSDK_OFFSET(0x189B9D20)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSBLENDING_OFFSET UNITYSDK_OFFSET(0x189BBC80)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSCLIPIN_OFFSET UNITYSDK_OFFSET(0x189BBC40)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x189AC270)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSLOOPING_OFFSET UNITYSDK_OFFSET(0x189BBC20)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x189BBC60)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineClipCapsExtensions_TypeDefinitionIndex = 29854;

	class TimelineClipCapsExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean SupportsLooping(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSLOOPING_OFFSET))(clip);
		}

		static ::System::Boolean SupportsExtrapolation(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSEXTRAPOLATION_OFFSET))(clip);
		}

		static ::System::Boolean SupportsClipIn(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSCLIPIN_OFFSET))(clip);
		}

		static ::System::Boolean SupportsSpeedMultiplier(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSSPEEDMULTIPLIER_OFFSET))(clip);
		}

		static ::System::Boolean SupportsBlending(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSBLENDING_OFFSET))(clip);
		}

		static ::System::Boolean HasAll(::UnityEngine::Timeline::ClipCaps caps, ::UnityEngine::Timeline::ClipCaps flags)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::ClipCaps, ::UnityEngine::Timeline::ClipCaps))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_HASALL_OFFSET))(caps, flags);
		}

		static ::System::Boolean HasAny(::UnityEngine::Timeline::ClipCaps caps, ::UnityEngine::Timeline::ClipCaps flags)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::ClipCaps, ::UnityEngine::Timeline::ClipCaps))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_HASANY_OFFSET))(caps, flags);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_HASALL_OFFSET UNITYSDK_OFFSET(0x1B24A8D0)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_HASANY_OFFSET UNITYSDK_OFFSET(0x1B2486C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSBLENDING_OFFSET UNITYSDK_OFFSET(0x1B24A8B0)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSCLIPIN_OFFSET UNITYSDK_OFFSET(0x1B24A870)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0x1B23A490)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSLOOPING_OFFSET UNITYSDK_OFFSET(0x1B24A850)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B24A890)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineClipCapsExtensions_TypeDefinitionIndex = 35874;

	class TimelineClipCapsExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean SupportsLooping(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSLOOPING_OFFSET))(a1);
		}

		static ::System::Boolean SupportsExtrapolation(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSEXTRAPOLATION_OFFSET))(a1);
		}

		static ::System::Boolean SupportsClipIn(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSCLIPIN_OFFSET))(a1);
		}

		static ::System::Boolean SupportsSpeedMultiplier(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSSPEEDMULTIPLIER_OFFSET))(a1);
		}

		static ::System::Boolean SupportsBlending(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSBLENDING_OFFSET))(a1);
		}

		static ::System::Boolean HasAll(::UnityEngine::Timeline::ClipCaps a1, ::UnityEngine::Timeline::ClipCaps a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::ClipCaps, ::UnityEngine::Timeline::ClipCaps))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_HASALL_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasAny(::UnityEngine::Timeline::ClipCaps a1, ::UnityEngine::Timeline::ClipCaps a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::ClipCaps, ::UnityEngine::Timeline::ClipCaps))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_HASANY_OFFSET))(a1, a2);
		}
	};
}

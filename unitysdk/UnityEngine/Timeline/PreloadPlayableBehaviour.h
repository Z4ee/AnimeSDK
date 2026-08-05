#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define UNITYENGINE_TIMELINE_PRELOADPLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1F1A21A0)
#define UNITYENGINE_TIMELINE_PRELOADPLAYABLEBEHAVIOUR_PRELOAD_OFFSET UNITYSDK_OFFSET(0x1F1A21D0)
#define UNITYENGINE_TIMELINE_PRELOADPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A21E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PreloadPlayableBehaviour_TypeDefinitionIndex = 33034;

	class PreloadPlayableBehaviour : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PRELOADPLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PRELOADPLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, playable);
		}

		::System::Void PreLoad(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PRELOADPLAYABLEBEHAVIOUR_PRELOAD_OFFSET))(this, playable);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1E563B60)
#define UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E563D10)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationParamsTriggerTrack_TypeDefinitionIndex = 32247;

	class AnimationParamsTriggerTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERTRACK_CREATEPLAYABLE_OFFSET))(this, graph, gameObject, clip);
		}
	};
}

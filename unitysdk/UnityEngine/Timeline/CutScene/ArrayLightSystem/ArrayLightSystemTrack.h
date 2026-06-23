#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1DD09E90)
#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1DD0A040)
#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0A110)

namespace UnityEngine::Timeline::CutScene::ArrayLightSystem
{
	inline static constexpr unsigned int ArrayLightSystemTrack_TypeDefinitionIndex = 32457;

	class ArrayLightSystemTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMTRACK_CREATEPLAYABLE_OFFSET))(this, graph, gameObject, clip);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMTRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}
	};
}

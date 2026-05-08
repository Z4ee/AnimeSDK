#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TrackAsset; }
namespace UnityEngine::Timeline::CutScene::ArrayLightSystem { class ArrayLightSystemBehavior; }

#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BA185B0)
#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1BA18570)
#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMPLAYABLEASSET_INITDATA_OFFSET UNITYSDK_OFFSET(0x1BA18580)
#define UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA18690)

namespace UnityEngine::Timeline::CutScene::ArrayLightSystem
{
	inline static constexpr unsigned int ArrayLightSystemPlayableAsset_TypeDefinitionIndex = 30905;

	class ArrayLightSystemPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::CutScene::ArrayLightSystem::ArrayLightSystemBehavior* Recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void InitData(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::GameObject* refGo, ::UnityEngine::Timeline::TrackAsset* trackAsset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMPLAYABLEASSET_INITDATA_OFFSET))(this, director, refGo, trackAsset);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_ARRAYLIGHTSYSTEM_ARRAYLIGHTSYSTEMPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}
	};
}

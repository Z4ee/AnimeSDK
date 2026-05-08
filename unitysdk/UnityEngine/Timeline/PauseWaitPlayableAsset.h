#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class PauseWaitBehavior; }

#define UNITYENGINE_TIMELINE_PAUSEWAITPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C289D20)
#define UNITYENGINE_TIMELINE_PAUSEWAITPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1C289E00)
#define UNITYENGINE_TIMELINE_PAUSEWAITPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C289E10)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PauseWaitPlayableAsset_TypeDefinitionIndex = 30789;

	class PauseWaitPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::PauseWaitBehavior* Setting; // 0x18
		::System::Boolean needClick; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PAUSEWAITPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PAUSEWAITPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PAUSEWAITPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

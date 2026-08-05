#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class BubbleBehavior; }

#define UNITYENGINE_TIMELINE_BUBBLEPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F1A1E90)
#define UNITYENGINE_TIMELINE_BUBBLEPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1F1A1F60)
#define UNITYENGINE_TIMELINE_BUBBLEPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A1F70)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int BubblePlayableAsset_TypeDefinitionIndex = 32935;

	class BubblePlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::BubbleBehavior* Setting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

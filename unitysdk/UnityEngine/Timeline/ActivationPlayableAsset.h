#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1899BF20)
#define UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1899BF10)
#define UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1899BFB0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationPlayableAsset_TypeDefinitionIndex = 29807;

	class ActivationPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}
	};
}

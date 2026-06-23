#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_UNACTIVATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1DD5D6F0)
#define UNITYENGINE_TIMELINE_UNACTIVATIONPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1DD5D6E0)
#define UNITYENGINE_TIMELINE_UNACTIVATIONPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD5D7E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int UnActivationPlayableAsset_TypeDefinitionIndex = 32358;

	class UnActivationPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATIONPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATIONPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}
	};
}

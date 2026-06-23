#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class EventTriggerBehaviour; }
namespace UnityEngine::Timeline { class EventTriggerZoneInfo; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1E5A9070)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1E5A9170)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A9180)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerPlayableAsset_TypeDefinitionIndex = 32320;

	class EventTriggerPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::EventTriggerBehaviour* m_EventTriggerBehaviour; // 0x18
		::UnityEngine::Timeline::EventTriggerZoneInfo* info; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

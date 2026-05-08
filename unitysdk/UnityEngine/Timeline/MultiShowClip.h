#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/ClipType.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_MULTISHOWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B7AE690)
#define UNITYENGINE_TIMELINE_MULTISHOWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B7AE670)
#define UNITYENGINE_TIMELINE_MULTISHOWCLIP_GET_CLIPTYPE_OFFSET UNITYSDK_OFFSET(0x1B7AE680)
#define UNITYENGINE_TIMELINE_MULTISHOWCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7AE6E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MultiShowClip_TypeDefinitionIndex = 30871;

	class MultiShowClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MULTISHOWCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MULTISHOWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipType get_ClipType()
		{
			return ((::UnityEngine::Timeline::ClipType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MULTISHOWCLIP_GET_CLIPTYPE_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MULTISHOWCLIP_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}
	};
}

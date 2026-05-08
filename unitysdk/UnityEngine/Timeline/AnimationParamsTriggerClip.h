#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class AnimationParamsTriggerBehaviour; }

#define UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C388640)
#define UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1C388630)
#define UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERCLIP_INITANIMATIONCOMP_OFFSET UNITYSDK_OFFSET(0x1C388720)
#define UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C388730)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationParamsTriggerClip_TypeDefinitionIndex = 30695;

	class AnimationParamsTriggerClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::AnimationParamsTriggerBehaviour* TriggerBehaviour; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERCLIP_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}

		::System::Void InitAnimationComp(::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERCLIP_INITANIMATIONCOMP_OFFSET))(this, animator);
		}
	};
}

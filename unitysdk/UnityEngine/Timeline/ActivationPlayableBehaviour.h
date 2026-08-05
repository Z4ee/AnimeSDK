#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F3A0D20)
#define UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A0E70)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationPlayableBehaviour_TypeDefinitionIndex = 32871;

	class ActivationPlayableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::GameObject* boundGameObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}
	};
}

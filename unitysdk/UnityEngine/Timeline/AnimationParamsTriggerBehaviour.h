#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1F9945B0)
#define UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F993FF0)
#define UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1F994330)
#define UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9946B0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationParamsTriggerBehaviour_TypeDefinitionIndex = 32876;

	class AnimationParamsTriggerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Animator* Animator; // 0x10
		::System::String* triggerKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPARAMSTRIGGERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}
	};
}

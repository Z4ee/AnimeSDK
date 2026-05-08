#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine::Timeline { class PauseWaitInfo; }

#define UNITYENGINE_TIMELINE_PAUSEWAITBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1BC6F210)
#define UNITYENGINE_TIMELINE_PAUSEWAITBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC6F3D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PauseWaitBehavior_TypeDefinitionIndex = 30787;

	class PauseWaitBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Timeline::PauseWaitInfo* info; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PAUSEWAITBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PAUSEWAITBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}
	};
}

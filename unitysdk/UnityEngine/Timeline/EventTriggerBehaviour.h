#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine::Timeline { class EventTriggerZoneInfo; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1DE5F720)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1DE5F6B0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5FA10)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerBehaviour_TypeDefinitionIndex = 32312;

	class EventTriggerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Timeline::EventTriggerZoneInfo* info; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}
	};
}

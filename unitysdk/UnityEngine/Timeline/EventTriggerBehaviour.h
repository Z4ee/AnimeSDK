#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine::Timeline { class EventTriggerZoneInfo; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1F2437F0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F243780)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F243AE0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerBehaviour_TypeDefinitionIndex = 32943;

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

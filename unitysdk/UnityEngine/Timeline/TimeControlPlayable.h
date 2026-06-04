#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace UnityEngine::Timeline { class ITimeControl; }

#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B236A50)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B240B90)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B240ED0)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B240DE0)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1B240CD0)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B240FC0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeControlPlayable_TypeDefinitionIndex = 35912;

	class TimeControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Timeline::ITimeControl* m_timeControl; // 0x10
		::System::Boolean m_started; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Timeline::ITimeControl* a2)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeControlPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::ITimeControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Initialize(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeControlPlayable*> a2, ::UnityEngine::Timeline::ITimeControl* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeControlPlayable*>, ::UnityEngine::Timeline::ITimeControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}
	};
}

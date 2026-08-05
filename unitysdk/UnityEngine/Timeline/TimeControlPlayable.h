#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace UnityEngine::Timeline { class ITimeControl; }

#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F243E40)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F243F90)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1F2441D0)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F2440F0)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1F243FA0)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2442B0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeControlPlayable_TypeDefinitionIndex = 33030;

	class TimeControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Timeline::ITimeControl* m_timeControl; // 0x10
		::System::Boolean m_started; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::ITimeControl* timeControl)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeControlPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::ITimeControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_CREATE_OFFSET))(graph, timeControl);
		}

		::System::Void Initialize(::UnityEngine::Timeline::ITimeControl* timeControl)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ITimeControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_INITIALIZE_OFFSET))(this, timeControl);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_PREPAREFRAME_OFFSET))(this, playable, info);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}
	};
}

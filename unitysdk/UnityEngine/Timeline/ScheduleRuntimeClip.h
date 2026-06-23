#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/RuntimeClipBase.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_CREATE_OFFSET UNITYSDK_OFFSET(0x1E7499D0)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_EVALUATEAT_OFFSET UNITYSDK_OFFSET(0x1E749D40)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1E7498F0)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1E749840)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_MIXER_OFFSET UNITYSDK_OFFSET(0x1E749900)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0x1E749910)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_START_OFFSET UNITYSDK_OFFSET(0x1E749810)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_SETTIME_OFFSET UNITYSDK_OFFSET(0x1E749880)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1E749A60)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E749920)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ScheduleRuntimeClip_TypeDefinitionIndex = 32369;

	class ScheduleRuntimeClip : public ::UnityEngine::Timeline::RuntimeClipBase
	{
	public:
		::UnityEngine::Timeline::TimelineClip* m_Clip; // 0x18
		::System::Double m_FinishTail; // 0x20
		::UnityEngine::Playables::Playable m_ParentMixer; // 0x28
		::UnityEngine::Playables::Playable m_Playable; // 0x38
		::System::Double m_StartDelay; // 0x48
		::System::Boolean m_Started; // 0x50

		::System::Void _ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer, ::System::Double startDelay, ::System::Double finishTail)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP__CTOR_OFFSET))(this, clip, clipPlayable, parentMixer, startDelay, finishTail);
		}

		::System::Double get_start()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_START_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_DURATION_OFFSET))(this);
		}

		::System::Void SetTime(::System::Double time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_SETTIME_OFFSET))(this, time);
		}

		::UnityEngine::Timeline::TimelineClip* get_clip()
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_CLIP_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable get_mixer()
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_MIXER_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable get_playable()
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_PLAYABLE_OFFSET))(this);
		}

		::System::Void Create(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer, ::System::Double startDelay, ::System::Double finishTail)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_CREATE_OFFSET))(this, clip, clipPlayable, parentMixer, startDelay, finishTail);
		}

		::System::Void set_enable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_SET_ENABLE_OFFSET))(this, value);
		}

		::System::Void EvaluateAt(::System::Double localTime, ::UnityEngine::Playables::FrameData frameData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_EVALUATEAT_OFFSET))(this, localTime, frameData);
		}
	};
}

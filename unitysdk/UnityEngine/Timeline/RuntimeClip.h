#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/RuntimeClipBase.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_RUNTIMECLIP_CREATE_OFFSET UNITYSDK_OFFSET(0x1C3E3420)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_EVALUATEAT_OFFSET UNITYSDK_OFFSET(0x1C3E3940)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1C3E34A0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1C3E32B0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_MIXER_OFFSET UNITYSDK_OFFSET(0x1C3E34B0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C3E34C0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_START_OFFSET UNITYSDK_OFFSET(0x1C3E3280)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_RESET_OFFSET UNITYSDK_OFFSET(0x1C3E3F40)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_SETDURATION_OFFSET UNITYSDK_OFFSET(0x1C3E38D0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_SETTIME_OFFSET UNITYSDK_OFFSET(0x1C3E3860)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1C3E34D0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E3390)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int RuntimeClip_TypeDefinitionIndex = 30814;

	class RuntimeClip : public ::UnityEngine::Timeline::RuntimeClipBase
	{
	public:
		::UnityEngine::Timeline::TimelineClip* m_Clip; // 0x18
		::UnityEngine::Playables::Playable m_ParentMixer; // 0x20
		::UnityEngine::Playables::Playable m_Playable; // 0x30

		::System::Void _ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP__CTOR_OFFSET))(this, clip, clipPlayable, parentMixer);
		}

		::System::Double get_start()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_START_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_DURATION_OFFSET))(this);
		}

		::System::Void Create(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_CREATE_OFFSET))(this, clip, clipPlayable, parentMixer);
		}

		::UnityEngine::Timeline::TimelineClip* get_clip()
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_CLIP_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable get_mixer()
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_MIXER_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable get_playable()
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_PLAYABLE_OFFSET))(this);
		}

		::System::Void set_enable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_SET_ENABLE_OFFSET))(this, value);
		}

		::System::Void SetTime(::System::Double time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_SETTIME_OFFSET))(this, time);
		}

		::System::Void SetDuration(::System::Double duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_SETDURATION_OFFSET))(this, duration);
		}

		::System::Void EvaluateAt(::System::Double localTime, ::UnityEngine::Playables::FrameData frameData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_EVALUATEAT_OFFSET))(this, localTime, frameData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_RESET_OFFSET))(this);
		}
	};
}

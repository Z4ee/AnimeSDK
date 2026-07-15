#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/RuntimeClipBase.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_CREATE_OFFSET UNITYSDK_OFFSET(0x1A3BBEE0)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_EVALUATEAT_OFFSET UNITYSDK_OFFSET(0x1A3BC0F0)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1A3BBEB0)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A3BBE20)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_MIXER_OFFSET UNITYSDK_OFFSET(0x1A3BBEC0)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A3BBED0)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_START_OFFSET UNITYSDK_OFFSET(0x1A3BBDF0)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_SETTIME_OFFSET UNITYSDK_OFFSET(0x1A3BBE60)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1A3BBF40)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3AEC90)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ScheduleRuntimeClip_TypeDefinitionIndex = 36669;

	class ScheduleRuntimeClip : public ::UnityEngine::Timeline::RuntimeClipBase
	{
	public:
		::UnityEngine::Timeline::TimelineClip* m_Clip; // 0x18
		::System::Double m_StartDelay; // 0x20
		::System::Boolean m_Started; // 0x28
		::UnityEngine::Playables::Playable m_Playable; // 0x30
		::System::Double m_FinishTail; // 0x40
		::UnityEngine::Playables::Playable m_ParentMixer; // 0x48

		::System::Void _ctor(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::Playable a3, ::System::Double a4, ::System::Double a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Double get_start()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_START_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_DURATION_OFFSET))(this);
		}

		::System::Void SetTime(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_SETTIME_OFFSET))(this, a1);
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

		::System::Void Create(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::Playable a3, ::System::Double a4, ::System::Double a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_CREATE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void set_enable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_SET_ENABLE_OFFSET))(this, a1);
		}

		::System::Void EvaluateAt(::System::Double a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_EVALUATEAT_OFFSET))(this, a1, a2);
		}
	};
}

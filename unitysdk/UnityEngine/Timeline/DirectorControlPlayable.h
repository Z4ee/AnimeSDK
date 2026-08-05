#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F9B6D50)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_DETECTDISCONTINUITY_OFFSET UNITYSDK_OFFSET(0x1F9B7860)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_DETECTOUTOFSYNC_OFFSET UNITYSDK_OFFSET(0x1F9B85C0)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1F9B7FA0)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F9B7C60)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1F9B6F80)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1F9B7250)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1F9B82A0)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_SYNCPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1F9B7BE0)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_SYNCSPEED_OFFSET UNITYSDK_OFFSET(0x1F9B7A00)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x1F9B8790)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9B8970)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int DirectorControlPlayable_TypeDefinitionIndex = 33025;

	class DirectorControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* director; // 0x10
		::System::Double m_AssetDuration; // 0x18
		::System::Boolean m_SyncTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::DirectorControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::PlayableDirector* director)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::DirectorControlPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_CREATE_OFFSET))(graph, director);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_PREPAREFRAME_OFFSET))(this, playable, info);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void SyncSpeed(::System::Double speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_SYNCSPEED_OFFSET))(this, speed);
		}

		::System::Void SyncPlayState(::UnityEngine::Playables::PlayableGraph graph, ::System::Double playableTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_SYNCPLAYSTATE_OFFSET))(this, graph, playableTime);
		}

		::System::Boolean DetectDiscontinuity(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_DETECTDISCONTINUITY_OFFSET))(this, playable, info);
		}

		::System::Boolean DetectOutOfSync(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_DETECTOUTOFSYNC_OFFSET))(this, playable);
		}

		::System::Void UpdateTime(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_UPDATETIME_OFFSET))(this, playable);
		}
	};
}

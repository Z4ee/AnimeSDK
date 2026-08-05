#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ActivationTrack_PostPlaybackState.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class ActivationMixerPlayable; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x1F8B5230)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F8B5490)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1F8B52A0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F8B5750)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1F8B5250)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1F8B5930)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_SET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1F8B5260)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_UPDATETRACKMODE_OFFSET UNITYSDK_OFFSET(0x1F8B5280)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B5980)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationTrack_TypeDefinitionIndex = 32872;

	class ActivationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::Timeline::ActivationTrack_PostPlaybackState m_PostPlaybackState; // 0xB0
		::UnityEngine::Timeline::ActivationMixerPlayable* m_ActivationMixer; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK__CTOR_OFFSET))(this);
		}

		::System::Boolean CanCompileClips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CANCOMPILECLIPS_OFFSET))(this);
		}

		::UnityEngine::Timeline::ActivationTrack_PostPlaybackState get_postPlaybackState()
		{
			return ((::UnityEngine::Timeline::ActivationTrack_PostPlaybackState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GET_POSTPLAYBACKSTATE_OFFSET))(this);
		}

		::System::Void set_postPlaybackState(::UnityEngine::Timeline::ActivationTrack_PostPlaybackState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_SET_POSTPLAYBACKSTATE_OFFSET))(this, value);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CREATEPLAYABLE_OFFSET))(this, graph, gameObject, clip);
		}

		::System::Void UpdateTrackMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_UPDATETRACKMODE_OFFSET))(this);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GATHERPROPERTIES_OFFSET))(this, director, driver);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_ONCREATECLIP_OFFSET))(this, clip);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Timeline/UnActivation/UnActivationTrack_PostPlaybackState.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline::UnActivation { class UnActivationMixerPlayable; }

#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x1F712B40)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1F712BB0)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F712DB0)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_GET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1F712B60)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1F712F90)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_SET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1F712B70)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_UPDATETRACKMODE_OFFSET UNITYSDK_OFFSET(0x1F712B90)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F712FE0)

namespace UnityEngine::Timeline::UnActivation
{
	inline static constexpr unsigned int UnActivationTrack_TypeDefinitionIndex = 33081;

	class UnActivationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState m_PostPlaybackState; // 0xB0
		::UnityEngine::Timeline::UnActivation::UnActivationMixerPlayable* m_ActivationMixer; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK__CTOR_OFFSET))(this);
		}

		::System::Boolean CanCompileClips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_CANCOMPILECLIPS_OFFSET))(this);
		}

		::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState get_postPlaybackState()
		{
			return ((::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_GET_POSTPLAYBACKSTATE_OFFSET))(this);
		}

		::System::Void set_postPlaybackState(::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_SET_POSTPLAYBACKSTATE_OFFSET))(this, value);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}

		::System::Void UpdateTrackMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_UPDATETRACKMODE_OFFSET))(this);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_GATHERPROPERTIES_OFFSET))(this, director, driver);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONTRACK_ONCREATECLIP_OFFSET))(this, clip);
		}
	};
}

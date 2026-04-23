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

#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x1A3D5BE0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1A3D5CB0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A3D5EA0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1A3D5C60)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1A3D5BD0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1A3D60B0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_SET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1A3D5C70)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_UPDATETRACKMODE_OFFSET UNITYSDK_OFFSET(0x1A3D5C90)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D60F0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationTrack_TypeDefinitionIndex = 35528;

	class ActivationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::Timeline::ActivationTrack_PostPlaybackState m_PostPlaybackState; // 0xC8
		::UnityEngine::Timeline::ActivationMixerPlayable* m_ActivationMixer; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseUniqueCharacterName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GET_USEUNIQUECHARACTERNAME_OFFSET))(this);
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

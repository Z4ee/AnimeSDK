#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define UNITYENGINE_TIMELINE_IMAGETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1E4BAD30)
#define UNITYENGINE_TIMELINE_IMAGETRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E4BAE00)
#define UNITYENGINE_TIMELINE_IMAGETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BAE10)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImageTrack_TypeDefinitionIndex = 32387;

	class ImageTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGETRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGETRACK_GATHERPROPERTIES_OFFSET))(this, director, driver);
		}
	};
}

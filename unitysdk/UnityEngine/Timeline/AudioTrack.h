#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class AudioMixerProperties; }
namespace UnityEngine::Timeline { class RuntimeElement; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { template <typename T> class IntervalTree_1; }

#define UNITYENGINE_TIMELINE_AUDIOTRACK_COMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x1A3DE3D0)
#define UNITYENGINE_TIMELINE_AUDIOTRACK_CREATECLIP_OFFSET UNITYSDK_OFFSET(0x1A3DDFD0)
#define UNITYENGINE_TIMELINE_AUDIOTRACK_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1A3DF0B0)
#define UNITYENGINE_TIMELINE_AUDIOTRACK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A3DF130)
#define UNITYENGINE_TIMELINE_AUDIOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3DF1B0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AudioTrack_TypeDefinitionIndex = 35571;

	class AudioTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::Timeline::AudioMixerProperties* m_TrackProperties; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClip(::UnityEngine::AudioClip* clip)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::UnityEngine::AudioClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOTRACK_CREATECLIP_OFFSET))(this, clip);
		}

		::UnityEngine::Playables::Playable CompileClips(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>* timelineClips, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOTRACK_COMPILECLIPS_OFFSET))(this, graph, go, timelineClips, tree);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOTRACK_GET_OUTPUTS_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOTRACK_ONVALIDATE_OFFSET))(this);
		}
	};
}

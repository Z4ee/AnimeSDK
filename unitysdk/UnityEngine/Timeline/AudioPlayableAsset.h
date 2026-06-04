#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class AudioClipProperties; }

#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B232070)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_BUFFERINGTIME_OFFSET UNITYSDK_OFFSET(0x1B231F20)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B2321F0)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B231F40)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1B231F80)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1B231F60)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1B231FF0)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_SET_BUFFERINGTIME_OFFSET UNITYSDK_OFFSET(0x1B231F30)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B231F50)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1B231F70)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B232200)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AudioPlayableAsset_TypeDefinitionIndex = 35869;

	class AudioPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::AudioClip* m_Clip; // 0x18
		::System::Boolean m_Loop; // 0x20
		::System::Single m_bufferingTime; // 0x24
		::UnityEngine::Timeline::AudioClipProperties* m_ClipProperties; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::System::Single get_bufferingTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_BUFFERINGTIME_OFFSET))(this);
		}

		::System::Void set_bufferingTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_SET_BUFFERINGTIME_OFFSET))(this, a1);
		}

		::UnityEngine::AudioClip* get_clip()
		{
			return ((::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_clip(::UnityEngine::AudioClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_SET_LOOP_OFFSET))(this, a1);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_DURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_OUTPUTS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

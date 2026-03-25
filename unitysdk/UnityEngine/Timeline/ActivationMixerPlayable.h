#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"
#include "unitysdk/UnityEngine/Timeline/ActivationTrack_PostPlaybackState.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1899BC90)
#define UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_GET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1899BD20)
#define UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1899BD40)
#define UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1899BD90)
#define UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_SET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1899BD30)
#define UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1899BF00)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationMixerPlayable_TypeDefinitionIndex = 29806;

	class ActivationMixerPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::GameObject* m_BoundGameObject; // 0x10
		::UnityEngine::Timeline::ActivationTrack_PostPlaybackState m_PostPlaybackState; // 0x18
		::System::Boolean m_BoundGameObjectInitialStateIsActive; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationMixerPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationMixerPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_CREATE_OFFSET))(graph, inputCount);
		}

		::UnityEngine::Timeline::ActivationTrack_PostPlaybackState get_postPlaybackState()
		{
			return ((::UnityEngine::Timeline::ActivationTrack_PostPlaybackState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_GET_POSTPLAYBACKSTATE_OFFSET))(this);
		}

		::System::Void set_postPlaybackState(::UnityEngine::Timeline::ActivationTrack_PostPlaybackState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_SET_POSTPLAYBACKSTATE_OFFSET))(this, value);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}
	};
}

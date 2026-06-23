#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"
#include "unitysdk/UnityEngine/Timeline/UnActivation/UnActivationTrack_PostPlaybackState.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1DE68A60)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_GET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1DE68AF0)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1DE68B10)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1DE68D30)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_RECOVERSTATE_OFFSET UNITYSDK_OFFSET(0x1DE68CB0)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_SET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1DE68B00)
#define UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE69210)

namespace UnityEngine::Timeline::UnActivation
{
	inline static constexpr unsigned int UnActivationMixerPlayable_TypeDefinitionIndex = 32449;

	class UnActivationMixerPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::GameObject* m_BoundGameObject; // 0x10
		::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState m_PostPlaybackState; // 0x18
		::System::Boolean isInClip; // 0x1C
		::System::Boolean m_BoundGameObjectInitialStateIsActive; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::UnActivation::UnActivationMixerPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::UnActivation::UnActivationMixerPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_CREATE_OFFSET))(graph, inputCount);
		}

		::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState get_postPlaybackState()
		{
			return ((::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_GET_POSTPLAYBACKSTATE_OFFSET))(this);
		}

		::System::Void set_postPlaybackState(::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::UnActivation::UnActivationTrack_PostPlaybackState))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_SET_POSTPLAYBACKSTATE_OFFSET))(this, value);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}

		::System::Void RecoverState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_RECOVERSTATE_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_UNACTIVATION_UNACTIVATIONMIXERPLAYABLE_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"
#include "unitysdk/UnityEngine/Timeline/ActivationControlPlayable_InitialState.h"
#include "unitysdk/UnityEngine/Timeline/ActivationControlPlayable_PostPlaybackState.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1ECB1860)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1ECB19E0)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1ECB19C0)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1ECB1A30)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1ECB1A70)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1ECB1A10)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECB1AD0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationControlPlayable_TypeDefinitionIndex = 37544;

	class ActivationControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::GameObject* gameObject; // 0x10
		::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState postPlayback; // 0x18
		::UnityEngine::Timeline::ActivationControlPlayable_InitialState m_InitialState; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState a3)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}
	};
}

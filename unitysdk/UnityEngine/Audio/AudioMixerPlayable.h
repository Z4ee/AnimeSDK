#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATEAUDIOMIXERPLAYABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECFAA80)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1ECFA8A0)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1ECFA6A0)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2F1A360)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2DFB9E0)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1ECFAAA0)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3BB58B0)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioMixerPlayable_TypeDefinitionIndex = 5144;

	struct alignas(8) AudioMixerPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE__CTOR_OFFSET))(this, a1);
		}

		/*
		static ::UnityEngine::Audio::AudioMixerPlayable Create(::UnityEngine::Playables::PlayableGraph a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Audio::AudioMixerPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATE_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATEHANDLE_OFFSET))(a1, a2, a3);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Audio::AudioMixerPlayable a1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Audio::AudioMixerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Audio::AudioMixerPlayable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Audio::AudioMixerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_EQUALS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean CreateAudioMixerPlayableInternal(::UnityEngine::Playables::PlayableGraph& a1, ::System::Boolean a2, ::UnityEngine::Playables::PlayableHandle& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::System::Boolean, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATEAUDIOMIXERPLAYABLEINTERNAL_OFFSET))(a1, a2, a3);
		}
		*/
	};
}

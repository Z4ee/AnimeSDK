#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATEAUDIOMIXERPLAYABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A41A220)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1A41A030)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A419E20)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x22E0130)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x7AEA80)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A41A240)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x22E1350)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioMixerPlayable_TypeDefinitionIndex = 5100;

	struct alignas(8) AudioMixerPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE__CTOR_OFFSET))(this, handle);
		}

		/*
		static ::UnityEngine::Audio::AudioMixerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 inputCount, ::System::Boolean normalizeInputVolumes)
		{
			return ((::UnityEngine::Audio::AudioMixerPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATE_OFFSET))(graph, inputCount, normalizeInputVolumes);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 inputCount, ::System::Boolean normalizeInputVolumes)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATEHANDLE_OFFSET))(graph, inputCount, normalizeInputVolumes);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Audio::AudioMixerPlayable playable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Audio::AudioMixerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_OP_IMPLICIT_OFFSET))(playable);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Audio::AudioMixerPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Audio::AudioMixerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_EQUALS_OFFSET))(this, other);
		}

		/*
		static ::System::Boolean CreateAudioMixerPlayableInternal(::UnityEngine::Playables::PlayableGraph& graph, ::System::Boolean normalizeInputVolumes, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::System::Boolean, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATEAUDIOMIXERPLAYABLEINTERNAL_OFFSET))(graph, normalizeInputVolumes, handle);
		}
		*/
	};
}

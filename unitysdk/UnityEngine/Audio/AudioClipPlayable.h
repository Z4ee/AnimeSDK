#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

namespace UnityEngine { class AudioClip; }

#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1F996C30)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F996900)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xABD420)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x31EA80)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_INTERNALCREATEAUDIOCLIPPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F996F40)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1F996F70)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F996F60)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SEEK_OFFSET UNITYSDK_OFFSET(0xABD500)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETPAUSEDELAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F9975F0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLENDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F997400)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLEND_OFFSET UNITYSDK_OFFSET(0xABD4F0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTARTDELAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F9975E0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPANINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F997330)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPAN_OFFSET UNITYSDK_OFFSET(0xABD4E0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F997260)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUME_OFFSET UNITYSDK_OFFSET(0xABD4D0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xABD2A0)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioClipPlayable_TypeDefinitionIndex = 18765;

	struct alignas(8) AudioClipPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE__CTOR_OFFSET))(this, handle);
		}

		/*
		static ::UnityEngine::Audio::AudioClipPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AudioClip* clip, ::System::Boolean looping)
		{
			return ((::UnityEngine::Audio::AudioClipPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AudioClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATE_OFFSET))(graph, clip, looping);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AudioClip* clip, ::System::Boolean looping)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AudioClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATEHANDLE_OFFSET))(graph, clip, looping);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Audio::AudioClipPlayable playable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Audio::AudioClipPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_IMPLICIT_OFFSET))(playable);
		}
		*/

		/*
		static ::UnityEngine::Audio::AudioClipPlayable op_Explicit(::UnityEngine::Playables::Playable playable)
		{
			return ((::UnityEngine::Audio::AudioClipPlayable(*)(::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_EXPLICIT_OFFSET))(playable);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Audio::AudioClipPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Audio::AudioClipPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_EQUALS_OFFSET))(this, other);
		}

		::System::Void SetVolume(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUME_OFFSET))(this, value);
		}

		::System::Void SetStereoPan(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPAN_OFFSET))(this, value);
		}

		::System::Void SetSpatialBlend(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLEND_OFFSET))(this, value);
		}

		::System::Void Seek(::System::Double startTime, ::System::Double startDelay, ::System::Double duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SEEK_OFFSET))(this, startTime, startDelay, duration);
		}

		static ::System::Void SetVolumeInternal(::UnityEngine::Playables::PlayableHandle& hdl, ::System::Single volume)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUMEINTERNAL_OFFSET))(hdl, volume);
		}

		static ::System::Void SetStereoPanInternal(::UnityEngine::Playables::PlayableHandle& hdl, ::System::Single stereoPan)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPANINTERNAL_OFFSET))(hdl, stereoPan);
		}

		static ::System::Void SetSpatialBlendInternal(::UnityEngine::Playables::PlayableHandle& hdl, ::System::Single spatialBlend)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLENDINTERNAL_OFFSET))(hdl, spatialBlend);
		}

		static ::System::Void SetStartDelayInternal(::UnityEngine::Playables::PlayableHandle& hdl, ::System::Double delay)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTARTDELAYINTERNAL_OFFSET))(hdl, delay);
		}

		static ::System::Void SetPauseDelayInternal(::UnityEngine::Playables::PlayableHandle& hdl, ::System::Double delay)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETPAUSEDELAYINTERNAL_OFFSET))(hdl, delay);
		}

		/*
		static ::System::Boolean InternalCreateAudioClipPlayable(::UnityEngine::Playables::PlayableGraph& graph, ::UnityEngine::AudioClip* clip, ::System::Boolean looping, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::AudioClip*, ::System::Boolean, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_INTERNALCREATEAUDIOCLIPPLAYABLE_OFFSET))(graph, clip, looping, handle);
		}
		*/
	};
}

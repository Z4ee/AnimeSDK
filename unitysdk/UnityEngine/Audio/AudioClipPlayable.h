#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

namespace UnityEngine { class AudioClip; }

#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1ECF9FA0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1ECF9D40)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2F1A360)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2DFB9E0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_INTERNALCREATEAUDIOCLIPPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1ECFA170)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1ECFA1A0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1ECFA190)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SEEK_OFFSET UNITYSDK_OFFSET(0x3BB5780)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETPAUSEDELAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECFA690)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLENDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECFA550)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLEND_OFFSET UNITYSDK_OFFSET(0x3BB5770)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTARTDELAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECFA680)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPANINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECFA490)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPAN_OFFSET UNITYSDK_OFFSET(0x3BB5760)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECFA3C0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x3BB5750)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3BB5640)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioClipPlayable_TypeDefinitionIndex = 5143;

	struct alignas(8) AudioClipPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE__CTOR_OFFSET))(this, a1);
		}

		/*
		static ::UnityEngine::Audio::AudioClipPlayable Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::AudioClip* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Audio::AudioClipPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AudioClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATE_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::AudioClip* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AudioClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATEHANDLE_OFFSET))(a1, a2, a3);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Audio::AudioClipPlayable a1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Audio::AudioClipPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Audio::AudioClipPlayable op_Explicit(::UnityEngine::Playables::Playable a1)
		{
			return ((::UnityEngine::Audio::AudioClipPlayable(*)(::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_EXPLICIT_OFFSET))(a1);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Audio::AudioClipPlayable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Audio::AudioClipPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Void SetVolume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetStereoPan(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPAN_OFFSET))(this, a1);
		}

		::System::Void SetSpatialBlend(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLEND_OFFSET))(this, a1);
		}

		::System::Void Seek(::System::Double a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SEEK_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void SetVolumeInternal(::UnityEngine::Playables::PlayableHandle& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUMEINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SetStereoPanInternal(::UnityEngine::Playables::PlayableHandle& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPANINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SetSpatialBlendInternal(::UnityEngine::Playables::PlayableHandle& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLENDINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SetStartDelayInternal(::UnityEngine::Playables::PlayableHandle& a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTARTDELAYINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SetPauseDelayInternal(::UnityEngine::Playables::PlayableHandle& a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETPAUSEDELAYINTERNAL_OFFSET))(a1, a2);
		}

		/*
		static ::System::Boolean InternalCreateAudioClipPlayable(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::AudioClip* a2, ::System::Boolean a3, ::UnityEngine::Playables::PlayableHandle& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::AudioClip*, ::System::Boolean, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_INTERNALCREATEAUDIOCLIPPLAYABLE_OFFSET))(a1, a2, a3, a4);
		}
		*/
	};
}

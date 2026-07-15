#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

namespace System { class String; }
namespace UnityEngine { class AudioSource; }

#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_CREATE_OFFSET UNITYSDK_OFFSET(0x1D2F1230)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x165450)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1D2F13D0)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_INTERNALSETEVALUATEONSEEK_OFFSET UNITYSDK_OFFSET(0x1D2F1760)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_INTERNALSETTARGET_OFFSET UNITYSDK_OFFSET(0x1D2F1740)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1D2F1630)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D2F13B0)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_SETEVALUATEONSEEK_OFFSET UNITYSDK_OFFSET(0x3B068A0)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_SETTARGET_OFFSET UNITYSDK_OFFSET(0x3B06890)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x3B06780)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioPlayableOutput_TypeDefinitionIndex = 5202;

	struct alignas(8) AudioPlayableOutput
	{
		::UnityEngine::Playables::PlayableOutputHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableOutputHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT__CTOR_OFFSET))(this, a1);
		}

		/*
		static ::UnityEngine::Audio::AudioPlayableOutput Create(::UnityEngine::Playables::PlayableGraph a1, ::System::String* a2, ::UnityEngine::AudioSource* a3)
		{
			return ((::UnityEngine::Audio::AudioPlayableOutput(*)(::UnityEngine::Playables::PlayableGraph, ::System::String*, ::UnityEngine::AudioSource*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_CREATE_OFFSET))(a1, a2, a3);
		}
		*/

		static ::UnityEngine::Audio::AudioPlayableOutput get_Null()
		{
			return ((::UnityEngine::Audio::AudioPlayableOutput(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_GET_NULL_OFFSET))();
		}

		::UnityEngine::Playables::PlayableOutputHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableOutputHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::PlayableOutput op_Implicit(::UnityEngine::Audio::AudioPlayableOutput a1)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::UnityEngine::Audio::AudioPlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Audio::AudioPlayableOutput op_Explicit(::UnityEngine::Playables::PlayableOutput a1)
		{
			return ((::UnityEngine::Audio::AudioPlayableOutput(*)(::UnityEngine::Playables::PlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_OP_EXPLICIT_OFFSET))(a1);
		}
		*/

		::System::Void SetTarget(::UnityEngine::AudioSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioSource*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_SETTARGET_OFFSET))(this, a1);
		}

		::System::Void SetEvaluateOnSeek(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_SETEVALUATEONSEEK_OFFSET))(this, a1);
		}

		static ::System::Void InternalSetTarget(::UnityEngine::Playables::PlayableOutputHandle& a1, ::UnityEngine::AudioSource* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::AudioSource*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_INTERNALSETTARGET_OFFSET))(a1, a2);
		}

		static ::System::Void InternalSetEvaluateOnSeek(::UnityEngine::Playables::PlayableOutputHandle& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_INTERNALSETEVALUATEONSEEK_OFFSET))(a1, a2);
		}
	};
}

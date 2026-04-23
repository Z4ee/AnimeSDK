#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

namespace System { class String; }
namespace UnityEngine { class AudioSource; }

#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_CREATE_OFFSET UNITYSDK_OFFSET(0x1A41A3B0)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x7AEA80)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1A41A550)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_INTERNALSETEVALUATEONSEEK_OFFSET UNITYSDK_OFFSET(0x1A41A920)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_INTERNALSETTARGET_OFFSET UNITYSDK_OFFSET(0x1A41A900)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1A41A7E0)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A41A530)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_SETEVALUATEONSEEK_OFFSET UNITYSDK_OFFSET(0x22E15A0)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_SETTARGET_OFFSET UNITYSDK_OFFSET(0x22E1590)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x22E1470)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioPlayableOutput_TypeDefinitionIndex = 5103;

	struct alignas(8) AudioPlayableOutput
	{
		::UnityEngine::Playables::PlayableOutputHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableOutputHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT__CTOR_OFFSET))(this, handle);
		}

		/*
		static ::UnityEngine::Audio::AudioPlayableOutput Create(::UnityEngine::Playables::PlayableGraph graph, ::System::String* name, ::UnityEngine::AudioSource* target)
		{
			return ((::UnityEngine::Audio::AudioPlayableOutput(*)(::UnityEngine::Playables::PlayableGraph, ::System::String*, ::UnityEngine::AudioSource*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_CREATE_OFFSET))(graph, name, target);
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
		static ::UnityEngine::Playables::PlayableOutput op_Implicit(::UnityEngine::Audio::AudioPlayableOutput output)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::UnityEngine::Audio::AudioPlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET))(output);
		}
		*/

		/*
		static ::UnityEngine::Audio::AudioPlayableOutput op_Explicit(::UnityEngine::Playables::PlayableOutput output)
		{
			return ((::UnityEngine::Audio::AudioPlayableOutput(*)(::UnityEngine::Playables::PlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_OP_EXPLICIT_OFFSET))(output);
		}
		*/

		::System::Void SetTarget(::UnityEngine::AudioSource* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioSource*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_SETTARGET_OFFSET))(this, value);
		}

		::System::Void SetEvaluateOnSeek(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_SETEVALUATEONSEEK_OFFSET))(this, value);
		}

		static ::System::Void InternalSetTarget(::UnityEngine::Playables::PlayableOutputHandle& output, ::UnityEngine::AudioSource* target)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::AudioSource*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_INTERNALSETTARGET_OFFSET))(output, target);
		}

		static ::System::Void InternalSetEvaluateOnSeek(::UnityEngine::Playables::PlayableOutputHandle& output, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_INTERNALSETEVALUATEONSEEK_OFFSET))(output, value);
		}
	};
}

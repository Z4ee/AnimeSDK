#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_AUDIO_AUDIOPLAYABLEBINDING_CREATEAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0x1F001740)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEBINDING_CREATE_OFFSET UNITYSDK_OFFSET(0x1F001660)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioPlayableBinding_TypeDefinitionIndex = 5145;

	class AudioPlayableBinding : public ::System::Object
	{
	public:
		static ::UnityEngine::Playables::PlayableBinding Create(::System::String* a1, ::UnityEngine::Object* a2)
		{
			return ((::UnityEngine::Playables::PlayableBinding(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEBINDING_CREATE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Playables::PlayableOutput CreateAudioOutput(::UnityEngine::Playables::PlayableGraph a1, ::System::String* a2)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::UnityEngine::Playables::PlayableGraph, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEBINDING_CREATEAUDIOOUTPUT_OFFSET))(a1, a2);
		}
	};
}

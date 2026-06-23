#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_AUDIO_AUDIOPLAYABLEBINDING_CREATEAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0x1E5AB820)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEBINDING_CREATE_OFFSET UNITYSDK_OFFSET(0x1E5AB760)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioPlayableBinding_TypeDefinitionIndex = 18365;

	class AudioPlayableBinding : public ::System::Object
	{
	public:
		static ::UnityEngine::Playables::PlayableBinding Create(::System::String* name, ::UnityEngine::Object* key)
		{
			return ((::UnityEngine::Playables::PlayableBinding(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEBINDING_CREATE_OFFSET))(name, key);
		}

		static ::UnityEngine::Playables::PlayableOutput CreateAudioOutput(::UnityEngine::Playables::PlayableGraph graph, ::System::String* name)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::UnityEngine::Playables::PlayableGraph, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEBINDING_CREATEAUDIOOUTPUT_OFFSET))(graph, name);
		}
	};
}

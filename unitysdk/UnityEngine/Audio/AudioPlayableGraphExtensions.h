#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

namespace System { class String; }

#define UNITYENGINE_AUDIO_AUDIOPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0x1C259E00)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioPlayableGraphExtensions_TypeDefinitionIndex = 9639;

	class AudioPlayableGraphExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean InternalCreateAudioOutput(::UnityEngine::Playables::PlayableGraph& graph, ::System::String* name, ::UnityEngine::Playables::PlayableOutputHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::System::String*, ::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEAUDIOOUTPUT_OFFSET))(graph, name, handle);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

namespace System { class String; }

#define UNITYENGINE_AUDIO_AUDIOPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0x1F001910)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioPlayableGraphExtensions_TypeDefinitionIndex = 5146;

	class AudioPlayableGraphExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean InternalCreateAudioOutput(::UnityEngine::Playables::PlayableGraph& a1, ::System::String* a2, ::UnityEngine::Playables::PlayableOutputHandle& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::System::String*, ::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEAUDIOOUTPUT_OFFSET))(a1, a2, a3);
		}
	};
}

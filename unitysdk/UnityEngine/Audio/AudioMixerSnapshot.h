#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine::Audio { class AudioMixer; }

#define UNITYENGINE_AUDIO_AUDIOMIXERSNAPSHOT_GET_AUDIOMIXER_OFFSET UNITYSDK_OFFSET(0x1C259430)
#define UNITYENGINE_AUDIO_AUDIOMIXERSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C259AC0)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioMixerSnapshot_TypeDefinitionIndex = 9637;

	class AudioMixerSnapshot : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERSNAPSHOT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Audio::AudioMixer* get_audioMixer()
		{
			return ((::UnityEngine::Audio::AudioMixer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERSNAPSHOT_GET_AUDIOMIXER_OFFSET))(this);
		}
	};
}

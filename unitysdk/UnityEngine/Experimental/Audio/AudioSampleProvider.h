#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::Audio { class AudioSampleProvider_SampleFramesHandler; }

#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_INVOKESAMPLEFRAMESAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B26E750)
#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_INVOKESAMPLEFRAMESOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1B26E780)

namespace UnityEngine::Experimental::Audio
{
	inline static constexpr unsigned int AudioSampleProvider_TypeDefinitionIndex = 5198;

	class AudioSampleProvider : public ::System::Object
	{
	public:
		::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler* sampleFramesAvailable; // 0x10
		::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler* sampleFramesOverflow; // 0x18

		::System::Void InvokeSampleFramesAvailable(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_INVOKESAMPLEFRAMESAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void InvokeSampleFramesOverflow(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_INVOKESAMPLEFRAMESOVERFLOW_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::Audio { class AudioSampleProvider_SampleFramesHandler; }

#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_INVOKESAMPLEFRAMESAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1E5AE5D0)
#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_INVOKESAMPLEFRAMESOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1E5AEB40)

namespace UnityEngine::Experimental::Audio
{
	inline static constexpr unsigned int AudioSampleProvider_TypeDefinitionIndex = 18368;

	class AudioSampleProvider : public ::System::Object
	{
	public:
		::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler* sampleFramesAvailable; // 0x10
		::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler* sampleFramesOverflow; // 0x18

		::System::Void InvokeSampleFramesAvailable(::System::Int32 sampleFrameCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_INVOKESAMPLEFRAMESAVAILABLE_OFFSET))(this, sampleFrameCount);
		}

		::System::Void InvokeSampleFramesOverflow(::System::Int32 droppedSampleFrameCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_INVOKESAMPLEFRAMESOVERFLOW_OFFSET))(this, droppedSampleFrameCount);
		}
	};
}

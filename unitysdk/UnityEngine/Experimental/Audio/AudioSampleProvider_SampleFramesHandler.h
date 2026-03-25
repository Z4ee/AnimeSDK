#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Experimental::Audio { class AudioSampleProvider; }

#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x189E25A0)
#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x189E2600)
#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x189E2000)
#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x189E2580)

namespace UnityEngine::Experimental::Audio
{
	inline static constexpr unsigned int AudioSampleProvider_SampleFramesHandler_TypeDefinitionIndex = 5097;

	class AudioSampleProvider_SampleFramesHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Experimental::Audio::AudioSampleProvider* provider, ::System::UInt32 sampleFrameCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Audio::AudioSampleProvider*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER_INVOKE_OFFSET))(this, provider, sampleFrameCount);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Experimental::Audio::AudioSampleProvider* provider, ::System::UInt32 sampleFrameCount, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Experimental::Audio::AudioSampleProvider*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER_BEGININVOKE_OFFSET))(this, provider, sampleFrameCount, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

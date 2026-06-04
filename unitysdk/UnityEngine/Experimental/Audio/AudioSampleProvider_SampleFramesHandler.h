#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Experimental::Audio { class AudioSampleProvider; }

#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B26E890)
#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B26E8F0)
#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B26E770)
#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B26E7A0)

namespace UnityEngine::Experimental::Audio
{
	inline static constexpr unsigned int AudioSampleProvider_SampleFramesHandler_TypeDefinitionIndex = 5199;

	class AudioSampleProvider_SampleFramesHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Experimental::Audio::AudioSampleProvider* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Audio::AudioSampleProvider*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Experimental::Audio::AudioSampleProvider* a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Experimental::Audio::AudioSampleProvider*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_SAMPLEFRAMESHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

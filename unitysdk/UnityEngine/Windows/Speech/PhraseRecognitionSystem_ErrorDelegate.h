#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Windows/Speech/SpeechError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_ERRORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A49AB70)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_ERRORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A49ABE0)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_ERRORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A49A510)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_ERRORDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49AB50)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int PhraseRecognitionSystem_ErrorDelegate_TypeDefinitionIndex = 4240;

	class PhraseRecognitionSystem_ErrorDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_ERRORDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Windows::Speech::SpeechError errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::Speech::SpeechError))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_ERRORDELEGATE_INVOKE_OFFSET))(this, errorCode);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::Speech::SpeechError errorCode, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Windows::Speech::SpeechError, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_ERRORDELEGATE_BEGININVOKE_OFFSET))(this, errorCode, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_ERRORDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

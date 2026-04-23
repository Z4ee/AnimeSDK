#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Windows/Speech/SpeechSystemStatus.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A49AC10)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A49AC80)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A49A860)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49ABF0)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int PhraseRecognitionSystem_StatusDelegate_TypeDefinitionIndex = 4241;

	class PhraseRecognitionSystem_StatusDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Windows::Speech::SpeechSystemStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::Speech::SpeechSystemStatus))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE_INVOKE_OFFSET))(this, status);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::Speech::SpeechSystemStatus status, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Windows::Speech::SpeechSystemStatus, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE_BEGININVOKE_OFFSET))(this, status, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

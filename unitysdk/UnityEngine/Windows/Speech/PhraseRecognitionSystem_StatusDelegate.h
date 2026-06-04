#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Windows/Speech/SpeechSystemStatus.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B2E9E10)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B2E9E80)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B2E9CA0)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E9DA0)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int PhraseRecognitionSystem_StatusDelegate_TypeDefinitionIndex = 4415;

	class PhraseRecognitionSystem_StatusDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Windows::Speech::SpeechSystemStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::Speech::SpeechSystemStatus))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::Speech::SpeechSystemStatus a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Windows::Speech::SpeechSystemStatus, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_STATUSDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

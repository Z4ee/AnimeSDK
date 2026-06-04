#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Windows/Speech/PhraseRecognizedEventArgs.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B2EA1B0)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B2EA220)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B2E9F30)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EA140)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int PhraseRecognizer_PhraseRecognizedDelegate_TypeDefinitionIndex = 4417;

	class PhraseRecognizer_PhraseRecognizedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Windows/Speech/PhraseRecognizedEventArgs.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18A63B80)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18A63BF0)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A634B0)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A63B60)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int PhraseRecognizer_PhraseRecognizedDelegate_TypeDefinitionIndex = 4241;

	class PhraseRecognizer_PhraseRecognizedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE_INVOKE_OFFSET))(this, args);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs args, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE_BEGININVOKE_OFFSET))(this, args, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_PHRASERECOGNIZEDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

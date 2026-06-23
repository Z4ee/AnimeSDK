#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Windows/Speech/ConfidenceLevel.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRESULTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D435AA0)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRESULTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D435B20)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRESULTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D435510)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRESULTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D435A80)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int DictationRecognizer_DictationResultDelegate_TypeDefinitionIndex = 5453;

	class DictationRecognizer_DictationResultDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRESULTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* text, ::UnityEngine::Windows::Speech::ConfidenceLevel confidence)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Windows::Speech::ConfidenceLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRESULTDELEGATE_INVOKE_OFFSET))(this, text, confidence);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* text, ::UnityEngine::Windows::Speech::ConfidenceLevel confidence, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::UnityEngine::Windows::Speech::ConfidenceLevel, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRESULTDELEGATE_BEGININVOKE_OFFSET))(this, text, confidence, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRESULTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONHYPOTHESISDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AD5C710)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONHYPOTHESISDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD5C740)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONHYPOTHESISDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD5C210)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONHYPOTHESISDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5C200)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int DictationRecognizer_DictationHypothesisDelegate_TypeDefinitionIndex = 5451;

	class DictationRecognizer_DictationHypothesisDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONHYPOTHESISDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONHYPOTHESISDELEGATE_INVOKE_OFFSET))(this, text);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* text, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONHYPOTHESISDELEGATE_BEGININVOKE_OFFSET))(this, text, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONHYPOTHESISDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

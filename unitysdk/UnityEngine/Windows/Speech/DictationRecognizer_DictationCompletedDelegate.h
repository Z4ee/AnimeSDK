#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Windows/Speech/DictationCompletionCause.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONCOMPLETEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D859120)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONCOMPLETEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D859190)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONCOMPLETEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D858E30)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONCOMPLETEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D858E10)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int DictationRecognizer_DictationCompletedDelegate_TypeDefinitionIndex = 5454;

	class DictationRecognizer_DictationCompletedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONCOMPLETEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Windows::Speech::DictationCompletionCause cause)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::Speech::DictationCompletionCause))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONCOMPLETEDDELEGATE_INVOKE_OFFSET))(this, cause);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::Speech::DictationCompletionCause cause, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Windows::Speech::DictationCompletionCause, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONCOMPLETEDDELEGATE_BEGININVOKE_OFFSET))(this, cause, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONCOMPLETEDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

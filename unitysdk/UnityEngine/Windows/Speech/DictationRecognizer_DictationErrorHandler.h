#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B2E9A00)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B2E9A60)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B2E9880)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E9980)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int DictationRecognizer_DictationErrorHandler_TypeDefinitionIndex = 4422;

	class DictationRecognizer_DictationErrorHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

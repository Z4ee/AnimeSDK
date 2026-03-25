#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18A62AC0)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18A62B20)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A624A0)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A62AA0)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int DictationRecognizer_DictationErrorHandler_TypeDefinitionIndex = 4246;

	class DictationRecognizer_DictationErrorHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* error, ::System::Int32 hresult)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER_INVOKE_OFFSET))(this, error, hresult);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* error, ::System::Int32 hresult, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER_BEGININVOKE_OFFSET))(this, error, hresult, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONERRORHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

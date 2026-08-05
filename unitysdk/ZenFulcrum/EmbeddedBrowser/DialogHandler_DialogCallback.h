#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FB6ECF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FB6ED80)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FB6E980)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB6E960)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DialogHandler_DialogCallback_TypeDefinitionIndex = 33309;

	class DialogHandler_DialogCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean affirm, ::System::String* text1, ::System::String* text2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK_INVOKE_OFFSET))(this, affirm, text1, text2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean affirm, ::System::String* text1, ::System::String* text2, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK_BEGININVOKE_OFFSET))(this, affirm, text1, text2, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

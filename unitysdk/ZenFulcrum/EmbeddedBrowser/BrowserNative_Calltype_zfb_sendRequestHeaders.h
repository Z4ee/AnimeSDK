#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTHEADERS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C511A50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTHEADERS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C511AF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTHEADERS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5116D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTHEADERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5116C0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_sendRequestHeaders_TypeDefinitionIndex = 31039;

	class BrowserNative_Calltype_zfb_sendRequestHeaders : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTHEADERS__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 requestId, ::System::Int32 responseLength, ::System::String* headersJSON)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTHEADERS_INVOKE_OFFSET))(this, requestId, responseLength, headersJSON);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 requestId, ::System::Int32 responseLength, ::System::String* headersJSON, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTHEADERS_BEGININVOKE_OFFSET))(this, requestId, responseLength, headersJSON, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTHEADERS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

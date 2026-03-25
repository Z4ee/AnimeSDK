#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NewRequestFunc; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETLOCALREQUESTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C77600)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETLOCALREQUESTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C77630)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETLOCALREQUESTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C6EE90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETLOCALREQUESTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C775E0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_setLocalRequestHandler_TypeDefinitionIndex = 30450;

	class BrowserNative_Calltype_zfb_setLocalRequestHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETLOCALREQUESTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewRequestFunc* requestFunc)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewRequestFunc*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETLOCALREQUESTHANDLER_INVOKE_OFFSET))(this, requestFunc);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewRequestFunc* requestFunc, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewRequestFunc*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETLOCALREQUESTHANDLER_BEGININVOKE_OFFSET))(this, requestFunc, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETLOCALREQUESTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

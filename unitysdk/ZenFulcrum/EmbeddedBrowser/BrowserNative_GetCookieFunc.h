#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NativeCookie; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C392E40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C392E70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C392940)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C392930)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_GetCookieFunc_TypeDefinitionIndex = 31011;

	class BrowserNative_GetCookieFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* cookie)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_INVOKE_OFFSET))(this, cookie);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* cookie, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_BEGININVOKE_OFFSET))(this, cookie, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

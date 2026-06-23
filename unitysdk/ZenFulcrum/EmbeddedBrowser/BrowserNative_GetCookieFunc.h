#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NativeCookie; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E6D4010)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E6D4040)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E6D3B10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D3AF0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_GetCookieFunc_TypeDefinitionIndex = 32562;

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

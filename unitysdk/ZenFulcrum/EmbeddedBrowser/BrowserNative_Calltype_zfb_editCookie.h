#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_CookieAction.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NativeCookie; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F928030)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F9280D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F927D00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F927CE0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_editCookie_TypeDefinitionIndex = 33274;

	class BrowserNative_Calltype_zfb_editCookie : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* cookie, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_CookieAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_CookieAction))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE_INVOKE_OFFSET))(this, id, cookie, action);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* cookie, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_CookieAction action, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_CookieAction, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE_BEGININVOKE_OFFSET))(this, id, cookie, action, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

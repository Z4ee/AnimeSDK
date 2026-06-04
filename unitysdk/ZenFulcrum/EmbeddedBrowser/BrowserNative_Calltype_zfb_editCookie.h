#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_CookieAction.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NativeCookie; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B4EE460)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B4EE500)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4EE440)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EE3D0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_editCookie_TypeDefinitionIndex = 36520;

	class BrowserNative_Calltype_zfb_editCookie : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* a2, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_CookieAction a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_CookieAction))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* a2, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_CookieAction a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_CookieAction, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EDITCOOKIE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

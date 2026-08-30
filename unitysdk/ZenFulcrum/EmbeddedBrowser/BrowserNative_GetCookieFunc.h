#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NativeCookie; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8C1A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8C1D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8C190)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8C0A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_GetCookieFunc_TypeDefinitionIndex = 38084;

	class BrowserNative_GetCookieFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_GETCOOKIEFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

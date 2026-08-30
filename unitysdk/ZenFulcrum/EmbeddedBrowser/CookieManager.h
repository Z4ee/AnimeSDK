#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NativeCookie; }
namespace ZenFulcrum::EmbeddedBrowser { class Cookie; }
namespace ZenFulcrum::EmbeddedBrowser { class CookieManager_CookieFetch; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class IPromise_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_CB_GETCOOKIEFUNC_OFFSET UNITYSDK_OFFSET(0x1EF8EE00)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1EF8F330)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_GETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1EF8F0C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF73C10)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CookieManager_TypeDefinitionIndex = 38192;

	class CookieManager : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::CookieManager_CookieFetch** StaticGet_currentFetch()
		{
			return (::ZenFulcrum::EmbeddedBrowser::CookieManager_CookieFetch**)Il2CppClass::FromTypeDefinitionIndex(CookieManager_TypeDefinitionIndex)->GetStaticField(0x572E0);
		}
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10

		::System::Void _ctor(::ZenFulcrum::EmbeddedBrowser::Browser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER__CTOR_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise_1<::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::Cookie*>*>* GetCookies()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise_1<::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::Cookie*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_GETCOOKIES_OFFSET))(this);
		}

		static ::System::Void CB_GetCookieFunc(::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* a1)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_CB_GETCOOKIEFUNC_OFFSET))(a1);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_CLEARALL_OFFSET))(this);
		}
	};
}

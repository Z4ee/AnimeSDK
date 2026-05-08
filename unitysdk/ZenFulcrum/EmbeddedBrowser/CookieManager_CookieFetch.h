#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_GetCookieFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class Cookie; }
namespace ZenFulcrum::EmbeddedBrowser { class CookieManager; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class Promise_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_COOKIEFETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F4320)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CookieManager_CookieFetch_TypeDefinitionIndex = 31120;

	class CookieManager_CookieFetch : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::CookieManager* manager; // 0x10
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::Cookie*>* result; // 0x18
		::ZenFulcrum::EmbeddedBrowser::Promise_1<::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::Cookie*>*>* promise; // 0x20
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_GetCookieFunc* nativeCB; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER_COOKIEFETCH__CTOR_OFFSET))(this);
		}
	};
}

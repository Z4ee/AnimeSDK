#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NativeCookie; }
namespace ZenFulcrum::EmbeddedBrowser { class CookieManager; }

#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE_COPY_1_OFFSET UNITYSDK_OFFSET(0x1FABC3E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE_COPY_OFFSET UNITYSDK_OFFSET(0x1FABC090)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE_DELETE_OFFSET UNITYSDK_OFFSET(0x1FABC240)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE_INIT_OFFSET UNITYSDK_OFFSET(0x1FABBF90)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FABC2F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FABC5C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FABC000)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FABBFA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Cookie_TypeDefinitionIndex = 33303;

	class Cookie : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_dateRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x28900);
		}
		::System::String* name; // 0x10
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* original; // 0x18
		::System::String* path; // 0x20
		::System::String* value; // 0x28
		::ZenFulcrum::EmbeddedBrowser::CookieManager* cookies; // 0x30
		::System::String* domain; // 0x38
		::System::Nullable_1<::System::DateTime> expires; // 0x40
		::System::Boolean httpOnly; // 0x50
		::System::Boolean secure; // 0x51
		::System::DateTime lastAccess; // 0x58
		::System::DateTime creation; // 0x60

		::System::Void _ctor(::ZenFulcrum::EmbeddedBrowser::CookieManager* cookies)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::CookieManager*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE__CTOR_OFFSET))(this, cookies);
		}

		::System::Void _ctor_1(::ZenFulcrum::EmbeddedBrowser::CookieManager* cookies, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* cookie)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::CookieManager*, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE__CTOR_1_OFFSET))(this, cookies, cookie);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE__CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE_INIT_OFFSET))();
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE_DELETE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE_UPDATE_OFFSET))(this);
		}

		static ::System::Void Copy(::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* src, ::ZenFulcrum::EmbeddedBrowser::Cookie* dest)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*, ::ZenFulcrum::EmbeddedBrowser::Cookie*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE_COPY_OFFSET))(src, dest);
		}

		static ::System::Void Copy_1(::ZenFulcrum::EmbeddedBrowser::Cookie* src, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie* dest)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::Cookie*, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NativeCookie*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE_COPY_1_OFFSET))(src, dest);
		}
	};
}

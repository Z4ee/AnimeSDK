#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_GetCookieFunc; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CookieManager___O_TypeDefinitionIndex = 36553;

	class CookieManager___O : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_GetCookieFunc** StaticGet__0___CB_GetCookieFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_GetCookieFunc**)Il2CppClass::FromTypeDefinitionIndex(CookieManager___O_TypeDefinitionIndex)->GetStaticField(0x65540);
		}
	};
}

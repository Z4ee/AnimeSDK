#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ZenFulcrum::EmbeddedBrowser { class Cookie; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class Promise_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER___C__DISPLAYCLASS5_0__CB_GETCOOKIEFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x1F0DF910)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0DF900)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CookieManager___c__DisplayClass5_0_TypeDefinitionIndex = 33307;

	class CookieManager___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::Cookie*>* result; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Promise_1<::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::Cookie*>*>* promise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _CB_GetCookieFunc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIEMANAGER___C__DISPLAYCLASS5_0__CB_GETCOOKIEFUNC_B__0_OFFSET))(this);
		}
	};
}

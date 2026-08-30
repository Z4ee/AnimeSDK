#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/RejectHandler.h"

namespace System { class Exception; }
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA2F40)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS32_0__INVOKEREJECTHANDLERS_B__0_OFFSET UNITYSDK_OFFSET(0x1EFA4C90)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass32_0_TypeDefinitionIndex = 38252;

	class Promise___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Exception* ex; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Promise* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _InvokeRejectHandlers_b__0(::ZenFulcrum::EmbeddedBrowser::RejectHandler a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::RejectHandler))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS32_0__INVOKEREJECTHANDLERS_B__0_OFFSET))(this, a1);
		}
	};
}

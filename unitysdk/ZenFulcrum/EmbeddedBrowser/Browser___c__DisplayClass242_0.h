#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS242_0__CB_FORWARDJSCALLFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x18C674E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS242_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C64350)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass242_0_TypeDefinitionIndex = 30399;

	class Browser___c__DisplayClass242_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10
		::System::String* data; // 0x18
		::System::Int32 callbackId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS242_0__CTOR_OFFSET))(this);
		}

		::System::Void _CB_ForwardJSCallFunc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS242_0__CB_FORWARDJSCALLFUNC_B__0_OFFSET))(this);
		}
	};
}

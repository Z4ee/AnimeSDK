#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS176_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C3D50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS176_0__LOADURL_B__0_OFFSET UNITYSDK_OFFSET(0x1C2C3D60)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass176_0_TypeDefinitionIndex = 30972;

	class Browser___c__DisplayClass176_0 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x18
		::System::Boolean force; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS176_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadURL_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS176_0__LOADURL_B__0_OFFSET))(this);
		}
	};
}

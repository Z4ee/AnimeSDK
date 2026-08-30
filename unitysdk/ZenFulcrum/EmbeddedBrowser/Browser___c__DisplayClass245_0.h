#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS245_0__CB_SHOWCONTEXTMENUFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x1C7D8480)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS245_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D5210)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass245_0_TypeDefinitionIndex = 38063;

	class Browser___c__DisplayClass245_0 : public ::System::Object
	{
	public:
		::System::String* json; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x18
		::System::Int32 x; // 0x20
		::System::Int32 y; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS245_0__CTOR_OFFSET))(this);
		}

		::System::Void _CB_ShowContextMenuFunc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS245_0__CB_SHOWCONTEXTMENUFUNC_B__0_OFFSET))(this);
		}
	};
}

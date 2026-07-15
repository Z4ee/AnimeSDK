#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS158_1__AWAKE_B__6_OFFSET UNITYSDK_OFFSET(0x1AB43B40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS158_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB43500)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass158_1_TypeDefinitionIndex = 37183;

	class Browser___c__DisplayClass158_1 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::JSONNode* err; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS158_1__CTOR_OFFSET))(this);
		}

		::System::Void _Awake_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS158_1__AWAKE_B__6_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser_JSCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS226_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F643160)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS226_0__REGISTERFUNCTION_B__0_OFFSET UNITYSDK_OFFSET(0x1F647A20)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass226_0_TypeDefinitionIndex = 39354;

	class Browser___c__DisplayClass226_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS226_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterFunction_b__0(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS226_0__REGISTERFUNCTION_B__0_OFFSET))(this, a1, a2);
		}
	};
}

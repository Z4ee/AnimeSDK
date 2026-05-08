#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser_JSCallback; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS224_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C418E60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS224_0__REGISTERFUNCTIONDIRECTLY_B__0_OFFSET UNITYSDK_OFFSET(0x1C418E70)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass224_0_TypeDefinitionIndex = 30985;

	class Browser___c__DisplayClass224_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS224_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterFunctionDirectly_b__0(::ZenFulcrum::EmbeddedBrowser::JSONNode* value, ::System::Boolean error)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS224_0__REGISTERFUNCTIONDIRECTLY_B__0_OFFSET))(this, value, error);
		}
	};
}

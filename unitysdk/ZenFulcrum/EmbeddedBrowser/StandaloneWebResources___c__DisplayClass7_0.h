#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/StandaloneWebResources_IndexEntry.h"

namespace ZenFulcrum::EmbeddedBrowser { class StandaloneWebResources; }

#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONEWEBRESOURCES___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CCBA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONEWEBRESOURCES___C__DISPLAYCLASS7_0__HANDLEREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1A6CD3E0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int StandaloneWebResources___c__DisplayClass7_0_TypeDefinitionIndex = 36327;

	class StandaloneWebResources___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::StandaloneWebResources_IndexEntry entry; // 0x10
		::ZenFulcrum::EmbeddedBrowser::StandaloneWebResources* __4__this; // 0x28
		::System::Int32 id; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONEWEBRESOURCES___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _HandleRequest_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONEWEBRESOURCES___C__DISPLAYCLASS7_0__HANDLEREQUEST_B__0_OFFSET))(this);
		}
	};
}

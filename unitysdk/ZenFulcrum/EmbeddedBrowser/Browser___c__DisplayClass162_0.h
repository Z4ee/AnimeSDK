#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS162_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53D390)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass162_0_TypeDefinitionIndex = 30969;

	class Browser___c__DisplayClass162_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS162_0__CTOR_OFFSET))(this);
		}
	};
}

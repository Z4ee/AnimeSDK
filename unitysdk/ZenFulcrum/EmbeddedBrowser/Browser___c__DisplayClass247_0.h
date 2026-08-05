#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS247_0__CB_READYFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x1FBF4D30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS247_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF4D20)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass247_0_TypeDefinitionIndex = 33178;

	class Browser___c__DisplayClass247_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10
		::System::Int32 browserId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS247_0__CTOR_OFFSET))(this);
		}

		::System::Void _CB_ReadyFunc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS247_0__CB_READYFUNC_B__0_OFFSET))(this);
		}
	};
}

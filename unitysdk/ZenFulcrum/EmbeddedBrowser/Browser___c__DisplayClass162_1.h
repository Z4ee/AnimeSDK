#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_ReadyFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser___c__DisplayClass162_0; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS162_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E760B40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS162_1__WHENREADY_B__0_OFFSET UNITYSDK_OFFSET(0x1E760B50)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass162_1_TypeDefinitionIndex = 32521;

	class Browser___c__DisplayClass162_1 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser___c__DisplayClass162_0* CS___8__locals1; // 0x10
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc* func; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS162_1__CTOR_OFFSET))(this);
		}

		::System::Void _WhenReady_b__0(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS162_1__WHENREADY_B__0_OFFSET))(this, id);
		}
	};
}

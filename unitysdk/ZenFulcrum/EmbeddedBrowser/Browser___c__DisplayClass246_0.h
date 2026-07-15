#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS246_0__CB_CONSOLEFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x1AB456A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS246_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB42100)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass246_0_TypeDefinitionIndex = 37205;

	class Browser___c__DisplayClass246_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10
		::System::String* source; // 0x18
		::System::String* message; // 0x20
		::System::Int32 line; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS246_0__CTOR_OFFSET))(this);
		}

		::System::Void _CB_ConsoleFunc_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS246_0__CB_CONSOLEFUNC_B__0_OFFSET))(this);
		}
	};
}

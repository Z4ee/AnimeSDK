#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB48B30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS36_0__LOGTHREADSAFE_B__0_OFFSET UNITYSDK_OFFSET(0x1AB4B890)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative___c__DisplayClass36_0_TypeDefinitionIndex = 37307;

	class BrowserNative___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::String* message; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _LogThreadSafe_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS36_0__LOGTHREADSAFE_B__0_OFFSET))(this);
		}
	};
}

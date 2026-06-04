#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNAVSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E4A30)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNavState_TypeDefinitionIndex = 36633;

	class BrowserNavState : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::Boolean canGoForward; // 0x18
		::System::Boolean loading; // 0x19
		::System::Boolean canGoBack; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNAVSTATE__CTOR_OFFSET))(this);
		}
	};
}

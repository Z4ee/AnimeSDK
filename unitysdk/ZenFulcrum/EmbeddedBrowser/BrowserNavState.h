#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNAVSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D6080)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNavState_TypeDefinitionIndex = 38274;

	class BrowserNavState : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::Boolean canGoBack; // 0x18
		::System::Boolean loading; // 0x19
		::System::Boolean canGoForward; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNAVSTATE__CTOR_OFFSET))(this);
		}
	};
}

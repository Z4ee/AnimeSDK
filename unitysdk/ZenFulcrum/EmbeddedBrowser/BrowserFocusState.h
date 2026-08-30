#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERFOCUSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF7E520)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserFocusState_TypeDefinitionIndex = 38273;

	class BrowserFocusState : public ::System::Object
	{
	public:
		::System::String* focusedTagName; // 0x10
		::System::Boolean hasMouseFocus; // 0x18
		::System::Boolean hasKeyboardFocus; // 0x19
		::System::Boolean focusedNodeEditable; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERFOCUSSTATE__CTOR_OFFSET))(this);
		}
	};
}

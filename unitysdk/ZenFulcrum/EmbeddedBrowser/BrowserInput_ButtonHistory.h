#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ZenFulcrum::EmbeddedBrowser { class IBrowserUI; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_BUTTONHISTORY_BUTTONPRESS_OFFSET UNITYSDK_OFFSET(0x1A6A6720)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_BUTTONHISTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A59C0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserInput_ButtonHistory_TypeDefinitionIndex = 36132;

	class BrowserInput_ButtonHistory : public ::System::Object
	{
	public:
		::System::Int32 repeatCount; // 0x10
		::UnityEngine::Vector3 lastPosition; // 0x14
		::System::Single lastPressTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_BUTTONHISTORY__CTOR_OFFSET))(this);
		}

		::System::Void ButtonPress(::UnityEngine::Vector3 mousePos, ::ZenFulcrum::EmbeddedBrowser::IBrowserUI* uiHandler, ::UnityEngine::Vector2 browserSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::ZenFulcrum::EmbeddedBrowser::IBrowserUI*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_BUTTONHISTORY_BUTTONPRESS_OFFSET))(this, mousePos, uiHandler, browserSize);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ZenFulcrum::EmbeddedBrowser { class IBrowserUI; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_BUTTONHISTORY_BUTTONPRESS_OFFSET UNITYSDK_OFFSET(0x1E841570)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_BUTTONHISTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8417B0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserInput_ButtonHistory_TypeDefinitionIndex = 32551;

	class BrowserInput_ButtonHistory : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 lastPosition; // 0x10
		::System::Single lastPressTime; // 0x1C
		::System::Int32 repeatCount; // 0x20

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

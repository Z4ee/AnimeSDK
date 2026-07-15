#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ZenFulcrum::EmbeddedBrowser { class IBrowserUI; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_BUTTONHISTORY_BUTTONPRESS_OFFSET UNITYSDK_OFFSET(0x1AB47F00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_BUTTONHISTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB472F0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserInput_ButtonHistory_TypeDefinitionIndex = 37214;

	class BrowserInput_ButtonHistory : public ::System::Object
	{
	public:
		::System::Single lastPressTime; // 0x10
		::UnityEngine::Vector3 lastPosition; // 0x14
		::System::Int32 repeatCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_BUTTONHISTORY__CTOR_OFFSET))(this);
		}

		::System::Void ButtonPress(::UnityEngine::Vector3 a1, ::ZenFulcrum::EmbeddedBrowser::IBrowserUI* a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::ZenFulcrum::EmbeddedBrowser::IBrowserUI*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_BUTTONHISTORY_BUTTONPRESS_OFFSET))(this, a1, a2, a3);
		}
	};
}

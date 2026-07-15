#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/MouseButton.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Event; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserInput_ButtonHistory; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_FEEDSCROLLING_OFFSET UNITYSDK_OFFSET(0x1AB47C00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_FIRECOMMANDS_OFFSET UNITYSDK_OFFSET(0x1AB48610)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEFOCUSLOSS_OFFSET UNITYSDK_OFFSET(0x1AB41760)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x1AB40B10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEKEYINPUT_1_OFFSET UNITYSDK_OFFSET(0x1AB48240)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEKEYINPUT_OFFSET UNITYSDK_OFFSET(0x1AB47A30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEMOUSEINPUT_OFFSET UNITYSDK_OFFSET(0x1AB47300)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB386E0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserInput_TypeDefinitionIndex = 37213;

	class BrowserInput : public ::System::Object
	{
	public:
		// static const ::System::Single maxScrollEventRate; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Event*>* extraEventsToInject; // 0x10
		::System::Collections::Generic::HashSet_1<::UnityEngine::KeyCode>* keysToReleaseOnFocusLoss; // 0x18
		::ZenFulcrum::EmbeddedBrowser::BrowserInput_ButtonHistory* leftClickHistory; // 0x20
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x28
		::System::Boolean kbWasFocused; // 0x30
		::System::Boolean mouseWasFocused; // 0x31
		::UnityEngine::Vector2 accumulatedScroll; // 0x34
		::ZenFulcrum::EmbeddedBrowser::MouseButton prevButtons; // 0x3C
		::System::Single lastScrollEvent; // 0x40
		::UnityEngine::Vector2 prevPos; // 0x44

		::System::Void _ctor(::ZenFulcrum::EmbeddedBrowser::Browser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT__CTOR_OFFSET))(this, a1);
		}

		::System::Void HandleInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEINPUT_OFFSET))(this);
		}

		::System::Void HandleMouseInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEMOUSEINPUT_OFFSET))(this);
		}

		::System::Void FeedScrolling(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_FEEDSCROLLING_OFFSET))(this, a1, a2);
		}

		::System::Void HandleKeyInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEKEYINPUT_OFFSET))(this);
		}

		::System::Void HandleKeyInput_1(::System::Collections::Generic::List_1<::UnityEngine::Event*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Event*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEKEYINPUT_1_OFFSET))(this, a1);
		}

		::System::Void HandleFocusLoss()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEFOCUSLOSS_OFFSET))(this);
		}

		::System::Void FireCommands(::UnityEngine::Event* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_FIRECOMMANDS_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserCursor; }

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FB3A7B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_SETUP_OFFSET UNITYSDK_OFFSET(0x1FB3A870)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB3A8C0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererBase_TypeDefinitionIndex = 33283;

	class CursorRendererBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* cursor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_ONENABLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Setup()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_SETUP_OFFSET))(this);
		}
	};
}

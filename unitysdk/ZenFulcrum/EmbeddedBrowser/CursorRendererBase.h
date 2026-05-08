#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserCursor; }

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C419F10)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_SETUP_OFFSET UNITYSDK_OFFSET(0x1C419FD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C41A020)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererBase_TypeDefinitionIndex = 31097;

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

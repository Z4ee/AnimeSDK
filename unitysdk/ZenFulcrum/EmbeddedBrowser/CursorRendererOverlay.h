#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/CursorRendererBase.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY_CURSORCHANGE_OFFSET UNITYSDK_OFFSET(0x18C7D870)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY_ONGUI_OFFSET UNITYSDK_OFFSET(0x18C7D880)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7DAE0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererOverlay_TypeDefinitionIndex = 30512;

	class CursorRendererOverlay : public ::ZenFulcrum::EmbeddedBrowser::CursorRendererBase
	{
	public:
		::System::Single scale; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY__CTOR_OFFSET))(this);
		}

		::System::Void CursorChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY_CURSORCHANGE_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY_ONGUI_OFFSET))(this);
		}
	};
}

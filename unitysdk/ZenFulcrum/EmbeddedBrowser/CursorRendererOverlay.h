#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/CursorRendererBase.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY_CURSORCHANGE_OFFSET UNITYSDK_OFFSET(0x1C393560)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY_ONGUI_OFFSET UNITYSDK_OFFSET(0x1C393570)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3938A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererOverlay_TypeDefinitionIndex = 31100;

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

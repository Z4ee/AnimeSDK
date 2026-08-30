#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/CursorRendererBase.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROS_CURSORCHANGE_OFFSET UNITYSDK_OFFSET(0x1EF8F990)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8FB90)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererOS_TypeDefinitionIndex = 38172;

	class CursorRendererOS : public ::ZenFulcrum::EmbeddedBrowser::CursorRendererBase
	{
	public:
		::System::Boolean cursorNormallyVisible; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROS__CTOR_OFFSET))(this);
		}

		::System::Void CursorChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROS_CURSORCHANGE_OFFSET))(this);
		}
	};
}

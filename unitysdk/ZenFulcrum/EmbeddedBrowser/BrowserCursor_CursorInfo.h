#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_CURSORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB46620)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserCursor_CursorInfo_TypeDefinitionIndex = 37211;

	class BrowserCursor_CursorInfo : public ::System::Object
	{
	public:
		::System::Int32 atlasOffset; // 0x10
		::UnityEngine::Vector2 hotspot; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_CURSORINFO__CTOR_OFFSET))(this);
		}
	};
}

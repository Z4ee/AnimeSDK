#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_LinkInfo_TypeDefinitionIndex = 75458;

	struct alignas(8) NAP_LinkInfo
	{
		::System::String* linkId; // 0x10
		::System::Int32 firstGlyphIndex; // 0x18
		::System::Int32 lastGlyphIndex; // 0x1C
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_LineInfo_TypeDefinitionIndex = 65134;

	struct alignas(4) NAP_LineInfo
	{
		::System::Single ascender; // 0x10
		::System::Single baseline; // 0x14
		::System::Single descender; // 0x18
	};
}

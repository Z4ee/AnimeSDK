#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_QuadInfo_TypeDefinitionIndex = 62809;

	struct alignas(4) NAP_QuadInfo
	{
		::UnityEngine::Vector2 topLeft; // 0x10
		::UnityEngine::Vector2 bottomRight; // 0x18
		::System::Int32 charIndex; // 0x20
		::System::Int32 glyphIndex; // 0x24
	};
}

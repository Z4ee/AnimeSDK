#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TextGeneratorUtils_GlyphBoundsResult_TypeDefinitionIndex = 72739;

	struct alignas(4) TextGeneratorUtils_GlyphBoundsResult
	{
		::UnityEngine::Vector2 topLeft; // 0x10
		::UnityEngine::Vector2 topRight; // 0x18
		::UnityEngine::Vector2 bottomRight; // 0x20
		::UnityEngine::Vector2 bottomLeft; // 0x28
		::UnityEngine::Color32 underlineColor; // 0x30
	};
}

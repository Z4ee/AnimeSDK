#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TextGeneratorUtils_GlyphBoundsContext_TypeDefinitionIndex = 72740;

	struct alignas(8) TextGeneratorUtils_GlyphBoundsContext
	{
		::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* genVerts; // 0x10
		::System::Single invPpu; // 0x18
		::UnityEngine::Vector2 roundingOffset; // 0x1C
		::System::Single yDelta; // 0x24
		::System::Single iconHeightPx; // 0x28
		::System::Single charHeightPx; // 0x2C
	};
}

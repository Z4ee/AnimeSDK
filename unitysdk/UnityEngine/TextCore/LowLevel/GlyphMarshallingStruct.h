#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/TextCore/GlyphMetrics.h"
#include "unitysdk/UnityEngine/TextCore/GlyphRect.h"

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphMarshallingStruct_TypeDefinitionIndex = 33141;

	struct alignas(4) GlyphMarshallingStruct
	{
		::System::UInt32 index; // 0x10
		::UnityEngine::TextCore::GlyphMetrics metrics; // 0x14
		::UnityEngine::TextCore::GlyphRect glyphRect; // 0x28
		::System::Single scale; // 0x38
		::System::Int32 atlasIndex; // 0x3C
	};
}

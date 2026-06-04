#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/TextCore/GlyphMetrics.h"
#include "unitysdk/UnityEngine/TextCore/GlyphRect.h"

namespace UnityEngine::TextCore { class Glyph; }

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHMARSHALLINGSTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x3899470)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphMarshallingStruct_TypeDefinitionIndex = 5829;

	struct alignas(4) GlyphMarshallingStruct
	{
		::System::UInt32 index; // 0x10
		::UnityEngine::TextCore::GlyphMetrics metrics; // 0x14
		::UnityEngine::TextCore::GlyphRect glyphRect; // 0x28
		::System::Single scale; // 0x38
		::System::Int32 atlasIndex; // 0x3C

		::System::Void _ctor(::UnityEngine::TextCore::Glyph* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHMARSHALLINGSTRUCT__CTOR_OFFSET))(this, a1);
		}
	};
}

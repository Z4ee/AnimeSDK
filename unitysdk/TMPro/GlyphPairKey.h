#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro { class TMP_GlyphPairAdjustmentRecord; }

#define TMPRO_GLYPHPAIRKEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA7A7F0)
#define TMPRO_GLYPHPAIRKEY__CTOR_OFFSET UNITYSDK_OFFSET(0xA7A7D0)

namespace TMPro
{
	inline static constexpr unsigned int GlyphPairKey_TypeDefinitionIndex = 39150;

	struct alignas(4) GlyphPairKey
	{
		::System::UInt32 firstGlyphIndex; // 0x10
		::System::UInt32 secondGlyphIndex; // 0x14
		::System::UInt32 key; // 0x18

		::System::Void _ctor(::System::UInt32 firstGlyphIndex, ::System::UInt32 secondGlyphIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_GLYPHPAIRKEY__CTOR_OFFSET))(this, firstGlyphIndex, secondGlyphIndex);
		}

		::System::Void _ctor_1(::TMPro::TMP_GlyphPairAdjustmentRecord* record)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_GlyphPairAdjustmentRecord*))((::PBYTE)hIl2Cpp + TMPRO_GLYPHPAIRKEY__CTOR_1_OFFSET))(this, record);
		}
	};
}

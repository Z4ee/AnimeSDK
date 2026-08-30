#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro { class TMP_GlyphPairAdjustmentRecord; }

#define TMPRO_GLYPHPAIRKEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BB2040)
#define TMPRO_GLYPHPAIRKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x3BB2020)

namespace TMPro
{
	inline static constexpr unsigned int GlyphPairKey_TypeDefinitionIndex = 43400;

	struct alignas(4) GlyphPairKey
	{
		::System::UInt32 firstGlyphIndex; // 0x10
		::System::UInt32 secondGlyphIndex; // 0x14
		::System::UInt32 key; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_GLYPHPAIRKEY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::TMPro::TMP_GlyphPairAdjustmentRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_GlyphPairAdjustmentRecord*))((::PBYTE)hIl2Cpp + TMPRO_GLYPHPAIRKEY__CTOR_1_OFFSET))(this, a1);
		}
	};
}

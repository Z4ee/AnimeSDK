#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define TMPRO_GLYPHVALUERECORD_LEGACY_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E63BED0)
#define TMPRO_GLYPHVALUERECORD_LEGACY__CTOR_OFFSET UNITYSDK_OFFSET(0x31EB80)

namespace TMPro
{
	inline static constexpr unsigned int GlyphValueRecord_Legacy_TypeDefinitionIndex = 39801;

	struct alignas(4) GlyphValueRecord_Legacy
	{
		::System::Single xPlacement; // 0x10
		::System::Single yPlacement; // 0x14
		::System::Single xAdvance; // 0x18
		::System::Single yAdvance; // 0x1C

		/*
		::System::Void _ctor(::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord))((::PBYTE)hIl2Cpp + TMPRO_GLYPHVALUERECORD_LEGACY__CTOR_OFFSET))(this, valueRecord);
		}
		*/

		static ::TMPro::GlyphValueRecord_Legacy op_Addition(::TMPro::GlyphValueRecord_Legacy a, ::TMPro::GlyphValueRecord_Legacy b)
		{
			return ((::TMPro::GlyphValueRecord_Legacy(*)(::TMPro::GlyphValueRecord_Legacy, ::TMPro::GlyphValueRecord_Legacy))((::PBYTE)hIl2Cpp + TMPRO_GLYPHVALUERECORD_LEGACY_OP_ADDITION_OFFSET))(a, b);
		}
	};
}

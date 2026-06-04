#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/TMP_GlyphValueRecord.h"

#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET UNITYSDK_OFFSET(0x2D2CE60)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHVALUERECORD_OFFSET UNITYSDK_OFFSET(0x387ABF0)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x387AC00)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x2D2CE40)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphAdjustmentRecord_TypeDefinitionIndex = 40972;

	struct alignas(4) TMP_GlyphAdjustmentRecord
	{
		::System::UInt32 m_GlyphIndex; // 0x10
		::TMPro::TMP_GlyphValueRecord m_GlyphValueRecord; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::TMPro::TMP_GlyphValueRecord a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_GlyphValueRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::System::Void _ctor_1(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_1_OFFSET))(this, a1);
		}
		*/

		::System::UInt32 get_glyphIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET))(this);
		}

		::System::Void set_glyphIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHINDEX_OFFSET))(this, a1);
		}

		::TMPro::TMP_GlyphValueRecord get_glyphValueRecord()
		{
			return ((::TMPro::TMP_GlyphValueRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET))(this);
		}

		::System::Void set_glyphValueRecord(::TMPro::TMP_GlyphValueRecord a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_GlyphValueRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHVALUERECORD_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/TMP_GlyphValueRecord.h"

#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET UNITYSDK_OFFSET(0x3E4280)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHVALUERECORD_OFFSET UNITYSDK_OFFSET(0xA5D720)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7CE800)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x3E4260)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphAdjustmentRecord_TypeDefinitionIndex = 39148;

	struct alignas(4) TMP_GlyphAdjustmentRecord
	{
		::System::UInt32 m_GlyphIndex; // 0x10
		::TMPro::TMP_GlyphValueRecord m_GlyphValueRecord; // 0x14

		::System::Void _ctor(::System::UInt32 glyphIndex, ::TMPro::TMP_GlyphValueRecord glyphValueRecord)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_GlyphValueRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_OFFSET))(this, glyphIndex, glyphValueRecord);
		}

		/*
		::System::Void _ctor_1(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord adjustmentRecord)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_1_OFFSET))(this, adjustmentRecord);
		}
		*/

		::System::UInt32 get_glyphIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET))(this);
		}

		::System::Void set_glyphIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHINDEX_OFFSET))(this, value);
		}

		::TMPro::TMP_GlyphValueRecord get_glyphValueRecord()
		{
			return ((::TMPro::TMP_GlyphValueRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET))(this);
		}

		::System::Void set_glyphValueRecord(::TMPro::TMP_GlyphValueRecord value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_GlyphValueRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHVALUERECORD_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/TMP_GlyphValueRecord.h"

#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x19050)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET UNITYSDK_OFFSET(0x3AE8F80)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x18EB0)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHVALUERECORD_OFFSET UNITYSDK_OFFSET(0x3AE8F90)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3AE8FA0)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x3AE88D0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphAdjustmentRecord_TypeDefinitionIndex = 43398;

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

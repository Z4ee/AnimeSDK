#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/FontFeatureLookupFlags.h"
#include "unitysdk/TMPro/TMP_GlyphAdjustmentRecord.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphPairAdjustmentRecord.h"

#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FEATURELOOKUPFLAGS_OFFSET UNITYSDK_OFFSET(0x1FA46E70)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x1FA46E10)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x1FA46E40)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_FEATURELOOKUPFLAGS_OFFSET UNITYSDK_OFFSET(0x1FA46E80)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_FIRSTADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x1FA46E30)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_SECONDADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x1FA46E60)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA46EC0)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA46E90)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphPairAdjustmentRecord_TypeDefinitionIndex = 39815;

	class TMP_GlyphPairAdjustmentRecord : public ::System::Object
	{
	public:
		::TMPro::TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord; // 0x10
		::TMPro::TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord; // 0x24
		::TMPro::FontFeatureLookupFlags m_FeatureLookupFlags; // 0x38

		::System::Void _ctor(::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_GlyphAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD__CTOR_OFFSET))(this, firstAdjustmentRecord, secondAdjustmentRecord);
		}

		::System::Void _ctor_1(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD__CTOR_1_OFFSET))(this, glyphPairAdjustmentRecord);
		}

		::TMPro::TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord()
		{
			return ((::TMPro::TMP_GlyphAdjustmentRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET))(this);
		}

		::System::Void set_firstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_GlyphAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_FIRSTADJUSTMENTRECORD_OFFSET))(this, value);
		}

		::TMPro::TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord()
		{
			return ((::TMPro::TMP_GlyphAdjustmentRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET))(this);
		}

		::System::Void set_secondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_GlyphAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_SECONDADJUSTMENTRECORD_OFFSET))(this, value);
		}

		::TMPro::FontFeatureLookupFlags get_featureLookupFlags()
		{
			return ((::TMPro::FontFeatureLookupFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FEATURELOOKUPFLAGS_OFFSET))(this);
		}

		::System::Void set_featureLookupFlags(::TMPro::FontFeatureLookupFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::FontFeatureLookupFlags))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_FEATURELOOKUPFLAGS_OFFSET))(this, value);
		}
	};
}

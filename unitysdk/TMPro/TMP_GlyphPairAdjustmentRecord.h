#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/FontFeatureLookupFlags.h"
#include "unitysdk/TMPro/TMP_GlyphAdjustmentRecord.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphPairAdjustmentRecord.h"

#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FEATURELOOKUPFLAGS_OFFSET UNITYSDK_OFFSET(0x18B41840)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x18B417E0)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x18B41810)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_FEATURELOOKUPFLAGS_OFFSET UNITYSDK_OFFSET(0x18B41850)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_FIRSTADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x18B41800)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_SECONDADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x18B41830)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B3A770)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3F980)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphPairAdjustmentRecord_TypeDefinitionIndex = 43399;

	class TMP_GlyphPairAdjustmentRecord : public ::System::Object
	{
	public:
		::TMPro::TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord; // 0x10
		::TMPro::TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord; // 0x24
		::TMPro::FontFeatureLookupFlags m_FeatureLookupFlags; // 0x38

		::System::Void _ctor(::TMPro::TMP_GlyphAdjustmentRecord a1, ::TMPro::TMP_GlyphAdjustmentRecord a2)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_GlyphAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD__CTOR_1_OFFSET))(this, a1);
		}

		::TMPro::TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord()
		{
			return ((::TMPro::TMP_GlyphAdjustmentRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET))(this);
		}

		::System::Void set_firstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_GlyphAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_FIRSTADJUSTMENTRECORD_OFFSET))(this, a1);
		}

		::TMPro::TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord()
		{
			return ((::TMPro::TMP_GlyphAdjustmentRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET))(this);
		}

		::System::Void set_secondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_GlyphAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_SECONDADJUSTMENTRECORD_OFFSET))(this, a1);
		}

		::TMPro::FontFeatureLookupFlags get_featureLookupFlags()
		{
			return ((::TMPro::FontFeatureLookupFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FEATURELOOKUPFLAGS_OFFSET))(this);
		}

		::System::Void set_featureLookupFlags(::TMPro::FontFeatureLookupFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::FontFeatureLookupFlags))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_FEATURELOOKUPFLAGS_OFFSET))(this, a1);
		}
	};
}

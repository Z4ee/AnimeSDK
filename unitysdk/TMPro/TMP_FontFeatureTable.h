#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_GlyphPairAdjustmentRecord; }

#define TMPRO_TMP_FONTFEATURETABLE_GET_GLYPHPAIRADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0x18920500)
#define TMPRO_TMP_FONTFEATURETABLE_SET_GLYPHPAIRADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0x18920510)
#define TMPRO_TMP_FONTFEATURETABLE_SORTGLYPHPAIRADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0x18913CF0)
#define TMPRO_TMP_FONTFEATURETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18919A30)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontFeatureTable_TypeDefinitionIndex = 34322;

	class TMP_FontFeatureTable : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>* m_GlyphPairAdjustmentRecords; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_GlyphPairAdjustmentRecord*>* m_GlyphPairAdjustmentRecordLookupDictionary; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>* get_glyphPairAdjustmentRecords()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE_GET_GLYPHPAIRADJUSTMENTRECORDS_OFFSET))(this);
		}

		::System::Void set_glyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE_SET_GLYPHPAIRADJUSTMENTRECORDS_OFFSET))(this, value);
		}

		::System::Void SortGlyphPairAdjustmentRecords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE_SORTGLYPHPAIRADJUSTMENTRECORDS_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace TMPro { class TMP_GlyphPairAdjustmentRecord; }

#define TMPRO_TMP_FONTFEATURETABLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E879940)
#define TMPRO_TMP_FONTFEATURETABLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E879980)
#define TMPRO_TMP_FONTFEATURETABLE___C__SORTGLYPHPAIRADJUSTMENTRECORDS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1E879990)
#define TMPRO_TMP_FONTFEATURETABLE___C__SORTGLYPHPAIRADJUSTMENTRECORDS_B__6_1_OFFSET UNITYSDK_OFFSET(0x1E8799B0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontFeatureTable___c_TypeDefinitionIndex = 39145;

	class TMP_FontFeatureTable___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontFeatureTable___c_TypeDefinitionIndex)->GetStaticField(0x2AE50);
		}
		static ::TMPro::TMP_FontFeatureTable___c** StaticGet___9()
		{
			return (::TMPro::TMP_FontFeatureTable___c**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontFeatureTable___c_TypeDefinitionIndex)->GetStaticField(0x2AE58);
		}
		static ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, ::System::UInt32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontFeatureTable___c_TypeDefinitionIndex)->GetStaticField(0x2AE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SortGlyphPairAdjustmentRecords_b__6_0(::TMPro::TMP_GlyphPairAdjustmentRecord* s)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_GlyphPairAdjustmentRecord*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE___C__SORTGLYPHPAIRADJUSTMENTRECORDS_B__6_0_OFFSET))(this, s);
		}

		::System::UInt32 _SortGlyphPairAdjustmentRecords_b__6_1(::TMPro::TMP_GlyphPairAdjustmentRecord* s)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_GlyphPairAdjustmentRecord*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE___C__SORTGLYPHPAIRADJUSTMENTRECORDS_B__6_1_OFFSET))(this, s);
		}
	};
}

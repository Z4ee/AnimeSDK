#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class KerningPair; }

#define TMPRO_KERNINGTABLE___C__DISPLAYCLASS4_0__ADDGLYPHPAIRADJUSTMENTRECORD_B__0_OFFSET UNITYSDK_OFFSET(0x18B25350)
#define TMPRO_KERNINGTABLE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B24DB0)

namespace TMPro
{
	inline static constexpr unsigned int KerningTable___c__DisplayClass4_0_TypeDefinitionIndex = 43390;

	class KerningTable___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 first; // 0x10
		::System::UInt32 second; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddGlyphPairAdjustmentRecord_b__0(::TMPro::KerningPair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::KerningPair*))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__DISPLAYCLASS4_0__ADDGLYPHPAIRADJUSTMENTRECORD_B__0_OFFSET))(this, a1);
		}
	};
}

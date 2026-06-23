#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class KerningPair; }

#define TMPRO_KERNINGTABLE___C__DISPLAYCLASS3_0__ADDKERNINGPAIR_B__0_OFFSET UNITYSDK_OFFSET(0x1E8797C0)
#define TMPRO_KERNINGTABLE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8797B0)

namespace TMPro
{
	inline static constexpr unsigned int KerningTable___c__DisplayClass3_0_TypeDefinitionIndex = 39138;

	class KerningTable___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 first; // 0x10
		::System::UInt32 second; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddKerningPair_b__0(::TMPro::KerningPair* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::KerningPair*))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__DISPLAYCLASS3_0__ADDKERNINGPAIR_B__0_OFFSET))(this, item);
		}
	};
}

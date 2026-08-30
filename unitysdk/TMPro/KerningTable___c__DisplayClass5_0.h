#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class KerningPair; }

#define TMPRO_KERNINGTABLE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B24F30)
#define TMPRO_KERNINGTABLE___C__DISPLAYCLASS5_0__REMOVEKERNINGPAIR_B__0_OFFSET UNITYSDK_OFFSET(0x18B25380)

namespace TMPro
{
	inline static constexpr unsigned int KerningTable___c__DisplayClass5_0_TypeDefinitionIndex = 43391;

	class KerningTable___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Int32 left; // 0x10
		::System::Int32 right; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveKerningPair_b__0(::TMPro::KerningPair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::KerningPair*))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__DISPLAYCLASS5_0__REMOVEKERNINGPAIR_B__0_OFFSET))(this, a1);
		}
	};
}

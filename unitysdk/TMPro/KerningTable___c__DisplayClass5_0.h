#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class KerningPair; }

#define TMPRO_KERNINGTABLE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA416C0)
#define TMPRO_KERNINGTABLE___C__DISPLAYCLASS5_0__REMOVEKERNINGPAIR_B__0_OFFSET UNITYSDK_OFFSET(0x1FA416D0)

namespace TMPro
{
	inline static constexpr unsigned int KerningTable___c__DisplayClass5_0_TypeDefinitionIndex = 39806;

	class KerningTable___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Int32 right; // 0x10
		::System::Int32 left; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveKerningPair_b__0(::TMPro::KerningPair* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::KerningPair*))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__DISPLAYCLASS5_0__REMOVEKERNINGPAIR_B__0_OFFSET))(this, item);
		}
	};
}

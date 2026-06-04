#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/GlyphValueRecord_Legacy.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class KerningPair; }

#define TMPRO_KERNINGTABLE_ADDGLYPHPAIRADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x1B198E00)
#define TMPRO_KERNINGTABLE_ADDKERNINGPAIR_1_OFFSET UNITYSDK_OFFSET(0x1B198C40)
#define TMPRO_KERNINGTABLE_ADDKERNINGPAIR_OFFSET UNITYSDK_OFFSET(0x1B198A60)
#define TMPRO_KERNINGTABLE_REMOVEKERNINGPAIR_1_OFFSET UNITYSDK_OFFSET(0x1B199160)
#define TMPRO_KERNINGTABLE_REMOVEKERNINGPAIR_OFFSET UNITYSDK_OFFSET(0x1B198FE0)
#define TMPRO_KERNINGTABLE_SORTKERNINGPAIRS_OFFSET UNITYSDK_OFFSET(0x1B199200)
#define TMPRO_KERNINGTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B198A20)

namespace TMPro
{
	inline static constexpr unsigned int KerningTable_TypeDefinitionIndex = 40961;

	class KerningTable : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::TMPro::KerningPair*>* kerningPairs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE__CTOR_OFFSET))(this);
		}

		::System::Void AddKerningPair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_ADDKERNINGPAIR_OFFSET))(this);
		}

		::System::Int32 AddKerningPair_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_ADDKERNINGPAIR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 AddGlyphPairAdjustmentRecord(::System::UInt32 a1, ::TMPro::GlyphValueRecord_Legacy a2, ::System::UInt32 a3, ::TMPro::GlyphValueRecord_Legacy a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_ADDGLYPHPAIRADJUSTMENTRECORD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveKerningPair(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_REMOVEKERNINGPAIR_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveKerningPair_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_REMOVEKERNINGPAIR_1_OFFSET))(this, a1);
		}

		::System::Void SortKerningPairs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_SORTKERNINGPAIRS_OFFSET))(this);
		}
	};
}

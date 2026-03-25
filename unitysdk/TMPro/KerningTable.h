#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/GlyphValueRecord_Legacy.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class KerningPair; }

#define TMPRO_KERNINGTABLE_ADDGLYPHPAIRADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x18904880)
#define TMPRO_KERNINGTABLE_ADDKERNINGPAIR_1_OFFSET UNITYSDK_OFFSET(0x18904720)
#define TMPRO_KERNINGTABLE_ADDKERNINGPAIR_OFFSET UNITYSDK_OFFSET(0x189045F0)
#define TMPRO_KERNINGTABLE_REMOVEKERNINGPAIR_1_OFFSET UNITYSDK_OFFSET(0x18904B80)
#define TMPRO_KERNINGTABLE_REMOVEKERNINGPAIR_OFFSET UNITYSDK_OFFSET(0x18904A00)
#define TMPRO_KERNINGTABLE_SORTKERNINGPAIRS_OFFSET UNITYSDK_OFFSET(0x18904C00)
#define TMPRO_KERNINGTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x189045B0)

namespace TMPro
{
	inline static constexpr unsigned int KerningTable_TypeDefinitionIndex = 34315;

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

		::System::Int32 AddKerningPair_1(::System::UInt32 first, ::System::UInt32 second, ::System::Single offset)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_ADDKERNINGPAIR_1_OFFSET))(this, first, second, offset);
		}

		::System::Int32 AddGlyphPairAdjustmentRecord(::System::UInt32 first, ::TMPro::GlyphValueRecord_Legacy firstAdjustments, ::System::UInt32 second, ::TMPro::GlyphValueRecord_Legacy secondAdjustments)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_ADDGLYPHPAIRADJUSTMENTRECORD_OFFSET))(this, first, firstAdjustments, second, secondAdjustments);
		}

		::System::Void RemoveKerningPair(::System::Int32 left, ::System::Int32 right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_REMOVEKERNINGPAIR_OFFSET))(this, left, right);
		}

		::System::Void RemoveKerningPair_1(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_REMOVEKERNINGPAIR_1_OFFSET))(this, index);
		}

		::System::Void SortKerningPairs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_SORTKERNINGPAIRS_OFFSET))(this);
		}
	};
}

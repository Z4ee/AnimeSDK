#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace TMPro { class KerningPair; }

#define TMPRO_KERNINGTABLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B25290)
#define TMPRO_KERNINGTABLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B252D0)
#define TMPRO_KERNINGTABLE___C__SORTKERNINGPAIRS_B__7_0_OFFSET UNITYSDK_OFFSET(0x18B252E0)
#define TMPRO_KERNINGTABLE___C__SORTKERNINGPAIRS_B__7_1_OFFSET UNITYSDK_OFFSET(0x18B25300)

namespace TMPro
{
	inline static constexpr unsigned int KerningTable___c_TypeDefinitionIndex = 43388;

	class KerningTable___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::TMPro::KerningPair*, ::System::UInt32>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::TMPro::KerningPair*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(KerningTable___c_TypeDefinitionIndex)->GetStaticField(0x1F10);
		}
		static ::System::Func_2<::TMPro::KerningPair*, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::TMPro::KerningPair*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(KerningTable___c_TypeDefinitionIndex)->GetStaticField(0x1F18);
		}
		static ::TMPro::KerningTable___c** StaticGet___9()
		{
			return (::TMPro::KerningTable___c**)Il2CppClass::FromTypeDefinitionIndex(KerningTable___c_TypeDefinitionIndex)->GetStaticField(0x1F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SortKerningPairs_b__7_0(::TMPro::KerningPair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::KerningPair*))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__SORTKERNINGPAIRS_B__7_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SortKerningPairs_b__7_1(::TMPro::KerningPair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::KerningPair*))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__SORTKERNINGPAIRS_B__7_1_OFFSET))(this, a1);
		}
	};
}

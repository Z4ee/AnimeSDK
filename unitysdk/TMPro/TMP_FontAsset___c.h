#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace TMPro { class TMP_Character; }
namespace UnityEngine::TextCore { class Glyph; }

#define TMPRO_TMP_FONTASSET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADC5970)
#define TMPRO_TMP_FONTASSET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC59B0)
#define TMPRO_TMP_FONTASSET___C__SORTCHARACTERTABLE_B__124_0_OFFSET UNITYSDK_OFFSET(0x1ADC59C0)
#define TMPRO_TMP_FONTASSET___C__SORTGLYPHTABLE_B__125_0_OFFSET UNITYSDK_OFFSET(0x1ADC59E0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontAsset___c_TypeDefinitionIndex = 37503;

	class TMP_FontAsset___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::TMPro::TMP_Character*, ::System::UInt32>** StaticGet___9__124_0()
		{
			return (::System::Func_2<::TMPro::TMP_Character*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset___c_TypeDefinitionIndex)->GetStaticField(0x279C0);
		}
		static ::System::Func_2<::UnityEngine::TextCore::Glyph*, ::System::UInt32>** StaticGet___9__125_0()
		{
			return (::System::Func_2<::UnityEngine::TextCore::Glyph*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset___c_TypeDefinitionIndex)->GetStaticField(0x279C8);
		}
		static ::TMPro::TMP_FontAsset___c** StaticGet___9()
		{
			return (::TMPro::TMP_FontAsset___c**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset___c_TypeDefinitionIndex)->GetStaticField(0x279D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SortCharacterTable_b__124_0(::TMPro::TMP_Character* c)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_Character*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__SORTCHARACTERTABLE_B__124_0_OFFSET))(this, c);
		}

		::System::UInt32 _SortGlyphTable_b__125_0(::UnityEngine::TextCore::Glyph* c)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__SORTGLYPHTABLE_B__125_0_OFFSET))(this, c);
		}
	};
}

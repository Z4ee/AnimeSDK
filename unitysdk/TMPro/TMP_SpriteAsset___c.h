#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace TMPro { class TMP_SpriteCharacter; }
namespace TMPro { class TMP_SpriteGlyph; }

#define TMPRO_TMP_SPRITEASSET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18943CD0)
#define TMPRO_TMP_SPRITEASSET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18943D10)
#define TMPRO_TMP_SPRITEASSET___C__SORTCHARACTERTABLE_B__40_0_OFFSET UNITYSDK_OFFSET(0x18943D40)
#define TMPRO_TMP_SPRITEASSET___C__SORTGLYPHTABLE_B__39_0_OFFSET UNITYSDK_OFFSET(0x18943D20)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteAsset___c_TypeDefinitionIndex = 34372;

	class TMP_SpriteAsset___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::TMPro::TMP_SpriteCharacter*, ::System::UInt32>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::TMPro::TMP_SpriteCharacter*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_SpriteAsset___c_TypeDefinitionIndex)->GetStaticField(0x2CED0);
		}
		static ::System::Func_2<::TMPro::TMP_SpriteGlyph*, ::System::UInt32>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::TMPro::TMP_SpriteGlyph*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_SpriteAsset___c_TypeDefinitionIndex)->GetStaticField(0x2CED8);
		}
		static ::TMPro::TMP_SpriteAsset___c** StaticGet___9()
		{
			return (::TMPro::TMP_SpriteAsset___c**)Il2CppClass::FromTypeDefinitionIndex(TMP_SpriteAsset___c_TypeDefinitionIndex)->GetStaticField(0x2CEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SortGlyphTable_b__39_0(::TMPro::TMP_SpriteGlyph* item)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_SpriteGlyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET___C__SORTGLYPHTABLE_B__39_0_OFFSET))(this, item);
		}

		::System::UInt32 _SortCharacterTable_b__40_0(::TMPro::TMP_SpriteCharacter* c)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_SpriteCharacter*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET___C__SORTCHARACTERTABLE_B__40_0_OFFSET))(this, c);
		}
	};
}

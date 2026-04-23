#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class MatchEvaluator; }
namespace TMPro { class TMP_Character; }
namespace UnityEngine::TextCore { class Glyph; }

#define TMPRO_TMP_FONTASSET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A358FF0)
#define TMPRO_TMP_FONTASSET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A359030)
#define TMPRO_TMP_FONTASSET___C__RENDERCHARACTERTOTEXTURE_B__180_0_OFFSET UNITYSDK_OFFSET(0x1A359080)
#define TMPRO_TMP_FONTASSET___C__SORTCHARACTERTABLE_B__129_0_OFFSET UNITYSDK_OFFSET(0x1A359040)
#define TMPRO_TMP_FONTASSET___C__SORTGLYPHTABLE_B__130_0_OFFSET UNITYSDK_OFFSET(0x1A359060)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontAsset___c_TypeDefinitionIndex = 40124;

	class TMP_FontAsset___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::TextCore::Glyph*, ::System::UInt32>** StaticGet___9__130_0()
		{
			return (::System::Func_2<::UnityEngine::TextCore::Glyph*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset___c_TypeDefinitionIndex)->GetStaticField(0x2FB30);
		}
		static ::System::Text::RegularExpressions::MatchEvaluator** StaticGet___9__180_0()
		{
			return (::System::Text::RegularExpressions::MatchEvaluator**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset___c_TypeDefinitionIndex)->GetStaticField(0x2FB38);
		}
		static ::TMPro::TMP_FontAsset___c** StaticGet___9()
		{
			return (::TMPro::TMP_FontAsset___c**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset___c_TypeDefinitionIndex)->GetStaticField(0x2FB40);
		}
		static ::System::Func_2<::TMPro::TMP_Character*, ::System::UInt32>** StaticGet___9__129_0()
		{
			return (::System::Func_2<::TMPro::TMP_Character*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAsset___c_TypeDefinitionIndex)->GetStaticField(0x2FB48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SortCharacterTable_b__129_0(::TMPro::TMP_Character* c)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_Character*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__SORTCHARACTERTABLE_B__129_0_OFFSET))(this, c);
		}

		::System::UInt32 _SortGlyphTable_b__130_0(::UnityEngine::TextCore::Glyph* c)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__SORTGLYPHTABLE_B__130_0_OFFSET))(this, c);
		}

		::System::String* _RenderCharacterToTexture_b__180_0(::System::Text::RegularExpressions::Match* match)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSET___C__RENDERCHARACTERTOTEXTURE_B__180_0_OFFSET))(this, match);
		}
	};
}

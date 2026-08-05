#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/FontStyles.h"
#include "unitysdk/TMPro/FontWeight.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_Character; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_SpriteCharacter; }

#define TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSETS_OFFSET UNITYSDK_OFFSET(0x1FB85D30)
#define TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1FB85660)
#define TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_OFFSET UNITYSDK_OFFSET(0x1FB854E0)
#define TMPRO_TMP_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1FB86610)
#define TMPRO_TMP_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1FB860D0)
#define TMPRO_TMP_FONTASSETUTILITIES_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FB85480)
#define TMPRO_TMP_FONTASSETUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB85430)
#define TMPRO_TMP_FONTASSETUTILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB85470)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontAssetUtilities_TypeDefinitionIndex = 39809;

	class TMP_FontAssetUtilities : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_k_SearchedAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAssetUtilities_TypeDefinitionIndex)->GetStaticField(0x2C6C0);
		}
		static ::TMPro::TMP_FontAssetUtilities** StaticGet_s_Instance()
		{
			return (::TMPro::TMP_FontAssetUtilities**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAssetUtilities_TypeDefinitionIndex)->GetStaticField(0x2C6C8);
		}
		static ::System::Boolean* StaticGet_k_IsFontEngineInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAssetUtilities_TypeDefinitionIndex)->GetStaticField(0x9760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES__CTOR_OFFSET))(this);
		}

		static ::TMPro::TMP_FontAssetUtilities* get_instance()
		{
			return ((::TMPro::TMP_FontAssetUtilities*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GET_INSTANCE_OFFSET))();
		}

		static ::TMPro::TMP_Character* GetCharacterFromFontAsset(::System::UInt32 unicode, ::TMPro::TMP_FontAsset* sourceFontAsset, ::System::Boolean includeFallbacks, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ::System::Boolean& isAlternativeTypeface)
		{
			return ((::TMPro::TMP_Character*(*)(::System::UInt32, ::TMPro::TMP_FontAsset*, ::System::Boolean, ::TMPro::FontStyles, ::TMPro::FontWeight, ::System::Boolean&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_OFFSET))(unicode, sourceFontAsset, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface);
		}

		static ::TMPro::TMP_Character* GetCharacterFromFontAsset_Internal(::System::UInt32 unicode, ::TMPro::TMP_FontAsset* sourceFontAsset, ::System::Boolean includeFallbacks, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ::System::Boolean& isAlternativeTypeface)
		{
			return ((::TMPro::TMP_Character*(*)(::System::UInt32, ::TMPro::TMP_FontAsset*, ::System::Boolean, ::TMPro::FontStyles, ::TMPro::FontWeight, ::System::Boolean&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_INTERNAL_OFFSET))(unicode, sourceFontAsset, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface);
		}

		static ::TMPro::TMP_Character* GetCharacterFromFontAssets(::System::UInt32 unicode, ::TMPro::TMP_FontAsset* sourceFontAsset, ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* fontAssets, ::System::Boolean includeFallbacks, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ::System::Boolean& isAlternativeTypeface)
		{
			return ((::TMPro::TMP_Character*(*)(::System::UInt32, ::TMPro::TMP_FontAsset*, ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, ::System::Boolean, ::TMPro::FontStyles, ::TMPro::FontWeight, ::System::Boolean&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSETS_OFFSET))(unicode, sourceFontAsset, fontAssets, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface);
		}

		static ::TMPro::TMP_SpriteCharacter* GetSpriteCharacterFromSpriteAsset(::System::UInt32 unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, ::System::Boolean includeFallbacks)
		{
			return ((::TMPro::TMP_SpriteCharacter*(*)(::System::UInt32, ::TMPro::TMP_SpriteAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_OFFSET))(unicode, spriteAsset, includeFallbacks);
		}

		static ::TMPro::TMP_SpriteCharacter* GetSpriteCharacterFromSpriteAsset_Internal(::System::UInt32 unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, ::System::Boolean includeFallbacks)
		{
			return ((::TMPro::TMP_SpriteCharacter*(*)(::System::UInt32, ::TMPro::TMP_SpriteAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_INTERNAL_OFFSET))(unicode, spriteAsset, includeFallbacks);
		}
	};
}

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

#define TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSETS_OFFSET UNITYSDK_OFFSET(0x18B40760)
#define TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18B402A0)
#define TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_OFFSET UNITYSDK_OFFSET(0x18B40140)
#define TMPRO_TMP_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18B40DD0)
#define TMPRO_TMP_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_OFFSET UNITYSDK_OFFSET(0x18B40A00)
#define TMPRO_TMP_FONTASSETUTILITIES_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18B40110)
#define TMPRO_TMP_FONTASSETUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B400D0)
#define TMPRO_TMP_FONTASSETUTILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0x18B40100)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontAssetUtilities_TypeDefinitionIndex = 43393;

	class TMP_FontAssetUtilities : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_k_SearchedAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAssetUtilities_TypeDefinitionIndex)->GetStaticField(0x3E70);
		}
		static ::TMPro::TMP_FontAssetUtilities** StaticGet_s_Instance()
		{
			return (::TMPro::TMP_FontAssetUtilities**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAssetUtilities_TypeDefinitionIndex)->GetStaticField(0x3E78);
		}
		static ::System::Boolean* StaticGet_k_IsFontEngineInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TMP_FontAssetUtilities_TypeDefinitionIndex)->GetStaticField(0x14C0);
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

		static ::TMPro::TMP_Character* GetCharacterFromFontAsset(::System::UInt32 a1, ::TMPro::TMP_FontAsset* a2, ::System::Boolean a3, ::TMPro::FontStyles a4, ::TMPro::FontWeight a5, ::System::Boolean& a6)
		{
			return ((::TMPro::TMP_Character*(*)(::System::UInt32, ::TMPro::TMP_FontAsset*, ::System::Boolean, ::TMPro::FontStyles, ::TMPro::FontWeight, ::System::Boolean&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::TMPro::TMP_Character* GetCharacterFromFontAsset_Internal(::System::UInt32 a1, ::TMPro::TMP_FontAsset* a2, ::System::Boolean a3, ::TMPro::FontStyles a4, ::TMPro::FontWeight a5, ::System::Boolean& a6)
		{
			return ((::TMPro::TMP_Character*(*)(::System::UInt32, ::TMPro::TMP_FontAsset*, ::System::Boolean, ::TMPro::FontStyles, ::TMPro::FontWeight, ::System::Boolean&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::TMPro::TMP_Character* GetCharacterFromFontAssets(::System::UInt32 a1, ::TMPro::TMP_FontAsset* a2, ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* a3, ::System::Boolean a4, ::TMPro::FontStyles a5, ::TMPro::FontWeight a6, ::System::Boolean& a7)
		{
			return ((::TMPro::TMP_Character*(*)(::System::UInt32, ::TMPro::TMP_FontAsset*, ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, ::System::Boolean, ::TMPro::FontStyles, ::TMPro::FontWeight, ::System::Boolean&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSETS_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::TMPro::TMP_SpriteCharacter* GetSpriteCharacterFromSpriteAsset(::System::UInt32 a1, ::TMPro::TMP_SpriteAsset* a2, ::System::Boolean a3)
		{
			return ((::TMPro::TMP_SpriteCharacter*(*)(::System::UInt32, ::TMPro::TMP_SpriteAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_OFFSET))(a1, a2, a3);
		}

		static ::TMPro::TMP_SpriteCharacter* GetSpriteCharacterFromSpriteAsset_Internal(::System::UInt32 a1, ::TMPro::TMP_SpriteAsset* a2, ::System::Boolean a3)
		{
			return ((::TMPro::TMP_SpriteCharacter*(*)(::System::UInt32, ::TMPro::TMP_SpriteAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_INTERNAL_OFFSET))(a1, a2, a3);
		}
	};
}

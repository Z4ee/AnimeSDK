#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_Character; }
namespace TMPro { class TMP_FontAsset; }

#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D1F2860)
#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D1F23C0)
#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_1_OFFSET UNITYSDK_OFFSET(0x1D1F2850)
#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_OFFSET UNITYSDK_OFFSET(0x1D1F2300)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontUtilities_TypeDefinitionIndex = 39142;

	class TMP_FontUtilities : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_k_searchedFontAssets()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontUtilities_TypeDefinitionIndex)->GetStaticField(0x296A0);
		}

		static ::TMPro::TMP_FontAsset* SearchForCharacter(::TMPro::TMP_FontAsset* font, ::System::UInt32 unicode, ::TMPro::TMP_Character*& character)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::TMPro::TMP_FontAsset*, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_OFFSET))(font, unicode, character);
		}

		static ::TMPro::TMP_FontAsset* SearchForCharacter_1(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* fonts, ::System::UInt32 unicode, ::TMPro::TMP_Character*& character)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_1_OFFSET))(fonts, unicode, character);
		}

		static ::TMPro::TMP_FontAsset* SearchForCharacterInternal(::TMPro::TMP_FontAsset* font, ::System::UInt32 unicode, ::TMPro::TMP_Character*& character)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::TMPro::TMP_FontAsset*, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_OFFSET))(font, unicode, character);
		}

		static ::TMPro::TMP_FontAsset* SearchForCharacterInternal_1(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* fonts, ::System::UInt32 unicode, ::TMPro::TMP_Character*& character)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_1_OFFSET))(fonts, unicode, character);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_Character; }
namespace TMPro { class TMP_FontAsset; }

#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x18B41670)
#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x18B41380)
#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_1_OFFSET UNITYSDK_OFFSET(0x18B415E0)
#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_OFFSET UNITYSDK_OFFSET(0x18B412E0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontUtilities_TypeDefinitionIndex = 43392;

	class TMP_FontUtilities : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_k_searchedFontAssets()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontUtilities_TypeDefinitionIndex)->GetStaticField(0x40E0);
		}

		static ::TMPro::TMP_FontAsset* SearchForCharacter(::TMPro::TMP_FontAsset* a1, ::System::UInt32 a2, ::TMPro::TMP_Character*& a3)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::TMPro::TMP_FontAsset*, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_OFFSET))(a1, a2, a3);
		}

		static ::TMPro::TMP_FontAsset* SearchForCharacter_1(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* a1, ::System::UInt32 a2, ::TMPro::TMP_Character*& a3)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_1_OFFSET))(a1, a2, a3);
		}

		static ::TMPro::TMP_FontAsset* SearchForCharacterInternal(::TMPro::TMP_FontAsset* a1, ::System::UInt32 a2, ::TMPro::TMP_Character*& a3)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::TMPro::TMP_FontAsset*, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::TMPro::TMP_FontAsset* SearchForCharacterInternal_1(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* a1, ::System::UInt32 a2, ::TMPro::TMP_Character*& a3)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, ::System::UInt32, ::TMPro::TMP_Character*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_1_OFFSET))(a1, a2, a3);
		}
	};
}

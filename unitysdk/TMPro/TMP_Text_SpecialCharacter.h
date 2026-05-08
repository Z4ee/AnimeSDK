#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro { class TMP_Character; }
namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine { class Material; }

#define TMPRO_TMP_TEXT_SPECIALCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D9940)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Text_SpecialCharacter_TypeDefinitionIndex = 37591;

	struct alignas(8) TMP_Text_SpecialCharacter
	{
		::TMPro::TMP_Character* character; // 0x10
		::TMPro::TMP_FontAsset* fontAsset; // 0x18
		::UnityEngine::Material* material; // 0x20
		::System::Int32 materialIndex; // 0x28

		::System::Void _ctor(::TMPro::TMP_Character* character, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Character*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_SPECIALCHARACTER__CTOR_OFFSET))(this, character, materialIndex);
		}
	};
}

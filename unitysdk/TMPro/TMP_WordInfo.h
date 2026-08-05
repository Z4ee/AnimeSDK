#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_WORDINFO_GETWORD_OFFSET UNITYSDK_OFFSET(0xACADF0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_WordInfo_TypeDefinitionIndex = 39908;

	struct alignas(8) TMP_WordInfo
	{
		::TMPro::TMP_Text* textComponent; // 0x10
		::System::Int32 firstCharacterIndex; // 0x18
		::System::Int32 lastCharacterIndex; // 0x1C
		::System::Int32 characterCount; // 0x20

		::System::String* GetWord()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_WORDINFO_GETWORD_OFFSET))(this);
		}
	};
}

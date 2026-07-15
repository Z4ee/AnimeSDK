#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro
{
	inline static constexpr unsigned int TMP_PageInfo_TypeDefinitionIndex = 41879;

	struct alignas(4) TMP_PageInfo
	{
		::System::Int32 firstCharacterIndex; // 0x10
		::System::Int32 lastCharacterIndex; // 0x14
		::System::Single ascender; // 0x18
		::System::Single baseLine; // 0x1C
		::System::Single descender; // 0x20
	};
}

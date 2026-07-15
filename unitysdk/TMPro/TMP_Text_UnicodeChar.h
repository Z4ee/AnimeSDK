#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro
{
	inline static constexpr unsigned int TMP_Text_UnicodeChar_TypeDefinitionIndex = 41855;

	struct alignas(4) TMP_Text_UnicodeChar
	{
		::System::Int32 unicode; // 0x10
		::System::Int32 stringIndex; // 0x14
		::System::Int32 length; // 0x18
	};
}

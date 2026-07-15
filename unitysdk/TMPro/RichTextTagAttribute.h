#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/TagUnitType.h"
#include "unitysdk/TMPro/TagValueType.h"

namespace TMPro
{
	inline static constexpr unsigned int RichTextTagAttribute_TypeDefinitionIndex = 41887;

	struct alignas(4) RichTextTagAttribute
	{
		::System::Int32 nameHashCode; // 0x10
		::System::Int32 valueHashCode; // 0x14
		::TMPro::TagValueType valueType; // 0x18
		::System::Int32 valueStartIndex; // 0x1C
		::System::Int32 valueLength; // 0x20
		::TMPro::TagUnitType unitType; // 0x24
	};
}

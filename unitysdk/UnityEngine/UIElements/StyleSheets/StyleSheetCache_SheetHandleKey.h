#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleSheetCache_SheetHandleKey_TypeDefinitionIndex = 6272;

	struct alignas(4) StyleSheetCache_SheetHandleKey
	{
		::System::Int32 sheetInstanceID; // 0x10
		::System::Int32 index; // 0x14
	};
}

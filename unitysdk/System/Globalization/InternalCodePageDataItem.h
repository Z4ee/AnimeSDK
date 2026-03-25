#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace System::Globalization
{
	inline static constexpr unsigned int InternalCodePageDataItem_TypeDefinitionIndex = 783;

	struct alignas(8) InternalCodePageDataItem
	{
		::System::UInt16 codePage; // 0x10
		::System::UInt16 uiFamilyCodePage; // 0x12
		::System::UInt32 flags; // 0x14
		::System::String* Names; // 0x18
	};
}

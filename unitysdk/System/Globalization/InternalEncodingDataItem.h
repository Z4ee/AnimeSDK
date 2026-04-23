#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace System::Globalization
{
	inline static constexpr unsigned int InternalEncodingDataItem_TypeDefinitionIndex = 784;

	struct alignas(8) InternalEncodingDataItem
	{
		::System::String* webName; // 0x10
		::System::UInt16 codePage; // 0x18
	};
}

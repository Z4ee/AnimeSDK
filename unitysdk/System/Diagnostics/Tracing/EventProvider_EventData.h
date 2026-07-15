#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventProvider_EventData_TypeDefinitionIndex = 1675;

	struct alignas(8) EventProvider_EventData
	{
		::System::UInt64 Ptr; // 0x10
		::System::UInt32 Size; // 0x18
		::System::UInt32 Reserved; // 0x1C
	};
}

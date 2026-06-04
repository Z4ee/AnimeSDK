#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TimeZoneInfo_TIME_ZONE_INFORMATION.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace System
{
	inline static constexpr unsigned int TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION_TypeDefinitionIndex = 345;

	struct alignas(8) TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION
	{
		::System::TimeZoneInfo_TIME_ZONE_INFORMATION TZI; // 0x10
		::System::String* TimeZoneKeyName; // 0x58
		::System::Byte DynamicDaylightTimeDisabled; // 0x60
	};
}

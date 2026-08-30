#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TimeZoneInfo_SYSTEMTIME.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace System
{
	inline static constexpr unsigned int TimeZoneInfo_TIME_ZONE_INFORMATION_TypeDefinitionIndex = 347;

	struct alignas(8) TimeZoneInfo_TIME_ZONE_INFORMATION
	{
		::System::Int32 Bias; // 0x10
		::System::String* StandardName; // 0x18
		::System::TimeZoneInfo_SYSTEMTIME StandardDate; // 0x20
		::System::Int32 StandardBias; // 0x30
		::System::String* DaylightName; // 0x38
		::System::TimeZoneInfo_SYSTEMTIME DaylightDate; // 0x40
		::System::Int32 DaylightBias; // 0x50
	};
}

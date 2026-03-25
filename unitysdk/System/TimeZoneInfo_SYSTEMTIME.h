#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System
{
	inline static constexpr unsigned int TimeZoneInfo_SYSTEMTIME_TypeDefinitionIndex = 344;

	struct alignas(2) TimeZoneInfo_SYSTEMTIME
	{
		::System::UInt16 wYear; // 0x10
		::System::UInt16 wMonth; // 0x12
		::System::UInt16 wDayOfWeek; // 0x14
		::System::UInt16 wDay; // 0x16
		::System::UInt16 wHour; // 0x18
		::System::UInt16 wMinute; // 0x1A
		::System::UInt16 wSecond; // 0x1C
		::System::UInt16 wMilliseconds; // 0x1E
	};
}

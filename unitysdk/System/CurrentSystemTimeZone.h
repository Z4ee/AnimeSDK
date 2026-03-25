#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/TimeZone.h"

namespace System { class String; }
namespace System { class TimeZoneInfo; }

#define SYSTEM_CURRENTSYSTEMTIMEZONE_GETTIMEZONEDATA_OFFSET UNITYSDK_OFFSET(0x1628B190)
#define SYSTEM_CURRENTSYSTEMTIMEZONE_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x1628B110)
#define SYSTEM_CURRENTSYSTEMTIMEZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1628B040)

namespace System
{
	inline static constexpr unsigned int CurrentSystemTimeZone_TypeDefinitionIndex = 433;

	class CurrentSystemTimeZone : public ::System::TimeZone
	{
	public:
		::System::TimeZoneInfo* LocalTimeZone; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE__CTOR_OFFSET))(this);
		}

		::System::TimeSpan GetUtcOffset(::System::DateTime dateTime)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE_GETUTCOFFSET_OFFSET))(this, dateTime);
		}

		static ::System::Boolean GetTimeZoneData(::System::Int32 year, ::Il2CppArray<::System::Int64>*& data, ::Il2CppArray<::System::String*>*& names, ::System::Boolean& daylight_inverted)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Int64>*&, ::Il2CppArray<::System::String*>*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE_GETTIMEZONEDATA_OFFSET))(year, data, names, daylight_inverted);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/TimeZone.h"

namespace System { class String; }
namespace System { class TimeZoneInfo; }

#define SYSTEM_CURRENTSYSTEMTIMEZONE_GETTIMEZONEDATA_OFFSET UNITYSDK_OFFSET(0x18670E30)
#define SYSTEM_CURRENTSYSTEMTIMEZONE_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x18670DB0)
#define SYSTEM_CURRENTSYSTEMTIMEZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x18670CE0)

namespace System
{
	inline static constexpr unsigned int CurrentSystemTimeZone_TypeDefinitionIndex = 432;

	class CurrentSystemTimeZone : public ::System::TimeZone
	{
	public:
		::System::TimeZoneInfo* LocalTimeZone; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE__CTOR_OFFSET))(this);
		}

		::System::TimeSpan GetUtcOffset(::System::DateTime a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE_GETUTCOFFSET_OFFSET))(this, a1);
		}

		static ::System::Boolean GetTimeZoneData(::System::Int32 a1, ::Il2CppArray<::System::Int64>*& a2, ::Il2CppArray<::System::String*>*& a3, ::System::Boolean& a4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Int64>*&, ::Il2CppArray<::System::String*>*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE_GETTIMEZONEDATA_OFFSET))(a1, a2, a3, a4);
		}
	};
}

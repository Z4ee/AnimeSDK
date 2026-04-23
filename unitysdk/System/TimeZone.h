#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

#define SYSTEM_TIMEZONE_GET_CURRENTTIMEZONE_OFFSET UNITYSDK_OFFSET(0x17883B20)
#define SYSTEM_TIMEZONE_TOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x17883D00)
#define SYSTEM_TIMEZONE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17883FD0)
#define SYSTEM_TIMEZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x17883B10)

namespace System
{
	inline static constexpr unsigned int TimeZone_TypeDefinitionIndex = 432;

	class TimeZone : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_tz_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TimeZone_TypeDefinitionIndex)->GetStaticField(0xC800);
		}
		static ::System::TimeZone** StaticGet_currentTimeZone()
		{
			return (::System::TimeZone**)Il2CppClass::FromTypeDefinitionIndex(TimeZone_TypeDefinitionIndex)->GetStaticField(0xC808);
		}
		static ::System::Int64* StaticGet_timezone_check()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(TimeZone_TypeDefinitionIndex)->GetStaticField(0x4BF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE__CCTOR_OFFSET))();
		}

		static ::System::TimeZone* get_CurrentTimeZone()
		{
			return ((::System::TimeZone*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_GET_CURRENTTIMEZONE_OFFSET))();
		}

		::System::DateTime ToLocalTime(::System::DateTime time)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_TOLOCALTIME_OFFSET))(this, time);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

#define SYSTEM_TIMEZONE_GET_CURRENTTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1C673EF0)
#define SYSTEM_TIMEZONE_TOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x1C6740D0)
#define SYSTEM_TIMEZONE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6743A0)
#define SYSTEM_TIMEZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C673EE0)

namespace System
{
	inline static constexpr unsigned int TimeZone_TypeDefinitionIndex = 434;

	class TimeZone : public ::System::Object
	{
	public:
		static ::System::TimeZone** StaticGet_currentTimeZone()
		{
			return (::System::TimeZone**)Il2CppClass::FromTypeDefinitionIndex(TimeZone_TypeDefinitionIndex)->GetStaticField(0x15F60);
		}
		static ::System::Object** StaticGet_tz_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TimeZone_TypeDefinitionIndex)->GetStaticField(0x15F68);
		}
		static ::System::Int64* StaticGet_timezone_check()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(TimeZone_TypeDefinitionIndex)->GetStaticField(0x85B0);
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

		::System::DateTime ToLocalTime(::System::DateTime a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_TOLOCALTIME_OFFSET))(this, a1);
		}
	};
}

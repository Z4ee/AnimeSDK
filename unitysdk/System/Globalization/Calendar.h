#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_CALENDAR_CLONE_OFFSET UNITYSDK_OFFSET(0x17918460)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x17918660)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETSYSTEMTWODIGITYEARSETTING_OFFSET UNITYSDK_OFFSET(0x17918A10)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_BASECALENDARID_OFFSET UNITYSDK_OFFSET(0x17918450)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_CURRENTERAVALUE_OFFSET UNITYSDK_OFFSET(0x17918550)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x17918440)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x17918420)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x17918410)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x17918920)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x17918680)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDDAY_OFFSET UNITYSDK_OFFSET(0x179188B0)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDMONTH_OFFSET UNITYSDK_OFFSET(0x17918850)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDYEAR_OFFSET UNITYSDK_OFFSET(0x179187F0)
#define SYSTEM_GLOBALIZATION_CALENDAR_SETREADONLYSTATE_OFFSET UNITYSDK_OFFSET(0x17918540)
#define SYSTEM_GLOBALIZATION_CALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x179186A0)
#define SYSTEM_GLOBALIZATION_CALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x17918930)
#define SYSTEM_GLOBALIZATION_CALENDAR_TRYTODATETIME_OFFSET UNITYSDK_OFFSET(0x17918700)
#define SYSTEM_GLOBALIZATION_CALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x17918430)

namespace System::Globalization
{
	inline static constexpr unsigned int Calendar_TypeDefinitionIndex = 732;

	class Calendar : public ::System::Object
	{
	public:
		::System::Int32 twoDigitYearMax; // 0x10
		::System::Boolean m_isReadOnly; // 0x14
		::System::Int32 m_currentEraValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR__CTOR_OFFSET))(this);
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_BaseCalendarID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_BASECALENDARID_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_CLONE_OFFSET))(this);
		}

		::System::Void SetReadOnlyState(::System::Boolean readOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_SETREADONLYSTATE_OFFSET))(this, readOnly);
		}

		::System::Int32 get_CurrentEraValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_CURRENTERAVALUE_OFFSET))(this);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETMONTHSINYEAR_OFFSET))(this, year);
		}

		::System::Boolean IsLeapYear(::System::Int32 year)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPYEAR_OFFSET))(this, year);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond);
		}

		::System::Boolean TryToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era, ::System::DateTime& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TRYTODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era, result);
		}

		::System::Boolean IsValidYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDYEAR_OFFSET))(this, year, era);
		}

		::System::Boolean IsValidMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDMONTH_OFFSET))(this, year, month, era);
		}

		::System::Boolean IsValidDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDDAY_OFFSET))(this, year, month, day, era);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}

		static ::System::Int32 GetSystemTwoDigitYearSetting(::System::Int32 CalID, ::System::Int32 defaultYearValue)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETSYSTEMTWODIGITYEARSETTING_OFFSET))(CalID, defaultYearValue);
		}
	};
}

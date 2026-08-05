#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/CalendarAlgorithmType.h"
#include "unitysdk/System/Globalization/CalendarWeekRule.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_CALENDAR_ADDDAYS_OFFSET UNITYSDK_OFFSET(0x1C31A260)
#define SYSTEM_GLOBALIZATION_CALENDAR_ADDHOURS_OFFSET UNITYSDK_OFFSET(0x1C31A270)
#define SYSTEM_GLOBALIZATION_CALENDAR_ADDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1C31A250)
#define SYSTEM_GLOBALIZATION_CALENDAR_ADDMINUTES_OFFSET UNITYSDK_OFFSET(0x1C31A280)
#define SYSTEM_GLOBALIZATION_CALENDAR_ADDSECONDS_OFFSET UNITYSDK_OFFSET(0x1C31A290)
#define SYSTEM_GLOBALIZATION_CALENDAR_ADDWEEKS_OFFSET UNITYSDK_OFFSET(0x1C31A2A0)
#define SYSTEM_GLOBALIZATION_CALENDAR_ADD_OFFSET UNITYSDK_OFFSET(0x1C31A0D0)
#define SYSTEM_GLOBALIZATION_CALENDAR_CHECKADDRESULT_OFFSET UNITYSDK_OFFSET(0x1C319FB0)
#define SYSTEM_GLOBALIZATION_CALENDAR_CLONE_OFFSET UNITYSDK_OFFSET(0x1C319C60)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1C31A2C0)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x1C31A2E0)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETFIRSTDAYWEEKOFYEAR_OFFSET UNITYSDK_OFFSET(0x1C31A420)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETHOUR_OFFSET UNITYSDK_OFFSET(0x1C31A300)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETLEAPMONTH_1_OFFSET UNITYSDK_OFFSET(0x1C31AC80)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1C31AC60)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1C31A340)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETMINUTE_OFFSET UNITYSDK_OFFSET(0x1C31A380)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x1C31A3C0)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETSECOND_OFFSET UNITYSDK_OFFSET(0x1C31A3E0)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETSYSTEMTWODIGITYEARSETTING_OFFSET UNITYSDK_OFFSET(0x1C31B390)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETWEEKOFYEARFULLDAYS_OFFSET UNITYSDK_OFFSET(0x1C31A4E0)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETWEEKOFYEAROFMINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1C31A7A0)
#define SYSTEM_GLOBALIZATION_CALENDAR_GETWEEKOFYEAR_OFFSET UNITYSDK_OFFSET(0x1C31A930)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_ALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1C319C40)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_BASECALENDARID_OFFSET UNITYSDK_OFFSET(0x1C319C30)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_CURRENTERAVALUE_OFFSET UNITYSDK_OFFSET(0x1C319F20)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET UNITYSDK_OFFSET(0x1C31A920)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C319C20)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1C319C50)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1C319C00)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1C319BF0)
#define SYSTEM_GLOBALIZATION_CALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1C31B020)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPDAY_OFFSET UNITYSDK_OFFSET(0x1C31AC10)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1C31AC40)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1C31AD20)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDDAY_OFFSET UNITYSDK_OFFSET(0x1C31AFB0)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDMONTH_OFFSET UNITYSDK_OFFSET(0x1C31AF50)
#define SYSTEM_GLOBALIZATION_CALENDAR_ISVALIDYEAR_OFFSET UNITYSDK_OFFSET(0x1C31AEF0)
#define SYSTEM_GLOBALIZATION_CALENDAR_READONLY_OFFSET UNITYSDK_OFFSET(0x1C319D60)
#define SYSTEM_GLOBALIZATION_CALENDAR_SETREADONLYSTATE_OFFSET UNITYSDK_OFFSET(0x1C319F10)
#define SYSTEM_GLOBALIZATION_CALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1C31B030)
#define SYSTEM_GLOBALIZATION_CALENDAR_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x1C31B180)
#define SYSTEM_GLOBALIZATION_CALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1C31AD40)
#define SYSTEM_GLOBALIZATION_CALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x1C31B0A0)
#define SYSTEM_GLOBALIZATION_CALENDAR_TRYTODATETIME_OFFSET UNITYSDK_OFFSET(0x1C31ADA0)
#define SYSTEM_GLOBALIZATION_CALENDAR_VERIFYWRITABLE_OFFSET UNITYSDK_OFFSET(0x1C319EA0)
#define SYSTEM_GLOBALIZATION_CALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C319C10)

namespace System::Globalization
{
	inline static constexpr unsigned int Calendar_TypeDefinitionIndex = 702;

	class Calendar : public ::System::Object
	{
	public:
		// static const ::System::Int64 TicksPerMillisecond = 0x2710; // 0x0
		// static const ::System::Int64 TicksPerSecond = 0x989680; // 0x0
		// static const ::System::Int64 TicksPerMinute = 0x23C34600; // 0x0
		// static const ::System::Int64 TicksPerHour = 0x861C46800; // 0x0
		// static const ::System::Int64 TicksPerDay = 0xC92A69C000; // 0x0
		// static const ::System::Int32 MillisPerSecond = 0x3E8; // 0x0
		// static const ::System::Int32 MillisPerMinute = 0xEA60; // 0x0
		// static const ::System::Int32 MillisPerHour = 0x36EE80; // 0x0
		// static const ::System::Int32 MillisPerDay = 0x5265C00; // 0x0
		// static const ::System::Int32 DaysPerYear = 0x16D; // 0x0
		// static const ::System::Int32 DaysPer4Years = 0x5B5; // 0x0
		// static const ::System::Int32 DaysPer100Years = 0x8EAC; // 0x0
		// static const ::System::Int32 DaysPer400Years = 0x23AB1; // 0x0
		// static const ::System::Int32 DaysTo10000 = 0x37B9DB; // 0x0
		// static const ::System::Int64 MaxMillis = 0x11EFAE44CB400; // 0x0
		// static const ::System::Int32 CAL_GREGORIAN = 0x1; // 0x0
		// static const ::System::Int32 CAL_GREGORIAN_US = 0x2; // 0x0
		// static const ::System::Int32 CAL_JAPAN = 0x3; // 0x0
		// static const ::System::Int32 CAL_TAIWAN = 0x4; // 0x0
		// static const ::System::Int32 CAL_KOREA = 0x5; // 0x0
		// static const ::System::Int32 CAL_HIJRI = 0x6; // 0x0
		// static const ::System::Int32 CAL_THAI = 0x7; // 0x0
		// static const ::System::Int32 CAL_HEBREW = 0x8; // 0x0
		// static const ::System::Int32 CAL_GREGORIAN_ME_FRENCH = 0x9; // 0x0
		// static const ::System::Int32 CAL_GREGORIAN_ARABIC = 0xA; // 0x0
		// static const ::System::Int32 CAL_GREGORIAN_XLIT_ENGLISH = 0xB; // 0x0
		// static const ::System::Int32 CAL_GREGORIAN_XLIT_FRENCH = 0xC; // 0x0
		// static const ::System::Int32 CAL_JULIAN = 0xD; // 0x0
		// static const ::System::Int32 CAL_JAPANESELUNISOLAR = 0xE; // 0x0
		// static const ::System::Int32 CAL_CHINESELUNISOLAR = 0xF; // 0x0
		// static const ::System::Int32 CAL_SAKA = 0x10; // 0x0
		// static const ::System::Int32 CAL_LUNAR_ETO_CHN = 0x11; // 0x0
		// static const ::System::Int32 CAL_LUNAR_ETO_KOR = 0x12; // 0x0
		// static const ::System::Int32 CAL_LUNAR_ETO_ROKUYOU = 0x13; // 0x0
		// static const ::System::Int32 CAL_KOREANLUNISOLAR = 0x14; // 0x0
		// static const ::System::Int32 CAL_TAIWANLUNISOLAR = 0x15; // 0x0
		// static const ::System::Int32 CAL_PERSIAN = 0x16; // 0x0
		// static const ::System::Int32 CAL_UMALQURA = 0x17; // 0x0
		// static const ::System::Int32 CurrentEra = 0x0; // 0x0
		::System::Int32 m_currentEraValue; // 0x10
		::System::Int32 twoDigitYearMax; // 0x14
		::System::Boolean m_isReadOnly; // 0x18

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

		::System::Globalization::CalendarAlgorithmType get_AlgorithmType()
		{
			return ((::System::Globalization::CalendarAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_ALGORITHMTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_CLONE_OFFSET))(this);
		}

		static ::System::Globalization::Calendar* ReadOnly(::System::Globalization::Calendar* calendar)
		{
			return ((::System::Globalization::Calendar*(*)(::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_READONLY_OFFSET))(calendar);
		}

		::System::Void VerifyWritable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_VERIFYWRITABLE_OFFSET))(this);
		}

		::System::Void SetReadOnlyState(::System::Boolean readOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_SETREADONLYSTATE_OFFSET))(this, readOnly);
		}

		::System::Int32 get_CurrentEraValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_CURRENTERAVALUE_OFFSET))(this);
		}

		static ::System::Void CheckAddResult(::System::Int64 ticks, ::System::DateTime minValue, ::System::DateTime maxValue)
		{
			return ((::System::Void(*)(::System::Int64, ::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_CHECKADDRESULT_OFFSET))(ticks, minValue, maxValue);
		}

		::System::DateTime Add(::System::DateTime time, ::System::Double value, ::System::Int32 scale)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ADD_OFFSET))(this, time, value, scale);
		}

		::System::DateTime AddMilliseconds(::System::DateTime time, ::System::Double milliseconds)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ADDMILLISECONDS_OFFSET))(this, time, milliseconds);
		}

		::System::DateTime AddDays(::System::DateTime time, ::System::Int32 days)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ADDDAYS_OFFSET))(this, time, days);
		}

		::System::DateTime AddHours(::System::DateTime time, ::System::Int32 hours)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ADDHOURS_OFFSET))(this, time, hours);
		}

		::System::DateTime AddMinutes(::System::DateTime time, ::System::Int32 minutes)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ADDMINUTES_OFFSET))(this, time, minutes);
		}

		::System::DateTime AddSeconds(::System::DateTime time, ::System::Int32 seconds)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ADDSECONDS_OFFSET))(this, time, seconds);
		}

		::System::DateTime AddWeeks(::System::DateTime time, ::System::Int32 weeks)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ADDWEEKS_OFFSET))(this, time, weeks);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month);
		}

		::System::Int32 GetDaysInYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETDAYSINYEAR_OFFSET))(this, year);
		}

		::System::Int32 GetHour(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETHOUR_OFFSET))(this, time);
		}

		::System::Double GetMilliseconds(::System::DateTime time)
		{
			return ((::System::Double(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETMILLISECONDS_OFFSET))(this, time);
		}

		::System::Int32 GetMinute(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETMINUTE_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETMONTHSINYEAR_OFFSET))(this, year);
		}

		::System::Int32 GetSecond(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETSECOND_OFFSET))(this, time);
		}

		::System::Int32 GetFirstDayWeekOfYear(::System::DateTime time, ::System::Int32 firstDayOfWeek)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETFIRSTDAYWEEKOFYEAR_OFFSET))(this, time, firstDayOfWeek);
		}

		::System::Int32 GetWeekOfYearFullDays(::System::DateTime time, ::System::Int32 firstDayOfWeek, ::System::Int32 fullDays)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETWEEKOFYEARFULLDAYS_OFFSET))(this, time, firstDayOfWeek, fullDays);
		}

		::System::Int32 GetWeekOfYearOfMinSupportedDateTime(::System::Int32 firstDayOfWeek, ::System::Int32 minimumDaysInFirstWeek)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETWEEKOFYEAROFMINSUPPORTEDDATETIME_OFFSET))(this, firstDayOfWeek, minimumDaysInFirstWeek);
		}

		::System::Int32 get_DaysInYearBeforeMinSupportedYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET))(this);
		}

		::System::Int32 GetWeekOfYear(::System::DateTime time, ::System::Globalization::CalendarWeekRule rule, ::System::DayOfWeek firstDayOfWeek)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime, ::System::Globalization::CalendarWeekRule, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETWEEKOFYEAR_OFFSET))(this, time, rule, firstDayOfWeek);
		}

		::System::Boolean IsLeapDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPDAY_OFFSET))(this, year, month, day);
		}

		::System::Boolean IsLeapMonth(::System::Int32 year, ::System::Int32 month)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_ISLEAPMONTH_OFFSET))(this, year, month);
		}

		::System::Int32 GetLeapMonth(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETLEAPMONTH_OFFSET))(this, year);
		}

		::System::Int32 GetLeapMonth_1(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETLEAPMONTH_1_OFFSET))(this, year, era);
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

		::System::Void set_TwoDigitYearMax(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_SET_TWODIGITYEARMAX_OFFSET))(this, value);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}

		static ::System::Int64 TimeToTicks(::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_TIMETOTICKS_OFFSET))(hour, minute, second, millisecond);
		}

		static ::System::Int32 GetSystemTwoDigitYearSetting(::System::Int32 CalID, ::System::Int32 defaultYearValue)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDAR_GETSYSTEMTWODIGITYEARSETTING_OFFSET))(CalID, defaultYearValue);
		}
	};
}

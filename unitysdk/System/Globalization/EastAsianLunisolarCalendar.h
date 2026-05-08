#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"
#include "unitysdk/System/Globalization/CalendarAlgorithmType.h"

namespace System::Globalization { class EraInfo; }

#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x18B8F7A0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x18B8FA20)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_CHECKERARANGE_OFFSET UNITYSDK_OFFSET(0x18B8E780)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_CHECKTICKSRANGE_OFFSET UNITYSDK_OFFSET(0x18B8DF80)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_CHECKYEARMONTHRANGE_OFFSET UNITYSDK_OFFSET(0x18B8EA40)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_CHECKYEARRANGE_OFFSET UNITYSDK_OFFSET(0x18B8E8E0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETCELESTIALSTEM_OFFSET UNITYSDK_OFFSET(0x18B8E190)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x18B8FC40)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x18B8FDF0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETDAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x18B8FB70)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x18B8EB60)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x18B8FCA0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x18B90050)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x18B8FE50)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x18B8FD20)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETSEXAGENARYYEAR_OFFSET UNITYSDK_OFFSET(0x18B8DF00)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETTERRESTRIALBRANCH_OFFSET UNITYSDK_OFFSET(0x18B8E2B0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x18B8FD80)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GET_ALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x18B8DEF0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x18B900C0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GREGORIANISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x18B8EBB0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GREGORIANTOLUNAR_OFFSET UNITYSDK_OFFSET(0x18B8F210)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_INTERNALGETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x18B8EB20)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_INTERNALISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x18B8FA00)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_ISLEAPDAY_OFFSET UNITYSDK_OFFSET(0x18B8FE90)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_ISLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x18B90010)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x18B90090)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_LUNARTOGREGORIAN_OFFSET UNITYSDK_OFFSET(0x18B8EE30)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_LUNARTOTIME_OFFSET UNITYSDK_OFFSET(0x18B8F5C0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_MAXERACALENDARYEAR_OFFSET UNITYSDK_OFFSET(0x18B8E5A0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_MINERACALENDARYEAR_OFFSET UNITYSDK_OFFSET(0x18B8E3D0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x18B901A0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_TIMETOLUNAR_OFFSET UNITYSDK_OFFSET(0x18B8E090)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x18B8EBF0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x18B90320)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B903B0)
#define SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8E770)

namespace System::Globalization
{
	inline static constexpr unsigned int EastAsianLunisolarCalendar_TypeDefinitionIndex = 722;

	class EastAsianLunisolarCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EastAsianLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0x14B0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EastAsianLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0x14B8);
		}
		// static const ::System::Int32 LeapMonth = 0x0; // 0x0
		// static const ::System::Int32 Jan1Month = 0x1; // 0x0
		// static const ::System::Int32 Jan1Date = 0x2; // 0x0
		// static const ::System::Int32 nDaysPerMonth = 0x3; // 0x0
		// static const ::System::Int32 DatePartYear = 0x0; // 0x0
		// static const ::System::Int32 DatePartDayOfYear = 0x1; // 0x0
		// static const ::System::Int32 DatePartMonth = 0x2; // 0x0
		// static const ::System::Int32 DatePartDay = 0x3; // 0x0
		// static const ::System::Int32 MaxCalendarMonth = 0xD; // 0x0
		// static const ::System::Int32 MaxCalendarDay = 0x1E; // 0x0
		// static const ::System::Int32 DEFAULT_GREGORIAN_TWO_DIGIT_YEAR_MAX = 0x7ED; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR__CCTOR_OFFSET))();
		}

		::System::Globalization::CalendarAlgorithmType get_AlgorithmType()
		{
			return ((::System::Globalization::CalendarAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GET_ALGORITHMTYPE_OFFSET))(this);
		}

		::System::Int32 GetSexagenaryYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETSEXAGENARYYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetCelestialStem(::System::Int32 sexagenaryYear)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETCELESTIALSTEM_OFFSET))(this, sexagenaryYear);
		}

		::System::Int32 GetTerrestrialBranch(::System::Int32 sexagenaryYear)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETTERRESTRIALBRANCH_OFFSET))(this, sexagenaryYear);
		}

		::System::Int32 MinEraCalendarYear(::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_MINERACALENDARYEAR_OFFSET))(this, era);
		}

		::System::Int32 MaxEraCalendarYear(::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_MAXERACALENDARYEAR_OFFSET))(this, era);
		}

		::System::Void CheckTicksRange(::System::Int64 ticks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_CHECKTICKSRANGE_OFFSET))(this, ticks);
		}

		::System::Void CheckEraRange(::System::Int32 era)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_CHECKERARANGE_OFFSET))(this, era);
		}

		::System::Int32 CheckYearRange(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_CHECKYEARRANGE_OFFSET))(this, year, era);
		}

		::System::Int32 CheckYearMonthRange(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_CHECKYEARMONTHRANGE_OFFSET))(this, year, month, era);
		}

		::System::Int32 InternalGetDaysInMonth(::System::Int32 year, ::System::Int32 month)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_INTERNALGETDAYSINMONTH_OFFSET))(this, year, month);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		static ::System::Int32 GregorianIsLeapYear(::System::Int32 y)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GREGORIANISLEAPYEAR_OFFSET))(y);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::System::Void GregorianToLunar(::System::Int32 nSYear, ::System::Int32 nSMonth, ::System::Int32 nSDate, ::System::Int32& nLYear, ::System::Int32& nLMonth, ::System::Int32& nLDate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GREGORIANTOLUNAR_OFFSET))(this, nSYear, nSMonth, nSDate, nLYear, nLMonth, nLDate);
		}

		::System::Boolean LunarToGregorian(::System::Int32 nLYear, ::System::Int32 nLMonth, ::System::Int32 nLDate, ::System::Int32& nSolarYear, ::System::Int32& nSolarMonth, ::System::Int32& nSolarDay)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_LUNARTOGREGORIAN_OFFSET))(this, nLYear, nLMonth, nLDate, nSolarYear, nSolarMonth, nSolarDay);
		}

		::System::DateTime LunarToTime(::System::DateTime time, ::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_LUNARTOTIME_OFFSET))(this, time, year, month, day);
		}

		::System::Void TimeToLunar(::System::DateTime time, ::System::Int32& year, ::System::Int32& month, ::System::Int32& day)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_TIMETOLUNAR_OFFSET))(this, time, year, month, day);
		}

		::System::DateTime AddMonths(::System::DateTime time, ::System::Int32 months)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_ADDMONTHS_OFFSET))(this, time, months);
		}

		::System::DateTime AddYears(::System::DateTime time, ::System::Int32 years)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_ADDYEARS_OFFSET))(this, time, years);
		}

		::System::Int32 GetDayOfYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETDAYOFYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetDaysInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETDAYSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Boolean IsLeapDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_ISLEAPDAY_OFFSET))(this, year, month, day, era);
		}

		::System::Boolean IsLeapMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_ISLEAPMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetLeapMonth(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GETLEAPMONTH_OFFSET))(this, year, era);
		}

		::System::Boolean InternalIsLeapYear(::System::Int32 year)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_INTERNALISLEAPYEAR_OFFSET))(this, year);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_SET_TWODIGITYEARMAX_OFFSET))(this, value);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EASTASIANLUNISOLARCALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}
	};
}

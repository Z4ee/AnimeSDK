#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/CalendarWeekRule.h"
#include "unitysdk/System/Object.h"

namespace System::Globalization { class Calendar; }
namespace System::Globalization { class EraInfo; }

#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x1A7BBDC0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x1A7BC1F0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_CHECKTICKSRANGE_OFFSET UNITYSDK_OFFSET(0x1A7BB8D0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_DATETOTICKS_OFFSET UNITYSDK_OFFSET(0x1A7BBBE0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETABSOLUTEDATE_OFFSET UNITYSDK_OFFSET(0x1A7BBA20)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x1A7BB6A0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x1A7BC200)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1A7BC230)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x1A7BC290)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1A7BC2C0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x1A7BC420)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETERA_OFFSET UNITYSDK_OFFSET(0x1A7BC470)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETGREGORIANYEAR_OFFSET UNITYSDK_OFFSET(0x1A7BB420)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1A7BCA90)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x1A7BC710)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETMONTH_OFFSET UNITYSDK_OFFSET(0x1A7BC6E0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETWEEKOFYEAR_OFFSET UNITYSDK_OFFSET(0x1A7BCD20)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETYEAR_1_OFFSET UNITYSDK_OFFSET(0x1A7BC810)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1A7BC730)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1A7BC530)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GET_MAXYEAR_OFFSET UNITYSDK_OFFSET(0x1A7BB390)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISLEAPDAY_OFFSET UNITYSDK_OFFSET(0x1A7BC8E0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1A7BCAA0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1A7BCA50)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISVALIDYEAR_OFFSET UNITYSDK_OFFSET(0x1A7BB620)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x1A7BBC60)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1A7BCB80)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x1A7BCDC0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7BCF30)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BB3A0)

namespace System::Globalization
{
	inline static constexpr unsigned int GregorianCalendarHelper_TypeDefinitionIndex = 726;

	class GregorianCalendarHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GregorianCalendarHelper_TypeDefinitionIndex)->GetStaticField(0x11D0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GregorianCalendarHelper_TypeDefinitionIndex)->GetStaticField(0x11D8);
		}
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
		// static const ::System::Int32 DatePartYear = 0x0; // 0x0
		// static const ::System::Int32 DatePartDayOfYear = 0x1; // 0x0
		// static const ::System::Int32 DatePartMonth = 0x2; // 0x0
		// static const ::System::Int32 DatePartDay = 0x3; // 0x0
		::Il2CppArray<::System::Globalization::EraInfo*>* m_EraInfo; // 0x10
		::System::Globalization::Calendar* m_Cal; // 0x18
		::Il2CppArray<::System::Int32>* m_eras; // 0x20
		::System::DateTime m_minDate; // 0x28
		::System::Int32 m_maxYear; // 0x30
		::System::Int32 m_minYear; // 0x34

		::System::Void _ctor(::System::Globalization::Calendar* cal, ::Il2CppArray<::System::Globalization::EraInfo*>* eraInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::Calendar*, ::Il2CppArray<::System::Globalization::EraInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER__CTOR_OFFSET))(this, cal, eraInfo);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MaxYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GET_MAXYEAR_OFFSET))(this);
		}

		::System::Int32 GetGregorianYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETGREGORIANYEAR_OFFSET))(this, year, era);
		}

		::System::Boolean IsValidYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISVALIDYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetDatePart(::System::Int64 ticks, ::System::Int32 part)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDATEPART_OFFSET))(this, ticks, part);
		}

		static ::System::Int64 GetAbsoluteDate(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETABSOLUTEDATE_OFFSET))(year, month, day);
		}

		static ::System::Int64 DateToTicks(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_DATETOTICKS_OFFSET))(year, month, day);
		}

		static ::System::Int64 TimeToTicks(::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TIMETOTICKS_OFFSET))(hour, minute, second, millisecond);
		}

		::System::Void CheckTicksRange(::System::Int64 ticks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_CHECKTICKSRANGE_OFFSET))(this, ticks);
		}

		::System::DateTime AddMonths(::System::DateTime time, ::System::Int32 months)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ADDMONTHS_OFFSET))(this, time, months);
		}

		::System::DateTime AddYears(::System::DateTime time, ::System::Int32 years)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ADDYEARS_OFFSET))(this, time, years);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetDayOfYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYOFYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetDaysInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETDAYSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETERA_OFFSET))(this, time);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetYear_1(::System::Int32 year, ::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETYEAR_1_OFFSET))(this, year, time);
		}

		::System::Boolean IsLeapDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISLEAPDAY_OFFSET))(this, year, month, day, era);
		}

		::System::Int32 GetLeapMonth(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETLEAPMONTH_OFFSET))(this, year, era);
		}

		::System::Boolean IsLeapMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISLEAPMONTH_OFFSET))(this, year, month, era);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::System::Int32 GetWeekOfYear(::System::DateTime time, ::System::Globalization::CalendarWeekRule rule, ::System::DayOfWeek firstDayOfWeek)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime, ::System::Globalization::CalendarWeekRule, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_GETWEEKOFYEAR_OFFSET))(this, time, rule, firstDayOfWeek);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year, ::System::Int32 twoDigitYearMax)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDARHELPER_TOFOURDIGITYEAR_OFFSET))(this, year, twoDigitYearMax);
		}
	};
}

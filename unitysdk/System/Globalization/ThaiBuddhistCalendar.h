#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"
#include "unitysdk/System/Globalization/CalendarAlgorithmType.h"
#include "unitysdk/System/Globalization/CalendarWeekRule.h"

namespace System::Globalization { class EraInfo; }
namespace System::Globalization { class GregorianCalendarHelper; }

#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x1D0B1DB0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x1D0B1DD0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x1D0B1E80)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1D0B1EC0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x1D0B1F30)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1D0B1E00)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x1D0B1E20)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1D0B1FD0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1D0B20C0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x1D0B1F70)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x1D0B1FF0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETWEEKOFYEAR_OFFSET UNITYSDK_OFFSET(0x1D0B1FA0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1D0B2030)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_ALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1D0B1C90)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1D0B2120)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D0B1DA0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1D0B1C80)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1D0B1C70)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1D0B2140)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_ISLEAPDAY_OFFSET UNITYSDK_OFFSET(0x1D0B2050)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_ISLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1D0B20E0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1D0B2070)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1D0B21B0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1D0B2100)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x1D0B2300)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0B23F0)
#define SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B1CA0)

namespace System::Globalization
{
	inline static constexpr unsigned int ThaiBuddhistCalendar_TypeDefinitionIndex = 750;

	class ThaiBuddhistCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::Il2CppArray<::System::Globalization::EraInfo*>** StaticGet_thaiBuddhistEraInfo()
		{
			return (::Il2CppArray<::System::Globalization::EraInfo*>**)Il2CppClass::FromTypeDefinitionIndex(ThaiBuddhistCalendar_TypeDefinitionIndex)->GetStaticField(0xFB0);
		}
		// static const ::System::Int32 ThaiBuddhistEra = 0x1; // 0x0
		// static const ::System::Int32 DEFAULT_TWO_DIGIT_YEAR_MAX = 0xA0C; // 0x0
		::System::Globalization::GregorianCalendarHelper* helper; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR__CCTOR_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Globalization::CalendarAlgorithmType get_AlgorithmType()
		{
			return ((::System::Globalization::CalendarAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_ALGORITHMTYPE_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_ID_OFFSET))(this);
		}

		::System::DateTime AddMonths(::System::DateTime time, ::System::Int32 months)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_ADDMONTHS_OFFSET))(this, time, months);
		}

		::System::DateTime AddYears(::System::DateTime time, ::System::Int32 years)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_ADDYEARS_OFFSET))(this, time, years);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetDaysInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetDayOfYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETDAYOFYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetWeekOfYear(::System::DateTime time, ::System::Globalization::CalendarWeekRule rule, ::System::DayOfWeek firstDayOfWeek)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime, ::System::Globalization::CalendarWeekRule, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETWEEKOFYEAR_OFFSET))(this, time, rule, firstDayOfWeek);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETERA_OFFSET))(this, time);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_ISLEAPDAY_OFFSET))(this, year, month, day, era);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetLeapMonth(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GETLEAPMONTH_OFFSET))(this, year, era);
		}

		::System::Boolean IsLeapMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_ISLEAPMONTH_OFFSET))(this, year, month, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_SET_TWODIGITYEARMAX_OFFSET))(this, value);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_THAIBUDDHISTCALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}
	};
}

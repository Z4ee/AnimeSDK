#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"
#include "unitysdk/System/Globalization/CalendarAlgorithmType.h"
#include "unitysdk/System/Globalization/CalendarWeekRule.h"

namespace System::Globalization { class EraInfo; }
namespace System::Globalization { class GregorianCalendarHelper; }

#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x1BA1E840)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x1BA1E860)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x1BA1E910)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1BA1E950)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x1BA1E9C0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1BA1E890)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x1BA1E8B0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDEFAULTINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA011D0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1BA1EA60)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1BA1EB50)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x1BA1EA00)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x1BA1EA80)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETWEEKOFYEAR_OFFSET UNITYSDK_OFFSET(0x1BA1EA30)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1BA1EAC0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1BA1E6A0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1BA1EBB0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BA1E830)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1BA1E690)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1BA1E630)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1BA1EBD0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ISLEAPDAY_OFFSET UNITYSDK_OFFSET(0x1BA1EAE0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ISLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1BA1EB70)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1BA1EB00)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1BA1EC40)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1BA1EB90)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x1BA1ED90)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA1EEB0)
#define SYSTEM_GLOBALIZATION_TAIWANCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1E460)

namespace System::Globalization
{
	inline static constexpr unsigned int TaiwanCalendar_TypeDefinitionIndex = 746;

	class TaiwanCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::System::Globalization::Calendar** StaticGet_s_defaultInstance()
		{
			return (::System::Globalization::Calendar**)Il2CppClass::FromTypeDefinitionIndex(TaiwanCalendar_TypeDefinitionIndex)->GetStaticField(0xF10);
		}
		static ::Il2CppArray<::System::Globalization::EraInfo*>** StaticGet_taiwanEraInfo()
		{
			return (::Il2CppArray<::System::Globalization::EraInfo*>**)Il2CppClass::FromTypeDefinitionIndex(TaiwanCalendar_TypeDefinitionIndex)->GetStaticField(0xF18);
		}
		static ::System::DateTime* StaticGet_calendarMinValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(TaiwanCalendar_TypeDefinitionIndex)->GetStaticField(0x4A0);
		}
		// static const ::System::Int32 DEFAULT_TWO_DIGIT_YEAR_MAX = 0x63; // 0x0
		::System::Globalization::GregorianCalendarHelper* helper; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR__CCTOR_OFFSET))();
		}

		static ::System::Globalization::Calendar* GetDefaultInstance()
		{
			return ((::System::Globalization::Calendar*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDEFAULTINSTANCE_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Globalization::CalendarAlgorithmType get_AlgorithmType()
		{
			return ((::System::Globalization::CalendarAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ALGORITHMTYPE_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ID_OFFSET))(this);
		}

		::System::DateTime AddMonths(::System::DateTime time, ::System::Int32 months)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ADDMONTHS_OFFSET))(this, time, months);
		}

		::System::DateTime AddYears(::System::DateTime time, ::System::Int32 years)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ADDYEARS_OFFSET))(this, time, years);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetDaysInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetDayOfYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETDAYOFYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetWeekOfYear(::System::DateTime time, ::System::Globalization::CalendarWeekRule rule, ::System::DayOfWeek firstDayOfWeek)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime, ::System::Globalization::CalendarWeekRule, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETWEEKOFYEAR_OFFSET))(this, time, rule, firstDayOfWeek);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETERA_OFFSET))(this, time);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ISLEAPDAY_OFFSET))(this, year, month, day, era);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetLeapMonth(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GETLEAPMONTH_OFFSET))(this, year, era);
		}

		::System::Boolean IsLeapMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_ISLEAPMONTH_OFFSET))(this, year, month, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_SET_TWODIGITYEARMAX_OFFSET))(this, value);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TAIWANCALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}
	};
}

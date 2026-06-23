#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"
#include "unitysdk/System/Globalization/CalendarAlgorithmType.h"
#include "unitysdk/System/Globalization/GregorianCalendarTypes.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x1C6F4510)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x1C6F4890)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_DATETOTICKS_OFFSET UNITYSDK_OFFSET(0x1C6F4490)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETABSOLUTEDATE_OFFSET UNITYSDK_OFFSET(0x1C6F42D0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x1C6F40B0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x1C6F48A0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1C6F48D0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x1C6F4920)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1C6F4950)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x1C6F4BB0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDEFAULTINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C6F3E50)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1C6F4D00)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1C6F5250)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x1C6F4DA0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x1C6F4D70)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1C6F4EB0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1C6F3E40)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_CALENDARTYPE_OFFSET UNITYSDK_OFFSET(0x1C6F3FB0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1C6F4D10)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C6F40A0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1C6F3E30)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1C6F3E20)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1C6F57C0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ISLEAPDAY_OFFSET UNITYSDK_OFFSET(0x1C6F4ED0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ISLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1C6F5360)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1C6F5540)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1C6F3D80)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_SET_CALENDARTYPE_OFFSET UNITYSDK_OFFSET(0x1C6F3FC0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1C6F5830)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1C6F5680)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x1C6F5960)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TRYTODATETIME_OFFSET UNITYSDK_OFFSET(0x1C6F5750)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6F5A70)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6F34F0)
#define SYSTEM_GLOBALIZATION_GREGORIANCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F3F70)

namespace System::Globalization
{
	inline static constexpr unsigned int GregorianCalendar_TypeDefinitionIndex = 724;

	class GregorianCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GregorianCalendar_TypeDefinitionIndex)->GetStaticField(0x70);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GregorianCalendar_TypeDefinitionIndex)->GetStaticField(0x78);
		}
		static ::System::Globalization::Calendar** StaticGet_s_defaultInstance()
		{
			return (::System::Globalization::Calendar**)Il2CppClass::FromTypeDefinitionIndex(GregorianCalendar_TypeDefinitionIndex)->GetStaticField(0x80);
		}
		// static const ::System::Int32 ADEra = 0x1; // 0x0
		// static const ::System::Int32 DatePartYear = 0x0; // 0x0
		// static const ::System::Int32 DatePartDayOfYear = 0x1; // 0x0
		// static const ::System::Int32 DatePartMonth = 0x2; // 0x0
		// static const ::System::Int32 DatePartDay = 0x3; // 0x0
		// static const ::System::Int32 MaxYear = 0x270F; // 0x0
		// static const ::System::Int32 DEFAULT_TWO_DIGIT_YEAR_MAX = 0x7ED; // 0x0
		::System::Globalization::GregorianCalendarTypes m_type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Globalization::GregorianCalendarTypes type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::GregorianCalendarTypes))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR__CTOR_1_OFFSET))(this, type);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR__CCTOR_OFFSET))();
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ONDESERIALIZED_OFFSET))(this, ctx);
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Globalization::CalendarAlgorithmType get_AlgorithmType()
		{
			return ((::System::Globalization::CalendarAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ALGORITHMTYPE_OFFSET))(this);
		}

		static ::System::Globalization::Calendar* GetDefaultInstance()
		{
			return ((::System::Globalization::Calendar*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDEFAULTINSTANCE_OFFSET))();
		}

		::System::Globalization::GregorianCalendarTypes get_CalendarType()
		{
			return ((::System::Globalization::GregorianCalendarTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_CALENDARTYPE_OFFSET))(this);
		}

		::System::Void set_CalendarType(::System::Globalization::GregorianCalendarTypes value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::GregorianCalendarTypes))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_SET_CALENDARTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ID_OFFSET))(this);
		}

		::System::Int32 GetDatePart(::System::Int64 ticks, ::System::Int32 part)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDATEPART_OFFSET))(this, ticks, part);
		}

		static ::System::Int64 GetAbsoluteDate(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETABSOLUTEDATE_OFFSET))(year, month, day);
		}

		::System::Int64 DateToTicks(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_DATETOTICKS_OFFSET))(this, year, month, day);
		}

		::System::DateTime AddMonths(::System::DateTime time, ::System::Int32 months)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ADDMONTHS_OFFSET))(this, time, months);
		}

		::System::DateTime AddYears(::System::DateTime time, ::System::Int32 years)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ADDYEARS_OFFSET))(this, time, years);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetDayOfYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYOFYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetDaysInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETDAYSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETERA_OFFSET))(this, time);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ISLEAPDAY_OFFSET))(this, year, month, day, era);
		}

		::System::Int32 GetLeapMonth(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GETLEAPMONTH_OFFSET))(this, year, era);
		}

		::System::Boolean IsLeapMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ISLEAPMONTH_OFFSET))(this, year, month, era);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::System::Boolean TryToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era, ::System::DateTime& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TRYTODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era, result);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_SET_TWODIGITYEARMAX_OFFSET))(this, value);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GREGORIANCALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}
	};
}

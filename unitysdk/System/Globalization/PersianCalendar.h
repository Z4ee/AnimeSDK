#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"
#include "unitysdk/System/Globalization/CalendarAlgorithmType.h"

#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x18B93530)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x18B93880)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_CHECKERARANGE_OFFSET UNITYSDK_OFFSET(0x18B92C60)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_CHECKTICKSRANGE_OFFSET UNITYSDK_OFFSET(0x18B92B20)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_CHECKYEARMONTHRANGE_OFFSET UNITYSDK_OFFSET(0x18B92E70)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_CHECKYEARRANGE_OFFSET UNITYSDK_OFFSET(0x18B92CF0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_DAYSINPREVIOUSMONTHS_OFFSET UNITYSDK_OFFSET(0x18B92A80)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETABSOLUTEDATEPERSIAN_OFFSET UNITYSDK_OFFSET(0x18B928C0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x18B930B0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x18B93890)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x18B938B0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETDAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x18B93900)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x18B93920)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x18B93A60)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x18B93C80)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x18B94090)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x18B93DA0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x18B93D80)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x18B93E10)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_ALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x18B92880)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_BASECALENDARID_OFFSET UNITYSDK_OFFSET(0x18B928A0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x18B93CF0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x18B928B0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x18B92820)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x18B927C0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x18B94160)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_ISLEAPDAY_OFFSET UNITYSDK_OFFSET(0x18B93EF0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_ISLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x18B940F0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x18B93BE0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_MONTHFROMORDINALDAY_OFFSET UNITYSDK_OFFSET(0x18B92FB0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x18B941D0)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x18B93350)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x18B94300)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B94420)
#define SYSTEM_GLOBALIZATION_PERSIANCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x18B92890)

namespace System::Globalization
{
	inline static constexpr unsigned int PersianCalendar_TypeDefinitionIndex = 700;

	class PersianCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PersianCalendar_TypeDefinitionIndex)->GetStaticField(0x14D0);
		}
		static ::System::Int32* StaticGet_PersianEra()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PersianCalendar_TypeDefinitionIndex)->GetStaticField(0xD70);
		}
		static ::System::Int64* StaticGet_PersianEpoch()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(PersianCalendar_TypeDefinitionIndex)->GetStaticField(0xD78);
		}
		static ::System::DateTime* StaticGet_minDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(PersianCalendar_TypeDefinitionIndex)->GetStaticField(0xD80);
		}
		static ::System::DateTime* StaticGet_maxDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(PersianCalendar_TypeDefinitionIndex)->GetStaticField(0xD88);
		}
		// static const ::System::Int32 ApproximateHalfYear = 0xB4; // 0x0
		// static const ::System::Int32 DatePartYear = 0x0; // 0x0
		// static const ::System::Int32 DatePartDayOfYear = 0x1; // 0x0
		// static const ::System::Int32 DatePartMonth = 0x2; // 0x0
		// static const ::System::Int32 DatePartDay = 0x3; // 0x0
		// static const ::System::Int32 MonthsPerYear = 0xC; // 0x0
		// static const ::System::Int32 MaxCalendarYear = 0x24A2; // 0x0
		// static const ::System::Int32 MaxCalendarMonth = 0xA; // 0x0
		// static const ::System::Int32 MaxCalendarDay = 0xD; // 0x0
		// static const ::System::Int32 DEFAULT_TWO_DIGIT_YEAR_MAX = 0x582; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR__CCTOR_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Globalization::CalendarAlgorithmType get_AlgorithmType()
		{
			return ((::System::Globalization::CalendarAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_ALGORITHMTYPE_OFFSET))(this);
		}

		::System::Int32 get_BaseCalendarID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_BASECALENDARID_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_ID_OFFSET))(this);
		}

		::System::Int64 GetAbsoluteDatePersian(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETABSOLUTEDATEPERSIAN_OFFSET))(this, year, month, day);
		}

		static ::System::Void CheckTicksRange(::System::Int64 ticks)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_CHECKTICKSRANGE_OFFSET))(ticks);
		}

		static ::System::Void CheckEraRange(::System::Int32 era)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_CHECKERARANGE_OFFSET))(era);
		}

		static ::System::Void CheckYearRange(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_CHECKYEARRANGE_OFFSET))(year, era);
		}

		static ::System::Void CheckYearMonthRange(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_CHECKYEARMONTHRANGE_OFFSET))(year, month, era);
		}

		static ::System::Int32 MonthFromOrdinalDay(::System::Int32 ordinalDay)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_MONTHFROMORDINALDAY_OFFSET))(ordinalDay);
		}

		static ::System::Int32 DaysInPreviousMonths(::System::Int32 month)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_DAYSINPREVIOUSMONTHS_OFFSET))(month);
		}

		::System::Int32 GetDatePart(::System::Int64 ticks, ::System::Int32 part)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETDATEPART_OFFSET))(this, ticks, part);
		}

		::System::DateTime AddMonths(::System::DateTime time, ::System::Int32 months)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_ADDMONTHS_OFFSET))(this, time, months);
		}

		::System::DateTime AddYears(::System::DateTime time, ::System::Int32 years)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_ADDYEARS_OFFSET))(this, time, years);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetDayOfYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETDAYOFYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetDaysInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETDAYSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETERA_OFFSET))(this, time);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_ISLEAPDAY_OFFSET))(this, year, month, day, era);
		}

		::System::Int32 GetLeapMonth(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GETLEAPMONTH_OFFSET))(this, year, era);
		}

		::System::Boolean IsLeapMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_ISLEAPMONTH_OFFSET))(this, year, month, era);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_SET_TWODIGITYEARMAX_OFFSET))(this, value);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PERSIANCALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}
	};
}

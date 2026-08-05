#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"
#include "unitysdk/System/Globalization/CalendarAlgorithmType.h"
#include "unitysdk/System/Globalization/UmAlQuraCalendar_DateMapping.h"

#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x1D8BE5F0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x1D8BE8E0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKERARANGE_OFFSET UNITYSDK_OFFSET(0x1D8BDF20)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKTICKSRANGE_OFFSET UNITYSDK_OFFSET(0x1D8BDDE0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKYEARMONTHRANGE_OFFSET UNITYSDK_OFFSET(0x1D8BE0F0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKYEARRANGE_OFFSET UNITYSDK_OFFSET(0x1D8BDF90)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CONVERTGREGORIANTOHIJRI_OFFSET UNITYSDK_OFFSET(0x1D8BE190)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CONVERTHIJRITOGREGORIAN_OFFSET UNITYSDK_OFFSET(0x1D8BDAB0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETABSOLUTEDATEUMALQURA_OFFSET UNITYSDK_OFFSET(0x1D8BDD20)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x1D8BE4A0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x1D8BE8F0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1D8BE910)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x1D8BE950)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1D8BE970)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x1D8BEB50)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1D8BEBC0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1D8BEE70)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x1D8BECB0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x1D8BEC90)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1D8BED20)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_ALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1D8BDA60)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_BASECALENDARID_OFFSET UNITYSDK_OFFSET(0x1D8BDA80)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET UNITYSDK_OFFSET(0x1D8BDAA0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1D8BEC30)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D8BDA90)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1D8BDA00)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1D8BD9A0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1D8BF1E0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_INITDATEMAPPING_OFFSET UNITYSDK_OFFSET(0x1D8BD7D0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_ISLEAPDAY_OFFSET UNITYSDK_OFFSET(0x1D8BED40)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_ISLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1D8BEED0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1D8BEF40)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_REALGETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x1D8BEA30)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1D8BF250)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1D8BEFB0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x1D8BF380)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8BF4A0)
#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BDA70)

namespace System::Globalization
{
	inline static constexpr unsigned int UmAlQuraCalendar_TypeDefinitionIndex = 765;

	class UmAlQuraCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::Il2CppArray<::System::Globalization::UmAlQuraCalendar_DateMapping>** StaticGet_HijriYearInfo()
		{
			return (::Il2CppArray<::System::Globalization::UmAlQuraCalendar_DateMapping>**)Il2CppClass::FromTypeDefinitionIndex(UmAlQuraCalendar_TypeDefinitionIndex)->GetStaticField(0xD30);
		}
		static ::System::DateTime* StaticGet_maxDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(UmAlQuraCalendar_TypeDefinitionIndex)->GetStaticField(0x390);
		}
		static ::System::DateTime* StaticGet_minDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(UmAlQuraCalendar_TypeDefinitionIndex)->GetStaticField(0x398);
		}
		// static const ::System::Int32 MinCalendarYear = 0x526; // 0x0
		// static const ::System::Int32 MaxCalendarYear = 0x5DC; // 0x0
		// static const ::System::Int32 UmAlQuraEra = 0x1; // 0x0
		// static const ::System::Int32 DateCycle = 0x1E; // 0x0
		// static const ::System::Int32 DatePartYear = 0x0; // 0x0
		// static const ::System::Int32 DatePartDayOfYear = 0x1; // 0x0
		// static const ::System::Int32 DatePartMonth = 0x2; // 0x0
		// static const ::System::Int32 DatePartDay = 0x3; // 0x0
		// static const ::System::Int32 DEFAULT_TWO_DIGIT_YEAR_MAX = 0x5AB; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Globalization::UmAlQuraCalendar_DateMapping>* InitDateMapping()
		{
			return ((::Il2CppArray<::System::Globalization::UmAlQuraCalendar_DateMapping>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_INITDATEMAPPING_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Globalization::CalendarAlgorithmType get_AlgorithmType()
		{
			return ((::System::Globalization::CalendarAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_ALGORITHMTYPE_OFFSET))(this);
		}

		::System::Int32 get_BaseCalendarID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_BASECALENDARID_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_DaysInYearBeforeMinSupportedYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET))(this);
		}

		static ::System::Void ConvertHijriToGregorian(::System::Int32 HijriYear, ::System::Int32 HijriMonth, ::System::Int32 HijriDay, ::System::Int32& yg, ::System::Int32& mg, ::System::Int32& dg)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CONVERTHIJRITOGREGORIAN_OFFSET))(HijriYear, HijriMonth, HijriDay, yg, mg, dg);
		}

		static ::System::Int64 GetAbsoluteDateUmAlQura(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETABSOLUTEDATEUMALQURA_OFFSET))(year, month, day);
		}

		static ::System::Void CheckTicksRange(::System::Int64 ticks)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKTICKSRANGE_OFFSET))(ticks);
		}

		static ::System::Void CheckEraRange(::System::Int32 era)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKERARANGE_OFFSET))(era);
		}

		static ::System::Void CheckYearRange(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKYEARRANGE_OFFSET))(year, era);
		}

		static ::System::Void CheckYearMonthRange(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CHECKYEARMONTHRANGE_OFFSET))(year, month, era);
		}

		static ::System::Void ConvertGregorianToHijri(::System::DateTime time, ::System::Int32& HijriYear, ::System::Int32& HijriMonth, ::System::Int32& HijriDay)
		{
			return ((::System::Void(*)(::System::DateTime, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_CONVERTGREGORIANTOHIJRI_OFFSET))(time, HijriYear, HijriMonth, HijriDay);
		}

		::System::Int32 GetDatePart(::System::DateTime time, ::System::Int32 part)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDATEPART_OFFSET))(this, time, part);
		}

		::System::DateTime AddMonths(::System::DateTime time, ::System::Int32 months)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_ADDMONTHS_OFFSET))(this, time, months);
		}

		::System::DateTime AddYears(::System::DateTime time, ::System::Int32 years)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_ADDYEARS_OFFSET))(this, time, years);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetDayOfYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYOFYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		static ::System::Int32 RealGetDaysInYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_REALGETDAYSINYEAR_OFFSET))(year);
		}

		::System::Int32 GetDaysInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETDAYSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETERA_OFFSET))(this, time);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_ISLEAPDAY_OFFSET))(this, year, month, day, era);
		}

		::System::Int32 GetLeapMonth(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GETLEAPMONTH_OFFSET))(this, year, era);
		}

		::System::Boolean IsLeapMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_ISLEAPMONTH_OFFSET))(this, year, month, era);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_SET_TWODIGITYEARMAX_OFFSET))(this, value);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}
	};
}

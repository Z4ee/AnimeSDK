#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"
#include "unitysdk/System/Globalization/CalendarAlgorithmType.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x1C6CD280)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x1C6CD540)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKERARANGE_OFFSET UNITYSDK_OFFSET(0x1C6CC540)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKTICKSRANGE_OFFSET UNITYSDK_OFFSET(0x1C6CC400)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKYEARMONTHRANGE_OFFSET UNITYSDK_OFFSET(0x1C6CC750)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKYEARRANGE_OFFSET UNITYSDK_OFFSET(0x1C6CC5D0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_DAYSUPTOHIJRIYEAR_OFFSET UNITYSDK_OFFSET(0x1C6CC0D0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETABSOLUTEDATEHIJRI_OFFSET UNITYSDK_OFFSET(0x1C6CBED0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETADVANCEHIJRIDATE_OFFSET UNITYSDK_OFFSET(0x1C6CC3F0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x1C6CC890)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x1C6CD550)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1C6CD580)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x1C6CD5C0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1C6CD5F0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x1C6CD170)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1C6CD720)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1C6CDA70)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x1C6CD850)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x1C6CD820)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1C6CD8C0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_ALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1C6CBE90)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET UNITYSDK_OFFSET(0x1C6CBEC0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1C6CD790)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_HIJRIADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x1C6CC200)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C6CBEB0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1C6CBE30)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1C6CBDD0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1C6CDD20)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_ISLEAPDAY_OFFSET UNITYSDK_OFFSET(0x1C6CD8E0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_ISLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1C6CDAD0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1C6CC220)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_SET_HIJRIADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x1C6CC2C0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1C6CDD90)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1C6CDB40)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x1C6CDEC0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6CDFE0)
#define SYSTEM_GLOBALIZATION_HIJRICALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6CBEA0)

namespace System::Globalization
{
	inline static constexpr unsigned int HijriCalendar_TypeDefinitionIndex = 736;

	class HijriCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_HijriMonthDays()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HijriCalendar_TypeDefinitionIndex)->GetStaticField(0x14C0);
		}
		static ::System::DateTime* StaticGet_calendarMinValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(HijriCalendar_TypeDefinitionIndex)->GetStaticField(0xD50);
		}
		static ::System::Int32* StaticGet_HijriEra()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HijriCalendar_TypeDefinitionIndex)->GetStaticField(0xD58);
		}
		static ::System::DateTime* StaticGet_calendarMaxValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(HijriCalendar_TypeDefinitionIndex)->GetStaticField(0xD60);
		}
		// static const ::System::Int32 DatePartYear = 0x0; // 0x0
		// static const ::System::Int32 DatePartDayOfYear = 0x1; // 0x0
		// static const ::System::Int32 DatePartMonth = 0x2; // 0x0
		// static const ::System::Int32 DatePartDay = 0x3; // 0x0
		// static const ::System::Int32 MinAdvancedHijri = 0xFFFFFFFE; // 0x0
		// static const ::System::Int32 MaxAdvancedHijri = 0x2; // 0x0
		// static const ::System::String* HijriAdvanceRegKeyEntry; // 0x0
		// static const ::System::Int32 MaxCalendarYear = 0x25C2; // 0x0
		// static const ::System::Int32 MaxCalendarMonth = 0x4; // 0x0
		// static const ::System::Int32 MaxCalendarDay = 0x3; // 0x0
		// static const ::System::Int32 DEFAULT_TWO_DIGIT_YEAR_MAX = 0x5AB; // 0x0
		::System::Int32 m_HijriAdvance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR__CCTOR_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Globalization::CalendarAlgorithmType get_AlgorithmType()
		{
			return ((::System::Globalization::CalendarAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_ALGORITHMTYPE_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_DaysInYearBeforeMinSupportedYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET))(this);
		}

		::System::Int64 GetAbsoluteDateHijri(::System::Int32 y, ::System::Int32 m, ::System::Int32 d)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETABSOLUTEDATEHIJRI_OFFSET))(this, y, m, d);
		}

		::System::Int64 DaysUpToHijriYear(::System::Int32 HijriYear)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_DAYSUPTOHIJRIYEAR_OFFSET))(this, HijriYear);
		}

		::System::Int32 get_HijriAdjustment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_HIJRIADJUSTMENT_OFFSET))(this);
		}

		::System::Void set_HijriAdjustment(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_SET_HIJRIADJUSTMENT_OFFSET))(this, value);
		}

		static ::System::Int32 GetAdvanceHijriDate()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETADVANCEHIJRIDATE_OFFSET))();
		}

		static ::System::Void CheckTicksRange(::System::Int64 ticks)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKTICKSRANGE_OFFSET))(ticks);
		}

		static ::System::Void CheckEraRange(::System::Int32 era)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKERARANGE_OFFSET))(era);
		}

		static ::System::Void CheckYearRange(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKYEARRANGE_OFFSET))(year, era);
		}

		static ::System::Void CheckYearMonthRange(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_CHECKYEARMONTHRANGE_OFFSET))(year, month, era);
		}

		::System::Int32 GetDatePart(::System::Int64 ticks, ::System::Int32 part)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDATEPART_OFFSET))(this, ticks, part);
		}

		::System::DateTime AddMonths(::System::DateTime time, ::System::Int32 months)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_ADDMONTHS_OFFSET))(this, time, months);
		}

		::System::DateTime AddYears(::System::DateTime time, ::System::Int32 years)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_ADDYEARS_OFFSET))(this, time, years);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetDayOfYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYOFYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetDaysInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETDAYSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETERA_OFFSET))(this, time);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_ISLEAPDAY_OFFSET))(this, year, month, day, era);
		}

		::System::Int32 GetLeapMonth(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GETLEAPMONTH_OFFSET))(this, year, era);
		}

		::System::Boolean IsLeapMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_ISLEAPMONTH_OFFSET))(this, year, month, era);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_SET_TWODIGITYEARMAX_OFFSET))(this, value);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HIJRICALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"
#include "unitysdk/System/Globalization/CalendarAlgorithmType.h"
#include "unitysdk/System/Globalization/CalendarWeekRule.h"

namespace System { class String; }
namespace System::Globalization { class EraInfo; }
namespace System::Globalization { class GregorianCalendarHelper; }

#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ABBREVERANAMES_OFFSET UNITYSDK_OFFSET(0x1B8A2250)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x1B8A1C70)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x1B8A1C90)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_COMPAREERARANGES_OFFSET UNITYSDK_OFFSET(0x1B8A14E0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ENGLISHERANAMES_OFFSET UNITYSDK_OFFSET(0x1B8A2380)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ERANAMES_OFFSET UNITYSDK_OFFSET(0x1B8A2120)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x1B8A1D40)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1B8A1D80)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x1B8A1DF0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1B8A1CC0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x1B8A1CE0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDEFAULTINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B8A19A0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERAFROMVALUE_OFFSET UNITYSDK_OFFSET(0x1B8A1520)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERAINFO_OFFSET UNITYSDK_OFFSET(0x1B8A1070)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERASFROMREGISTRY_OFFSET UNITYSDK_OFFSET(0x1B8A14D0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1B8A1E90)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1B8A1F80)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x1B8A1E30)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x1B8A1EB0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETWEEKOFYEAR_OFFSET UNITYSDK_OFFSET(0x1B8A1E60)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1B8A1EF0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1B8A1060)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1B8A2100)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B8A1C60)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1B8A1050)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1B8A0FF0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1B8A2550)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISLEAPDAY_OFFSET UNITYSDK_OFFSET(0x1B8A1F10)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1B8A1FA0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1B8A1F30)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISVALIDYEAR_OFFSET UNITYSDK_OFFSET(0x1B8A24B0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1B8A25C0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1B8A1FC0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x1B8A1FE0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8A2710)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A1AA0)

namespace System::Globalization
{
	inline static constexpr unsigned int JapaneseCalendar_TypeDefinitionIndex = 737;

	class JapaneseCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::System::Globalization::Calendar** StaticGet_s_defaultInstance()
		{
			return (::System::Globalization::Calendar**)Il2CppClass::FromTypeDefinitionIndex(JapaneseCalendar_TypeDefinitionIndex)->GetStaticField(0x6B0);
		}
		static ::Il2CppArray<::System::Globalization::EraInfo*>** StaticGet_japaneseEraInfo()
		{
			return (::Il2CppArray<::System::Globalization::EraInfo*>**)Il2CppClass::FromTypeDefinitionIndex(JapaneseCalendar_TypeDefinitionIndex)->GetStaticField(0x6B8);
		}
		static ::System::DateTime* StaticGet_calendarMinValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(JapaneseCalendar_TypeDefinitionIndex)->GetStaticField(0x150);
		}
		// static const ::System::String* c_japaneseErasHive; // 0x0
		// static const ::System::String* c_japaneseErasHivePermissionList; // 0x0
		// static const ::System::Int32 DEFAULT_TWO_DIGIT_YEAR_MAX = 0x63; // 0x0
		::System::Globalization::GregorianCalendarHelper* helper; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR__CCTOR_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Globalization::CalendarAlgorithmType get_AlgorithmType()
		{
			return ((::System::Globalization::CalendarAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ALGORITHMTYPE_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Globalization::EraInfo*>* GetEraInfo()
		{
			return ((::Il2CppArray<::System::Globalization::EraInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERAINFO_OFFSET))();
		}

		static ::Il2CppArray<::System::Globalization::EraInfo*>* GetErasFromRegistry()
		{
			return ((::Il2CppArray<::System::Globalization::EraInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERASFROMREGISTRY_OFFSET))();
		}

		static ::System::Int32 CompareEraRanges(::System::Globalization::EraInfo* a, ::System::Globalization::EraInfo* b)
		{
			return ((::System::Int32(*)(::System::Globalization::EraInfo*, ::System::Globalization::EraInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_COMPAREERARANGES_OFFSET))(a, b);
		}

		static ::System::Globalization::EraInfo* GetEraFromValue(::System::String* value, ::System::String* data)
		{
			return ((::System::Globalization::EraInfo*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERAFROMVALUE_OFFSET))(value, data);
		}

		static ::System::Globalization::Calendar* GetDefaultInstance()
		{
			return ((::System::Globalization::Calendar*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDEFAULTINSTANCE_OFFSET))();
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ID_OFFSET))(this);
		}

		::System::DateTime AddMonths(::System::DateTime time, ::System::Int32 months)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ADDMONTHS_OFFSET))(this, time, months);
		}

		::System::DateTime AddYears(::System::DateTime time, ::System::Int32 years)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ADDYEARS_OFFSET))(this, time, years);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetDaysInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetDayOfYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetWeekOfYear(::System::DateTime time, ::System::Globalization::CalendarWeekRule rule, ::System::DayOfWeek firstDayOfWeek)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime, ::System::Globalization::CalendarWeekRule, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETWEEKOFYEAR_OFFSET))(this, time, rule, firstDayOfWeek);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERA_OFFSET))(this, time);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISLEAPDAY_OFFSET))(this, year, month, day, era);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetLeapMonth(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETLEAPMONTH_OFFSET))(this, year, era);
		}

		::System::Boolean IsLeapMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISLEAPMONTH_OFFSET))(this, year, month, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ERAS_OFFSET))(this);
		}

		static ::Il2CppArray<::System::String*>* EraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ERANAMES_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* AbbrevEraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ABBREVERANAMES_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* EnglishEraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ENGLISHERANAMES_OFFSET))();
		}

		::System::Boolean IsValidYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISVALIDYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_SET_TWODIGITYEARMAX_OFFSET))(this, value);
		}
	};
}

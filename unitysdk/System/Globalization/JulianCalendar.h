#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"
#include "unitysdk/System/Globalization/CalendarAlgorithmType.h"

#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x1A598590)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x1A598990)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_CHECKDAYRANGE_OFFSET UNITYSDK_OFFSET(0x1A598190)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_CHECKERARANGE_OFFSET UNITYSDK_OFFSET(0x1A597F10)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_CHECKMONTHRANGE_OFFSET UNITYSDK_OFFSET(0x1A598120)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_CHECKYEARERARANGE_OFFSET UNITYSDK_OFFSET(0x1A597FA0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_DATETOTICKS_OFFSET UNITYSDK_OFFSET(0x1A5984C0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x1A598330)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x1A5989A0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1A598A10)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETDAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x1A598A60)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1A598B60)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x1A598CE0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1A598D20)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1A5990F0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x1A598E80)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x1A598D80)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1A598EA0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GET_ALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1A597ED0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1A598DF0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A597F00)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1A597EC0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1A597EB0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1A5994E0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_ISLEAPDAY_OFFSET UNITYSDK_OFFSET(0x1A598FA0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_ISLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1A599100)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1A598D00)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1A5994F0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1A5991D0)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x1A599620)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A599730)
#define SYSTEM_GLOBALIZATION_JULIANCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A597EE0)

namespace System::Globalization
{
	inline static constexpr unsigned int JulianCalendar_TypeDefinitionIndex = 739;

	class JulianCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JulianCalendar_TypeDefinitionIndex)->GetStaticField(0xDD0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JulianCalendar_TypeDefinitionIndex)->GetStaticField(0xDD8);
		}
		static ::System::Int32* StaticGet_JulianEra()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(JulianCalendar_TypeDefinitionIndex)->GetStaticField(0x3C0);
		}
		// static const ::System::Int32 DatePartYear = 0x0; // 0x0
		// static const ::System::Int32 DatePartDayOfYear = 0x1; // 0x0
		// static const ::System::Int32 DatePartMonth = 0x2; // 0x0
		// static const ::System::Int32 DatePartDay = 0x3; // 0x0
		// static const ::System::Int32 JulianDaysPerYear = 0x16D; // 0x0
		// static const ::System::Int32 JulianDaysPer4Years = 0x5B5; // 0x0
		::System::Int32 MaxYear; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR__CCTOR_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Globalization::CalendarAlgorithmType get_AlgorithmType()
		{
			return ((::System::Globalization::CalendarAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GET_ALGORITHMTYPE_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GET_ID_OFFSET))(this);
		}

		static ::System::Void CheckEraRange(::System::Int32 era)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_CHECKERARANGE_OFFSET))(era);
		}

		::System::Void CheckYearEraRange(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_CHECKYEARERARANGE_OFFSET))(this, year, era);
		}

		static ::System::Void CheckMonthRange(::System::Int32 month)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_CHECKMONTHRANGE_OFFSET))(month);
		}

		static ::System::Void CheckDayRange(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_CHECKDAYRANGE_OFFSET))(year, month, day);
		}

		static ::System::Int32 GetDatePart(::System::Int64 ticks, ::System::Int32 part)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETDATEPART_OFFSET))(ticks, part);
		}

		static ::System::Int64 DateToTicks(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_DATETOTICKS_OFFSET))(year, month, day);
		}

		::System::DateTime AddMonths(::System::DateTime time, ::System::Int32 months)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_ADDMONTHS_OFFSET))(this, time, months);
		}

		::System::DateTime AddYears(::System::DateTime time, ::System::Int32 years)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_ADDYEARS_OFFSET))(this, time, years);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		::System::Int32 GetDayOfYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETDAYOFYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetDaysInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETDAYSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETERA_OFFSET))(this, time);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_ISLEAPDAY_OFFSET))(this, year, month, day, era);
		}

		::System::Int32 GetLeapMonth(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GETLEAPMONTH_OFFSET))(this, year, era);
		}

		::System::Boolean IsLeapMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_ISLEAPMONTH_OFFSET))(this, year, month, era);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_SET_TWODIGITYEARMAX_OFFSET))(this, value);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JULIANCALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}
	};
}

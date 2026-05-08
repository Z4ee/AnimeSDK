#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/Calendar.h"
#include "unitysdk/System/Globalization/CalendarAlgorithmType.h"

namespace System { class String; }
namespace System::Globalization { class HebrewCalendar___DateBuffer; }

#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x1AC47130)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x1AC47590)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_CHECKERARANGE_OFFSET UNITYSDK_OFFSET(0x1AC45FA0)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_CHECKHEBREWDAYVALUE_OFFSET UNITYSDK_OFFSET(0x1AC46260)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_CHECKHEBREWMONTHVALUE_OFFSET UNITYSDK_OFFSET(0x1AC46030)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_CHECKHEBREWYEARVALUE_OFFSET UNITYSDK_OFFSET(0x1AC45E20)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_CHECKTICKSRANGE_OFFSET UNITYSDK_OFFSET(0x1AC46510)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x1AC46900)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDAYDIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1AC48120)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x1AC47860)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1AC47890)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x1AC47980)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1AC46340)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDAYSINYEAR_OFFSET UNITYSDK_OFFSET(0x1AC47B60)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1AC47C60)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETHEBREWYEARTYPE_OFFSET UNITYSDK_OFFSET(0x1AC478E0)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1AC48070)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETLUNARMONTHDAY_OFFSET UNITYSDK_OFFSET(0x1AC466F0)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x1AC461B0)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x1AC47D50)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1AC46650)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1AC47A40)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GET_ALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1AC45DF0)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1AC47CC0)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AC45E10)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1AC45D90)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1AC45D30)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1AC48640)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_HEBREWTOGREGORIAN_OFFSET UNITYSDK_OFFSET(0x1AC48440)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_ISLEAPDAY_OFFSET UNITYSDK_OFFSET(0x1AC47E20)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_ISLEAPMONTH_OFFSET UNITYSDK_OFFSET(0x1AC47FA0)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1AC47D80)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_SET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x1AC486B0)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1AC47A60)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x1AC48780)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC488A0)
#define SYSTEM_GLOBALIZATION_HEBREWCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC45E00)

namespace System::Globalization
{
	inline static constexpr unsigned int HebrewCalendar_TypeDefinitionIndex = 728;

	class HebrewCalendar : public ::System::Globalization::Calendar
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_HebrewTable()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HebrewCalendar_TypeDefinitionIndex)->GetStaticField(0x1440);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_LunarMonthLen()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HebrewCalendar_TypeDefinitionIndex)->GetStaticField(0x1448);
		}
		static ::System::DateTime* StaticGet_calendarMinValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(HebrewCalendar_TypeDefinitionIndex)->GetStaticField(0xD10);
		}
		static ::System::DateTime* StaticGet_calendarMaxValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(HebrewCalendar_TypeDefinitionIndex)->GetStaticField(0xD18);
		}
		static ::System::Int32* StaticGet_HebrewEra()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HebrewCalendar_TypeDefinitionIndex)->GetStaticField(0xD20);
		}
		// static const ::System::Int32 DatePartYear = 0x0; // 0x0
		// static const ::System::Int32 DatePartDayOfYear = 0x1; // 0x0
		// static const ::System::Int32 DatePartMonth = 0x2; // 0x0
		// static const ::System::Int32 DatePartDay = 0x3; // 0x0
		// static const ::System::Int32 DatePartDayOfWeek = 0x4; // 0x0
		// static const ::System::Int32 HebrewYearOf1AD = 0xEB0; // 0x0
		// static const ::System::Int32 FirstGregorianTableYear = 0x62F; // 0x0
		// static const ::System::Int32 LastGregorianTableYear = 0x8BF; // 0x0
		// static const ::System::Int32 TABLESIZE = 0x290; // 0x0
		// static const ::System::Int32 MinHebrewYear = 0x14DF; // 0x0
		// static const ::System::Int32 MaxHebrewYear = 0x176F; // 0x0
		// static const ::System::Int32 DEFAULT_TWO_DIGIT_YEAR_MAX = 0x169E; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR__CCTOR_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Globalization::CalendarAlgorithmType get_AlgorithmType()
		{
			return ((::System::Globalization::CalendarAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GET_ALGORITHMTYPE_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GET_ID_OFFSET))(this);
		}

		static ::System::Void CheckHebrewYearValue(::System::Int32 y, ::System::Int32 era, ::System::String* varName)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_CHECKHEBREWYEARVALUE_OFFSET))(y, era, varName);
		}

		::System::Void CheckHebrewMonthValue(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_CHECKHEBREWMONTHVALUE_OFFSET))(this, year, month, era);
		}

		::System::Void CheckHebrewDayValue(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_CHECKHEBREWDAYVALUE_OFFSET))(this, year, month, day, era);
		}

		static ::System::Void CheckEraRange(::System::Int32 era)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_CHECKERARANGE_OFFSET))(era);
		}

		static ::System::Void CheckTicksRange(::System::Int64 ticks)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_CHECKTICKSRANGE_OFFSET))(ticks);
		}

		static ::System::Int32 GetResult(::System::Globalization::HebrewCalendar___DateBuffer* result, ::System::Int32 part)
		{
			return ((::System::Int32(*)(::System::Globalization::HebrewCalendar___DateBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETRESULT_OFFSET))(result, part);
		}

		static ::System::Int32 GetLunarMonthDay(::System::Int32 gregorianYear, ::System::Globalization::HebrewCalendar___DateBuffer* lunarDate)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Globalization::HebrewCalendar___DateBuffer*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETLUNARMONTHDAY_OFFSET))(gregorianYear, lunarDate);
		}

		::System::Int32 GetDatePart(::System::Int64 ticks, ::System::Int32 part)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDATEPART_OFFSET))(this, ticks, part);
		}

		::System::DateTime AddMonths(::System::DateTime time, ::System::Int32 months)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_ADDMONTHS_OFFSET))(this, time, months);
		}

		::System::DateTime AddYears(::System::DateTime time, ::System::Int32 years)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_ADDYEARS_OFFSET))(this, time, years);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDAYOFMONTH_OFFSET))(this, time);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime time)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDAYOFWEEK_OFFSET))(this, time);
		}

		static ::System::Int32 GetHebrewYearType(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETHEBREWYEARTYPE_OFFSET))(year, era);
		}

		::System::Int32 GetDayOfYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDAYOFYEAR_OFFSET))(this, time);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDAYSINMONTH_OFFSET))(this, year, month, era);
		}

		::System::Int32 GetDaysInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDAYSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETERA_OFFSET))(this, time);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GET_ERAS_OFFSET))(this);
		}

		::System::Int32 GetMonth(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETMONTH_OFFSET))(this, time);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETMONTHSINYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetYear(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETYEAR_OFFSET))(this, time);
		}

		::System::Boolean IsLeapDay(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_ISLEAPDAY_OFFSET))(this, year, month, day, era);
		}

		::System::Int32 GetLeapMonth(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETLEAPMONTH_OFFSET))(this, year, era);
		}

		::System::Boolean IsLeapMonth(::System::Int32 year, ::System::Int32 month, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_ISLEAPMONTH_OFFSET))(this, year, month, era);
		}

		::System::Boolean IsLeapYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_ISLEAPYEAR_OFFSET))(this, year, era);
		}

		static ::System::Int32 GetDayDifference(::System::Int32 lunarYearType, ::System::Int32 month1, ::System::Int32 day1, ::System::Int32 month2, ::System::Int32 day2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GETDAYDIFFERENCE_OFFSET))(lunarYearType, month1, day1, month2, day2);
		}

		static ::System::DateTime HebrewToGregorian(::System::Int32 hebrewYear, ::System::Int32 hebrewMonth, ::System::Int32 hebrewDay, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond)
		{
			return ((::System::DateTime(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_HEBREWTOGREGORIAN_OFFSET))(hebrewYear, hebrewMonth, hebrewDay, hour, minute, second, millisecond);
		}

		::System::DateTime ToDateTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Int32 era)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_TODATETIME_OFFSET))(this, year, month, day, hour, minute, second, millisecond, era);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

		::System::Void set_TwoDigitYearMax(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_SET_TWODIGITYEARMAX_OFFSET))(this, value);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWCALENDAR_TOFOURDIGITYEAR_OFFSET))(this, year);
		}
	};
}

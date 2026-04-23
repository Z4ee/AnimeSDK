#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class CalendarData; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVERANAMES_OFFSET UNITYSDK_OFFSET(0x1791EEF0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDDAYNAMES_OFFSET UNITYSDK_OFFSET(0x1791EFB0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDENGLISHERANAMES_OFFSET UNITYSDK_OFFSET(0x1791EF10)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDGENITIVEMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x1791F030)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x1791F010)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_DATESEPARATOR_OFFSET UNITYSDK_OFFSET(0x1791F090)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_DAYNAMES_OFFSET UNITYSDK_OFFSET(0x1791EF90)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ERANAMES_OFFSET UNITYSDK_OFFSET(0x1791EED0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_FILL_CULTURE_DATA_OFFSET UNITYSDK_OFFSET(0x1791EB70)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_FILL_NUMBER_DATA_OFFSET UNITYSDK_OFFSET(0x1791F4E0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GENITIVEMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x1791EFF0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETCALENDAR_OFFSET UNITYSDK_OFFSET(0x1791AAD0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_1_OFFSET UNITYSDK_OFFSET(0x1791E9A0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_2_OFFSET UNITYSDK_OFFSET(0x1791EC50)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_OFFSET UNITYSDK_OFFSET(0x1791E900)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETDATESEPARATOR_OFFSET UNITYSDK_OFFSET(0x1791F0E0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETNFIVALUES_OFFSET UNITYSDK_OFFSET(0x1791F480)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1791F0F0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_CALENDARIDS_OFFSET UNITYSDK_OFFSET(0x1791ECE0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_CULTURENAME_OFFSET UNITYSDK_OFFSET(0x1791EE80)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_IFIRSTDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1791EC90)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_IFIRSTWEEKOFYEAR_OFFSET UNITYSDK_OFFSET(0x1791ECA0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_ILANGUAGE_OFFSET UNITYSDK_OFFSET(0x1791EEB0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_INVARIANT_OFFSET UNITYSDK_OFFSET(0x1791E650)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_ISINVARIANTCULTURE_OFFSET UNITYSDK_OFFSET(0x1791EE60)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_LONGTIMES_OFFSET UNITYSDK_OFFSET(0x1791EC60)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SAM1159_OFFSET UNITYSDK_OFFSET(0x1791ECB0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SCOMPAREINFO_OFFSET UNITYSDK_OFFSET(0x1791EE90)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SHORTTIMES_OFFSET UNITYSDK_OFFSET(0x1791EC70)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SISO639LANGNAME_OFFSET UNITYSDK_OFFSET(0x1791EC80)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SPM2359_OFFSET UNITYSDK_OFFSET(0x1791ECC0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_STEXTINFO_OFFSET UNITYSDK_OFFSET(0x1791EEA0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_TIMESEPARATOR_OFFSET UNITYSDK_OFFSET(0x1791ECD0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_USEUSEROVERRIDE_OFFSET UNITYSDK_OFFSET(0x1791EEC0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_INDEXOFTIMEPART_OFFSET UNITYSDK_OFFSET(0x1791F1B0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_LEAPYEARMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x1791F050)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_LONGDATES_OFFSET UNITYSDK_OFFSET(0x1791EF50)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_MONTHDAY_OFFSET UNITYSDK_OFFSET(0x1791F070)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_MONTHNAMES_OFFSET UNITYSDK_OFFSET(0x1791EFD0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_REESCAPEWIN32STRINGS_OFFSET UNITYSDK_OFFSET(0x17919C50)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_REESCAPEWIN32STRING_OFFSET UNITYSDK_OFFSET(0x17919C60)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_SHORTDATES_OFFSET UNITYSDK_OFFSET(0x1791EF30)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_UNESCAPENLSSTRING_OFFSET UNITYSDK_OFFSET(0x1791F2F0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_YEARMONTHS_OFFSET UNITYSDK_OFFSET(0x1791EF70)
#define SYSTEM_GLOBALIZATION_CULTUREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1791E640)

namespace System::Globalization
{
	inline static constexpr unsigned int CultureData_TypeDefinitionIndex = 781;

	class CultureData : public ::System::Object
	{
	public:
		static ::System::Globalization::CultureData** StaticGet_s_Invariant()
		{
			return (::System::Globalization::CultureData**)Il2CppClass::FromTypeDefinitionIndex(CultureData_TypeDefinitionIndex)->GetStaticField(0x70D0);
		}
		::System::String* sAM1159; // 0x10
		::System::String* sPM2359; // 0x18
		::System::String* sTimeSeparator; // 0x20
		::Il2CppArray<::System::String*>* saLongTimes; // 0x28
		::Il2CppArray<::System::String*>* saShortTimes; // 0x30
		::System::Int32 iFirstDayOfWeek; // 0x38
		::System::Int32 iFirstWeekOfYear; // 0x3C
		::Il2CppArray<::System::Int32>* waCalendars; // 0x40
		::Il2CppArray<::System::Globalization::CalendarData*>* calendars; // 0x48
		::System::String* sISO639Language; // 0x50
		::System::String* sRealName; // 0x58
		::System::Boolean bUseOverrides; // 0x60
		::System::Int32 calendarId; // 0x64
		::System::Int32 numberIndex; // 0x68
		::System::Int32 iDefaultAnsiCodePage; // 0x6C
		::System::Int32 iDefaultOemCodePage; // 0x70
		::System::Int32 iDefaultMacCodePage; // 0x74
		::System::Int32 iDefaultEbcdicCodePage; // 0x78
		::System::Boolean isRightToLeft; // 0x7C
		::System::String* sListSeparator; // 0x80

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA__CTOR_OFFSET))(this, name);
		}

		static ::System::Globalization::CultureData* get_Invariant()
		{
			return ((::System::Globalization::CultureData*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_INVARIANT_OFFSET))();
		}

		static ::System::Globalization::CultureData* GetCultureData(::System::String* cultureName, ::System::Boolean useUserOverride)
		{
			return ((::System::Globalization::CultureData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_OFFSET))(cultureName, useUserOverride);
		}

		static ::System::Globalization::CultureData* GetCultureData_1(::System::String* cultureName, ::System::Boolean useUserOverride, ::System::Int32 datetimeIndex, ::System::Int32 calendarId, ::System::Int32 numberIndex, ::System::String* iso2lang, ::System::Int32 ansiCodePage, ::System::Int32 oemCodePage, ::System::Int32 macCodePage, ::System::Int32 ebcdicCodePage, ::System::Boolean rightToLeft, ::System::String* listSeparator)
		{
			return ((::System::Globalization::CultureData*(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_1_OFFSET))(cultureName, useUserOverride, datetimeIndex, calendarId, numberIndex, iso2lang, ansiCodePage, oemCodePage, macCodePage, ebcdicCodePage, rightToLeft, listSeparator);
		}

		static ::System::Globalization::CultureData* GetCultureData_2(::System::Int32 culture, ::System::Boolean bUseUserOverride)
		{
			return ((::System::Globalization::CultureData*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_2_OFFSET))(culture, bUseUserOverride);
		}

		::System::Void fill_culture_data(::System::Int32 datetimeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_FILL_CULTURE_DATA_OFFSET))(this, datetimeIndex);
		}

		::System::Globalization::CalendarData* GetCalendar(::System::Int32 calendarId)
		{
			return ((::System::Globalization::CalendarData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETCALENDAR_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* get_LongTimes()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_LONGTIMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_ShortTimes()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SHORTTIMES_OFFSET))(this);
		}

		::System::String* get_SISO639LANGNAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SISO639LANGNAME_OFFSET))(this);
		}

		::System::Int32 get_IFIRSTDAYOFWEEK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_IFIRSTDAYOFWEEK_OFFSET))(this);
		}

		::System::Int32 get_IFIRSTWEEKOFYEAR()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_IFIRSTWEEKOFYEAR_OFFSET))(this);
		}

		::System::String* get_SAM1159()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SAM1159_OFFSET))(this);
		}

		::System::String* get_SPM2359()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SPM2359_OFFSET))(this);
		}

		::System::String* get_TimeSeparator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_TIMESEPARATOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_CalendarIds()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_CALENDARIDS_OFFSET))(this);
		}

		::System::Boolean get_IsInvariantCulture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_ISINVARIANTCULTURE_OFFSET))(this);
		}

		::System::String* get_CultureName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_CULTURENAME_OFFSET))(this);
		}

		::System::String* get_SCOMPAREINFO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SCOMPAREINFO_OFFSET))(this);
		}

		::System::String* get_STEXTINFO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_STEXTINFO_OFFSET))(this);
		}

		::System::Int32 get_ILANGUAGE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_ILANGUAGE_OFFSET))(this);
		}

		::System::Boolean get_UseUserOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_USEUSEROVERRIDE_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* EraNames(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ERANAMES_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* AbbrevEraNames(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVERANAMES_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* AbbreviatedEnglishEraNames(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDENGLISHERANAMES_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* ShortDates(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_SHORTDATES_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* LongDates(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_LONGDATES_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* YearMonths(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_YEARMONTHS_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* DayNames(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_DAYNAMES_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* AbbreviatedDayNames(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDDAYNAMES_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* MonthNames(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_MONTHNAMES_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* GenitiveMonthNames(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GENITIVEMONTHNAMES_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* AbbreviatedMonthNames(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDMONTHNAMES_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* AbbreviatedGenitiveMonthNames(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDGENITIVEMONTHNAMES_OFFSET))(this, calendarId);
		}

		::Il2CppArray<::System::String*>* LeapYearMonthNames(::System::Int32 calendarId)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_LEAPYEARMONTHNAMES_OFFSET))(this, calendarId);
		}

		::System::String* MonthDay(::System::Int32 calendarId)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_MONTHDAY_OFFSET))(this, calendarId);
		}

		::System::String* DateSeparator(::System::Int32 calendarId)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_DATESEPARATOR_OFFSET))(this, calendarId);
		}

		static ::System::String* GetDateSeparator(::System::String* format)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETDATESEPARATOR_OFFSET))(format);
		}

		static ::System::String* GetSeparator(::System::String* format, ::System::String* timeParts)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETSEPARATOR_OFFSET))(format, timeParts);
		}

		static ::System::Int32 IndexOfTimePart(::System::String* format, ::System::Int32 startIndex, ::System::String* timeParts)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_INDEXOFTIMEPART_OFFSET))(format, startIndex, timeParts);
		}

		static ::System::String* UnescapeNlsString(::System::String* str, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_UNESCAPENLSSTRING_OFFSET))(str, start, end);
		}

		static ::Il2CppArray<::System::String*>* ReescapeWin32Strings(::Il2CppArray<::System::String*>* array)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_REESCAPEWIN32STRINGS_OFFSET))(array);
		}

		static ::System::String* ReescapeWin32String(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_REESCAPEWIN32STRING_OFFSET))(str);
		}

		::System::Void GetNFIValues(::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETNFIVALUES_OFFSET))(this, nfi);
		}

		static ::System::Void fill_number_data(::System::Globalization::NumberFormatInfo* nfi, ::System::Int32 numberIndex)
		{
			return ((::System::Void(*)(::System::Globalization::NumberFormatInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_FILL_NUMBER_DATA_OFFSET))(nfi, numberIndex);
		}
	};
}

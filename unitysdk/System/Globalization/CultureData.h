#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class CalendarData; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVERANAMES_OFFSET UNITYSDK_OFFSET(0x186D4470)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDDAYNAMES_OFFSET UNITYSDK_OFFSET(0x186D4530)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDENGLISHERANAMES_OFFSET UNITYSDK_OFFSET(0x186D4490)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDGENITIVEMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x186D45B0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x186D4590)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_DATESEPARATOR_OFFSET UNITYSDK_OFFSET(0x186D4610)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_DAYNAMES_OFFSET UNITYSDK_OFFSET(0x186D4510)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_ERANAMES_OFFSET UNITYSDK_OFFSET(0x186D4450)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_FILL_CULTURE_DATA_OFFSET UNITYSDK_OFFSET(0x186D4130)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_FILL_NUMBER_DATA_OFFSET UNITYSDK_OFFSET(0x186D4D20)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GENITIVEMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x186D4570)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETCALENDAR_OFFSET UNITYSDK_OFFSET(0x186D0240)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_1_OFFSET UNITYSDK_OFFSET(0x186D3F60)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_2_OFFSET UNITYSDK_OFFSET(0x186D4210)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_OFFSET UNITYSDK_OFFSET(0x186D3EC0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETDATESEPARATOR_OFFSET UNITYSDK_OFFSET(0x186D4660)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETNFIVALUES_OFFSET UNITYSDK_OFFSET(0x186D4CC0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GETSEPARATOR_OFFSET UNITYSDK_OFFSET(0x186D4670)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_CALENDARIDS_OFFSET UNITYSDK_OFFSET(0x186D42A0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_CULTURENAME_OFFSET UNITYSDK_OFFSET(0x186D4400)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_IFIRSTDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x186D4250)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_IFIRSTWEEKOFYEAR_OFFSET UNITYSDK_OFFSET(0x186D4260)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_ILANGUAGE_OFFSET UNITYSDK_OFFSET(0x186D4430)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_INVARIANT_OFFSET UNITYSDK_OFFSET(0x186D3C80)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_ISINVARIANTCULTURE_OFFSET UNITYSDK_OFFSET(0x186D43E0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_LONGTIMES_OFFSET UNITYSDK_OFFSET(0x186D4220)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SAM1159_OFFSET UNITYSDK_OFFSET(0x186D4270)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SCOMPAREINFO_OFFSET UNITYSDK_OFFSET(0x186D4410)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SHORTTIMES_OFFSET UNITYSDK_OFFSET(0x186D4230)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SISO639LANGNAME_OFFSET UNITYSDK_OFFSET(0x186D4240)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_SPM2359_OFFSET UNITYSDK_OFFSET(0x186D4280)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_STEXTINFO_OFFSET UNITYSDK_OFFSET(0x186D4420)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_TIMESEPARATOR_OFFSET UNITYSDK_OFFSET(0x186D4290)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_GET_USEUSEROVERRIDE_OFFSET UNITYSDK_OFFSET(0x186D4440)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_INDEXOFTIMEPART_OFFSET UNITYSDK_OFFSET(0x186D4730)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_LEAPYEARMONTHNAMES_OFFSET UNITYSDK_OFFSET(0x186D45D0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_LONGDATES_OFFSET UNITYSDK_OFFSET(0x186D44D0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_MONTHDAY_OFFSET UNITYSDK_OFFSET(0x186D45F0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_MONTHNAMES_OFFSET UNITYSDK_OFFSET(0x186D4550)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_REESCAPEWIN32STRINGS_OFFSET UNITYSDK_OFFSET(0x186CF5A0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_REESCAPEWIN32STRING_OFFSET UNITYSDK_OFFSET(0x186CF5B0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_SHORTDATES_OFFSET UNITYSDK_OFFSET(0x186D44B0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_UNESCAPENLSSTRING_OFFSET UNITYSDK_OFFSET(0x186D4870)
#define SYSTEM_GLOBALIZATION_CULTUREDATA_YEARMONTHS_OFFSET UNITYSDK_OFFSET(0x186D44F0)
#define SYSTEM_GLOBALIZATION_CULTUREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x186D3C70)

namespace System::Globalization
{
	inline static constexpr unsigned int CultureData_TypeDefinitionIndex = 780;

	class CultureData : public ::System::Object
	{
	public:
		static ::System::Globalization::CultureData** StaticGet_s_Invariant()
		{
			return (::System::Globalization::CultureData**)Il2CppClass::FromTypeDefinitionIndex(CultureData_TypeDefinitionIndex)->GetStaticField(0x67C0);
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

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA__CTOR_OFFSET))(this, a1);
		}

		static ::System::Globalization::CultureData* get_Invariant()
		{
			return ((::System::Globalization::CultureData*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GET_INVARIANT_OFFSET))();
		}

		static ::System::Globalization::CultureData* GetCultureData(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Globalization::CultureData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_OFFSET))(a1, a2);
		}

		static ::System::Globalization::CultureData* GetCultureData_1(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::String* a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Boolean a11, ::System::String* a12)
		{
			return ((::System::Globalization::CultureData*(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Globalization::CultureData* GetCultureData_2(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Globalization::CultureData*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETCULTUREDATA_2_OFFSET))(a1, a2);
		}

		::System::Void fill_culture_data(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_FILL_CULTURE_DATA_OFFSET))(this, a1);
		}

		::System::Globalization::CalendarData* GetCalendar(::System::Int32 a1)
		{
			return ((::System::Globalization::CalendarData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETCALENDAR_OFFSET))(this, a1);
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

		::Il2CppArray<::System::String*>* EraNames(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ERANAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* AbbrevEraNames(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVERANAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* AbbreviatedEnglishEraNames(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDENGLISHERANAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* ShortDates(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_SHORTDATES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* LongDates(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_LONGDATES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* YearMonths(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_YEARMONTHS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* DayNames(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_DAYNAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* AbbreviatedDayNames(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDDAYNAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* MonthNames(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_MONTHNAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GenitiveMonthNames(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GENITIVEMONTHNAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* AbbreviatedMonthNames(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDMONTHNAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* AbbreviatedGenitiveMonthNames(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_ABBREVIATEDGENITIVEMONTHNAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* LeapYearMonthNames(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_LEAPYEARMONTHNAMES_OFFSET))(this, a1);
		}

		::System::String* MonthDay(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_MONTHDAY_OFFSET))(this, a1);
		}

		::System::String* DateSeparator(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_DATESEPARATOR_OFFSET))(this, a1);
		}

		static ::System::String* GetDateSeparator(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETDATESEPARATOR_OFFSET))(a1);
		}

		static ::System::String* GetSeparator(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETSEPARATOR_OFFSET))(a1, a2);
		}

		static ::System::Int32 IndexOfTimePart(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_INDEXOFTIMEPART_OFFSET))(a1, a2, a3);
		}

		static ::System::String* UnescapeNlsString(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_UNESCAPENLSSTRING_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::String*>* ReescapeWin32Strings(::Il2CppArray<::System::String*>* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_REESCAPEWIN32STRINGS_OFFSET))(a1);
		}

		static ::System::String* ReescapeWin32String(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_REESCAPEWIN32STRING_OFFSET))(a1);
		}

		::System::Void GetNFIValues(::System::Globalization::NumberFormatInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_GETNFIVALUES_OFFSET))(this, a1);
		}

		static ::System::Void fill_number_data(::System::Globalization::NumberFormatInfo* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Globalization::NumberFormatInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREDATA_FILL_NUMBER_DATA_OFFSET))(a1, a2);
		}
	};
}
